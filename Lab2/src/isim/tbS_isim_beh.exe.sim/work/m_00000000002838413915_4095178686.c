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
static const char *ng0 = "E:/CS152A/Lab2/tb_grading.v";
static const char *ng1 = "%d ... Unexpected for input %012b, expecting %08b, was %08b";
static const char *ng2 = "%d ... Unexpected for input %012b, expecting %08b, was %08b\n";
static int ng3[] = {1, 0};
static unsigned int ng4[] = {1984U, 0U};
static unsigned int ng5[] = {7U, 0U};
static unsigned int ng6[] = {15U, 0U};
static unsigned int ng7[] = {0U, 0U};
static int ng8[] = {0, 0};
static int ng9[] = {2, 0};
static int ng10[] = {3, 0};
static int ng11[] = {4, 0};
static int ng12[] = {5, 0};
static int ng13[] = {6, 0};
static int ng14[] = {7, 0};
static const char *ng15 = "output.txt";
static const char *ng16 = "w";
static int ng17[] = {4096, 0};
static const char *ng18 = "%d ... finishing, number of errors = %d";



static int sp_tskSetInput(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(80, ng0);

LAB5:    xsi_set_current_line(81, ng0);
    t5 = (t2 + 88U);
    t6 = *((char **)t5);
    t7 = (t6 + 0U);
    xsi_wp_set_status(t7, 1);
    *((char **)t3) = &&LAB6;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(81, ng0);
    t8 = (t1 + 4024);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t1 + 3224);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 12);
    goto LAB4;

}

static int sp_tskVerOutput(char *t1, char *t2)
{
    char t8[8];
    char t9[8];
    char t16[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1280);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(88, ng0);

LAB5:    xsi_set_current_line(90, ng0);
    t5 = (t2 + 88U);
    t6 = *((char **)t5);
    t7 = (t6 + 0U);
    xsi_wp_set_status(t7, 1);
    *((char **)t3) = &&LAB6;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(91, ng0);
    t4 = (t1 + 2664U);
    t5 = *((char **)t4);
    memset(t9, 0, 8);
    t4 = (t9 + 4);
    t6 = (t5 + 4);
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 0);
    *((unsigned int *)t9) = t11;
    t12 = *((unsigned int *)t6);
    t13 = (t12 >> 0);
    *((unsigned int *)t4) = t13;
    t14 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t14 & 15U);
    t15 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t15 & 15U);
    t7 = (t1 + 2504U);
    t17 = *((char **)t7);
    memset(t16, 0, 8);
    t7 = (t16 + 4);
    t18 = (t17 + 4);
    t19 = *((unsigned int *)t17);
    t20 = (t19 >> 0);
    *((unsigned int *)t16) = t20;
    t21 = *((unsigned int *)t18);
    t22 = (t21 >> 0);
    *((unsigned int *)t7) = t22;
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 & 7U);
    t24 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t24 & 7U);
    t25 = (t1 + 2344U);
    t26 = *((char **)t25);
    xsi_vlogtype_concat(t8, 8, 8, 3U, t26, 1, t16, 3, t9, 4);
    t25 = (t1 + 4344);
    xsi_vlogvar_assign_value(t25, t8, 0, 0, 8);
    xsi_set_current_line(92, ng0);
    t4 = (t1 + 4184);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 4344);
    t17 = (t7 + 56U);
    t18 = *((char **)t17);
    memset(t8, 0, 8);
    t25 = (t6 + 4);
    t26 = (t18 + 4);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t18);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t25);
    t14 = *((unsigned int *)t26);
    t15 = (t13 ^ t14);
    t19 = (t12 | t15);
    t20 = *((unsigned int *)t25);
    t21 = *((unsigned int *)t26);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB8;

LAB7:    if (t22 != 0)
        goto LAB9;

