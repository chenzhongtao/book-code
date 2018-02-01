/********************************************************************************
* File Name:	find_get_pid.c
* Description:	第3章实例训练          
* Reference book:《Linux内核API完全参考手册》邱铁，周玉，邓莹莹 ，机械工业出版社.2010.9  
* E_mail:openlinux2100@gmail.com			                
*
********************************************************************************/
#include <linux/module.h>
#include <linux/sched.h>
#include <linux/pid.h>

MODULE_LICENSE("GPL");

int my_function(void * argc)  
{
	printk("<0>in the kernel thread function!\n");	
	return 0;
}

static int __init find_get_pid_init(void)
{	
	int result;	
	printk("<0> into find_get_pid_init.\n");		
	result=kernel_thread(my_function,NULL,CLONE_KERNEL); 
	struct pid * kpid=find_get_pid(result);	 
	printk("<0>the count of the pid is :%d\n",kpid->count); 
	printk("<0>the level of the pid is :%d\n",kpid->level);
	printk("<0>the pid of the find_get_pid is :%d\n",kpid->numbers[kpid->level].nr); 
	printk("<0>the result of the kernel_thread is :%d\n",result);
	printk("<0> out find_get_pid_init.\n");
	return 0;
}

static void __exit find_get_pid_exit(void)
{
        printk("<0>Goodbye  find_get_pid\n");	
}

module_init(find_get_pid_init);
module_exit(find_get_pid_exit);

/*
 into find_get_pid_init.
the count of the pid is :2
in the kernel thread function!
the level of the pid is :0
the pid of the find_get_pid is :7013
the result of the kernel_thread is :7013
 out find_get_pid_init.
*/
