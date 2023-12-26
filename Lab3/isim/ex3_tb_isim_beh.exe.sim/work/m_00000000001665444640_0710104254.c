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
static const char *ng0 = "C:/Users/User/Desktop/fpga/ex3/ex3_tb.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {2U, 0U};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {1U, 0U};
static int ng6[] = {2, 0};
static int ng7[] = {3, 0};
static unsigned int ng8[] = {6U, 0U};
static int ng9[] = {4, 0};
static unsigned int ng10[] = {3U, 0U};
static int ng11[] = {5, 0};
static unsigned int ng12[] = {7U, 0U};
static int ng13[] = {6, 0};
static unsigned int ng14[] = {8U, 0U};
static int ng15[] = {7, 0};
static unsigned int ng16[] = {4U, 0U};
static int ng17[] = {8, 0};
static int ng18[] = {9, 0};
static int ng19[] = {10, 0};
static int ng20[] = {11, 0};
static int ng21[] = {12, 0};
static int ng22[] = {13, 0};
static unsigned int ng23[] = {5U, 0U};
static int ng24[] = {14, 0};
static int ng25[] = {15, 0};



static void Initial_53_0(char *t0)
{
    char t4[8];
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    int t15;
    char *t16;
    unsigned int t17;
    int t18;
    int t19;
    unsigned int t20;
    unsigned int t21;
    int t22;
    int t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    t1 = (t0 + 3648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);

LAB4:    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2408);
    t6 = (t0 + 2408);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2408);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB5;

LAB6:    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2408);
    t6 = (t0 + 2408);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2408);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2408);
    t6 = (t0 + 2408);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2408);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng6)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB9;

LAB10:    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2408);
    t6 = (t0 + 2408);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2408);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng7)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB11;

LAB12:    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2408);
    t6 = (t0 + 2408);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2408);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng9)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB13;

LAB14:    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2408);
    t6 = (t0 + 2408);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2408);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng11)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 2408);
    t6 = (t0 + 2408);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2408);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng13)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB17;

LAB18:    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 2408);
    t6 = (t0 + 2408);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2408);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng15)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB19;

LAB20:    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 2408);
    t6 = (t0 + 2408);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2408);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng17)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB21;

LAB22:    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2408);
    t6 = (t0 + 2408);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2408);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng18)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB23;

LAB24:    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2408);
    t6 = (t0 + 2408);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2408);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng19)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB25;

LAB26:    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2408);
    t6 = (t0 + 2408);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2408);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng20)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB27;

LAB28:    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2408);
    t6 = (t0 + 2408);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2408);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng21)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB29;

LAB30:    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2408);
    t6 = (t0 + 2408);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2408);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng22)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB31;

LAB32:    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng23)));
    t3 = (t0 + 2408);
    t6 = (t0 + 2408);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2408);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng24)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB33;

LAB34:    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2408);
    t6 = (t0 + 2408);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2408);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng25)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB35;

LAB36:    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 4216);
    *((int *)t2) = 1;
    t3 = (t0 + 3680);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB37;

LAB1:    return;
LAB5:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t5), t23, 0LL);
    goto LAB6;

LAB7:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t5), t23, 0LL);
    goto LAB8;

LAB9:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t5), t23, 0LL);
    goto LAB10;

LAB11:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t5), t23, 0LL);
    goto LAB12;

LAB13:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t5), t23, 0LL);
    goto LAB14;

LAB15:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t5), t23, 0LL);
    goto LAB16;

LAB17:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t5), t23, 0LL);
    goto LAB18;

LAB19:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t5), t23, 0LL);
    goto LAB20;

LAB21:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t5), t23, 0LL);
    goto LAB22;

LAB23:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t5), t23, 0LL);
    goto LAB24;

LAB25:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t5), t23, 0LL);
    goto LAB26;

LAB27:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t5), t23, 0LL);
    goto LAB28;

LAB29:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t5), t23, 0LL);
    goto LAB30;

LAB31:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t5), t23, 0LL);
    goto LAB32;

LAB33:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t5), t23, 0LL);
    goto LAB34;

LAB35:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t5), t23, 0LL);
    goto LAB36;