LAB10:    t28 = (t8 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (~(t29));
    t31 = *((unsigned int *)t8);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB11;

LAB12:
LAB13:    goto LAB4;

LAB8:    *((unsigned int *)t8) = 1;
    goto LAB10;

LAB9:    t27 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB10;

LAB11:    xsi_set_current_line(93, ng0);

LAB14:    xsi_set_current_line(94, ng0);
    *((int *)t9) = xsi_vlog_stime(1000.0000000000000, 10.000000000000000);
    t34 = (t9 + 4);
    *((int *)t34) = 0;
    t35 = (t1 + 3224);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = (t1 + 4184);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    t41 = (t1 + 4344);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = (t1 + 1280);
    xsi_vlogfile_write(1, 0, 0, ng1, 5, t44, (char)118, t9, 32, (char)118, t37, 12, (char)118, t40, 8, (char)118, t43, 8);
    xsi_set_current_line(96, ng0);
    t4 = (t1 + 3864);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((int *)t8) = xsi_vlog_stime(1000.0000000000000, 10.000000000000000);
    t7 = (t8 + 4);
    *((int *)t7) = 0;
    t17 = (t1 + 3224);
    t18 = (t17 + 56U);
    t25 = *((char **)t18);
    t26 = (t1 + 4184);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t34 = (t1 + 4344);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t37 = (t1 + 1280);
    xsi_vlogfile_fwrite(*((unsigned int *)t6), 0, 0, 1, ng2, 5, t37, (char)118, t8, 32, (char)118, t25, 12, (char)118, t28, 8, (char)118, t36, 8);
    xsi_set_current_line(98, ng0);
    t4 = (t1 + 3544);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t6, 32, t7, 32);
    t17 = (t1 + 3544);
    xsi_vlogvar_assign_value(t17, t8, 0, 0, 32);
    goto LAB13;

}

static int sp_fnCvt(char *t1, char *t2)
{
    char t6[8];
    char t16[8];
    char t19[8];
    char t34[8];
    char t42[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t17;
    unsigned int t18;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t41;
    char *t43;
    int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;

LAB0:    t0 = 1;
    xsi_set_current_line(112, ng0);

LAB2:    xsi_set_current_line(113, ng0);
    t3 = (t1 + 4664);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 11);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 11);
    t14 = (t13 & 1);
    *((unsigned int *)t7) = t14;
    t15 = (t1 + 4824);
    xsi_vlogvar_assign_value(t15, t6, 0, 0, 1);
    xsi_set_current_line(114, ng0);
    t3 = (t1 + 4824);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t16, 0, 8);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB3;

LAB4:    if (*((unsigned int *)t7) != 0)
        goto LAB5;

LAB6:    t15 = (t16 + 4);
    t14 = *((unsigned int *)t16);
    t17 = *((unsigned int *)t15);
    t18 = (t14 || t17);
    if (t18 > 0)
        goto LAB7;

LAB8:    t35 = *((unsigned int *)t16);
    t36 = (~(t35));
    t37 = *((unsigned int *)t15);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB9;

LAB10:    if (*((unsigned int *)t15) > 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t16) > 0)
        goto LAB13;

LAB14:    memcpy(t6, t42, 8);

LAB15:    t43 = (t1 + 5304);
    xsi_vlogvar_assign_value(t43, t6, 0, 0, 12);
    xsi_set_current_line(115, ng0);
    t3 = (t1 + 5304);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB19;

LAB18:    t15 = (t7 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB19;

LAB22:    if (*((unsigned int *)t5) < *((unsigned int *)t7))
        goto LAB21;

LAB20:    *((unsigned int *)t6) = 1;

LAB21:    t21 = (t6 + 4);
    t9 = *((unsigned int *)t21);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB23;

LAB24:    xsi_set_current_line(121, ng0);

LAB27:    xsi_set_current_line(122, ng0);
    t3 = ((char*)((ng7)));

LAB28:    t4 = (t1 + 5304);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t8 = (t6 + 4);
    t15 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 4);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t15);
    t12 = (t11 >> 4);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 255U);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t14 & 255U);
    t44 = xsi_vlog_unsigned_case_compare(t3, 32, t6, 32);
    if (t44 == 1)
        goto LAB29;

LAB30:    t4 = (t1 + 5304);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t8 = (t6 + 4);
    t15 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 5);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t15);
    t12 = (t11 >> 5);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 127U);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t14 & 127U);
    t44 = xsi_vlog_unsigned_case_compare(t3, 32, t6, 32);
    if (t44 == 1)
        goto LAB31;

