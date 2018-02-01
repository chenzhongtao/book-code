/********************************************************************************
* File Name:	find_task_by_pid_ns.c
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

static int __init find_task_by_pid_ns_init(void)
{	
	int result;	
	printk("<0> into find_task_by_pid_ns_init.\n");		
	result=kernel_thread(my_function,NULL,CLONE_KERNEL); 
	struct pid * kpid=find_get_pid(result);	

	struct task_struct * task=find_task_by_pid_ns(kpid->numbers[kpid->level].nr,kpid->numbers[kpid->level].ns);

	printk("<0>the pid of the find_get_pid is :%d\n",kpid->numbers[kpid->level].nr);

	printk("<0>the pid of the task of the function find_task_by_pid_ns is:%d\n",task->pid);
	printk("<0>the tgid of the task of the function find_task_by_pid_ns is:%d\n",task->tgid);

	printk("<0>the result of the kernel_thread is :%d\n",result);
	printk("<0> out find_task_by_pid_ns_init.\n");
	return 0;
}

static void __exit find_task_by_pid_ns_exit(void)
{
        printk("<0>Goodbye  find_task_by_pid_ns\n");	
}

module_init(find_task_by_pid_ns_init);
module_exit(find_task_by_pid_ns_exit);


/*
dmesg 
find_task_by_pid_ns: Unknown symbol find_task_by_pid_ns

cat /proc/kallsyms |grep find_task_by_pid_ns
ffffffff810964a0 T find_task_by_pid_ns

why?

cat  /usr/src/kernels/2.6.32-431.el6.x86_64/Module.symvers  |grep find_task_by_pid_ns

*/