LAB37:    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t0 + 2408);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 2408);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = (t0 + 2568);
    t16 = (t13 + 56U);
    t24 = *((char **)t16);
    xsi_vlog_generic_get_array_select_value(t4, 5, t6, t9, t12, 2, 1, t24, 32, 1);
    t25 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t25, t4, 0, 0, 5, 0LL);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t0 + 2408);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 2408);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = (t0 + 2568);
    t16 = (t13 + 56U);
    t24 = *((char **)t16);
    t25 = ((char*)((ng4)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t24, 32, t25, 32);
    xsi_vlog_generic_get_array_select_value(t4, 5, t6, t9, t12, 2, 1, t5, 32, 1);
    t26 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t26, t4, 0, 0, 5, 0LL);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t0 + 2408);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 2408);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = (t0 + 2568);
    t16 = (t13 + 56U);
    t24 = *((char **)t16);
    t25 = ((char*)((ng9)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t24, 32, t25, 32);
    xsi_vlog_generic_get_array_select_value(t4, 5, t6, t9, t12, 2, 1, t5, 32, 1);
    t26 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t26, t4, 0, 0, 5, 0LL);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t0 + 2408);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 2408);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = (t0 + 2568);
    t16 = (t13 + 56U);
    t24 = *((char **)t16);
    t25 = ((char*)((ng11)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t24, 32, t25, 32);
    xsi_vlog_generic_get_array_select_value(t4, 5, t6, t9, t12, 2, 1, t5, 32, 1);
    t26 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t26, t4, 0, 0, 5, 0LL);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 4232);
    *((int *)t2) = 1;
    t3 = (t0 + 3680);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB38;
    goto LAB1;

LAB38:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 4248);
    *((int *)t2) = 1;
    t3 = (t0 + 3680);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB39;
    goto LAB1;

LAB39:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 2728);
    t6 = (t0 + 2728);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2728);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB40;

LAB41:    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t0 + 2408);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 2408);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = (t0 + 2568);
    t16 = (t13 + 56U);
    t24 = *((char **)t16);
    xsi_vlog_generic_get_array_select_value(t4, 5, t6, t9, t12, 2, 1, t24, 32, 1);
    t25 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t25, t4, 0, 0, 5, 0LL);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t0 + 2408);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 2408);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = (t0 + 2568);
    t16 = (t13 + 56U);
    t24 = *((char **)t16);
    t25 = ((char*)((ng4)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t24, 32, t25, 32);
    xsi_vlog_generic_get_array_select_value(t4, 5, t6, t9, t12, 2, 1, t5, 32, 1);
    t26 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t26, t4, 0, 0, 5, 0LL);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t0 + 2408);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 2408);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = (t0 + 2568);
    t16 = (t13 + 56U);
    t24 = *((char **)t16);
    t25 = ((char*)((ng9)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t24, 32, t25, 32);
    xsi_vlog_generic_get_array_select_value(t4, 5, t6, t9, t12, 2, 1, t5, 32, 1);
    t26 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t26, t4, 0, 0, 5, 0LL);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t0 + 2408);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 2408);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = (t0 + 2568);
    t16 = (t13 + 56U);
    t24 = *((char **)t16);
    t25 = ((char*)((ng11)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t24, 32, t25, 32);
    xsi_vlog_generic_get_array_select_value(t4, 5, t6, t9, t12, 2, 1, t5, 32, 1);
    t26 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t26, t4, 0, 0, 5, 0LL);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 4264);
    *((int *)t2) = 1;
    t3 = (t0 + 3680);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB42;
    goto LAB1;

LAB40:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t5), t23, 0LL);
    goto LAB41;

LAB42:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 4280);
    *((int *)t2) = 1;
    t3 = (t0 + 3680);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB43;
    goto LAB1;

LAB43:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 2728);
    t6 = (t0 + 2728);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2728);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB44;