LAB32:    t4 = (t1 + 5304);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t8 = (t6 + 4);
    t15 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 6);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t15);
    t12 = (t11 >> 6);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 63U);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t14 & 63U);
    t44 = xsi_vlog_unsigned_case_compare(t3, 32, t6, 32);
    if (t44 == 1)
        goto LAB33;

LAB34:    t4 = (t1 + 5304);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t8 = (t6 + 4);
    t15 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 7);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t15);
    t12 = (t11 >> 7);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 31U);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t14 & 31U);
    t44 = xsi_vlog_unsigned_case_compare(t3, 32, t6, 32);
    if (t44 == 1)
        goto LAB35;

LAB36:    t4 = (t1 + 5304);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t8 = (t6 + 4);
    t15 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 8);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t15);
    t12 = (t11 >> 8);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 15U);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t14 & 15U);
    t44 = xsi_vlog_unsigned_case_compare(t3, 32, t6, 32);
    if (t44 == 1)
        goto LAB37;

LAB38:    t4 = (t1 + 5304);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t8 = (t6 + 4);
    t15 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 9);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t15);
    t12 = (t11 >> 9);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 7U);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t14 & 7U);
    t44 = xsi_vlog_unsigned_case_compare(t3, 32, t6, 32);
    if (t44 == 1)
        goto LAB39;

LAB40:    t4 = (t1 + 5304);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t8 = (t6 + 4);
    t15 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 10);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t15);
    t12 = (t11 >> 10);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 3U);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t14 & 3U);
    t44 = xsi_vlog_unsigned_case_compare(t3, 32, t6, 32);
    if (t44 == 1)
        goto LAB41;

LAB42:
LAB44:
LAB43:    xsi_set_current_line(130, ng0);
    t4 = ((char*)((ng14)));
    t5 = (t1 + 4984);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);

LAB45:    xsi_set_current_line(132, ng0);
    t4 = (t1 + 4984);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng8)));
    memset(t6, 0, 8);
    t15 = (t7 + 4);
    t20 = (t8 + 4);
    t9 = *((unsigned int *)t7);
    t10 = *((unsigned int *)t8);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t15);
    t13 = *((unsigned int *)t20);
    t14 = (t12 ^ t13);
    t17 = (t11 | t14);
    t18 = *((unsigned int *)t15);
    t25 = *((unsigned int *)t20);
    t26 = (t18 | t25);
    t27 = (~(t26));
    t28 = (t17 & t27);
    if (t28 != 0)
        goto LAB49;

LAB46:    if (t26 != 0)
        goto LAB48;

LAB47:    *((unsigned int *)t6) = 1;

LAB49:    t22 = (t6 + 4);
    t29 = *((unsigned int *)t22);
    t30 = (~(t29));
    t31 = *((unsigned int *)t6);
    t32 = (t31 & t30);
    t35 = (t32 != 0);
    if (t35 > 0)
        goto LAB50;

LAB51:    xsi_set_current_line(137, ng0);

LAB54:    xsi_set_current_line(138, ng0);
    t4 = (t1 + 5304);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t8 = (t1 + 4984);
    t15 = (t8 + 56U);
    t20 = *((char **)t15);
    t21 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t20, 3, t21, 32);
    memset(t16, 0, 8);
    xsi_vlog_unsigned_rshift(t16, 12, t7, 12, t6, 32);
    t22 = (t1 + 5464);
    xsi_vlogvar_assign_value(t22, t16, 0, 0, 5);
    xsi_set_current_line(139, ng0);
    t4 = (t1 + 5464);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t8 = (t6 + 4);
    t15 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t15);
    t12 = (t11 >> 1);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 15U);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t14 & 15U);
    t20 = (t1 + 5464);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t1 + 5464);
    t24 = (t23 + 72U);
    t33 = *((char **)t24);
    t39 = ((char*)((ng8)));
    xsi_vlog_generic_get_index_select_value(t16, 5, t22, t33, 2, t39, 32, 1);
    memset(t19, 0, 8);
    xsi_vlog_unsigned_add(t19, 5, t6, 5, t16, 5);
    t40 = (t1 + 5144);
    xsi_vlogvar_assign_value(t40, t19, 0, 0, 5);
    xsi_set_current_line(140, ng0);
    t4 = (t1 + 5144);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t8 = (t6 + 4);
    t15 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 4);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t15);
    t13 = (t12 >> 4);
    t14 = (t13 & 1);
    *((unsigned int *)t8) = t14;
    t20 = (t6 + 4);
    t17 = *((unsigned int *)t20);
    t18 = (~(t17));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t18);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB55;

