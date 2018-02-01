/********************************************************************************
* File Name:	find_pid_ns.c
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

static int __init find_pid_ns_init(void)
{	
	int result;
	printk("<0> into find_pid_ns_init.\n");		
	result=kernel_thread(my_function,NULL,CLONE_KERNEL);
      
	struct pid * kpid=find_get_pid(result);	
      
    struct pid * fpid=find_pid_ns(kpid->numbers[kpid->level].nr,kpid->numbers[kpid->level].ns);
      
	printk("<0>the find_pid_ns result's count is:%d\n",fpid->count);
	printk("<0>the find_pid_ns result's level is:%d\n",fpid->level);
	printk("<0>the find_pid_ns result's pid is:%d\n",fpid->numbers[fpid->level].nr);
	printk("<0>the kernel_thread result is:%d\n",result); 
	printk("<0> out find_pid_ns_init.\n");
	return 0;
}

static void __exit find_pid_ns_exit(void)
{
        printk("<0>Goodbye  find_pid_ns\n");
}

module_init(find_pid_ns_init);
module_exit(find_pid_ns_exit);


/*
 into find_pid_ns_init.
the find_pid_ns result's count is:2
in the kernel thread function!
the find_pid_ns result's level is:0
the find_pid_ns result's pid is:7243
the kernel_thread result is:7243
 out find_pid_ns_init.
*/