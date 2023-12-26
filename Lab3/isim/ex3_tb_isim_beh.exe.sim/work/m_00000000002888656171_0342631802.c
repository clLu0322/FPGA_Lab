/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/User/Desktop/fpga/ex3/ex3.v";
static unsigned int ng1[] = {0U, 0U};



static void Always_33_0(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;

LAB0:    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 3488);
    *((int *)t2) = 1;
    t3 = (t0 + 3200);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(33, ng0);

LAB5:    xsi_set_current_line(34, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2088);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 5);
    xsi_set_current_line(35, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1208U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB7;

LAB6:    t8 = (t6 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t4) < *((unsigned int *)t6))
        goto LAB8;

LAB9:    t10 = (t7 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t7);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB11;

LAB12:
LAB13:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1368U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB16;

LAB15:    t8 = (t6 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB16;

LAB19:    if (*((unsigned int *)t4) < *((unsigned int *)t6))
        goto LAB17;

LAB18:    t10 = (t7 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t7);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB20;

LAB21:
LAB22:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1528U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB25;

LAB24:    t8 = (t6 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB25;

LAB28:    if (*((unsigned int *)t4) < *((unsigned int *)t6))
        goto LAB26;

LAB27:    t10 = (t7 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t7);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB29;

LAB30:
LAB31:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1688U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB34;

LAB33:    t8 = (t6 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB34;

LAB37:    if (*((unsigned int *)t4) < *((unsigned int *)t6))
        goto LAB35;

LAB36:    t10 = (t7 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t7);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB38;

LAB39:
LAB40:    goto LAB2;

LAB7:    t9 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB9;

LAB8:    *((unsigned int *)t7) = 1;
    goto LAB9;

LAB11:    xsi_set_current_line(35, ng0);

LAB14:    xsi_set_current_line(36, ng0);
    t16 = (t0 + 1208U);
    t17 = *((char **)t16);
    t16 = (t0 + 2088);
    xsi_vlogvar_assign_value(t16, t17, 0, 0, 5);
    goto LAB13;

LAB16:    t9 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB18;

LAB17:    *((unsigned int *)t7) = 1;
    goto LAB18;

LAB20:    xsi_set_current_line(37, ng0);

LAB23:    xsi_set_current_line(38, ng0);
    t16 = (t0 + 1368U);
    t17 = *((char **)t16);
    t16 = (t0 + 2088);
    xsi_vlogvar_assign_value(t16, t17, 0, 0, 5);
    goto LAB22;

LAB25:    t9 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB27;

LAB26:    *((unsigned int *)t7) = 1;
    goto LAB27;

LAB29:    xsi_set_current_line(39, ng0);

LAB32:    xsi_set_current_line(40, ng0);
    t16 = (t0 + 1528U);
    t17 = *((char **)t16);
    t16 = (t0 + 2088);
    xsi_vlogvar_assign_value(t16, t17, 0, 0, 5);
    goto LAB31;

LAB34:    t9 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB36;

LAB35:    *((unsigned int *)t7) = 1;
    goto LAB36;

LAB38:    xsi_set_current_line(41, ng0);

LAB41:    xsi_set_current_line(42, ng0);
    t16 = (t0 + 1688U);
    t17 = *((char **)t16);
    t16 = (t0 + 2088);
    xsi_vlogvar_assign_value(t16, t17, 0, 0, 5);
    goto LAB40;

}


extern void work_m_00000000002888656171_0342631802_init()
{
	static char *pe[] = {(void *)Always_33_0};
	xsi_register_didat("work_m_00000000002888656171_0342631802", "isim/ex3_tb_isim_beh.exe.sim/work/m_00000000002888656171_0342631802.didat");
	xsi_register_executes(pe);
}