LAB56:
LAB57:
LAB52:
LAB25:    xsi_set_current_line(147, ng0);
    t4 = (t1 + 5144);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    memset(t16, 0, 8);
    t8 = (t16 + 4);
    t15 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 0);
    *((unsigned int *)t16) = t10;
    t11 = *((unsigned int *)t15);
    t12 = (t11 >> 0);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t13 & 15U);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t14 & 15U);
    t20 = (t1 + 4984);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memset(t19, 0, 8);
    t23 = (t19 + 4);
    t24 = (t22 + 4);
    t17 = *((unsigned int *)t22);
    t18 = (t17 >> 0);
    *((unsigned int *)t19) = t18;
    t25 = *((unsigned int *)t24);
    t26 = (t25 >> 0);
    *((unsigned int *)t23) = t26;
    t27 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t27 & 7U);
    t28 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t28 & 7U);
    t33 = (t1 + 4824);
    t39 = (t33 + 56U);
    t40 = *((char **)t39);
    xsi_vlogtype_concat(t6, 8, 8, 3U, t40, 1, t19, 3, t16, 4);
    t41 = (t1 + 4504);
    xsi_vlogvar_assign_value(t41, t6, 0, 0, 8);
    t0 = 0;

LAB1:    return t0;
LAB3:    *((unsigned int *)t16) = 1;
    goto LAB6;

LAB5:    t8 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB6;

LAB7:    t20 = (t1 + 4664);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memset(t19, 0, 8);
    t23 = (t19 + 4);
    t24 = (t22 + 4);
    t25 = *((unsigned int *)t22);
    t26 = (~(t25));
    *((unsigned int *)t19) = t26;
    *((unsigned int *)t23) = 0;
    if (*((unsigned int *)t24) != 0)
        goto LAB17;

LAB16:    t31 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t31 & 4294967295U);
    t32 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t32 & 4294967295U);
    t33 = ((char*)((ng3)));
    memset(t34, 0, 8);
    xsi_vlog_unsigned_add(t34, 32, t19, 32, t33, 32);
    goto LAB8;

LAB9:    t39 = (t1 + 4664);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    memcpy(t42, t41, 8);
    goto LAB10;

LAB11:    xsi_vlog_unsigned_bit_combine(t6, 32, t34, 32, t42, 32);
    goto LAB15;

LAB13:    memcpy(t6, t34, 8);
    goto LAB15;

LAB17:    t27 = *((unsigned int *)t19);
    t28 = *((unsigned int *)t24);
    *((unsigned int *)t19) = (t27 | t28);
    t29 = *((unsigned int *)t23);
    t30 = *((unsigned int *)t24);
    *((unsigned int *)t23) = (t29 | t30);
    goto LAB16;

LAB19:    t20 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB21;

LAB23:    xsi_set_current_line(116, ng0);

LAB26:    xsi_set_current_line(117, ng0);
    t22 = ((char*)((ng5)));
    t23 = (t1 + 4984);
    xsi_vlogvar_assign_value(t23, t22, 0, 0, 3);
    xsi_set_current_line(118, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t1 + 5144);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 5);
    goto LAB25;

LAB29:    xsi_set_current_line(123, ng0);
    t20 = ((char*)((ng8)));
    t21 = (t1 + 4984);
    xsi_vlogvar_assign_value(t21, t20, 0, 0, 3);
    goto LAB45;

LAB31:    xsi_set_current_line(124, ng0);
    t20 = ((char*)((ng3)));
    t21 = (t1 + 4984);
    xsi_vlogvar_assign_value(t21, t20, 0, 0, 3);
    goto LAB45;

LAB33:    xsi_set_current_line(125, ng0);
    t20 = ((char*)((ng9)));
    t21 = (t1 + 4984);
    xsi_vlogvar_assign_value(t21, t20, 0, 0, 3);
    goto LAB45;

LAB35:    xsi_set_current_line(126, ng0);
    t20 = ((char*)((ng10)));
    t21 = (t1 + 4984);
    xsi_vlogvar_assign_value(t21, t20, 0, 0, 3);
    goto LAB45;

