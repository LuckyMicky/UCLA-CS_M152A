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
static const char *ng0 = "C:/Users/152/Downloads/Lab3/Lab3-AAJ/stopwatch.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {50000000U, 0U};
static unsigned int ng4[] = {25000000U, 0U};
static unsigned int ng5[] = {50000U, 0U};
static unsigned int ng6[] = {12500000U, 0U};



static void Always_37_0(char *t0)
{
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;

LAB0:    t1 = (t0 + 3648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 3968);
    *((int *)t2) = 1;
    t3 = (t0 + 3680);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(38, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(46, ng0);

LAB9:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 26, t4, 26, t5, 26);
    t11 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 26, 0LL);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 26, t4, 26, t5, 26);
    t11 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 26, 0LL);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 26, t4, 26, t5, 26);
    t11 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 26, 0LL);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 26, t4, 26, t5, 26);
    t11 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 26, 0LL);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB11;

LAB10:    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB11;

LAB14:    if (*((unsigned int *)t4) > *((unsigned int *)t5))
        goto LAB12;

LAB13:    t15 = (t13 + 4);
    t6 = *((unsigned int *)t15);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB15;

LAB16:
LAB17:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB26;

LAB25:    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB26;

LAB29:    if (*((unsigned int *)t4) > *((unsigned int *)t5))
        goto LAB27;

LAB28:    t15 = (t13 + 4);
    t6 = *((unsigned int *)t15);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB30;

LAB31:
LAB32:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB41;

LAB40:    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB41;

LAB44:    if (*((unsigned int *)t4) > *((unsigned int *)t5))
        goto LAB42;

LAB43:    t15 = (t13 + 4);
    t6 = *((unsigned int *)t15);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB45;

LAB46:
LAB47:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB56;

LAB55:    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB56;

LAB59:    if (*((unsigned int *)t4) > *((unsigned int *)t5))
        goto LAB57;

LAB58:    t15 = (t13 + 4);
    t6 = *((unsigned int *)t15);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB60;

LAB61:
LAB62:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(38, ng0);

LAB8:    xsi_set_current_line(39, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 26, 0LL);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 26, 0LL);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 26, 0LL);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 26, 0LL);
    goto LAB7;

LAB11:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB13;

LAB12:    *((unsigned int *)t13) = 1;
    goto LAB13;

LAB15:    xsi_set_current_line(53, ng0);

LAB18:    xsi_set_current_line(54, ng0);
    t16 = ((char*)((ng1)));
    t17 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t17, t16, 0, 0, 26, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB22;

LAB20:    if (*((unsigned int *)t5) == 0)
        goto LAB19;

LAB21:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;

LAB22:    t12 = (t13 + 4);
    t14 = (t4 + 4);
    t18 = *((unsigned int *)t4);
    t19 = (~(t18));
    *((unsigned int *)t13) = t19;
    *((unsigned int *)t12) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB24;

LAB23:    t24 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t24 & 1U);
    t25 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t25 & 1U);
    t15 = (t0 + 1608);
    xsi_vlogvar_assign_value(t15, t13, 0, 0, 1);
    goto LAB17;

LAB19:    *((unsigned int *)t13) = 1;
    goto LAB22;

LAB24:    t20 = *((unsigned int *)t13);
    t21 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t20 | t21);
    t22 = *((unsigned int *)t12);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t12) = (t22 | t23);
    goto LAB23;

LAB26:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB28;

LAB27:    *((unsigned int *)t13) = 1;
    goto LAB28;

LAB30:    xsi_set_current_line(59, ng0);

LAB33:    xsi_set_current_line(60, ng0);
    t16 = ((char*)((ng1)));
    t17 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t17, t16, 0, 0, 26, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB37;

LAB35:    if (*((unsigned int *)t5) == 0)
        goto LAB34;

LAB36:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;

LAB37:    t12 = (t13 + 4);
    t14 = (t4 + 4);
    t18 = *((unsigned int *)t4);
    t19 = (~(t18));
    *((unsigned int *)t13) = t19;
    *((unsigned int *)t12) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB39;

LAB38:    t24 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t24 & 1U);
    t25 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t25 & 1U);
    t15 = (t0 + 1768);
    xsi_vlogvar_assign_value(t15, t13, 0, 0, 1);
    goto LAB32;

LAB34:    *((unsigned int *)t13) = 1;
    goto LAB37;

LAB39:    t20 = *((unsigned int *)t13);
    t21 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t20 | t21);
    t22 = *((unsigned int *)t12);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t12) = (t22 | t23);
    goto LAB38;

LAB41:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB43;

LAB42:    *((unsigned int *)t13) = 1;
    goto LAB43;

LAB45:    xsi_set_current_line(65, ng0);

LAB48:    xsi_set_current_line(66, ng0);
    t16 = ((char*)((ng1)));
    t17 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t17, t16, 0, 0, 26, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB52;

LAB50:    if (*((unsigned int *)t5) == 0)
        goto LAB49;

LAB51:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;

LAB52:    t12 = (t13 + 4);
    t14 = (t4 + 4);
    t18 = *((unsigned int *)t4);
    t19 = (~(t18));
    *((unsigned int *)t13) = t19;
    *((unsigned int *)t12) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB54;

LAB53:    t24 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t24 & 1U);
    t25 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t25 & 1U);
    t15 = (t0 + 1928);
    xsi_vlogvar_assign_value(t15, t13, 0, 0, 1);
    goto LAB47;

LAB49:    *((unsigned int *)t13) = 1;
    goto LAB52;

LAB54:    t20 = *((unsigned int *)t13);
    t21 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t20 | t21);
    t22 = *((unsigned int *)t12);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t12) = (t22 | t23);
    goto LAB53;

LAB56:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB58;

LAB57:    *((unsigned int *)t13) = 1;
    goto LAB58;

LAB60:    xsi_set_current_line(71, ng0);

LAB63:    xsi_set_current_line(72, ng0);
    t16 = ((char*)((ng1)));
    t17 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t17, t16, 0, 0, 26, 0LL);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB67;

LAB65:    if (*((unsigned int *)t5) == 0)
        goto LAB64;

LAB66:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;

LAB67:    t12 = (t13 + 4);
    t14 = (t4 + 4);
    t18 = *((unsigned int *)t4);
    t19 = (~(t18));
    *((unsigned int *)t13) = t19;
    *((unsigned int *)t12) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB69;

LAB68:    t24 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t24 & 1U);
    t25 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t25 & 1U);
    t15 = (t0 + 2088);
    xsi_vlogvar_assign_value(t15, t13, 0, 0, 1);
    goto LAB62;

LAB64:    *((unsigned int *)t13) = 1;
    goto LAB67;

LAB69:    t20 = *((unsigned int *)t13);
    t21 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t20 | t21);
    t22 = *((unsigned int *)t12);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t12) = (t22 | t23);
    goto LAB68;

}


extern void work_m_00000000001561009683_2908904151_init()
{
	static char *pe[] = {(void *)Always_37_0};
	xsi_register_didat("work_m_00000000001561009683_2908904151", "isim/stopwatch_isim_beh.exe.sim/work/m_00000000001561009683_2908904151.didat");
	xsi_register_executes(pe);
}
