/********************************************************************************
* File Name:	enable_disable_irq.c
* Description:	第5章实例训练          
* Reference book:《Linux内核API完全参考手册》邱铁，周玉，邓莹莹 ，机械工业出版社.2010.9  
* E_mail:openlinux2100@gmail.com			                
*
********************************************************************************/

#include <linux/interrupt.h>
#include <linux/module.h>
MODULE_LICENSE("GPL");                                      

 //自定义中断中断处理函数，此处只显示参数data的值与提示程序的执行位置
static irqreturn_t irq_handler(int data,void *dev_id)
{
	printk("<0>the data is :%d\n",data);//data对应的是相应的中断号
  	printk("<0>in the interrupt handler function\n");
   	return IRQ_NONE; // 函数返回，返回值类型为irqreturn_t类型，可取值为IRQ_NONE、IRQ_HANDLED,此处两者皆可
}

static int irq=13;    //定义中断号，并初始化为10
static int __init enable_disable_irq_init(void) 
{
	int result=0;
	printk("<0>into enable_disable_irq_init\n");
        /*
	    申请一个新的中断，中断号对应的是10，中断处理函数是myhandler()，
                    中断类型是IRQF_DISABLED,中断设备明是A_NEW_Device,设备编号是NULL(即不对应真实的设备)
	*/
	result=request_irq(irq,irq_handler,IRQF_DISABLED,"A_New_Device",NULL);
	printk("<0>the result of the request_irq is: %d\n",result);   //输出中断申请的结果
	if (result){
	    return result;
	}
    disable_irq(irq);     //调用disable_irq()函数，使中断的深度增加1
	enable_irq(irq);     //调用enable_irq()函数，使中断的深度减少1，同时触发中断处理函数执行
	printk("<0>out enable_disable_irq_init\n");
	return 0; }

static void __exit enable_disable_irq_exit(void)
{ 
	free_irq(irq,NULL);  //释放中断
	printk("<0>Goodbye enable_disable_irq\n");
 	return;
}
module_init(enable_disable_irq_init);
module_exit(enable_disable_irq_exit);


/*
irq=10

into enable_disable_irq_init
IRQ handler type mismatch for IRQ 10
current handler: ehci_hcd:usb1
Pid: 3637, comm: insmod Not tainted 2.6.32-431.el6.x86_64 #1
Call Trace:
 [<ffffffff810e7fb2>] ? __setup_irq+0x382/0x3c0
 [<ffffffffa0312000>] ? irq_handler+0x0/0x2c [enable_disable_irq]
 [<ffffffff810e87b3>] ? request_threaded_irq+0x133/0x230
 [<ffffffffa0314000>] ? enable_disable_irq_init+0x0/0x77 [enable_disable_irq]
 [<ffffffffa0314039>] ? enable_disable_irq_init+0x39/0x77 [enable_disable_irq]
 [<ffffffff8100204c>] ? do_one_initcall+0x3c/0x1d0
 [<ffffffff810bc531>] ? sys_init_module+0xe1/0x250
 [<ffffffff8100b072>] ? system_call_fastpath+0x16/0x1b
the result of the request_irq is: -16

irq=13


into enable_disable_irq_init
the result of the request_irq is: 0
out enable_disable_irq_init
*/