LAB45:    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t0 + 2408);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 2408);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = (t0 + 2568);
    t16 = (t13 + 56U);
    t24 = *((char **)t16);
    xsi_vlog_generic_get_array_select_value(t4, 5, t6, t9, t12, 2, 1, t24, 32, 1);
    t25 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t25, t4, 0, 0, 5, 0LL);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t0 + 2408);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 2408);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = (t0 + 2568);
    t16 = (t13 + 56U);
    t24 = *((char **)t16);
    t25 = ((char*)((ng4)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t24, 32, t25, 32);
    xsi_vlog_generic_get_array_select_value(t4, 5, t6, t9, t12, 2, 1, t5, 32, 1);
    t26 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t26, t4, 0, 0, 5, 0LL);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t0 + 2408);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 2408);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = (t0 + 2568);
    t16 = (t13 + 56U);
    t24 = *((char **)t16);
    t25 = ((char*)((ng9)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t24, 32, t25, 32);
    xsi_vlog_generic_get_array_select_value(t4, 5, t6, t9, t12, 2, 1, t5, 32, 1);
    t26 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t26, t4, 0, 0, 5, 0LL);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t0 + 2408);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 2408);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = (t0 + 2568);
    t16 = (t13 + 56U);
    t24 = *((char **)t16);
    t25 = ((char*)((ng11)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t24, 32, t25, 32);
    xsi_vlog_generic_get_array_select_value(t4, 5, t6, t9, t12, 2, 1, t5, 32, 1);
    t26 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t26, t4, 0, 0, 5, 0LL);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 4296);
    *((int *)t2) = 1;
    t3 = (t0 + 3680);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB46;
    goto LAB1;

LAB44:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t5), t23, 0LL);
    goto LAB45;

LAB46:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 4312);
    *((int *)t2) = 1;
    t3 = (t0 + 3680);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB47;
    goto LAB1;

LAB47:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 2728);
    t6 = (t0 + 2728);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2728);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng6)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB48;

LAB49:    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t0 + 2408);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 2408);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = (t0 + 2568);
    t16 = (t13 + 56U);
    t24 = *((char **)t16);
    xsi_vlog_generic_get_array_select_value(t4, 5, t6, t9, t12, 2, 1, t24, 32, 1);
    t25 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t25, t4, 0, 0, 5, 0LL);
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t0 + 2408);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 2408);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = (t0 + 2568);
    t16 = (t13 + 56U);
    t24 = *((char **)t16);
    t25 = ((char*)((ng4)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t24, 32, t25, 32);
    xsi_vlog_generic_get_array_select_value(t4, 5, t6, t9, t12, 2, 1, t5, 32, 1);
    t26 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t26, t4, 0, 0, 5, 0LL);
    xsi_set_current_line(109, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t0 + 2408);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 2408);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = (t0 + 2568);
    t16 = (t13 + 56U);
    t24 = *((char **)t16);
    t25 = ((char*)((ng9)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t24, 32, t25, 32);
    xsi_vlog_generic_get_array_select_value(t4, 5, t6, t9, t12, 2, 1, t5, 32, 1);
    t26 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t26, t4, 0, 0, 5, 0LL);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t0 + 2408);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 2408);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = (t0 + 2568);
    t16 = (t13 + 56U);
    t24 = *((char **)t16);
    t25 = ((char*)((ng11)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t24, 32, t25, 32);
    xsi_vlog_generic_get_array_select_value(t4, 5, t6, t9, t12, 2, 1, t5, 32, 1);
    t26 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t26, t4, 0, 0, 5, 0LL);
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 4328);
    *((int *)t2) = 1;
    t3 = (t0 + 3680);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB50;
    goto LAB1;

LAB48:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t5), t23, 0LL);
    goto LAB49;

LAB50:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 4344);
    *((int *)t2) = 1;
    t3 = (t0 + 3680);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB51;
    goto LAB1;

LAB51:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 2728);
    t6 = (t0 + 2728);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2728);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng7)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB52;

LAB53:    goto LAB1;

LAB52:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t5), t23, 0LL);
    goto LAB53;

}

static void Always_119_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 3896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(119, ng0);
    t2 = (t0 + 3704);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(119, ng0);
    t4 = (t0 + 1608);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 1608);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}


extern void work_m_00000000001665444640_0710104254_init()
{
	static char *pe[] = {(void *)Initial_53_0,(void *)Always_119_1};
	xsi_register_didat("work_m_00000000001665444640_0710104254", "isim/ex3_tb_isim_beh.exe.sim/work/m_00000000001665444640_0710104254.didat");
	xsi_register_executes(pe);
}