LAB37:    xsi_set_current_line(127, ng0);
    t20 = ((char*)((ng11)));
    t21 = (t1 + 4984);
    xsi_vlogvar_assign_value(t21, t20, 0, 0, 3);
    goto LAB45;

LAB39:    xsi_set_current_line(128, ng0);
    t20 = ((char*)((ng12)));
    t21 = (t1 + 4984);
    xsi_vlogvar_assign_value(t21, t20, 0, 0, 3);
    goto LAB45;

LAB41:    xsi_set_current_line(129, ng0);
    t20 = ((char*)((ng13)));
    t21 = (t1 + 4984);
    xsi_vlogvar_assign_value(t21, t20, 0, 0, 3);
    goto LAB45;

LAB48:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB49;

LAB50:    xsi_set_current_line(133, ng0);

LAB53:    xsi_set_current_line(134, ng0);
    t23 = (t1 + 5304);
    t24 = (t23 + 56U);
    t33 = *((char **)t24);
    memset(t19, 0, 8);
    t39 = (t19 + 4);
    t40 = (t33 + 4);
    t36 = *((unsigned int *)t33);
    t37 = (t36 >> 0);
    *((unsigned int *)t19) = t37;
    t38 = *((unsigned int *)t40);
    t45 = (t38 >> 0);
    *((unsigned int *)t39) = t45;
    t46 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t46 & 15U);
    t47 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t47 & 15U);
    t41 = ((char*)((ng7)));
    xsi_vlogtype_concat(t16, 5, 5, 2U, t41, 1, t19, 4);
    t43 = (t1 + 5144);
    xsi_vlogvar_assign_value(t43, t16, 0, 0, 5);
    goto LAB52;

LAB55:    xsi_set_current_line(141, ng0);

LAB58:    xsi_set_current_line(142, ng0);
    t21 = (t1 + 4984);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memset(t16, 0, 8);
    t24 = (t16 + 4);
    t33 = (t23 + 4);
    t28 = *((unsigned int *)t23);
    t29 = (t28 >> 0);
    *((unsigned int *)t16) = t29;
    t30 = *((unsigned int *)t33);
    t31 = (t30 >> 0);
    *((unsigned int *)t24) = t31;
    t32 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t32 & 7U);
    t35 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t35 & 7U);
    t39 = ((char*)((ng3)));
    memset(t19, 0, 8);
    xsi_vlog_unsigned_add(t19, 32, t16, 32, t39, 32);
    t40 = (t1 + 4984);
    xsi_vlogvar_assign_value(t40, t19, 0, 0, 3);
    xsi_set_current_line(143, ng0);
    t4 = (t1 + 5144);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    memset(t16, 0, 8);
    t8 = (t16 + 4);
    t15 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 1);
    *((unsigned int *)t16) = t10;
    t11 = *((unsigned int *)t15);
    t12 = (t11 >> 1);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t13 & 15U);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t14 & 15U);
    t20 = ((char*)((ng7)));
    xsi_vlogtype_concat(t6, 5, 5, 2U, t20, 1, t16, 4);
    t21 = (t1 + 5144);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 5);
    goto LAB57;

}

static void Always_43_0(char *t0)
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

LAB0:    t1 = (t0 + 6384U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 6192);
    xsi_process_wait(t2, 25000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(43, ng0);
    t4 = (t0 + 3384);
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
    t24 = (t0 + 3384);
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

static void Initial_54_1(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
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
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    int t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    int t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;

LAB0:    t1 = (t0 + 6632U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);

LAB4:    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3224);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 12);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3384);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3544);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(60, ng0);
    *((int *)t4) = xsi_vlogfile_file_open_of_cname_ctype(ng15, ng16);
    t2 = (t4 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 3864);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 6440);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(65, ng0);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB6:    t2 = (t0 + 3704);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng17)));
    memset(t4, 0, 8);
    xsi_vlog_signed_less(t4, 32, t5, 32, t6, 32);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 6440);
    xsi_process_wait(t2, 1000000LL);
    *((char **)t1) = &&LAB25;
    goto LAB1;

LAB7:    xsi_set_current_line(66, ng0);

