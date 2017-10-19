/********************************************************************************
* File Name:	do_brk.c
* Description:	第6章实例训练          
* Reference book:《Linux内核API完全参考手册》邱铁，周玉，邓莹莹 ，机械工业出版社.2010.9  
* E_mail:openlinux2100@gmail.com			                
*
********************************************************************************/

#include <linux/security.h> 
#include <linux/mm.h> 
#include <linux/init.h> 
#include <linux/module.h> 
MODULE_LICENSE("GPL"); 
static int __init do_brk_init(void); 
static void __exit do_brk_exit(void); 

unsigned long addr; 
#define len 8192

int __init do_brk_init(void) 
{ 
    struct vm_area_struct * vm_area;
	struct mm_struct *mm ;
	mm = current->mm;  //mm指向当前进程的地址空间 
	
	//addr = 200;  // error EACCES 

    	/*调用do_brk( )之前，当前用户空间所包含的线性空间数目*/
	printk("<0>before do_brk( ),map_count = %d\n", mm->map_count); 
    vm_area =  mm->mmap;
    while(vm_area!=0){
        printk("<0>vm_start = 0x%lx, vm_end= 0x%lx\n", vm_area->vm_start,vm_area->vm_end);
        addr = vm_area->vm_end;
        vm_area = vm_area->vm_next;
    }
    addr += 4096;
    
	 
	down_write(&current->mm->mmap_sem);       //写者获取当前进程空间的mmap_sem信号量 
	addr = do_brk( addr, len );               //调用do_brk( )函数，addr = 200,len = 8192字节 
	up_write(&current->mm->mmap_sem); 

   if  (IS_ERR_VALUE(addr)) {
        
        printk("<0>do_brk error %ld \n", (long)addr);
        return addr;
   }
	 
	printk("<0>addr=0x%lx\n",addr); //输出新分配的线性区间的起始地址  
	printk("<0>after do_brk( ),map_count = %d\n", mm->map_count); 

    vm_area =  mm->mmap;
    while(vm_area!=0){
        printk("<0>vm_start = 0x%lx, vm_end= 0x%lx\n", vm_area->vm_start,vm_area->vm_end);
        vm_area = vm_area->vm_next;
    }
    
	return 0; 
}

void __exit do_brk_exit(void) 
{ 
	down_write(&current->mm->mmap_sem);     //写者获取当前进程空间的mmap_sem信号量 
	do_munmap(current->mm,addr,len); 
	up_write(&current->mm->mmap_sem); 
	printk("<0>exit ok!\n"); 
}

module_init(do_brk_init); 
module_exit(do_brk_exit);

/*
before do_brk( ),map_count = 16
vm_start = 0x400000, vm_end= 0x402000
vm_start = 0x602000, vm_end= 0x603000
vm_start = 0x722000, vm_end= 0x743000
vm_start = 0x37eaa00000, vm_end= 0x37eaa20000
vm_start = 0x37eac1f000, vm_end= 0x37eac20000
vm_start = 0x37eac20000, vm_end= 0x37eac21000
vm_start = 0x37eac21000, vm_end= 0x37eac22000
vm_start = 0x37eb200000, vm_end= 0x37eb38b000
vm_start = 0x37eb38b000, vm_end= 0x37eb58a000
vm_start = 0x37eb58a000, vm_end= 0x37eb58e000
vm_start = 0x37eb58e000, vm_end= 0x37eb58f000
vm_start = 0x37eb58f000, vm_end= 0x37eb594000
vm_start = 0x7f9e25f33000, vm_end= 0x7f9e25f77000
vm_start = 0x7f9e25f81000, vm_end= 0x7f9e25f82000
vm_start = 0x7fff159b7000, vm_end= 0x7fff159cd000
vm_start = 0x7fff159ff000, vm_end= 0x7fff15a00000
addr=0x7fff15a01000
after do_brk( ),map_count = 17
vm_start = 0x400000, vm_end= 0x402000
vm_start = 0x602000, vm_end= 0x603000
vm_start = 0x722000, vm_end= 0x743000
vm_start = 0x37eaa00000, vm_end= 0x37eaa20000
vm_start = 0x37eac1f000, vm_end= 0x37eac20000
vm_start = 0x37eac20000, vm_end= 0x37eac21000
vm_start = 0x37eac21000, vm_end= 0x37eac22000
vm_start = 0x37eb200000, vm_end= 0x37eb38b000
vm_start = 0x37eb38b000, vm_end= 0x37eb58a000
vm_start = 0x37eb58a000, vm_end= 0x37eb58e000
vm_start = 0x37eb58e000, vm_end= 0x37eb58f000
vm_start = 0x37eb58f000, vm_end= 0x37eb594000
vm_start = 0x7f9e25f33000, vm_end= 0x7f9e25f77000
vm_start = 0x7f9e25f81000, vm_end= 0x7f9e25f82000
vm_start = 0x7fff159b7000, vm_end= 0x7fff159cd000
vm_start = 0x7fff159ff000, vm_end= 0x7fff15a00000
vm_start = 0x7fff15a01000, vm_end= 0x7fff15a03000
*/
