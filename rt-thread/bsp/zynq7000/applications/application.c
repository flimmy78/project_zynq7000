/*
 * COPYRIGHT (C) 2013-2014, Shanghai Real-Thread Technology Co., Ltd
 *
 *  All rights reserved.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program; if not, write to the Free Software Foundation, Inc.,
 *  51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#include <rtthread.h>
#ifdef RT_USING_COMPONENTS_INIT
#include <components.h>
#endif
#include <cp15.h>
#include <finsh.h>
#include "userconf.h"

/* thread phase init */
static void rt_init_thread_entry(void *parameter)
{
    /* do component initialization */
	static int i = 0;
    rt_components_init();
    rt_kprintf("running on cpu %d\n",
               rt_cpu_get_smp_id() & 0x0f);
	#if 0
	rt_thread_delay(100000);
	rt_hw_uart_init();
	while(1)
	{
		rt_kprintf("hello world %d\r\n", i++);
		rt_thread_delay(1000);
    	/* add your initialization here */
	}
	#endif
}

int rt_application_init()
{
    rt_thread_t tid;

    tid = rt_thread_create("init", rt_init_thread_entry, RT_NULL, 2048,
                            RT_THREAD_PRIORITY_MAX/3, 20);
    if (tid != RT_NULL)
        rt_thread_startup(tid);

    return 0;
}
#include "xscugic.h"

//extern XScuGic ScuGic1_InstancePtr;

long SFItest(void)
{
	rt_kprintf("send a sfi\r\n");
	//rt_kprintf("%d\r\n",ScuGic1_InstancePtr.IsReady);
	
	//XScuGic_SoftwareIntr(&ScuGic1_InstancePtr, 15,XPAR_CPU_ID);
//	arm_gic_trigger(0,0, 6);
	
	arm_gic_trigger(0,XPAR_CPU_ID, CPU0_VBUS_SFI_ID);

	return RT_EOK;
}
FINSH_FUNCTION_EXPORT(SFItest, test software interrupt);
MSH_CMD_EXPORT(SFItest,test software interrupt);