LAB9:    xsi_set_current_line(67, ng0);
    t13 = (t0 + 3704);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t0 + 6440);
    t17 = (t0 + 848);
    t18 = xsi_create_subprogram_invocation(t16, 0, t0, t17, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t17, t18);
    t19 = (t0 + 4024);
    xsi_vlogvar_assign_value(t19, t15, 0, 0, 12);

LAB12:    t20 = (t0 + 6536);
    t21 = *((char **)t20);
    t22 = (t21 + 80U);
    t23 = *((char **)t22);
    t24 = (t23 + 272U);
    t25 = *((char **)t24);
    t26 = (t25 + 0U);
    t27 = *((char **)t26);
    t28 = ((int  (*)(char *, char *))t27)(t0, t21);

LAB14:    if (t28 != 0)
        goto LAB15;

LAB10:    t21 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t21);

LAB11:    t29 = (t0 + 6536);
    t30 = *((char **)t29);
    t29 = (t0 + 848);
    t31 = (t0 + 6440);
    t32 = 0;
    xsi_delete_subprogram_invocation(t29, t30, t0, t31, t32);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 3704);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 6440);
    t7 = (t0 + 1712);
    t13 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    t14 = (t0 + 4664);
    xsi_vlogvar_assign_value(t14, t5, 0, 0, 12);

LAB16:    t15 = (t0 + 6536);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t28 = ((int  (*)(char *, char *))t22)(t0, t16);
    if (t28 != 0)
        goto LAB18;

LAB17:    t16 = (t0 + 6536);
    t23 = *((char **)t16);
    t16 = (t0 + 4504);
    t24 = (t16 + 56U);
    t25 = *((char **)t24);
    memcpy(t4, t25, 8);
    t26 = (t0 + 1712);
    t27 = (t0 + 6440);
    t29 = 0;
    xsi_delete_subprogram_invocation(t26, t23, t0, t27, t29);
    t30 = (t0 + 6440);
    t31 = (t0 + 1280);
    t32 = xsi_create_subprogram_invocation(t30, 0, t0, t31, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t31, t32);
    t33 = (t0 + 4184);
    xsi_vlogvar_assign_value(t33, t4, 0, 0, 8);

LAB21:    t34 = (t0 + 6536);
    t35 = *((char **)t34);
    t36 = (t35 + 80U);
    t37 = *((char **)t36);
    t38 = (t37 + 272U);
    t39 = *((char **)t38);
    t40 = (t39 + 0U);
    t41 = *((char **)t40);
    t42 = ((int  (*)(char *, char *))t41)(t0, t35);

LAB23:    if (t42 != 0)
        goto LAB24;

LAB19:    t35 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t35);

LAB20:    t43 = (t0 + 6536);
    t44 = *((char **)t43);
    t43 = (t0 + 1280);
    t45 = (t0 + 6440);
    t46 = 0;
    xsi_delete_subprogram_invocation(t43, t44, t0, t45, t46);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 3704);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t7 = (t0 + 3704);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 32);
    goto LAB6;

LAB13:;
LAB15:    t20 = (t0 + 6632U);
    *((char **)t20) = &&LAB12;
    goto LAB1;

LAB18:    t15 = (t0 + 6632U);
    *((char **)t15) = &&LAB16;
    goto LAB1;

LAB22:;
LAB24:    t34 = (t0 + 6632U);
    *((char **)t34) = &&LAB21;
    goto LAB1;

LAB25:    xsi_set_current_line(72, ng0);
    *((int *)t4) = xsi_vlog_stime(1000.0000000000000, 10.000000000000000);
    t3 = (t4 + 4);
    *((int *)t3) = 0;
    t5 = (t0 + 3544);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    xsi_vlogfile_write(1, 0, 0, ng18, 3, t0, (char)118, t4, 32, (char)119, t7, 32);
    xsi_set_current_line(75, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}


extern void work_m_00000000002838413915_4095178686_init()
{
	static char *pe[] = {(void *)Always_43_0,(void *)Initial_54_1};
	static char *se[] = {(void *)sp_tskSetInput,(void *)sp_tskVerOutput,(void *)sp_fnCvt};
	xsi_register_didat("work_m_00000000002838413915_4095178686", "isim/tbS_isim_beh.exe.sim/work/m_00000000002838413915_4095178686.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
