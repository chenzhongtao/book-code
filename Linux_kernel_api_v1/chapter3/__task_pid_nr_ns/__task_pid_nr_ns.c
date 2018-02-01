/********************************************************************************
* File Name:	__task_pid_nr_ns.c
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

//模块加载函数定义
static int __init __task_pid_nr_ns_init(void)
{	
	int result;	
	printk("<0> into __task_pid_nr_ns_init.\n");		
	result=kernel_thread(my_function,NULL,CLONE_KERNEL);  //创建新进程
	struct pid * kpid=find_get_pid(result);  //获取子进程的进程描述符
	struct task_struct * task=pid_task(kpid,PIDTYPE_PID); //获取进程所属的任务的任务描述符
	pid_t result1=__task_pid_nr_ns(task,PIDTYPE_PID,kpid->numbers[kpid->level].ns); //获取任务对应进程的进程描述符
	printk("<0>the pid of the find_get_pid is :%d\n",kpid->numbers[kpid->level].nr); //显示函数find_get_pid()返回值的进程描述符的进程号
	printk("<0>the result of the __task_pid_nr_ns is:%d\n",result1); //显示函数__task_pid_nr_ns()的返回值
	printk("<0>the result of the kernel_thread is :%d\n",result);  //显示函数kernel_thread()的返回值
	printk("<0>the pid of current thread is :%d\n",current->pid);  //显示当前进程号
	printk("<0> out __task_pid_nr_ns_init.\n");
	return 0;
}

static void __exit __task_pid_nr_ns_exit(void)
{
        printk("<0>Goodbye __task_pid_nr_ns\n");	
}

module_init(__task_pid_nr_ns_init);
module_exit(__task_pid_nr_ns_exit);

/*
into __task_pid_nr_ns_init.
the pid of the find_get_pid is :6782
in the kernel thread function!
the result of the __task_pid_nr_ns is:6782
the result of the kernel_thread is :6782
the pid of current thread is :6781
 out __task_pid_nr_ns_init.
*/