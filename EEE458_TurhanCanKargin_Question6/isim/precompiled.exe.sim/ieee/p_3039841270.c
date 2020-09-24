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
static const char *ng0 = "Function max ended without a return statement";
static const char *ng1 = "Function min ended without a return statement";
extern char *STD_STANDARD;
static const char *ng3 = "Function \"sll\" ended without a return statement";
static const char *ng4 = "Function \"srl\" ended without a return statement";
static const char *ng5 = "Function \"rol\" ended without a return statement";
static const char *ng6 = "Function \"ror\" ended without a return statement";
static const char *ng7 = "Function to_integer ended without a return statement";

char *ieee_p_3039841270_sub_1717229644_2334307252(char *, char *, char *, char *, char *, char *);
char *ieee_p_3039841270_sub_180853171_2334307252(char *, char *, int , int );
char *ieee_p_3039841270_sub_2675122452_2334307252(char *, char *, char *, char *, int );
char *ieee_p_3039841270_sub_2780269832_2334307252(char *, char *, int , int );
char *ieee_p_3039841270_sub_2926835514_2334307252(char *, char *, char *, char *, int );
char *ieee_p_3039841270_sub_3038752187_2334307252(char *, char *, char *, char *);
char *ieee_p_3039841270_sub_3118404406_2334307252(char *, char *, char *, char *);
char *ieee_p_3039841270_sub_3322286019_2334307252(char *, char *, char *, char *, int );
unsigned char ieee_p_3039841270_sub_3348550333_2334307252(char *, char *, char *, char *, char *);
unsigned char ieee_p_3039841270_sub_4062508670_2334307252(char *, char *, char *, char *, char *);
unsigned char ieee_p_3039841270_sub_4080297485_2334307252(char *, char *, char *, char *, char *);
char *ieee_p_3039841270_sub_4184611595_2334307252(char *, char *, char *, char *);
char *ieee_p_3039841270_sub_4208422723_2334307252(char *, char *, char *, char *, int );


int ieee_p_3039841270_sub_3160373586_2334307252(char *t1, int t2, int t3)
{
    char t5[16];
    int t0;
    char *t6;
    char *t7;
    unsigned char t8;

LAB0:    t6 = (t5 + 4U);
    *((int *)t6) = t2;
    t7 = (t5 + 8U);
    *((int *)t7) = t3;
    t8 = (t2 > t3);
    if (t8 != 0)
        goto LAB2;

LAB4:    t0 = t3;

LAB1:    return t0;
LAB2:    t0 = t2;
    goto LAB1;

LAB3:    xsi_error(ng0);
    t0 = 0;
    goto LAB1;

LAB5:    goto LAB3;

LAB6:    goto LAB3;

}

int ieee_p_3039841270_sub_3160650192_2334307252(char *t1, int t2, int t3)
{
    char t5[16];
    int t0;
    char *t6;
    char *t7;
    unsigned char t8;

LAB0:    t6 = (t5 + 4U);
    *((int *)t6) = t2;
    t7 = (t5 + 8U);
    *((int *)t7) = t3;
    t8 = (t2 < t3);
    if (t8 != 0)
        goto LAB2;

LAB4:    t0 = t3;

LAB1:    return t0;
LAB2:    t0 = t2;
    goto LAB1;

LAB3:    xsi_error(ng1);
    t0 = 0;
    goto LAB1;

LAB5:    goto LAB3;

LAB6:    goto LAB3;

}

int ieee_p_3039841270_sub_3824177444_2334307252(char *t1, int t2)
{
    char t3[248];
    char t4[8];
    char t8[8];
    char t14[8];
    int t0;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    unsigned char t18;
    char *t19;
    char *t20;
    int t21;
    int t22;
    int t23;

LAB0:    t5 = (t3 + 4U);
    t6 = ((STD_STANDARD) + 832);
    t7 = (t5 + 88U);
    *((char **)t7) = t6;
    t9 = (t5 + 56U);
    *((char **)t9) = t8;
    xsi_type_set_default_value(t6, t8, 0);
    t10 = (t5 + 80U);
    *((unsigned int *)t10) = 4U;
    t11 = (t3 + 124U);
    t12 = ((STD_STANDARD) + 832);
    t13 = (t11 + 88U);
    *((char **)t13) = t12;
    t15 = (t11 + 56U);
    *((char **)t15) = t14;
    xsi_type_set_default_value(t12, t14, 0);
    t16 = (t11 + 80U);
    *((unsigned int *)t16) = 4U;
    t17 = (t4 + 4U);
    *((int *)t17) = t2;
    t18 = (t2 >= 0);
    if (t18 != 0)
        goto LAB2;

LAB4:    t21 = (t2 + 1);
    t22 = (-(t21));
    t6 = (t11 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((int *)t6) = t22;

LAB3:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((int *)t6) = 1;

LAB5:    t6 = (t11 + 56U);
    t7 = *((char **)t6);
    t21 = *((int *)t7);
    t18 = (t21 > 0);
    if (t18 != 0)
        goto LAB6;

LAB8:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t21 = *((int *)t7);
    t0 = t21;

LAB1:    return t0;
LAB2:    t19 = (t11 + 56U);
    t20 = *((char **)t19);
    t19 = (t20 + 0);
    *((int *)t19) = t2;
    goto LAB3;

LAB6:    t6 = (t5 + 56U);
    t9 = *((char **)t6);
    t22 = *((int *)t9);
    t23 = (t22 + 1);
    t6 = (t5 + 56U);
    t10 = *((char **)t6);
    t6 = (t10 + 0);
    *((int *)t6) = t23;
    t6 = (t11 + 56U);
    t7 = *((char **)t6);
    t21 = *((int *)t7);
    t22 = (t21 / 2);
    t6 = (t11 + 56U);
    t9 = *((char **)t6);
    t6 = (t9 + 0);
    *((int *)t6) = t22;
    goto LAB5;

LAB7:;
LAB9:;
}

int ieee_p_3039841270_sub_3295552210_2334307252(char *t1, int t2)
{
    char t3[248];
    char t4[8];
    char t8[8];
    char t14[8];
    int t0;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    int t20;
    unsigned char t21;
    int t22;
    int t23;

LAB0:    t5 = (t3 + 4U);
    t6 = ((STD_STANDARD) + 832);
    t7 = (t5 + 88U);
    *((char **)t7) = t6;
    t9 = (t5 + 56U);
    *((char **)t9) = t8;
    xsi_type_set_default_value(t6, t8, 0);
    t10 = (t5 + 80U);
    *((unsigned int *)t10) = 4U;
    t11 = (t3 + 124U);
    t12 = ((STD_STANDARD) + 832);
    t13 = (t11 + 88U);
    *((char **)t13) = t12;
    t15 = (t11 + 56U);
    *((char **)t15) = t14;
    xsi_type_set_default_value(t12, t14, 0);
    t16 = (t11 + 80U);
    *((unsigned int *)t16) = 4U;
    t17 = (t4 + 4U);
    *((int *)t17) = t2;
    t18 = (t11 + 56U);
    t19 = *((char **)t18);
    t18 = (t19 + 0);
    *((int *)t18) = t2;
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((int *)t6) = 1;

LAB2:    t6 = (t11 + 56U);
    t7 = *((char **)t6);
    t20 = *((int *)t7);
    t21 = (t20 > 1);
    if (t21 != 0)
        goto LAB3;

LAB5:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t20 = *((int *)t7);
    t0 = t20;

LAB1:    return t0;
LAB3:    t6 = (t5 + 56U);
    t9 = *((char **)t6);
    t22 = *((int *)t9);
    t23 = (t22 + 1);
    t6 = (t5 + 56U);
    t10 = *((char **)t6);
    t6 = (t10 + 0);
    *((int *)t6) = t23;
    t6 = (t11 + 56U);
    t7 = *((char **)t6);
    t20 = *((int *)t7);
    t22 = (t20 / 2);
    t6 = (t11 + 56U);
    t9 = *((char **)t6);
    t6 = (t9 + 0);
    *((int *)t6) = t22;
    goto LAB2;

LAB4:;
LAB6:;
}

char *ieee_p_3039841270_sub_451878023_2334307252(char *t1, char *t2, char *t3, char *t4, char *t5, char *t6, unsigned char t7)
{
    char t8[368];
    char t9[40];
    char t16[8];
    char t19[16];
    char t26[16];
    char t34[16];
    char t49[8];
    char *t0;
    char *t10;
    unsigned int t11;
    int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t20;
    char *t21;
    int t22;
    char *t23;
    int t24;
    unsigned int t25;
    char *t27;
    int t28;
    char *t29;
    int t30;
    char *t31;
    int t32;
    int t33;
    char *t35;
    int t36;
    char *t37;
    int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t50;
    char *t51;
    char *t52;
    unsigned char t53;
    char *t54;
    char *t55;
    unsigned char t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    int t61;
    int t62;
    int t63;
    char *t64;
    unsigned char t65;
    char *t66;
    int t67;
    char *t68;
    int t69;
    int t70;
    char *t71;
    int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    unsigned char t76;
    unsigned char t77;
    char *t78;
    char *t79;
    int t80;
    char *t81;
    int t82;
    int t83;
    unsigned int t84;
    char *t85;
    int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    unsigned char t90;
    unsigned char t91;
    char *t92;
    char *t93;
    int t94;
    char *t95;
    int t96;
    int t97;
    unsigned int t98;
    char *t99;
    int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    unsigned char t104;
    unsigned char t105;
    unsigned char t106;
    unsigned int t107;
    unsigned char t108;

LAB0:    t10 = (t4 + 12U);
    t11 = *((unsigned int *)t10);
    t12 = (t11 - 1);
    t13 = (t8 + 4U);
    t14 = ((STD_STANDARD) + 384);
    t15 = (t13 + 88U);
    *((char **)t15) = t14;
    t17 = (t13 + 56U);
    *((char **)t17) = t16;
    *((int *)t16) = t12;
    t18 = (t13 + 80U);
    *((unsigned int *)t18) = 4U;
    t20 = (t13 + 56U);
    t21 = *((char **)t20);
    t22 = *((int *)t21);
    t20 = (t19 + 0U);
    t23 = (t20 + 0U);
    *((int *)t23) = t22;
    t23 = (t20 + 4U);
    *((int *)t23) = 0;
    t23 = (t20 + 8U);
    *((int *)t23) = -1;
    t24 = (0 - t22);
    t25 = (t24 * -1);
    t25 = (t25 + 1);
    t23 = (t20 + 12U);
    *((unsigned int *)t23) = t25;
    t23 = (t13 + 56U);
    t27 = *((char **)t23);
    t28 = *((int *)t27);
    t23 = (t26 + 0U);
    t29 = (t23 + 0U);
    *((int *)t29) = t28;
    t29 = (t23 + 4U);
    *((int *)t29) = 0;
    t29 = (t23 + 8U);
    *((int *)t29) = -1;
    t30 = (0 - t28);
    t25 = (t30 * -1);
    t25 = (t25 + 1);
    t29 = (t23 + 12U);
    *((unsigned int *)t29) = t25;
    t29 = (t13 + 56U);
    t31 = *((char **)t29);
    t32 = *((int *)t31);
    t33 = (0 - t32);
    t25 = (t33 * -1);
    t25 = (t25 + 1);
    t25 = (t25 * 1U);
    t29 = (t13 + 56U);
    t35 = *((char **)t29);
    t36 = *((int *)t35);
    t29 = (t34 + 0U);
    t37 = (t29 + 0U);
    *((int *)t37) = t36;
    t37 = (t29 + 4U);
    *((int *)t37) = 0;
    t37 = (t29 + 8U);
    *((int *)t37) = -1;
    t38 = (0 - t36);
    t39 = (t38 * -1);
    t39 = (t39 + 1);
    t37 = (t29 + 12U);
    *((unsigned int *)t37) = t39;
    t37 = (t8 + 124U);
    t40 = (t1 + 2880);
    t41 = (t37 + 88U);
    *((char **)t41) = t40;
    t42 = (char *)alloca(t25);
    t43 = (t37 + 56U);
    *((char **)t43) = t42;
    xsi_type_set_default_value(t40, t42, t34);
    t44 = (t37 + 64U);
    *((char **)t44) = t34;
    t45 = (t37 + 80U);
    *((unsigned int *)t45) = t25;
    t46 = (t8 + 244U);
    t47 = ((STD_STANDARD) + 96);
    t48 = (t46 + 88U);
    *((char **)t48) = t47;
    t50 = (t46 + 56U);
    *((char **)t50) = t49;
    *((unsigned char *)t49) = t7;
    t51 = (t46 + 80U);
    *((unsigned int *)t51) = 1U;
    t52 = (t9 + 4U);
    t53 = (t3 != 0);
    if (t53 == 1)
        goto LAB3;

LAB2:    t54 = (t9 + 12U);
    *((char **)t54) = t4;
    t55 = (t9 + 20U);
    t56 = (t5 != 0);
    if (t56 == 1)
        goto LAB5;

LAB4:    t57 = (t9 + 28U);
    *((char **)t57) = t6;
    t58 = (t9 + 36U);
    *((unsigned char *)t58) = t7;
    t59 = (t13 + 56U);
    t60 = *((char **)t59);
    t61 = *((int *)t60);
    t62 = 0;
    t63 = t61;

LAB6:    if (t62 <= t63)
        goto LAB7;

LAB9:    t10 = (t37 + 56U);
    t14 = *((char **)t10);
    t10 = (t34 + 12U);
    t11 = *((unsigned int *)t10);
    t11 = (t11 * 1U);
    t0 = xsi_get_transient_memory(t11);
    memcpy(t0, t14, t11);
    t15 = (t34 + 0U);
    t12 = *((int *)t15);
    t17 = (t34 + 4U);
    t22 = *((int *)t17);
    t18 = (t34 + 8U);
    t24 = *((int *)t18);
    t20 = (t2 + 0U);
    t21 = (t20 + 0U);
    *((int *)t21) = t12;
    t21 = (t20 + 4U);
    *((int *)t21) = t22;
    t21 = (t20 + 8U);
    *((int *)t21) = t24;
    t28 = (t22 - t12);
    t25 = (t28 * t24);
    t25 = (t25 + 1);
    t21 = (t20 + 12U);
    *((unsigned int *)t21) = t25;

LAB1:    return t0;
LAB3:    *((char **)t52) = t3;
    goto LAB2;

LAB5:    *((char **)t55) = t5;
    goto LAB4;

LAB7:    t59 = (t46 + 56U);
    t64 = *((char **)t59);
    t65 = *((unsigned char *)t64);
    t59 = (t3 + 0);
    t66 = (t19 + 0U);
    t67 = *((int *)t66);
    t68 = (t19 + 8U);
    t69 = *((int *)t68);
    t70 = (t62 - t67);
    t39 = (t70 * t69);
    t71 = (t19 + 4U);
    t72 = *((int *)t71);
    xsi_vhdl_check_range_of_index(t67, t72, t69, t62);
    t73 = (1U * t39);
    t74 = (0 + t73);
    t75 = (t59 + t74);
    t76 = *((unsigned char *)t75);
    t77 = (t65 ^ t76);
    t78 = (t5 + 0);
    t79 = (t26 + 0U);
    t80 = *((int *)t79);
    t81 = (t26 + 8U);
    t82 = *((int *)t81);
    t83 = (t62 - t80);
    t84 = (t83 * t82);
    t85 = (t26 + 4U);
    t86 = *((int *)t85);
    xsi_vhdl_check_range_of_index(t80, t86, t82, t62);
    t87 = (1U * t84);
    t88 = (0 + t87);
    t89 = (t78 + t88);
    t90 = *((unsigned char *)t89);
    t91 = (t77 ^ t90);
    t92 = (t37 + 56U);
    t93 = *((char **)t92);
    t92 = (t34 + 0U);
    t94 = *((int *)t92);
    t95 = (t34 + 8U);
    t96 = *((int *)t95);
    t97 = (t62 - t94);
    t98 = (t97 * t96);
    t99 = (t34 + 4U);
    t100 = *((int *)t99);
    xsi_vhdl_check_range_of_index(t94, t100, t96, t62);
    t101 = (1U * t98);
    t102 = (0 + t101);
    t103 = (t93 + t102);
    *((unsigned char *)t103) = t91;
    t10 = (t46 + 56U);
    t14 = *((char **)t10);
    t76 = *((unsigned char *)t14);
    if (t76 == 1)
        goto LAB16;

LAB17:    t65 = (unsigned char)0;

LAB18:    if (t65 == 1)
        goto LAB13;

LAB14:    t21 = (t46 + 56U);
    t23 = *((char **)t21);
    t91 = *((unsigned char *)t23);
    if (t91 == 1)
        goto LAB19;

LAB20:    t90 = (unsigned char)0;

LAB21:    t56 = t90;

LAB15:    if (t56 == 1)
        goto LAB10;

LAB11:    t40 = (t3 + 0);
    t41 = (t19 + 0U);
    t38 = *((int *)t41);
    t43 = (t19 + 8U);
    t61 = *((int *)t43);
    t67 = (t62 - t38);
    t87 = (t67 * t61);
    t44 = (t19 + 4U);
    t69 = *((int *)t44);
    xsi_vhdl_check_range_of_index(t38, t69, t61, t62);
    t88 = (1U * t87);
    t98 = (0 + t88);
    t45 = (t40 + t98);
    t106 = *((unsigned char *)t45);
    if (t106 == 1)
        goto LAB22;

LAB23:    t105 = (unsigned char)0;

LAB24:    t53 = t105;

LAB12:    t60 = (t46 + 56U);
    t64 = *((char **)t60);
    t60 = (t64 + 0);
    *((unsigned char *)t60) = t53;

LAB8:    if (t62 == t63)
        goto LAB9;

LAB25:    t12 = (t62 + 1);
    t62 = t12;
    goto LAB6;

LAB10:    t53 = (unsigned char)1;
    goto LAB12;

LAB13:    t56 = (unsigned char)1;
    goto LAB15;

LAB16:    t10 = (t3 + 0);
    t15 = (t19 + 0U);
    t12 = *((int *)t15);
    t17 = (t19 + 8U);
    t22 = *((int *)t17);
    t24 = (t62 - t12);
    t11 = (t24 * t22);
    t18 = (t19 + 4U);
    t28 = *((int *)t18);
    xsi_vhdl_check_range_of_index(t12, t28, t22, t62);
    t25 = (1U * t11);
    t39 = (0 + t25);
    t20 = (t10 + t39);
    t77 = *((unsigned char *)t20);
    t65 = t77;
    goto LAB18;

LAB19:    t21 = (t5 + 0);
    t27 = (t26 + 0U);
    t30 = *((int *)t27);
    t29 = (t26 + 8U);
    t32 = *((int *)t29);
    t33 = (t62 - t30);
    t73 = (t33 * t32);
    t31 = (t26 + 4U);
    t36 = *((int *)t31);
    xsi_vhdl_check_range_of_index(t30, t36, t32, t62);
    t74 = (1U * t73);
    t84 = (0 + t74);
    t35 = (t21 + t84);
    t104 = *((unsigned char *)t35);
    t90 = t104;
    goto LAB21;

LAB22:    t47 = (t5 + 0);
    t48 = (t26 + 0U);
    t70 = *((int *)t48);
    t50 = (t26 + 8U);
    t72 = *((int *)t50);
    t80 = (t62 - t70);
    t101 = (t80 * t72);
    t51 = (t26 + 4U);
    t82 = *((int *)t51);
    xsi_vhdl_check_range_of_index(t70, t82, t72, t62);
    t102 = (1U * t101);
    t107 = (0 + t102);
    t59 = (t47 + t107);
    t108 = *((unsigned char *)t59);
    t105 = t108;
    goto LAB24;

LAB26:;
}

char *ieee_p_3039841270_sub_941415796_2334307252(char *t1, char *t2, char *t3, char *t4, char *t5, char *t6, unsigned char t7)
{
    char t8[368];
    char t9[40];
    char t16[8];
    char t19[16];
    char t26[16];
    char t34[16];
    char t49[8];
    char *t0;
    char *t10;
    unsigned int t11;
    int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t20;
    char *t21;
    int t22;
    char *t23;
    int t24;
    unsigned int t25;
    char *t27;
    int t28;
    char *t29;
    int t30;
    char *t31;
    int t32;
    int t33;
    char *t35;
    int t36;
    char *t37;
    int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t50;
    char *t51;
    char *t52;
    unsigned char t53;
    char *t54;
    char *t55;
    unsigned char t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    int t61;
    int t62;
    int t63;
    char *t64;
    unsigned char t65;
    char *t66;
    int t67;
    char *t68;
    int t69;
    int t70;
    char *t71;
    int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    unsigned char t76;
    unsigned char t77;
    char *t78;
    char *t79;
    int t80;
    char *t81;
    int t82;
    int t83;
    unsigned int t84;
    char *t85;
    int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    unsigned char t90;
    unsigned char t91;
    char *t92;
    char *t93;
    int t94;
    char *t95;
    int t96;
    int t97;
    unsigned int t98;
    char *t99;
    int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    unsigned char t104;
    unsigned char t105;
    unsigned char t106;
    unsigned int t107;
    unsigned char t108;

LAB0:    t10 = (t4 + 12U);
    t11 = *((unsigned int *)t10);
    t12 = (t11 - 1);
    t13 = (t8 + 4U);
    t14 = ((STD_STANDARD) + 384);
    t15 = (t13 + 88U);
    *((char **)t15) = t14;
    t17 = (t13 + 56U);
    *((char **)t17) = t16;
    *((int *)t16) = t12;
    t18 = (t13 + 80U);
    *((unsigned int *)t18) = 4U;
    t20 = (t13 + 56U);
    t21 = *((char **)t20);
    t22 = *((int *)t21);
    t20 = (t19 + 0U);
    t23 = (t20 + 0U);
    *((int *)t23) = t22;
    t23 = (t20 + 4U);
    *((int *)t23) = 0;
    t23 = (t20 + 8U);
    *((int *)t23) = -1;
    t24 = (0 - t22);
    t25 = (t24 * -1);
    t25 = (t25 + 1);
    t23 = (t20 + 12U);
    *((unsigned int *)t23) = t25;
    t23 = (t13 + 56U);
    t27 = *((char **)t23);
    t28 = *((int *)t27);
    t23 = (t26 + 0U);
    t29 = (t23 + 0U);
    *((int *)t29) = t28;
    t29 = (t23 + 4U);
    *((int *)t29) = 0;
    t29 = (t23 + 8U);
    *((int *)t29) = -1;
    t30 = (0 - t28);
    t25 = (t30 * -1);
    t25 = (t25 + 1);
    t29 = (t23 + 12U);
    *((unsigned int *)t29) = t25;
    t29 = (t13 + 56U);
    t31 = *((char **)t29);
    t32 = *((int *)t31);
    t33 = (0 - t32);
    t25 = (t33 * -1);
    t25 = (t25 + 1);
    t25 = (t25 * 1U);
    t29 = (t13 + 56U);
    t35 = *((char **)t29);
    t36 = *((int *)t35);
    t29 = (t34 + 0U);
    t37 = (t29 + 0U);
    *((int *)t37) = t36;
    t37 = (t29 + 4U);
    *((int *)t37) = 0;
    t37 = (t29 + 8U);
    *((int *)t37) = -1;
    t38 = (0 - t36);
    t39 = (t38 * -1);
    t39 = (t39 + 1);
    t37 = (t29 + 12U);
    *((unsigned int *)t37) = t39;
    t37 = (t8 + 124U);
    t40 = (t1 + 2992);
    t41 = (t37 + 88U);
    *((char **)t41) = t40;
    t42 = (char *)alloca(t25);
    t43 = (t37 + 56U);
    *((char **)t43) = t42;
    xsi_type_set_default_value(t40, t42, t34);
    t44 = (t37 + 64U);
    *((char **)t44) = t34;
    t45 = (t37 + 80U);
    *((unsigned int *)t45) = t25;
    t46 = (t8 + 244U);
    t47 = ((STD_STANDARD) + 96);
    t48 = (t46 + 88U);
    *((char **)t48) = t47;
    t50 = (t46 + 56U);
    *((char **)t50) = t49;
    *((unsigned char *)t49) = t7;
    t51 = (t46 + 80U);
    *((unsigned int *)t51) = 1U;
    t52 = (t9 + 4U);
    t53 = (t3 != 0);
    if (t53 == 1)
        goto LAB3;

LAB2:    t54 = (t9 + 12U);
    *((char **)t54) = t4;
    t55 = (t9 + 20U);
    t56 = (t5 != 0);
    if (t56 == 1)
        goto LAB5;

LAB4:    t57 = (t9 + 28U);
    *((char **)t57) = t6;
    t58 = (t9 + 36U);
    *((unsigned char *)t58) = t7;
    t59 = (t13 + 56U);
    t60 = *((char **)t59);
    t61 = *((int *)t60);
    t62 = 0;
    t63 = t61;

LAB6:    if (t62 <= t63)
        goto LAB7;

LAB9:    t10 = (t37 + 56U);
    t14 = *((char **)t10);
    t10 = (t34 + 12U);
    t11 = *((unsigned int *)t10);
    t11 = (t11 * 1U);
    t0 = xsi_get_transient_memory(t11);
    memcpy(t0, t14, t11);
    t15 = (t34 + 0U);
    t12 = *((int *)t15);
    t17 = (t34 + 4U);
    t22 = *((int *)t17);
    t18 = (t34 + 8U);
    t24 = *((int *)t18);
    t20 = (t2 + 0U);
    t21 = (t20 + 0U);
    *((int *)t21) = t12;
    t21 = (t20 + 4U);
    *((int *)t21) = t22;
    t21 = (t20 + 8U);
    *((int *)t21) = t24;
    t28 = (t22 - t12);
    t25 = (t28 * t24);
    t25 = (t25 + 1);
    t21 = (t20 + 12U);
    *((unsigned int *)t21) = t25;

LAB1:    return t0;
LAB3:    *((char **)t52) = t3;
    goto LAB2;

LAB5:    *((char **)t55) = t5;
    goto LAB4;

LAB7:    t59 = (t46 + 56U);
    t64 = *((char **)t59);
    t65 = *((unsigned char *)t64);
    t59 = (t3 + 0);
    t66 = (t19 + 0U);
    t67 = *((int *)t66);
    t68 = (t19 + 8U);
    t69 = *((int *)t68);
    t70 = (t62 - t67);
    t39 = (t70 * t69);
    t71 = (t19 + 4U);
    t72 = *((int *)t71);
    xsi_vhdl_check_range_of_index(t67, t72, t69, t62);
    t73 = (1U * t39);
    t74 = (0 + t73);
    t75 = (t59 + t74);
    t76 = *((unsigned char *)t75);
    t77 = (t65 ^ t76);
    t78 = (t5 + 0);
    t79 = (t26 + 0U);
    t80 = *((int *)t79);
    t81 = (t26 + 8U);
    t82 = *((int *)t81);
    t83 = (t62 - t80);
    t84 = (t83 * t82);
    t85 = (t26 + 4U);
    t86 = *((int *)t85);
    xsi_vhdl_check_range_of_index(t80, t86, t82, t62);
    t87 = (1U * t84);
    t88 = (0 + t87);
    t89 = (t78 + t88);
    t90 = *((unsigned char *)t89);
    t91 = (t77 ^ t90);
    t92 = (t37 + 56U);
    t93 = *((char **)t92);
    t92 = (t34 + 0U);
    t94 = *((int *)t92);
    t95 = (t34 + 8U);
    t96 = *((int *)t95);
    t97 = (t62 - t94);
    t98 = (t97 * t96);
    t99 = (t34 + 4U);
    t100 = *((int *)t99);
    xsi_vhdl_check_range_of_index(t94, t100, t96, t62);
    t101 = (1U * t98);
    t102 = (0 + t101);
    t103 = (t93 + t102);
    *((unsigned char *)t103) = t91;
    t10 = (t46 + 56U);
    t14 = *((char **)t10);
    t76 = *((unsigned char *)t14);
    if (t76 == 1)
        goto LAB16;

LAB17:    t65 = (unsigned char)0;

LAB18:    if (t65 == 1)
        goto LAB13;

LAB14:    t21 = (t46 + 56U);
    t23 = *((char **)t21);
    t91 = *((unsigned char *)t23);
    if (t91 == 1)
        goto LAB19;

LAB20:    t90 = (unsigned char)0;

LAB21:    t56 = t90;

LAB15:    if (t56 == 1)
        goto LAB10;

LAB11:    t40 = (t3 + 0);
    t41 = (t19 + 0U);
    t38 = *((int *)t41);
    t43 = (t19 + 8U);
    t61 = *((int *)t43);
    t67 = (t62 - t38);
    t87 = (t67 * t61);
    t44 = (t19 + 4U);
    t69 = *((int *)t44);
    xsi_vhdl_check_range_of_index(t38, t69, t61, t62);
    t88 = (1U * t87);
    t98 = (0 + t88);
    t45 = (t40 + t98);
    t106 = *((unsigned char *)t45);
    if (t106 == 1)
        goto LAB22;

LAB23:    t105 = (unsigned char)0;

LAB24:    t53 = t105;

LAB12:    t60 = (t46 + 56U);
    t64 = *((char **)t60);
    t60 = (t64 + 0);
    *((unsigned char *)t60) = t53;

LAB8:    if (t62 == t63)
        goto LAB9;

LAB25:    t12 = (t62 + 1);
    t62 = t12;
    goto LAB6;

LAB10:    t53 = (unsigned char)1;
    goto LAB12;

LAB13:    t56 = (unsigned char)1;
    goto LAB15;

LAB16:    t10 = (t3 + 0);
    t15 = (t19 + 0U);
    t12 = *((int *)t15);
    t17 = (t19 + 8U);
    t22 = *((int *)t17);
    t24 = (t62 - t12);
    t11 = (t24 * t22);
    t18 = (t19 + 4U);
    t28 = *((int *)t18);
    xsi_vhdl_check_range_of_index(t12, t28, t22, t62);
    t25 = (1U * t11);
    t39 = (0 + t25);
    t20 = (t10 + t39);
    t77 = *((unsigned char *)t20);
    t65 = t77;
    goto LAB18;

LAB19:    t21 = (t5 + 0);
    t27 = (t26 + 0U);
    t30 = *((int *)t27);
    t29 = (t26 + 8U);
    t32 = *((int *)t29);
    t33 = (t62 - t30);
    t73 = (t33 * t32);
    t31 = (t26 + 4U);
    t36 = *((int *)t31);
    xsi_vhdl_check_range_of_index(t30, t36, t32, t62);
    t74 = (1U * t73);
    t84 = (0 + t74);
    t35 = (t21 + t84);
    t104 = *((unsigned char *)t35);
    t90 = t104;
    goto LAB21;

LAB22:    t47 = (t5 + 0);
    t48 = (t26 + 0U);
    t70 = *((int *)t48);
    t50 = (t26 + 8U);
    t72 = *((int *)t50);
    t80 = (t62 - t70);
    t101 = (t80 * t72);
    t51 = (t26 + 4U);
    t82 = *((int *)t51);
    xsi_vhdl_check_range_of_index(t70, t82, t72, t62);
    t102 = (1U * t101);
    t107 = (0 + t102);
    t59 = (t47 + t107);
    t108 = *((unsigned char *)t59);
    t105 = t108;
    goto LAB24;

LAB26:;
}

void ieee_p_3039841270_sub_3828635824_2334307252(char *t0, char *t1, char *t2, char *t3, char *t4, char *t5, char *t6, char *t7, char *t8, char *t9)
{
    char t10[368];
    char t11[72];
    char t16[16];
    char t36[16];
    char t53[16];
    char t62[8];
    char t78[16];
    char t80[16];
    char t95[16];
    char t97[16];
    char t100[16];
    char t107[16];
    char t126[16];
    char t128[16];
    char t133[16];
    char *t12;
    unsigned int t13;
    int t14;
    unsigned int t15;
    char *t17;
    unsigned int t18;
    char *t19;
    char *t20;
    int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    int t32;
    int t33;
    int t34;
    unsigned int t35;
    char *t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    int t41;
    int t42;
    char *t43;
    char *t44;
    int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t54;
    int t55;
    char *t56;
    char *t57;
    int t58;
    unsigned int t59;
    char *t60;
    char *t61;
    char *t63;
    char *t64;
    char *t65;
    unsigned char t66;
    char *t67;
    char *t68;
    unsigned char t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t79;
    char *t81;
    char *t82;
    int t83;
    char *t84;
    char *t85;
    unsigned int t86;
    int t87;
    int t88;
    int t89;
    int t90;
    int t91;
    int t92;
    int t93;
    int t94;
    int t96;
    int t98;
    int t99;
    int t101;
    int t102;
    int t103;
    int t104;
    int t105;
    int t106;
    int t108;
    int t109;
    int t110;
    int t111;
    char *t113;
    char *t114;
    int t115;
    char *t116;
    char *t117;
    int t118;
    int t119;
    char *t120;
    int t121;
    unsigned int t122;
    unsigned int t123;
    char *t124;
    char *t125;
    char *t127;
    char *t129;
    char *t130;
    int t131;
    unsigned int t132;
    char *t134;
    int t135;
    char *t136;
    int t137;
    char *t138;
    char *t139;
    int t140;
    char *t141;
    char *t142;
    int t143;
    int t144;
    int t145;
    int t146;
    char *t147;
    int t148;
    unsigned int t149;
    unsigned int t150;
    char *t151;
    char *t152;
    unsigned int t153;
    unsigned int t154;

LAB0:    t12 = (t3 + 12U);
    t13 = *((unsigned int *)t12);
    t14 = (0 - t13);
    t15 = (t14 * -1);
    t15 = (t15 + 1);
    t15 = (t15 * 1U);
    t17 = (t3 + 12U);
    t18 = *((unsigned int *)t17);
    t19 = (t16 + 0U);
    t20 = (t19 + 0U);
    *((unsigned int *)t20) = t18;
    t20 = (t19 + 4U);
    *((int *)t20) = 0;
    t20 = (t19 + 8U);
    *((int *)t20) = -1;
    t21 = (0 - t18);
    t22 = (t21 * -1);
    t22 = (t22 + 1);
    t20 = (t19 + 12U);
    *((unsigned int *)t20) = t22;
    t20 = (t10 + 4U);
    t23 = (t0 + 2880);
    t24 = (t20 + 88U);
    *((char **)t24) = t23;
    t25 = (char *)alloca(t15);
    t26 = (t20 + 56U);
    *((char **)t26) = t25;
    xsi_type_set_default_value(t23, t25, t16);
    t27 = (t20 + 64U);
    *((char **)t27) = t16;
    t28 = (t20 + 80U);
    *((unsigned int *)t28) = t15;
    t29 = (t3 + 12U);
    t22 = *((unsigned int *)t29);
    t30 = (t5 + 12U);
    t31 = *((unsigned int *)t30);
    t32 = ieee_p_3039841270_sub_3160373586_2334307252(t0, ((t22)), ((t31)));
    t33 = (t32 - 1);
    t34 = (0 - t33);
    t35 = (t34 * -1);
    t35 = (t35 + 1);
    t35 = (t35 * 1U);
    t37 = (t3 + 12U);
    t38 = *((unsigned int *)t37);
    t39 = (t5 + 12U);
    t40 = *((unsigned int *)t39);
    t41 = ieee_p_3039841270_sub_3160373586_2334307252(t0, ((t38)), ((t40)));
    t42 = (t41 - 1);
    t43 = (t36 + 0U);
    t44 = (t43 + 0U);
    *((int *)t44) = t42;
    t44 = (t43 + 4U);
    *((int *)t44) = 0;
    t44 = (t43 + 8U);
    *((int *)t44) = -1;
    t45 = (0 - t42);
    t46 = (t45 * -1);
    t46 = (t46 + 1);
    t44 = (t43 + 12U);
    *((unsigned int *)t44) = t46;
    t44 = (t10 + 124U);
    t47 = (t0 + 2880);
    t48 = (t44 + 88U);
    *((char **)t48) = t47;
    t49 = (char *)alloca(t35);
    t50 = (t44 + 56U);
    *((char **)t50) = t49;
    xsi_type_set_default_value(t47, t49, t36);
    t51 = (t44 + 64U);
    *((char **)t51) = t36;
    t52 = (t44 + 80U);
    *((unsigned int *)t52) = t35;
    t54 = (t5 + 12U);
    t46 = *((unsigned int *)t54);
    t55 = (t46 - 1);
    t56 = (t53 + 0U);
    t57 = (t56 + 0U);
    *((int *)t57) = t55;
    t57 = (t56 + 4U);
    *((int *)t57) = 0;
    t57 = (t56 + 8U);
    *((int *)t57) = -1;
    t58 = (0 - t55);
    t59 = (t58 * -1);
    t59 = (t59 + 1);
    t57 = (t56 + 12U);
    *((unsigned int *)t57) = t59;
    t57 = (t10 + 244U);
    t60 = ((STD_STANDARD) + 384);
    t61 = (t57 + 88U);
    *((char **)t61) = t60;
    t63 = (t57 + 56U);
    *((char **)t63) = t62;
    xsi_type_set_default_value(t60, t62, 0);
    t64 = (t57 + 80U);
    *((unsigned int *)t64) = 4U;
    t65 = (t11 + 4U);
    t66 = (t2 != 0);
    if (t66 == 1)
        goto LAB3;

LAB2:    t67 = (t11 + 12U);
    *((char **)t67) = t3;
    t68 = (t11 + 20U);
    t69 = (t4 != 0);
    if (t69 == 1)
        goto LAB5;

LAB4:    t70 = (t11 + 28U);
    *((char **)t70) = t5;
    t71 = (t11 + 36U);
    *((char **)t71) = t6;
    t72 = (t11 + 44U);
    *((char **)t72) = t7;
    t73 = (t11 + 52U);
    *((char **)t73) = t8;
    t74 = (t11 + 60U);
    *((char **)t74) = t9;
    t75 = (t0 + 4498);
    t79 = (t0 + 2880);
    t81 = (t80 + 0U);
    t82 = (t81 + 0U);
    *((int *)t82) = 0;
    t82 = (t81 + 4U);
    *((int *)t82) = 0;
    t82 = (t81 + 8U);
    *((int *)t82) = 1;
    t83 = (0 - 0);
    t59 = (t83 * 1);
    t59 = (t59 + 1);
    t82 = (t81 + 12U);
    *((unsigned int *)t82) = t59;
    t77 = xsi_base_array_concat(t77, t78, t79, (char)97, t75, t80, (char)97, t2, t3, (char)101);
    t82 = (t20 + 56U);
    t84 = *((char **)t82);
    t82 = (t84 + 0);
    t85 = (t3 + 12U);
    t59 = *((unsigned int *)t85);
    t59 = (t59 * 1U);
    t86 = (1U + t59);
    memcpy(t82, t77, t86);
    t12 = (t36 + 12U);
    t13 = *((unsigned int *)t12);
    t13 = (t13 * 1U);
    t17 = xsi_get_transient_memory(t13);
    memset(t17, 0, t13);
    t19 = t17;
    memset(t19, (unsigned char)0, t13);
    t23 = (t44 + 56U);
    t24 = *((char **)t23);
    t23 = (t24 + 0);
    t26 = (t36 + 12U);
    t15 = *((unsigned int *)t26);
    t15 = (t15 * 1U);
    memcpy(t23, t17, t15);
    t14 = (-(1));
    t12 = (t57 + 56U);
    t17 = *((char **)t12);
    t12 = (t17 + 0);
    *((int *)t12) = t14;
    t12 = (t53 + 8U);
    t14 = *((int *)t12);
    t17 = (t53 + 4U);
    t21 = *((int *)t17);
    t19 = (t53 + 0U);
    t32 = *((int *)t19);
    t33 = t32;
    t34 = t21;

LAB6:    t41 = (t34 * t14);
    t42 = (t33 * t14);
    if (t42 <= t41)
        goto LAB7;

LAB9:    t12 = (t57 + 56U);
    t17 = *((char **)t12);
    t14 = *((int *)t17);
    t66 = (t14 >= 0);
    if (t66 == 0)
        goto LAB15;

LAB16:    t12 = (t3 + 12U);
    t13 = *((unsigned int *)t12);
    t17 = (t57 + 56U);
    t19 = *((char **)t17);
    t14 = *((int *)t19);
    t21 = (t14 + 1);
    t32 = (t13 - t21);
    t33 = t32;
    t34 = 0;

LAB17:    if (t33 >= t34)
        goto LAB18;

LAB20:    t12 = (t44 + 56U);
    t17 = *((char **)t12);
    t12 = (t7 + 12U);
    t13 = *((unsigned int *)t12);
    t19 = ieee_p_3039841270_sub_2675122452_2334307252(t0, t78, t17, t36, ((t13)));
    t23 = (t6 + 0);
    t24 = (t78 + 12U);
    t15 = *((unsigned int *)t24);
    t15 = (t15 * 1U);
    memcpy(t23, t19, t15);
    t12 = (t20 + 56U);
    t17 = *((char **)t12);
    t12 = (t9 + 12U);
    t13 = *((unsigned int *)t12);
    t19 = ieee_p_3039841270_sub_2675122452_2334307252(t0, t78, t17, t16, ((t13)));
    t23 = (t8 + 0);
    t24 = (t78 + 12U);
    t15 = *((unsigned int *)t24);
    t15 = (t15 * 1U);
    memcpy(t23, t19, t15);

LAB1:    return;
LAB3:    *((char **)t65) = t2;
    goto LAB2;

LAB5:    *((char **)t68) = t4;
    goto LAB4;

LAB7:    t23 = (t4 + 0);
    t24 = (t53 + 0U);
    t45 = *((int *)t24);
    t26 = (t53 + 8U);
    t55 = *((int *)t26);
    t58 = (t33 - t45);
    t13 = (t58 * t55);
    t15 = (1U * t13);
    t18 = (0 + t15);
    t27 = (t23 + t18);
    t66 = *((unsigned char *)t27);
    t69 = (t66 == (unsigned char)1);
    if (t69 != 0)
        goto LAB10;

LAB12:
LAB11:
LAB8:    if (t33 == t34)
        goto LAB9;

LAB14:    t21 = (t33 + t14);
    t33 = t21;
    goto LAB6;

LAB10:    t28 = (t57 + 56U);
    t29 = *((char **)t28);
    t28 = (t29 + 0);
    *((int *)t28) = t33;
    goto LAB9;

LAB13:    goto LAB11;

LAB15:    t12 = (t0 + 4499);
    xsi_report(t12, 24U, (unsigned char)2);
    goto LAB16;

LAB18:    t17 = (t20 + 56U);
    t23 = *((char **)t17);
    t17 = (t16 + 0U);
    t41 = *((int *)t17);
    t24 = (t57 + 56U);
    t26 = *((char **)t24);
    t42 = *((int *)t26);
    t45 = (t42 + t33);
    t55 = (t45 + 1);
    t15 = (t41 - t55);
    t24 = (t16 + 4U);
    t58 = *((int *)t24);
    t27 = (t16 + 8U);
    t83 = *((int *)t27);
    xsi_vhdl_check_range_of_slice(t41, t58, t83, t55, t33, -1);
    t18 = (t15 * 1U);
    t22 = (0 + t18);
    t28 = (t23 + t22);
    t29 = (t57 + 56U);
    t30 = *((char **)t29);
    t87 = *((int *)t30);
    t88 = (t87 + t33);
    t89 = (t88 + 1);
    t29 = (t78 + 0U);
    t37 = (t29 + 0U);
    *((int *)t37) = t89;
    t37 = (t29 + 4U);
    *((int *)t37) = t33;
    t37 = (t29 + 8U);
    *((int *)t37) = -1;
    t90 = (t33 - t89);
    t31 = (t90 * -1);
    t31 = (t31 + 1);
    t37 = (t29 + 12U);
    *((unsigned int *)t37) = t31;
    t37 = (t0 + 4523);
    t43 = (t4 + 0);
    t47 = (t53 + 0U);
    t91 = *((int *)t47);
    t48 = (t57 + 56U);
    t50 = *((char **)t48);
    t92 = *((int *)t50);
    t31 = (t91 - t92);
    t48 = (t53 + 4U);
    t93 = *((int *)t48);
    t51 = (t53 + 8U);
    t94 = *((int *)t51);
    xsi_vhdl_check_range_of_slice(t91, t93, t94, t92, 0, -1);
    t35 = (t31 * 1U);
    t38 = (0 + t35);
    t52 = (t43 + t38);
    t56 = (t0 + 2880);
    t60 = (t95 + 0U);
    t61 = (t60 + 0U);
    *((int *)t61) = 0;
    t61 = (t60 + 4U);
    *((int *)t61) = 0;
    t61 = (t60 + 8U);
    *((int *)t61) = 1;
    t96 = (0 - 0);
    t40 = (t96 * 1);
    t40 = (t40 + 1);
    t61 = (t60 + 12U);
    *((unsigned int *)t61) = t40;
    t61 = (t57 + 56U);
    t63 = *((char **)t61);
    t98 = *((int *)t63);
    t61 = (t97 + 0U);
    t64 = (t61 + 0U);
    *((int *)t64) = t98;
    t64 = (t61 + 4U);
    *((int *)t64) = 0;
    t64 = (t61 + 8U);
    *((int *)t64) = -1;
    t99 = (0 - t98);
    t40 = (t99 * -1);
    t40 = (t40 + 1);
    t64 = (t61 + 12U);
    *((unsigned int *)t64) = t40;
    t54 = xsi_base_array_concat(t54, t80, t56, (char)97, t37, t95, (char)97, t52, t97, (char)101);
    t66 = ieee_p_3039841270_sub_4080297485_2334307252(t0, t28, t78, t54, t80);
    if (t66 != 0)
        goto LAB21;

LAB23:
LAB22:    t12 = (t20 + 56U);
    t17 = *((char **)t12);
    t12 = (t57 + 56U);
    t19 = *((char **)t12);
    t14 = *((int *)t19);
    t21 = (t14 + t33);
    t32 = (t21 + 1);
    t12 = (t16 + 0U);
    t41 = *((int *)t12);
    t23 = (t16 + 8U);
    t42 = *((int *)t23);
    t45 = (t32 - t41);
    t13 = (t45 * t42);
    t24 = (t16 + 4U);
    t55 = *((int *)t24);
    xsi_vhdl_check_range_of_index(t41, t55, t42, t32);
    t15 = (1U * t13);
    t18 = (0 + t15);
    t26 = (t17 + t18);
    t66 = *((unsigned char *)t26);
    t69 = (t66 == (unsigned char)0);
    if (t69 == 0)
        goto LAB24;

LAB25:
LAB19:    if (t33 == t34)
        goto LAB20;

LAB26:    t14 = (t33 + -1);
    t33 = t14;
    goto LAB17;

LAB21:    t64 = (t20 + 56U);
    t75 = *((char **)t64);
    t64 = (t16 + 0U);
    t101 = *((int *)t64);
    t76 = (t57 + 56U);
    t77 = *((char **)t76);
    t102 = *((int *)t77);
    t103 = (t102 + t33);
    t104 = (t103 + 1);
    t40 = (t101 - t104);
    t76 = (t16 + 4U);
    t105 = *((int *)t76);
    t79 = (t16 + 8U);
    t106 = *((int *)t79);
    xsi_vhdl_check_range_of_slice(t101, t105, t106, t104, t33, -1);
    t46 = (t40 * 1U);
    t59 = (0 + t46);
    t81 = (t75 + t59);
    t82 = (t57 + 56U);
    t84 = *((char **)t82);
    t108 = *((int *)t84);
    t109 = (t108 + t33);
    t110 = (t109 + 1);
    t82 = (t107 + 0U);
    t85 = (t82 + 0U);
    *((int *)t85) = t110;
    t85 = (t82 + 4U);
    *((int *)t85) = t33;
    t85 = (t82 + 8U);
    *((int *)t85) = -1;
    t111 = (t33 - t110);
    t86 = (t111 * -1);
    t86 = (t86 + 1);
    t85 = (t82 + 12U);
    *((unsigned int *)t85) = t86;
    t85 = (t0 + 4524);
    t113 = (t4 + 0);
    t114 = (t53 + 0U);
    t115 = *((int *)t114);
    t116 = (t57 + 56U);
    t117 = *((char **)t116);
    t118 = *((int *)t117);
    t86 = (t115 - t118);
    t116 = (t53 + 4U);
    t119 = *((int *)t116);
    t120 = (t53 + 8U);
    t121 = *((int *)t120);
    xsi_vhdl_check_range_of_slice(t115, t119, t121, t118, 0, -1);
    t122 = (t86 * 1U);
    t123 = (0 + t122);
    t124 = (t113 + t123);
    t127 = (t0 + 2880);
    t129 = (t128 + 0U);
    t130 = (t129 + 0U);
    *((int *)t130) = 0;
    t130 = (t129 + 4U);
    *((int *)t130) = 0;
    t130 = (t129 + 8U);
    *((int *)t130) = 1;
    t131 = (0 - 0);
    t132 = (t131 * 1);
    t132 = (t132 + 1);
    t130 = (t129 + 12U);
    *((unsigned int *)t130) = t132;
    t130 = (t57 + 56U);
    t134 = *((char **)t130);
    t135 = *((int *)t134);
    t130 = (t133 + 0U);
    t136 = (t130 + 0U);
    *((int *)t136) = t135;
    t136 = (t130 + 4U);
    *((int *)t136) = 0;
    t136 = (t130 + 8U);
    *((int *)t136) = -1;
    t137 = (0 - t135);
    t132 = (t137 * -1);
    t132 = (t132 + 1);
    t136 = (t130 + 12U);
    *((unsigned int *)t136) = t132;
    t125 = xsi_base_array_concat(t125, t126, t127, (char)97, t85, t128, (char)97, t124, t133, (char)101);
    t136 = ieee_p_3039841270_sub_1717229644_2334307252(t0, t100, t81, t107, t125, t126);
    t138 = (t20 + 56U);
    t139 = *((char **)t138);
    t138 = (t16 + 0U);
    t140 = *((int *)t138);
    t141 = (t57 + 56U);
    t142 = *((char **)t141);
    t143 = *((int *)t142);
    t144 = (t143 + t33);
    t145 = (t144 + 1);
    t132 = (t140 - t145);
    t141 = (t16 + 4U);
    t146 = *((int *)t141);
    t147 = (t16 + 8U);
    t148 = *((int *)t147);
    xsi_vhdl_check_range_of_slice(t140, t146, t148, t145, t33, -1);
    t149 = (t132 * 1U);
    t150 = (0 + t149);
    t151 = (t139 + t150);
    t152 = (t100 + 12U);
    t153 = *((unsigned int *)t152);
    t154 = (1U * t153);
    memcpy(t151, t136, t154);
    t12 = (t44 + 56U);
    t17 = *((char **)t12);
    t12 = (t36 + 0U);
    t14 = *((int *)t12);
    t19 = (t36 + 8U);
    t21 = *((int *)t19);
    t32 = (t33 - t14);
    t13 = (t32 * t21);
    t23 = (t36 + 4U);
    t41 = *((int *)t23);
    xsi_vhdl_check_range_of_index(t14, t41, t21, t33);
    t15 = (1U * t13);
    t18 = (0 + t15);
    t24 = (t17 + t18);
    *((unsigned char *)t24) = (unsigned char)1;
    goto LAB22;

LAB24:    t27 = (t0 + 4525);
    xsi_report(t27, 40U, (unsigned char)2);
    goto LAB25;

}

char *ieee_p_3039841270_sub_3362593643_2334307252(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t6[248];
    char t7[24];
    char t14[8];
    char t17[16];
    char t33[16];
    char *t0;
    char *t8;
    unsigned int t9;
    int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    int t20;
    char *t21;
    int t22;
    unsigned int t23;
    char *t24;
    int t25;
    int t26;
    char *t27;
    char *t28;
    char *t29;
    int t30;
    int t31;
    unsigned int t32;
    char *t34;
    int t35;
    char *t36;
    int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned char t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    int t51;
    unsigned char t52;
    char *t53;
    int t54;
    char *t55;
    char *t56;
    int t57;
    int t58;
    int t59;
    char *t60;
    int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    char *t66;
    int t67;
    char *t68;
    char *t69;
    int t70;
    unsigned int t71;
    int t72;
    char *t73;
    int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    char *t79;
    int t80;
    int t81;
    int t82;
    unsigned int t83;
    unsigned int t84;

LAB0:    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = (t9 - 1);
    t11 = (t6 + 4U);
    t12 = ((STD_STANDARD) + 384);
    t13 = (t11 + 88U);
    *((char **)t13) = t12;
    t15 = (t11 + 56U);
    *((char **)t15) = t14;
    *((int *)t14) = t10;
    t16 = (t11 + 80U);
    *((unsigned int *)t16) = 4U;
    t18 = (t11 + 56U);
    t19 = *((char **)t18);
    t20 = *((int *)t19);
    t18 = (t17 + 0U);
    t21 = (t18 + 0U);
    *((int *)t21) = t20;
    t21 = (t18 + 4U);
    *((int *)t21) = 0;
    t21 = (t18 + 8U);
    *((int *)t21) = -1;
    t22 = (0 - t20);
    t23 = (t22 * -1);
    t23 = (t23 + 1);
    t21 = (t18 + 12U);
    *((unsigned int *)t21) = t23;
    t21 = (t11 + 56U);
    t24 = *((char **)t21);
    t25 = *((int *)t24);
    t26 = (0 - t25);
    t23 = (t26 * -1);
    t23 = (t23 + 1);
    t23 = (t23 * 1U);
    t21 = xsi_get_transient_memory(t23);
    memset(t21, 0, t23);
    t27 = t21;
    memset(t27, (unsigned char)0, t23);
    t28 = (t11 + 56U);
    t29 = *((char **)t28);
    t30 = *((int *)t29);
    t31 = (0 - t30);
    t32 = (t31 * -1);
    t32 = (t32 + 1);
    t32 = (t32 * 1U);
    t28 = (t11 + 56U);
    t34 = *((char **)t28);
    t35 = *((int *)t34);
    t28 = (t33 + 0U);
    t36 = (t28 + 0U);
    *((int *)t36) = t35;
    t36 = (t28 + 4U);
    *((int *)t36) = 0;
    t36 = (t28 + 8U);
    *((int *)t36) = -1;
    t37 = (0 - t35);
    t38 = (t37 * -1);
    t38 = (t38 + 1);
    t36 = (t28 + 12U);
    *((unsigned int *)t36) = t38;
    t36 = (t6 + 124U);
    t39 = ((STD_STANDARD) + 1112);
    t40 = (t36 + 88U);
    *((char **)t40) = t39;
    t41 = (char *)alloca(t32);
    t42 = (t36 + 56U);
    *((char **)t42) = t41;
    memcpy(t41, t21, t32);
    t43 = (t36 + 64U);
    *((char **)t43) = t33;
    t44 = (t36 + 80U);
    *((unsigned int *)t44) = t32;
    t45 = (t7 + 4U);
    t46 = (t3 != 0);
    if (t46 == 1)
        goto LAB3;

LAB2:    t47 = (t7 + 12U);
    *((char **)t47) = t4;
    t48 = (t7 + 20U);
    *((int *)t48) = t5;
    t49 = (t11 + 56U);
    t50 = *((char **)t49);
    t51 = *((int *)t50);
    t52 = (t5 <= t51);
    if (t52 != 0)
        goto LAB4;

LAB6:
LAB5:    t8 = (t36 + 56U);
    t12 = *((char **)t8);
    t8 = (t33 + 12U);
    t9 = *((unsigned int *)t8);
    t9 = (t9 * 1U);
    t0 = xsi_get_transient_memory(t9);
    memcpy(t0, t12, t9);
    t13 = (t33 + 0U);
    t10 = *((int *)t13);
    t15 = (t33 + 4U);
    t20 = *((int *)t15);
    t16 = (t33 + 8U);
    t22 = *((int *)t16);
    t18 = (t2 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = t10;
    t19 = (t18 + 4U);
    *((int *)t19) = t20;
    t19 = (t18 + 8U);
    *((int *)t19) = t22;
    t25 = (t20 - t10);
    t23 = (t25 * t22);
    t23 = (t23 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t23;

LAB1:    return t0;
LAB3:    *((char **)t45) = t3;
    goto LAB2;

LAB4:    t49 = (t3 + 0);
    t53 = (t17 + 0U);
    t54 = *((int *)t53);
    t55 = (t11 + 56U);
    t56 = *((char **)t55);
    t57 = *((int *)t56);
    t58 = (t57 - t5);
    t38 = (t54 - t58);
    t55 = (t17 + 4U);
    t59 = *((int *)t55);
    t60 = (t17 + 8U);
    t61 = *((int *)t60);
    xsi_vhdl_check_range_of_slice(t54, t59, t61, t58, 0, -1);
    t62 = (t38 * 1U);
    t63 = (0 + t62);
    t64 = (t49 + t63);
    t65 = (t36 + 56U);
    t66 = *((char **)t65);
    t65 = (t33 + 0U);
    t67 = *((int *)t65);
    t68 = (t11 + 56U);
    t69 = *((char **)t68);
    t70 = *((int *)t69);
    t71 = (t67 - t70);
    t68 = (t33 + 4U);
    t72 = *((int *)t68);
    t73 = (t33 + 8U);
    t74 = *((int *)t73);
    xsi_vhdl_check_range_of_slice(t67, t72, t74, t70, t5, -1);
    t75 = (t71 * 1U);
    t76 = (0 + t75);
    t77 = (t66 + t76);
    t78 = (t11 + 56U);
    t79 = *((char **)t78);
    t80 = *((int *)t79);
    t81 = (t80 - t5);
    t82 = (0 - t81);
    t83 = (t82 * -1);
    t83 = (t83 + 1);
    t84 = (1U * t83);
    memcpy(t77, t64, t84);
    goto LAB5;

LAB7:;
}

char *ieee_p_3039841270_sub_3362809265_2334307252(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t6[248];
    char t7[24];
    char t14[8];
    char t17[16];
    char t33[16];
    char *t0;
    char *t8;
    unsigned int t9;
    int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    int t20;
    char *t21;
    int t22;
    unsigned int t23;
    char *t24;
    int t25;
    int t26;
    char *t27;
    char *t28;
    char *t29;
    int t30;
    int t31;
    unsigned int t32;
    char *t34;
    int t35;
    char *t36;
    int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned char t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    int t51;
    unsigned char t52;
    char *t53;
    int t54;
    char *t55;
    char *t56;
    int t57;
    int t58;
    char *t59;
    int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;
    char *t65;
    int t66;
    char *t67;
    char *t68;
    int t69;
    int t70;
    unsigned int t71;
    int t72;
    char *t73;
    int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    char *t79;
    int t80;
    int t81;
    unsigned int t82;
    unsigned int t83;

LAB0:    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = (t9 - 1);
    t11 = (t6 + 4U);
    t12 = ((STD_STANDARD) + 384);
    t13 = (t11 + 88U);
    *((char **)t13) = t12;
    t15 = (t11 + 56U);
    *((char **)t15) = t14;
    *((int *)t14) = t10;
    t16 = (t11 + 80U);
    *((unsigned int *)t16) = 4U;
    t18 = (t11 + 56U);
    t19 = *((char **)t18);
    t20 = *((int *)t19);
    t18 = (t17 + 0U);
    t21 = (t18 + 0U);
    *((int *)t21) = t20;
    t21 = (t18 + 4U);
    *((int *)t21) = 0;
    t21 = (t18 + 8U);
    *((int *)t21) = -1;
    t22 = (0 - t20);
    t23 = (t22 * -1);
    t23 = (t23 + 1);
    t21 = (t18 + 12U);
    *((unsigned int *)t21) = t23;
    t21 = (t11 + 56U);
    t24 = *((char **)t21);
    t25 = *((int *)t24);
    t26 = (0 - t25);
    t23 = (t26 * -1);
    t23 = (t23 + 1);
    t23 = (t23 * 1U);
    t21 = xsi_get_transient_memory(t23);
    memset(t21, 0, t23);
    t27 = t21;
    memset(t27, (unsigned char)0, t23);
    t28 = (t11 + 56U);
    t29 = *((char **)t28);
    t30 = *((int *)t29);
    t31 = (0 - t30);
    t32 = (t31 * -1);
    t32 = (t32 + 1);
    t32 = (t32 * 1U);
    t28 = (t11 + 56U);
    t34 = *((char **)t28);
    t35 = *((int *)t34);
    t28 = (t33 + 0U);
    t36 = (t28 + 0U);
    *((int *)t36) = t35;
    t36 = (t28 + 4U);
    *((int *)t36) = 0;
    t36 = (t28 + 8U);
    *((int *)t36) = -1;
    t37 = (0 - t35);
    t38 = (t37 * -1);
    t38 = (t38 + 1);
    t36 = (t28 + 12U);
    *((unsigned int *)t36) = t38;
    t36 = (t6 + 124U);
    t39 = ((STD_STANDARD) + 1112);
    t40 = (t36 + 88U);
    *((char **)t40) = t39;
    t41 = (char *)alloca(t32);
    t42 = (t36 + 56U);
    *((char **)t42) = t41;
    memcpy(t41, t21, t32);
    t43 = (t36 + 64U);
    *((char **)t43) = t33;
    t44 = (t36 + 80U);
    *((unsigned int *)t44) = t32;
    t45 = (t7 + 4U);
    t46 = (t3 != 0);
    if (t46 == 1)
        goto LAB3;

LAB2:    t47 = (t7 + 12U);
    *((char **)t47) = t4;
    t48 = (t7 + 20U);
    *((int *)t48) = t5;
    t49 = (t11 + 56U);
    t50 = *((char **)t49);
    t51 = *((int *)t50);
    t52 = (t5 <= t51);
    if (t52 != 0)
        goto LAB4;

LAB6:
LAB5:    t8 = (t36 + 56U);
    t12 = *((char **)t8);
    t8 = (t33 + 12U);
    t9 = *((unsigned int *)t8);
    t9 = (t9 * 1U);
    t0 = xsi_get_transient_memory(t9);
    memcpy(t0, t12, t9);
    t13 = (t33 + 0U);
    t10 = *((int *)t13);
    t15 = (t33 + 4U);
    t20 = *((int *)t15);
    t16 = (t33 + 8U);
    t22 = *((int *)t16);
    t18 = (t2 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = t10;
    t19 = (t18 + 4U);
    *((int *)t19) = t20;
    t19 = (t18 + 8U);
    *((int *)t19) = t22;
    t25 = (t20 - t10);
    t23 = (t25 * t22);
    t23 = (t23 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t23;

LAB1:    return t0;
LAB3:    *((char **)t45) = t3;
    goto LAB2;

LAB4:    t49 = (t3 + 0);
    t53 = (t17 + 0U);
    t54 = *((int *)t53);
    t55 = (t11 + 56U);
    t56 = *((char **)t55);
    t57 = *((int *)t56);
    t38 = (t54 - t57);
    t55 = (t17 + 4U);
    t58 = *((int *)t55);
    t59 = (t17 + 8U);
    t60 = *((int *)t59);
    xsi_vhdl_check_range_of_slice(t54, t58, t60, t57, t5, -1);
    t61 = (t38 * 1U);
    t62 = (0 + t61);
    t63 = (t49 + t62);
    t64 = (t36 + 56U);
    t65 = *((char **)t64);
    t64 = (t33 + 0U);
    t66 = *((int *)t64);
    t67 = (t11 + 56U);
    t68 = *((char **)t67);
    t69 = *((int *)t68);
    t70 = (t69 - t5);
    t71 = (t66 - t70);
    t67 = (t33 + 4U);
    t72 = *((int *)t67);
    t73 = (t33 + 8U);
    t74 = *((int *)t73);
    xsi_vhdl_check_range_of_slice(t66, t72, t74, t70, 0, -1);
    t75 = (t71 * 1U);
    t76 = (0 + t75);
    t77 = (t65 + t76);
    t78 = (t11 + 56U);
    t79 = *((char **)t78);
    t80 = *((int *)t79);
    t81 = (t5 - t80);
    t82 = (t81 * -1);
    t82 = (t82 + 1);
    t83 = (1U * t82);
    memcpy(t77, t63, t83);
    goto LAB5;

LAB7:;
}

char *ieee_p_3039841270_sub_3384070474_2334307252(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t6[368];
    char t7[24];
    char t14[8];
    char t17[16];
    char t27[16];
    char t42[8];
    char *t0;
    char *t8;
    unsigned int t9;
    int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    int t20;
    char *t21;
    int t22;
    unsigned int t23;
    char *t24;
    int t25;
    int t26;
    char *t28;
    int t29;
    char *t30;
    int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t43;
    char *t44;
    char *t45;
    unsigned char t46;
    char *t47;
    char *t48;
    unsigned char t49;
    char *t50;
    unsigned char t51;
    char *t52;
    char *t53;
    int t54;
    unsigned char t55;
    unsigned int t56;
    char *t57;
    int t58;
    char *t59;
    int t60;
    char *t61;
    int t62;
    char *t63;
    char *t64;
    int t65;
    unsigned int t66;
    unsigned int t67;
    int t68;
    int t69;
    unsigned int t70;
    unsigned int t71;
    int t72;
    int t73;
    int t74;
    int t75;
    int t76;
    int t77;
    int t78;
    int t79;
    int t80;
    int t81;
    int t82;
    unsigned int t83;
    unsigned int t84;

LAB0:    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = (t9 - 1);
    t11 = (t6 + 4U);
    t12 = ((STD_STANDARD) + 384);
    t13 = (t11 + 88U);
    *((char **)t13) = t12;
    t15 = (t11 + 56U);
    *((char **)t15) = t14;
    *((int *)t14) = t10;
    t16 = (t11 + 80U);
    *((unsigned int *)t16) = 4U;
    t18 = (t11 + 56U);
    t19 = *((char **)t18);
    t20 = *((int *)t19);
    t18 = (t17 + 0U);
    t21 = (t18 + 0U);
    *((int *)t21) = t20;
    t21 = (t18 + 4U);
    *((int *)t21) = 0;
    t21 = (t18 + 8U);
    *((int *)t21) = -1;
    t22 = (0 - t20);
    t23 = (t22 * -1);
    t23 = (t23 + 1);
    t21 = (t18 + 12U);
    *((unsigned int *)t21) = t23;
    t21 = (t11 + 56U);
    t24 = *((char **)t21);
    t25 = *((int *)t24);
    t26 = (0 - t25);
    t23 = (t26 * -1);
    t23 = (t23 + 1);
    t23 = (t23 * 1U);
    t21 = (t11 + 56U);
    t28 = *((char **)t21);
    t29 = *((int *)t28);
    t21 = (t27 + 0U);
    t30 = (t21 + 0U);
    *((int *)t30) = t29;
    t30 = (t21 + 4U);
    *((int *)t30) = 0;
    t30 = (t21 + 8U);
    *((int *)t30) = -1;
    t31 = (0 - t29);
    t32 = (t31 * -1);
    t32 = (t32 + 1);
    t30 = (t21 + 12U);
    *((unsigned int *)t30) = t32;
    t30 = (t6 + 124U);
    t33 = ((STD_STANDARD) + 1112);
    t34 = (t30 + 88U);
    *((char **)t34) = t33;
    t35 = (char *)alloca(t23);
    t36 = (t30 + 56U);
    *((char **)t36) = t35;
    xsi_type_set_default_value(t33, t35, t27);
    t37 = (t30 + 64U);
    *((char **)t37) = t27;
    t38 = (t30 + 80U);
    *((unsigned int *)t38) = t23;
    t39 = (t6 + 244U);
    t40 = ((STD_STANDARD) + 832);
    t41 = (t39 + 88U);
    *((char **)t41) = t40;
    t43 = (t39 + 56U);
    *((char **)t43) = t42;
    *((int *)t42) = t5;
    t44 = (t39 + 80U);
    *((unsigned int *)t44) = 4U;
    t45 = (t7 + 4U);
    t46 = (t3 != 0);
    if (t46 == 1)
        goto LAB3;

LAB2:    t47 = (t7 + 12U);
    *((char **)t47) = t4;
    t48 = (t7 + 20U);
    *((int *)t48) = t5;
    t50 = (t4 + 12U);
    t32 = *((unsigned int *)t50);
    t51 = (t32 <= 1);
    if (t51 == 1)
        goto LAB7;

LAB8:    t52 = (t39 + 56U);
    t53 = *((char **)t52);
    t54 = *((int *)t53);
    t55 = (t54 == 0);
    t49 = t55;

LAB9:    if (t49 != 0)
        goto LAB4;

LAB6:    t8 = (t39 + 56U);
    t12 = *((char **)t8);
    t10 = *((int *)t12);
    t8 = (t11 + 56U);
    t13 = *((char **)t8);
    t20 = *((int *)t13);
    t46 = (t10 > t20);
    if (t46 != 0)
        goto LAB11;

LAB13:
LAB12:    t8 = (t3 + 0);
    t12 = (t17 + 0U);
    t10 = *((int *)t12);
    t13 = (t11 + 56U);
    t15 = *((char **)t13);
    t20 = *((int *)t15);
    t9 = (t10 - t20);
    t13 = (t39 + 56U);
    t16 = *((char **)t13);
    t22 = *((int *)t16);
    t13 = (t17 + 4U);
    t25 = *((int *)t13);
    t18 = (t17 + 8U);
    t26 = *((int *)t18);
    xsi_vhdl_check_range_of_slice(t10, t25, t26, t20, t22, -1);
    t23 = (t9 * 1U);
    t32 = (0 + t23);
    t19 = (t8 + t32);
    t21 = (t30 + 56U);
    t24 = *((char **)t21);
    t21 = (t27 + 0U);
    t29 = *((int *)t21);
    t28 = (t11 + 56U);
    t33 = *((char **)t28);
    t31 = *((int *)t33);
    t28 = (t39 + 56U);
    t34 = *((char **)t28);
    t54 = *((int *)t34);
    t58 = (t31 - t54);
    t56 = (t29 - t58);
    t28 = (t27 + 4U);
    t60 = *((int *)t28);
    t36 = (t27 + 8U);
    t62 = *((int *)t36);
    xsi_vhdl_check_range_of_slice(t29, t60, t62, t58, 0, -1);
    t66 = (t56 * 1U);
    t67 = (0 + t66);
    t37 = (t24 + t67);
    t38 = (t11 + 56U);
    t40 = *((char **)t38);
    t65 = *((int *)t40);
    t38 = (t39 + 56U);
    t41 = *((char **)t38);
    t68 = *((int *)t41);
    t69 = (t68 - t65);
    t70 = (t69 * -1);
    t70 = (t70 + 1);
    t71 = (1U * t70);
    memcpy(t37, t19, t71);
    t8 = (t11 + 56U);
    t12 = *((char **)t8);
    t10 = *((int *)t12);
    t8 = (t11 + 56U);
    t13 = *((char **)t8);
    t20 = *((int *)t13);
    t8 = (t39 + 56U);
    t15 = *((char **)t8);
    t22 = *((int *)t15);
    t25 = (t20 - t22);
    t26 = (t25 + 1);
    t29 = (t26 - t10);
    t9 = (t29 * -1);
    t9 = (t9 + 1);
    t23 = (1U * t9);
    t8 = xsi_get_transient_memory(t23);
    memset(t8, 0, t23);
    t16 = t8;
    t18 = (t3 + 0);
    t19 = (t11 + 56U);
    t21 = *((char **)t19);
    t31 = *((int *)t21);
    t19 = (t17 + 0U);
    t54 = *((int *)t19);
    t24 = (t17 + 8U);
    t58 = *((int *)t24);
    t60 = (t31 - t54);
    t32 = (t60 * t58);
    t28 = (t17 + 4U);
    t62 = *((int *)t28);
    xsi_vhdl_check_range_of_index(t54, t62, t58, t31);
    t56 = (1U * t32);
    t66 = (0 + t56);
    t33 = (t18 + t66);
    t46 = *((unsigned char *)t33);
    memset(t16, t46, t23);
    t34 = (t30 + 56U);
    t36 = *((char **)t34);
    t34 = (t27 + 0U);
    t65 = *((int *)t34);
    t37 = (t11 + 56U);
    t38 = *((char **)t37);
    t68 = *((int *)t38);
    t67 = (t65 - t68);
    t37 = (t11 + 56U);
    t40 = *((char **)t37);
    t69 = *((int *)t40);
    t37 = (t39 + 56U);
    t41 = *((char **)t37);
    t72 = *((int *)t41);
    t73 = (t69 - t72);
    t74 = (t73 + 1);
    t37 = (t27 + 4U);
    t75 = *((int *)t37);
    t43 = (t27 + 8U);
    t76 = *((int *)t43);
    xsi_vhdl_check_range_of_slice(t65, t75, t76, t68, t74, -1);
    t70 = (t67 * 1U);
    t71 = (0 + t70);
    t44 = (t36 + t71);
    t50 = (t11 + 56U);
    t52 = *((char **)t50);
    t77 = *((int *)t52);
    t50 = (t11 + 56U);
    t53 = *((char **)t50);
    t78 = *((int *)t53);
    t50 = (t39 + 56U);
    t57 = *((char **)t50);
    t79 = *((int *)t57);
    t80 = (t78 - t79);
    t81 = (t80 + 1);
    t82 = (t81 - t77);
    t83 = (t82 * -1);
    t83 = (t83 + 1);
    t84 = (1U * t83);
    memcpy(t44, t8, t84);

LAB5:    t8 = (t30 + 56U);
    t12 = *((char **)t8);
    t8 = (t27 + 12U);
    t9 = *((unsigned int *)t8);
    t9 = (t9 * 1U);
    t0 = xsi_get_transient_memory(t9);
    memcpy(t0, t12, t9);
    t13 = (t27 + 0U);
    t10 = *((int *)t13);
    t15 = (t27 + 4U);
    t20 = *((int *)t15);
    t16 = (t27 + 8U);
    t22 = *((int *)t16);
    t18 = (t2 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = t10;
    t19 = (t18 + 4U);
    *((int *)t19) = t20;
    t19 = (t18 + 8U);
    *((int *)t19) = t22;
    t25 = (t20 - t10);
    t23 = (t25 * t22);
    t23 = (t23 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t23;

LAB1:    return t0;
LAB3:    *((char **)t45) = t3;
    goto LAB2;

LAB4:    t52 = (t4 + 12U);
    t56 = *((unsigned int *)t52);
    t56 = (t56 * 1U);
    t0 = xsi_get_transient_memory(t56);
    memcpy(t0, t3, t56);
    t57 = (t4 + 0U);
    t58 = *((int *)t57);
    t59 = (t4 + 4U);
    t60 = *((int *)t59);
    t61 = (t4 + 8U);
    t62 = *((int *)t61);
    t63 = (t2 + 0U);
    t64 = (t63 + 0U);
    *((int *)t64) = t58;
    t64 = (t63 + 4U);
    *((int *)t64) = t60;
    t64 = (t63 + 8U);
    *((int *)t64) = t62;
    t65 = (t60 - t58);
    t66 = (t65 * t62);
    t66 = (t66 + 1);
    t64 = (t63 + 12U);
    *((unsigned int *)t64) = t66;
    goto LAB1;

LAB7:    t49 = (unsigned char)1;
    goto LAB9;

LAB10:    goto LAB5;

LAB11:    t8 = (t11 + 56U);
    t15 = *((char **)t8);
    t22 = *((int *)t15);
    t8 = (t39 + 56U);
    t16 = *((char **)t8);
    t8 = (t16 + 0);
    *((int *)t8) = t22;
    goto LAB12;

LAB14:;
}

char *ieee_p_3039841270_sub_3493178686_2334307252(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t6[368];
    char t7[24];
    char t14[8];
    char t17[16];
    char t25[16];
    char t41[8];
    char *t0;
    char *t8;
    unsigned int t9;
    int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    int t20;
    char *t21;
    int t22;
    unsigned int t23;
    char *t24;
    char *t26;
    char *t27;
    int t28;
    char *t29;
    int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    char *t44;
    unsigned char t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    int t50;
    int t51;
    int t52;
    char *t53;
    int t54;
    unsigned int t55;
    int t56;
    int t57;
    int t58;
    unsigned int t59;
    unsigned int t60;
    int t61;
    int t62;
    int t63;
    int t64;
    unsigned int t65;
    unsigned int t66;
    int t67;
    int t68;
    int t69;

LAB0:    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = (t9 - 1);
    t11 = (t6 + 4U);
    t12 = ((STD_STANDARD) + 384);
    t13 = (t11 + 88U);
    *((char **)t13) = t12;
    t15 = (t11 + 56U);
    *((char **)t15) = t14;
    *((int *)t14) = t10;
    t16 = (t11 + 80U);
    *((unsigned int *)t16) = 4U;
    t18 = (t11 + 56U);
    t19 = *((char **)t18);
    t20 = *((int *)t19);
    t18 = (t17 + 0U);
    t21 = (t18 + 0U);
    *((int *)t21) = t20;
    t21 = (t18 + 4U);
    *((int *)t21) = 0;
    t21 = (t18 + 8U);
    *((int *)t21) = -1;
    t22 = (0 - t20);
    t23 = (t22 * -1);
    t23 = (t23 + 1);
    t21 = (t18 + 12U);
    *((unsigned int *)t21) = t23;
    t21 = (t3 + 0);
    t24 = (t17 + 12U);
    t23 = *((unsigned int *)t24);
    t23 = (t23 * 1U);
    t26 = (t11 + 56U);
    t27 = *((char **)t26);
    t28 = *((int *)t27);
    t26 = (t25 + 0U);
    t29 = (t26 + 0U);
    *((int *)t29) = t28;
    t29 = (t26 + 4U);
    *((int *)t29) = 0;
    t29 = (t26 + 8U);
    *((int *)t29) = -1;
    t30 = (0 - t28);
    t31 = (t30 * -1);
    t31 = (t31 + 1);
    t29 = (t26 + 12U);
    *((unsigned int *)t29) = t31;
    t29 = (t6 + 124U);
    t32 = ((STD_STANDARD) + 1112);
    t33 = (t29 + 88U);
    *((char **)t33) = t32;
    t34 = (char *)alloca(t23);
    t35 = (t29 + 56U);
    *((char **)t35) = t34;
    memcpy(t34, t21, t23);
    t36 = (t29 + 64U);
    *((char **)t36) = t25;
    t37 = (t29 + 80U);
    *((unsigned int *)t37) = t23;
    t38 = (t6 + 244U);
    t39 = ((STD_STANDARD) + 384);
    t40 = (t38 + 88U);
    *((char **)t40) = t39;
    t42 = (t38 + 56U);
    *((char **)t42) = t41;
    xsi_type_set_default_value(t39, t41, 0);
    t43 = (t38 + 80U);
    *((unsigned int *)t43) = 4U;
    t44 = (t7 + 4U);
    t45 = (t3 != 0);
    if (t45 == 1)
        goto LAB3;

LAB2:    t46 = (t7 + 12U);
    *((char **)t46) = t4;
    t47 = (t7 + 20U);
    *((int *)t47) = t5;
    t48 = (t11 + 56U);
    t49 = *((char **)t48);
    t50 = *((int *)t49);
    t51 = (t50 + 1);
    t52 = xsi_vhdl_mod(t5, t51);
    t48 = (t38 + 56U);
    t53 = *((char **)t48);
    t48 = (t53 + 0);
    *((int *)t48) = t52;
    t8 = (t38 + 56U);
    t12 = *((char **)t8);
    t10 = *((int *)t12);
    t45 = (t10 != 0);
    if (t45 != 0)
        goto LAB4;

LAB6:
LAB5:    t8 = (t29 + 56U);
    t12 = *((char **)t8);
    t8 = (t25 + 12U);
    t9 = *((unsigned int *)t8);
    t9 = (t9 * 1U);
    t0 = xsi_get_transient_memory(t9);
    memcpy(t0, t12, t9);
    t13 = (t25 + 0U);
    t10 = *((int *)t13);
    t15 = (t25 + 4U);
    t20 = *((int *)t15);
    t16 = (t25 + 8U);
    t22 = *((int *)t16);
    t18 = (t2 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = t10;
    t19 = (t18 + 4U);
    *((int *)t19) = t20;
    t19 = (t18 + 8U);
    *((int *)t19) = t22;
    t28 = (t20 - t10);
    t23 = (t28 * t22);
    t23 = (t23 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t23;

LAB1:    return t0;
LAB3:    *((char **)t44) = t3;
    goto LAB2;

LAB4:    t8 = (t3 + 0);
    t13 = (t17 + 0U);
    t20 = *((int *)t13);
    t15 = (t11 + 56U);
    t16 = *((char **)t15);
    t22 = *((int *)t16);
    t15 = (t38 + 56U);
    t18 = *((char **)t15);
    t28 = *((int *)t18);
    t30 = (t22 - t28);
    t9 = (t20 - t30);
    t15 = (t17 + 4U);
    t50 = *((int *)t15);
    t19 = (t17 + 8U);
    t51 = *((int *)t19);
    xsi_vhdl_check_range_of_slice(t20, t50, t51, t30, 0, -1);
    t23 = (t9 * 1U);
    t31 = (0 + t23);
    t21 = (t8 + t31);
    t24 = (t29 + 56U);
    t26 = *((char **)t24);
    t24 = (t25 + 0U);
    t52 = *((int *)t24);
    t27 = (t11 + 56U);
    t32 = *((char **)t27);
    t54 = *((int *)t32);
    t55 = (t52 - t54);
    t27 = (t38 + 56U);
    t33 = *((char **)t27);
    t56 = *((int *)t33);
    t27 = (t25 + 4U);
    t57 = *((int *)t27);
    t35 = (t25 + 8U);
    t58 = *((int *)t35);
    xsi_vhdl_check_range_of_slice(t52, t57, t58, t54, t56, -1);
    t59 = (t55 * 1U);
    t60 = (0 + t59);
    t36 = (t26 + t60);
    t37 = (t11 + 56U);
    t39 = *((char **)t37);
    t61 = *((int *)t39);
    t37 = (t38 + 56U);
    t40 = *((char **)t37);
    t62 = *((int *)t40);
    t63 = (t61 - t62);
    t64 = (0 - t63);
    t65 = (t64 * -1);
    t65 = (t65 + 1);
    t66 = (1U * t65);
    memcpy(t36, t21, t66);
    t8 = (t3 + 0);
    t12 = (t17 + 0U);
    t10 = *((int *)t12);
    t13 = (t11 + 56U);
    t15 = *((char **)t13);
    t20 = *((int *)t15);
    t9 = (t10 - t20);
    t13 = (t11 + 56U);
    t16 = *((char **)t13);
    t22 = *((int *)t16);
    t13 = (t38 + 56U);
    t18 = *((char **)t13);
    t28 = *((int *)t18);
    t30 = (t22 - t28);
    t50 = (t30 + 1);
    t13 = (t17 + 4U);
    t51 = *((int *)t13);
    t19 = (t17 + 8U);
    t52 = *((int *)t19);
    xsi_vhdl_check_range_of_slice(t10, t51, t52, t20, t50, -1);
    t23 = (t9 * 1U);
    t31 = (0 + t23);
    t21 = (t8 + t31);
    t24 = (t29 + 56U);
    t26 = *((char **)t24);
    t24 = (t25 + 0U);
    t54 = *((int *)t24);
    t27 = (t38 + 56U);
    t32 = *((char **)t27);
    t56 = *((int *)t32);
    t57 = (t56 - 1);
    t55 = (t54 - t57);
    t27 = (t25 + 4U);
    t58 = *((int *)t27);
    t33 = (t25 + 8U);
    t61 = *((int *)t33);
    xsi_vhdl_check_range_of_slice(t54, t58, t61, t57, 0, -1);
    t59 = (t55 * 1U);
    t60 = (0 + t59);
    t35 = (t26 + t60);
    t36 = (t11 + 56U);
    t37 = *((char **)t36);
    t62 = *((int *)t37);
    t36 = (t11 + 56U);
    t39 = *((char **)t36);
    t63 = *((int *)t39);
    t36 = (t38 + 56U);
    t40 = *((char **)t36);
    t64 = *((int *)t40);
    t67 = (t63 - t64);
    t68 = (t67 + 1);
    t69 = (t68 - t62);
    t65 = (t69 * -1);
    t65 = (t65 + 1);
    t66 = (1U * t65);
    memcpy(t35, t21, t66);
    goto LAB5;

LAB7:;
}

char *ieee_p_3039841270_sub_3493185220_2334307252(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t6[368];
    char t7[24];
    char t14[8];
    char t17[16];
    char t25[16];
    char t41[8];
    char *t0;
    char *t8;
    unsigned int t9;
    int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    int t20;
    char *t21;
    int t22;
    unsigned int t23;
    char *t24;
    char *t26;
    char *t27;
    int t28;
    char *t29;
    int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    char *t44;
    unsigned char t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    int t50;
    int t51;
    int t52;
    char *t53;
    int t54;
    int t55;
    unsigned int t56;
    int t57;
    int t58;
    unsigned int t59;
    unsigned int t60;
    int t61;
    int t62;
    int t63;
    unsigned int t64;
    unsigned int t65;
    int t66;

LAB0:    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = (t9 - 1);
    t11 = (t6 + 4U);
    t12 = ((STD_STANDARD) + 384);
    t13 = (t11 + 88U);
    *((char **)t13) = t12;
    t15 = (t11 + 56U);
    *((char **)t15) = t14;
    *((int *)t14) = t10;
    t16 = (t11 + 80U);
    *((unsigned int *)t16) = 4U;
    t18 = (t11 + 56U);
    t19 = *((char **)t18);
    t20 = *((int *)t19);
    t18 = (t17 + 0U);
    t21 = (t18 + 0U);
    *((int *)t21) = t20;
    t21 = (t18 + 4U);
    *((int *)t21) = 0;
    t21 = (t18 + 8U);
    *((int *)t21) = -1;
    t22 = (0 - t20);
    t23 = (t22 * -1);
    t23 = (t23 + 1);
    t21 = (t18 + 12U);
    *((unsigned int *)t21) = t23;
    t21 = (t3 + 0);
    t24 = (t17 + 12U);
    t23 = *((unsigned int *)t24);
    t23 = (t23 * 1U);
    t26 = (t11 + 56U);
    t27 = *((char **)t26);
    t28 = *((int *)t27);
    t26 = (t25 + 0U);
    t29 = (t26 + 0U);
    *((int *)t29) = t28;
    t29 = (t26 + 4U);
    *((int *)t29) = 0;
    t29 = (t26 + 8U);
    *((int *)t29) = -1;
    t30 = (0 - t28);
    t31 = (t30 * -1);
    t31 = (t31 + 1);
    t29 = (t26 + 12U);
    *((unsigned int *)t29) = t31;
    t29 = (t6 + 124U);
    t32 = ((STD_STANDARD) + 1112);
    t33 = (t29 + 88U);
    *((char **)t33) = t32;
    t34 = (char *)alloca(t23);
    t35 = (t29 + 56U);
    *((char **)t35) = t34;
    memcpy(t34, t21, t23);
    t36 = (t29 + 64U);
    *((char **)t36) = t25;
    t37 = (t29 + 80U);
    *((unsigned int *)t37) = t23;
    t38 = (t6 + 244U);
    t39 = ((STD_STANDARD) + 384);
    t40 = (t38 + 88U);
    *((char **)t40) = t39;
    t42 = (t38 + 56U);
    *((char **)t42) = t41;
    xsi_type_set_default_value(t39, t41, 0);
    t43 = (t38 + 80U);
    *((unsigned int *)t43) = 4U;
    t44 = (t7 + 4U);
    t45 = (t3 != 0);
    if (t45 == 1)
        goto LAB3;

LAB2:    t46 = (t7 + 12U);
    *((char **)t46) = t4;
    t47 = (t7 + 20U);
    *((int *)t47) = t5;
    t48 = (t11 + 56U);
    t49 = *((char **)t48);
    t50 = *((int *)t49);
    t51 = (t50 + 1);
    t52 = xsi_vhdl_mod(t5, t51);
    t48 = (t38 + 56U);
    t53 = *((char **)t48);
    t48 = (t53 + 0);
    *((int *)t48) = t52;
    t8 = (t38 + 56U);
    t12 = *((char **)t8);
    t10 = *((int *)t12);
    t45 = (t10 != 0);
    if (t45 != 0)
        goto LAB4;

LAB6:
LAB5:    t8 = (t29 + 56U);
    t12 = *((char **)t8);
    t8 = (t25 + 12U);
    t9 = *((unsigned int *)t8);
    t9 = (t9 * 1U);
    t0 = xsi_get_transient_memory(t9);
    memcpy(t0, t12, t9);
    t13 = (t25 + 0U);
    t10 = *((int *)t13);
    t15 = (t25 + 4U);
    t20 = *((int *)t15);
    t16 = (t25 + 8U);
    t22 = *((int *)t16);
    t18 = (t2 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = t10;
    t19 = (t18 + 4U);
    *((int *)t19) = t20;
    t19 = (t18 + 8U);
    *((int *)t19) = t22;
    t28 = (t20 - t10);
    t23 = (t28 * t22);
    t23 = (t23 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t23;

LAB1:    return t0;
LAB3:    *((char **)t44) = t3;
    goto LAB2;

LAB4:    t8 = (t3 + 0);
    t13 = (t17 + 0U);
    t20 = *((int *)t13);
    t15 = (t11 + 56U);
    t16 = *((char **)t15);
    t22 = *((int *)t16);
    t9 = (t20 - t22);
    t15 = (t38 + 56U);
    t18 = *((char **)t15);
    t28 = *((int *)t18);
    t15 = (t17 + 4U);
    t30 = *((int *)t15);
    t19 = (t17 + 8U);
    t50 = *((int *)t19);
    xsi_vhdl_check_range_of_slice(t20, t30, t50, t22, t28, -1);
    t23 = (t9 * 1U);
    t31 = (0 + t23);
    t21 = (t8 + t31);
    t24 = (t29 + 56U);
    t26 = *((char **)t24);
    t24 = (t25 + 0U);
    t51 = *((int *)t24);
    t27 = (t11 + 56U);
    t32 = *((char **)t27);
    t52 = *((int *)t32);
    t27 = (t38 + 56U);
    t33 = *((char **)t27);
    t54 = *((int *)t33);
    t55 = (t52 - t54);
    t56 = (t51 - t55);
    t27 = (t25 + 4U);
    t57 = *((int *)t27);
    t35 = (t25 + 8U);
    t58 = *((int *)t35);
    xsi_vhdl_check_range_of_slice(t51, t57, t58, t55, 0, -1);
    t59 = (t56 * 1U);
    t60 = (0 + t59);
    t36 = (t26 + t60);
    t37 = (t11 + 56U);
    t39 = *((char **)t37);
    t61 = *((int *)t39);
    t37 = (t38 + 56U);
    t40 = *((char **)t37);
    t62 = *((int *)t40);
    t63 = (t62 - t61);
    t64 = (t63 * -1);
    t64 = (t64 + 1);
    t65 = (1U * t64);
    memcpy(t36, t21, t65);
    t8 = (t3 + 0);
    t12 = (t17 + 0U);
    t10 = *((int *)t12);
    t13 = (t38 + 56U);
    t15 = *((char **)t13);
    t20 = *((int *)t15);
    t22 = (t20 - 1);
    t9 = (t10 - t22);
    t13 = (t17 + 4U);
    t28 = *((int *)t13);
    t16 = (t17 + 8U);
    t30 = *((int *)t16);
    xsi_vhdl_check_range_of_slice(t10, t28, t30, t22, 0, -1);
    t23 = (t9 * 1U);
    t31 = (0 + t23);
    t18 = (t8 + t31);
    t19 = (t29 + 56U);
    t21 = *((char **)t19);
    t19 = (t25 + 0U);
    t50 = *((int *)t19);
    t24 = (t11 + 56U);
    t26 = *((char **)t24);
    t51 = *((int *)t26);
    t56 = (t50 - t51);
    t24 = (t11 + 56U);
    t27 = *((char **)t24);
    t52 = *((int *)t27);
    t24 = (t38 + 56U);
    t32 = *((char **)t24);
    t54 = *((int *)t32);
    t55 = (t52 - t54);
    t57 = (t55 + 1);
    t24 = (t25 + 4U);
    t58 = *((int *)t24);
    t33 = (t25 + 8U);
    t61 = *((int *)t33);
    xsi_vhdl_check_range_of_slice(t50, t58, t61, t51, t57, -1);
    t59 = (t56 * 1U);
    t60 = (0 + t59);
    t35 = (t21 + t60);
    t36 = (t38 + 56U);
    t37 = *((char **)t36);
    t62 = *((int *)t37);
    t63 = (t62 - 1);
    t66 = (0 - t63);
    t64 = (t66 * -1);
    t64 = (t64 + 1);
    t65 = (1U * t64);
    memcpy(t35, t18, t65);
    goto LAB5;

LAB7:;
}

unsigned char ieee_p_3039841270_sub_1503053755_2334307252(char *t1, char *t2, char *t3, char *t4, char *t5)
{
    char t7[40];
    unsigned char t0;
    char *t8;
    unsigned char t9;
    char *t10;
    char *t11;
    unsigned char t12;
    char *t13;
    char *t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned char t18;
    unsigned int t19;
    char *t20;
    char *t21;

LAB0:    t8 = (t7 + 4U);
    t9 = (t2 != 0);
    if (t9 == 1)
        goto LAB3;

LAB2:    t10 = (t7 + 12U);
    *((char **)t10) = t3;
    t11 = (t7 + 20U);
    t12 = (t4 != 0);
    if (t12 == 1)
        goto LAB5;

LAB4:    t13 = (t7 + 28U);
    *((char **)t13) = t5;
    t14 = (t3 + 12U);
    t15 = *((unsigned int *)t14);
    t15 = (t15 * 1U);
    t16 = (t5 + 12U);
    t17 = *((unsigned int *)t16);
    t17 = (t17 * 1U);
    t18 = 1;
    if (t15 == t17)
        goto LAB6;

LAB7:    t18 = 0;

LAB8:    t0 = t18;

LAB1:    return t0;
LAB3:    *((char **)t8) = t2;
    goto LAB2;

LAB5:    *((char **)t11) = t4;
    goto LAB4;

LAB6:    t19 = 0;

LAB9:    if (t19 < t15)
        goto LAB10;
    else
        goto LAB8;

LAB10:    t20 = (t2 + t19);
    t21 = (t4 + t19);
    if (*((unsigned char *)t20) != *((unsigned char *)t21))
        goto LAB7;

LAB11:    t19 = (t19 + 1);
    goto LAB9;

LAB12:;
}

unsigned char ieee_p_3039841270_sub_3908047624_2334307252(char *t1, char *t2, char *t3, char *t4, char *t5)
{
    char t7[40];
    unsigned char t0;
    char *t8;
    unsigned char t9;
    char *t10;
    char *t11;
    unsigned char t12;
    char *t13;
    char *t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned char t18;
    unsigned int t19;
    char *t20;
    char *t21;

LAB0:    t8 = (t7 + 4U);
    t9 = (t2 != 0);
    if (t9 == 1)
        goto LAB3;

LAB2:    t10 = (t7 + 12U);
    *((char **)t10) = t3;
    t11 = (t7 + 20U);
    t12 = (t4 != 0);
    if (t12 == 1)
        goto LAB5;

LAB4:    t13 = (t7 + 28U);
    *((char **)t13) = t5;
    t14 = (t3 + 12U);
    t15 = *((unsigned int *)t14);
    t15 = (t15 * 1U);
    t16 = (t5 + 12U);
    t17 = *((unsigned int *)t16);
    t17 = (t17 * 1U);
    t18 = 1;
    if (t15 == t17)
        goto LAB6;

LAB7:    t18 = 0;

LAB8:    t0 = t18;

LAB1:    return t0;
LAB3:    *((char **)t8) = t2;
    goto LAB2;

LAB5:    *((char **)t11) = t4;
    goto LAB4;

LAB6:    t19 = 0;

LAB9:    if (t19 < t15)
        goto LAB10;
    else
        goto LAB8;

LAB10:    t20 = (t2 + t19);
    t21 = (t4 + t19);
    if (*((unsigned char *)t20) != *((unsigned char *)t21))
        goto LAB7;

LAB11:    t19 = (t19 + 1);
    goto LAB9;

LAB12:;
}

unsigned char ieee_p_3039841270_sub_552804570_2334307252(char *t1, char *t2, char *t3, char *t4, char *t5)
{
    char t7[40];
    unsigned char t0;
    char *t8;
    unsigned char t9;
    char *t10;
    char *t11;
    unsigned char t12;
    char *t13;
    char *t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    char *t18;
    unsigned char t19;

LAB0:    t8 = (t7 + 4U);
    t9 = (t2 != 0);
    if (t9 == 1)
        goto LAB3;

LAB2:    t10 = (t7 + 12U);
    *((char **)t10) = t3;
    t11 = (t7 + 20U);
    t12 = (t4 != 0);
    if (t12 == 1)
        goto LAB5;

LAB4:    t13 = (t7 + 28U);
    *((char **)t13) = t5;
    t14 = (t3 + 12U);
    t15 = *((unsigned int *)t14);
    t15 = (t15 * 1U);
    t16 = (t5 + 12U);
    t17 = *((unsigned int *)t16);
    t17 = (t17 * 1U);
    t18 = ((STD_STANDARD) + 1112);
    t19 = xsi_vhdl_lessthan(t18, t2, t15, t4, t17);
    t0 = t19;

LAB1:    return t0;
LAB3:    *((char **)t8) = t2;
    goto LAB2;

LAB5:    *((char **)t11) = t4;
    goto LAB4;

LAB6:;
}

unsigned char ieee_p_3039841270_sub_3185639251_2334307252(char *t1, char *t2, char *t3, char *t4, char *t5)
{
    char t6[248];
    char t7[40];
    char t13[16];
    char t31[16];
    unsigned char t0;
    char *t8;
    unsigned int t9;
    int t10;
    int t11;
    unsigned int t12;
    char *t14;
    unsigned int t15;
    int t16;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    int t28;
    int t29;
    unsigned int t30;
    char *t32;
    unsigned int t33;
    int t34;
    char *t35;
    char *t36;
    int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned char t46;
    char *t47;
    char *t48;
    unsigned char t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;

LAB0:    t8 = (t3 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = (t9 - 1);
    t11 = (t10 - 0);
    t12 = (t11 * 1);
    t12 = (t12 + 1);
    t12 = (t12 * 1U);
    t14 = (t3 + 12U);
    t15 = *((unsigned int *)t14);
    t16 = (t15 - 1);
    t17 = (t13 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = 0;
    t18 = (t17 + 4U);
    *((int *)t18) = t16;
    t18 = (t17 + 8U);
    *((int *)t18) = 1;
    t19 = (t16 - 0);
    t20 = (t19 * 1);
    t20 = (t20 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t20;
    t18 = (t6 + 4U);
    t21 = (t1 + 2992);
    t22 = (t18 + 88U);
    *((char **)t22) = t21;
    t23 = (char *)alloca(t12);
    t24 = (t18 + 56U);
    *((char **)t24) = t23;
    xsi_type_set_default_value(t21, t23, t13);
    t25 = (t18 + 64U);
    *((char **)t25) = t13;
    t26 = (t18 + 80U);
    *((unsigned int *)t26) = t12;
    t27 = (t5 + 12U);
    t20 = *((unsigned int *)t27);
    t28 = (t20 - 1);
    t29 = (t28 - 0);
    t30 = (t29 * 1);
    t30 = (t30 + 1);
    t30 = (t30 * 1U);
    t32 = (t5 + 12U);
    t33 = *((unsigned int *)t32);
    t34 = (t33 - 1);
    t35 = (t31 + 0U);
    t36 = (t35 + 0U);
    *((int *)t36) = 0;
    t36 = (t35 + 4U);
    *((int *)t36) = t34;
    t36 = (t35 + 8U);
    *((int *)t36) = 1;
    t37 = (t34 - 0);
    t38 = (t37 * 1);
    t38 = (t38 + 1);
    t36 = (t35 + 12U);
    *((unsigned int *)t36) = t38;
    t36 = (t6 + 124U);
    t39 = (t1 + 2992);
    t40 = (t36 + 88U);
    *((char **)t40) = t39;
    t41 = (char *)alloca(t30);
    t42 = (t36 + 56U);
    *((char **)t42) = t41;
    xsi_type_set_default_value(t39, t41, t31);
    t43 = (t36 + 64U);
    *((char **)t43) = t31;
    t44 = (t36 + 80U);
    *((unsigned int *)t44) = t30;
    t45 = (t7 + 4U);
    t46 = (t2 != 0);
    if (t46 == 1)
        goto LAB3;

LAB2:    t47 = (t7 + 12U);
    *((char **)t47) = t3;
    t48 = (t7 + 20U);
    t49 = (t4 != 0);
    if (t49 == 1)
        goto LAB5;

LAB4:    t50 = (t7 + 28U);
    *((char **)t50) = t5;
    t51 = (t18 + 56U);
    t52 = *((char **)t51);
    t51 = (t52 + 0);
    t53 = (t3 + 12U);
    t38 = *((unsigned int *)t53);
    t38 = (t38 * 1U);
    memcpy(t51, t2, t38);
    t8 = (t36 + 56U);
    t14 = *((char **)t8);
    t8 = (t14 + 0);
    t17 = (t5 + 12U);
    t9 = *((unsigned int *)t17);
    t9 = (t9 * 1U);
    memcpy(t8, t4, t9);
    t8 = (t18 + 56U);
    t14 = *((char **)t8);
    t8 = (t13 + 0U);
    t10 = *((int *)t8);
    t17 = (t13 + 8U);
    t11 = *((int *)t17);
    t16 = (0 - t10);
    t9 = (t16 * t11);
    t12 = (1U * t9);
    t15 = (0 + t12);
    t21 = (t14 + t15);
    t46 = *((unsigned char *)t21);
    t49 = (!(t46));
    t22 = (t18 + 56U);
    t24 = *((char **)t22);
    t22 = (t13 + 0U);
    t19 = *((int *)t22);
    t25 = (t13 + 8U);
    t28 = *((int *)t25);
    t29 = (0 - t19);
    t20 = (t29 * t28);
    t30 = (1U * t20);
    t33 = (0 + t30);
    t26 = (t24 + t33);
    *((unsigned char *)t26) = t49;
    t8 = (t36 + 56U);
    t14 = *((char **)t8);
    t8 = (t31 + 0U);
    t10 = *((int *)t8);
    t17 = (t31 + 8U);
    t11 = *((int *)t17);
    t16 = (0 - t10);
    t9 = (t16 * t11);
    t12 = (1U * t9);
    t15 = (0 + t12);
    t21 = (t14 + t15);
    t46 = *((unsigned char *)t21);
    t49 = (!(t46));
    t22 = (t36 + 56U);
    t24 = *((char **)t22);
    t22 = (t31 + 0U);
    t19 = *((int *)t22);
    t25 = (t31 + 8U);
    t28 = *((int *)t25);
    t29 = (0 - t19);
    t20 = (t29 * t28);
    t30 = (1U * t20);
    t33 = (0 + t30);
    t26 = (t24 + t33);
    *((unsigned char *)t26) = t49;
    t8 = (t18 + 56U);
    t14 = *((char **)t8);
    t8 = (t13 + 12U);
    t9 = *((unsigned int *)t8);
    t9 = (t9 * 1U);
    t17 = (t36 + 56U);
    t21 = *((char **)t17);
    t17 = (t31 + 12U);
    t12 = *((unsigned int *)t17);
    t12 = (t12 * 1U);
    t22 = ((STD_STANDARD) + 1112);
    t46 = xsi_vhdl_lessthan(t22, t14, t9, t21, t12);
    t0 = t46;

LAB1:    return t0;
LAB3:    *((char **)t45) = t2;
    goto LAB2;

LAB5:    *((char **)t48) = t4;
    goto LAB4;

LAB6:;
}

unsigned char ieee_p_3039841270_sub_1229053073_2334307252(char *t1, char *t2, char *t3, char *t4, char *t5)
{
    char t7[40];
    unsigned char t0;
    char *t8;
    unsigned char t9;
    char *t10;
    char *t11;
    unsigned char t12;
    char *t13;
    char *t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    char *t18;
    unsigned char t19;

LAB0:    t8 = (t7 + 4U);
    t9 = (t2 != 0);
    if (t9 == 1)
        goto LAB3;

LAB2:    t10 = (t7 + 12U);
    *((char **)t10) = t3;
    t11 = (t7 + 20U);
    t12 = (t4 != 0);
    if (t12 == 1)
        goto LAB5;

LAB4:    t13 = (t7 + 28U);
    *((char **)t13) = t5;
    t14 = (t3 + 12U);
    t15 = *((unsigned int *)t14);
    t15 = (t15 * 1U);
    t16 = (t5 + 12U);
    t17 = *((unsigned int *)t16);
    t17 = (t17 * 1U);
    t18 = ((STD_STANDARD) + 1112);
    t19 = xsi_vhdl_lessthanEqual(t18, t2, t15, t4, t17);
    t0 = t19;

LAB1:    return t0;
LAB3:    *((char **)t8) = t2;
    goto LAB2;

LAB5:    *((char **)t11) = t4;
    goto LAB4;

LAB6:;
}

unsigned char ieee_p_3039841270_sub_2208510890_2334307252(char *t1, char *t2, char *t3, char *t4, char *t5)
{
    char t6[248];
    char t7[40];
    char t13[16];
    char t31[16];
    unsigned char t0;
    char *t8;
    unsigned int t9;
    int t10;
    int t11;
    unsigned int t12;
    char *t14;
    unsigned int t15;
    int t16;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    int t28;
    int t29;
    unsigned int t30;
    char *t32;
    unsigned int t33;
    int t34;
    char *t35;
    char *t36;
    int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned char t46;
    char *t47;
    char *t48;
    unsigned char t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;

LAB0:    t8 = (t3 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = (t9 - 1);
    t11 = (t10 - 0);
    t12 = (t11 * 1);
    t12 = (t12 + 1);
    t12 = (t12 * 1U);
    t14 = (t3 + 12U);
    t15 = *((unsigned int *)t14);
    t16 = (t15 - 1);
    t17 = (t13 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = 0;
    t18 = (t17 + 4U);
    *((int *)t18) = t16;
    t18 = (t17 + 8U);
    *((int *)t18) = 1;
    t19 = (t16 - 0);
    t20 = (t19 * 1);
    t20 = (t20 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t20;
    t18 = (t6 + 4U);
    t21 = (t1 + 2992);
    t22 = (t18 + 88U);
    *((char **)t22) = t21;
    t23 = (char *)alloca(t12);
    t24 = (t18 + 56U);
    *((char **)t24) = t23;
    xsi_type_set_default_value(t21, t23, t13);
    t25 = (t18 + 64U);
    *((char **)t25) = t13;
    t26 = (t18 + 80U);
    *((unsigned int *)t26) = t12;
    t27 = (t5 + 12U);
    t20 = *((unsigned int *)t27);
    t28 = (t20 - 1);
    t29 = (t28 - 0);
    t30 = (t29 * 1);
    t30 = (t30 + 1);
    t30 = (t30 * 1U);
    t32 = (t5 + 12U);
    t33 = *((unsigned int *)t32);
    t34 = (t33 - 1);
    t35 = (t31 + 0U);
    t36 = (t35 + 0U);
    *((int *)t36) = 0;
    t36 = (t35 + 4U);
    *((int *)t36) = t34;
    t36 = (t35 + 8U);
    *((int *)t36) = 1;
    t37 = (t34 - 0);
    t38 = (t37 * 1);
    t38 = (t38 + 1);
    t36 = (t35 + 12U);
    *((unsigned int *)t36) = t38;
    t36 = (t6 + 124U);
    t39 = (t1 + 2992);
    t40 = (t36 + 88U);
    *((char **)t40) = t39;
    t41 = (char *)alloca(t30);
    t42 = (t36 + 56U);
    *((char **)t42) = t41;
    xsi_type_set_default_value(t39, t41, t31);
    t43 = (t36 + 64U);
    *((char **)t43) = t31;
    t44 = (t36 + 80U);
    *((unsigned int *)t44) = t30;
    t45 = (t7 + 4U);
    t46 = (t2 != 0);
    if (t46 == 1)
        goto LAB3;

LAB2:    t47 = (t7 + 12U);
    *((char **)t47) = t3;
    t48 = (t7 + 20U);
    t49 = (t4 != 0);
    if (t49 == 1)
        goto LAB5;

LAB4:    t50 = (t7 + 28U);
    *((char **)t50) = t5;
    t51 = (t18 + 56U);
    t52 = *((char **)t51);
    t51 = (t52 + 0);
    t53 = (t3 + 12U);
    t38 = *((unsigned int *)t53);
    t38 = (t38 * 1U);
    memcpy(t51, t2, t38);
    t8 = (t36 + 56U);
    t14 = *((char **)t8);
    t8 = (t14 + 0);
    t17 = (t5 + 12U);
    t9 = *((unsigned int *)t17);
    t9 = (t9 * 1U);
    memcpy(t8, t4, t9);
    t8 = (t18 + 56U);
    t14 = *((char **)t8);
    t8 = (t13 + 0U);
    t10 = *((int *)t8);
    t17 = (t13 + 8U);
    t11 = *((int *)t17);
    t16 = (0 - t10);
    t9 = (t16 * t11);
    t12 = (1U * t9);
    t15 = (0 + t12);
    t21 = (t14 + t15);
    t46 = *((unsigned char *)t21);
    t49 = (!(t46));
    t22 = (t18 + 56U);
    t24 = *((char **)t22);
    t22 = (t13 + 0U);
    t19 = *((int *)t22);
    t25 = (t13 + 8U);
    t28 = *((int *)t25);
    t29 = (0 - t19);
    t20 = (t29 * t28);
    t30 = (1U * t20);
    t33 = (0 + t30);
    t26 = (t24 + t33);
    *((unsigned char *)t26) = t49;
    t8 = (t36 + 56U);
    t14 = *((char **)t8);
    t8 = (t31 + 0U);
    t10 = *((int *)t8);
    t17 = (t31 + 8U);
    t11 = *((int *)t17);
    t16 = (0 - t10);
    t9 = (t16 * t11);
    t12 = (1U * t9);
    t15 = (0 + t12);
    t21 = (t14 + t15);
    t46 = *((unsigned char *)t21);
    t49 = (!(t46));
    t22 = (t36 + 56U);
    t24 = *((char **)t22);
    t22 = (t31 + 0U);
    t19 = *((int *)t22);
    t25 = (t31 + 8U);
    t28 = *((int *)t25);
    t29 = (0 - t19);
    t20 = (t29 * t28);
    t30 = (1U * t20);
    t33 = (0 + t30);
    t26 = (t24 + t33);
    *((unsigned char *)t26) = t49;
    t8 = (t18 + 56U);
    t14 = *((char **)t8);
    t8 = (t13 + 12U);
    t9 = *((unsigned int *)t8);
    t9 = (t9 * 1U);
    t17 = (t36 + 56U);
    t21 = *((char **)t17);
    t17 = (t31 + 12U);
    t12 = *((unsigned int *)t17);
    t12 = (t12 * 1U);
    t22 = ((STD_STANDARD) + 1112);
    t46 = xsi_vhdl_lessthanEqual(t22, t14, t9, t21, t12);
    t0 = t46;

LAB1:    return t0;
LAB3:    *((char **)t45) = t2;
    goto LAB2;

LAB5:    *((char **)t48) = t4;
    goto LAB4;

LAB6:;
}

char *ieee_p_3039841270_sub_3217339969_2334307252(char *t1, char *t2, char *t3, char *t4)
{
    char t5[248];
    char t6[24];
    char t13[8];
    char t21[16];
    char t43[16];
    char *t0;
    char *t7;
    unsigned int t8;
    int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    int t18;
    int t19;
    unsigned int t20;
    char *t22;
    int t23;
    char *t24;
    int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned char t34;
    char *t35;
    char *t36;
    unsigned char t37;
    char *t38;
    char *t39;
    char *t40;
    int t41;
    unsigned int t42;
    unsigned int t44;

LAB0:    t7 = (t4 + 12U);
    t8 = *((unsigned int *)t7);
    t9 = (t8 - 1);
    t10 = (t5 + 4U);
    t11 = ((STD_STANDARD) + 384);
    t12 = (t10 + 88U);
    *((char **)t12) = t11;
    t14 = (t10 + 56U);
    *((char **)t14) = t13;
    *((int *)t13) = t9;
    t15 = (t10 + 80U);
    *((unsigned int *)t15) = 4U;
    t16 = (t10 + 56U);
    t17 = *((char **)t16);
    t18 = *((int *)t17);
    t19 = (0 - t18);
    t20 = (t19 * -1);
    t20 = (t20 + 1);
    t20 = (t20 * 1U);
    t16 = (t10 + 56U);
    t22 = *((char **)t16);
    t23 = *((int *)t22);
    t16 = (t21 + 0U);
    t24 = (t16 + 0U);
    *((int *)t24) = t23;
    t24 = (t16 + 4U);
    *((int *)t24) = 0;
    t24 = (t16 + 8U);
    *((int *)t24) = -1;
    t25 = (0 - t23);
    t26 = (t25 * -1);
    t26 = (t26 + 1);
    t24 = (t16 + 12U);
    *((unsigned int *)t24) = t26;
    t24 = (t5 + 124U);
    t27 = (t1 + 2992);
    t28 = (t24 + 88U);
    *((char **)t28) = t27;
    t29 = (char *)alloca(t20);
    t30 = (t24 + 56U);
    *((char **)t30) = t29;
    xsi_type_set_default_value(t27, t29, t21);
    t31 = (t24 + 64U);
    *((char **)t31) = t21;
    t32 = (t24 + 80U);
    *((unsigned int *)t32) = t20;
    t33 = (t6 + 4U);
    t34 = (t3 != 0);
    if (t34 == 1)
        goto LAB3;

LAB2:    t35 = (t6 + 12U);
    *((char **)t35) = t4;
    t36 = (t4 + 12U);
    t26 = *((unsigned int *)t36);
    t37 = (t26 < 1);
    if (t37 != 0)
        goto LAB4;

LAB6:
LAB5:    t7 = (t24 + 56U);
    t11 = *((char **)t7);
    t7 = (t11 + 0);
    t12 = (t4 + 12U);
    t8 = *((unsigned int *)t12);
    t8 = (t8 * 1U);
    memcpy(t7, t3, t8);
    t7 = (t24 + 56U);
    t11 = *((char **)t7);
    t7 = (t21 + 0U);
    t9 = *((int *)t7);
    t12 = (t21 + 0U);
    t18 = *((int *)t12);
    t14 = (t21 + 8U);
    t19 = *((int *)t14);
    t23 = (t9 - t18);
    t8 = (t23 * t19);
    t20 = (1U * t8);
    t26 = (0 + t20);
    t15 = (t11 + t26);
    t34 = *((unsigned char *)t15);
    t37 = (t34 == (unsigned char)1);
    if (t37 != 0)
        goto LAB8;

LAB10:
LAB9:    t7 = (t24 + 56U);
    t11 = *((char **)t7);
    t7 = (t21 + 12U);
    t8 = *((unsigned int *)t7);
    t8 = (t8 * 1U);
    t0 = xsi_get_transient_memory(t8);
    memcpy(t0, t11, t8);
    t12 = (t21 + 0U);
    t9 = *((int *)t12);
    t14 = (t21 + 4U);
    t18 = *((int *)t14);
    t15 = (t21 + 8U);
    t19 = *((int *)t15);
    t16 = (t2 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = t9;
    t17 = (t16 + 4U);
    *((int *)t17) = t18;
    t17 = (t16 + 8U);
    *((int *)t17) = t19;
    t23 = (t18 - t9);
    t20 = (t23 * t19);
    t20 = (t20 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t20;

LAB1:    return t0;
LAB3:    *((char **)t33) = t3;
    goto LAB2;

LAB4:    t38 = (t1 + 1288U);
    t39 = *((char **)t38);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t39, 0U);
    t38 = (t2 + 0U);
    t40 = (t38 + 0U);
    *((int *)t40) = 0;
    t40 = (t38 + 4U);
    *((int *)t40) = 1;
    t40 = (t38 + 8U);
    *((int *)t40) = -1;
    t41 = (1 - 0);
    t42 = (t41 * -1);
    t42 = (t42 + 1);
    t40 = (t38 + 12U);
    *((unsigned int *)t40) = t42;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:    t16 = (t24 + 56U);
    t17 = *((char **)t16);
    t16 = ieee_p_3039841270_sub_3118404406_2334307252(t1, t43, t17, t21);
    t22 = (t24 + 56U);
    t27 = *((char **)t22);
    t22 = (t27 + 0);
    t28 = (t43 + 12U);
    t42 = *((unsigned int *)t28);
    t44 = (1U * t42);
    memcpy(t22, t16, t44);
    goto LAB9;

LAB11:;
}

char *ieee_p_3039841270_sub_3118404406_2334307252(char *t1, char *t2, char *t3, char *t4)
{
    char t5[368];
    char t6[24];
    char t13[8];
    char t16[16];
    char t26[16];
    char t41[8];
    char *t0;
    char *t7;
    unsigned int t8;
    int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    int t19;
    char *t20;
    int t21;
    unsigned int t22;
    char *t23;
    int t24;
    int t25;
    char *t27;
    int t28;
    char *t29;
    int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    char *t44;
    unsigned char t45;
    char *t46;
    char *t47;
    unsigned char t48;
    char *t49;
    char *t50;
    char *t51;
    int t52;
    unsigned int t53;
    unsigned char t54;
    unsigned char t55;
    int t56;
    int t57;
    int t58;
    unsigned int t59;
    unsigned int t60;

LAB0:    t7 = (t4 + 12U);
    t8 = *((unsigned int *)t7);
    t9 = (t8 - 1);
    t10 = (t5 + 4U);
    t11 = ((STD_STANDARD) + 384);
    t12 = (t10 + 88U);
    *((char **)t12) = t11;
    t14 = (t10 + 56U);
    *((char **)t14) = t13;
    *((int *)t13) = t9;
    t15 = (t10 + 80U);
    *((unsigned int *)t15) = 4U;
    t17 = (t10 + 56U);
    t18 = *((char **)t17);
    t19 = *((int *)t18);
    t17 = (t16 + 0U);
    t20 = (t17 + 0U);
    *((int *)t20) = t19;
    t20 = (t17 + 4U);
    *((int *)t20) = 0;
    t20 = (t17 + 8U);
    *((int *)t20) = -1;
    t21 = (0 - t19);
    t22 = (t21 * -1);
    t22 = (t22 + 1);
    t20 = (t17 + 12U);
    *((unsigned int *)t20) = t22;
    t20 = (t10 + 56U);
    t23 = *((char **)t20);
    t24 = *((int *)t23);
    t25 = (0 - t24);
    t22 = (t25 * -1);
    t22 = (t22 + 1);
    t22 = (t22 * 1U);
    t20 = (t10 + 56U);
    t27 = *((char **)t20);
    t28 = *((int *)t27);
    t20 = (t26 + 0U);
    t29 = (t20 + 0U);
    *((int *)t29) = t28;
    t29 = (t20 + 4U);
    *((int *)t29) = 0;
    t29 = (t20 + 8U);
    *((int *)t29) = -1;
    t30 = (0 - t28);
    t31 = (t30 * -1);
    t31 = (t31 + 1);
    t29 = (t20 + 12U);
    *((unsigned int *)t29) = t31;
    t29 = (t5 + 124U);
    t32 = (t1 + 2992);
    t33 = (t29 + 88U);
    *((char **)t33) = t32;
    t34 = (char *)alloca(t22);
    t35 = (t29 + 56U);
    *((char **)t35) = t34;
    xsi_type_set_default_value(t32, t34, t26);
    t36 = (t29 + 64U);
    *((char **)t36) = t26;
    t37 = (t29 + 80U);
    *((unsigned int *)t37) = t22;
    t38 = (t5 + 244U);
    t39 = ((STD_STANDARD) + 96);
    t40 = (t38 + 88U);
    *((char **)t40) = t39;
    t42 = (t38 + 56U);
    *((char **)t42) = t41;
    *((unsigned char *)t41) = (unsigned char)1;
    t43 = (t38 + 80U);
    *((unsigned int *)t43) = 1U;
    t44 = (t6 + 4U);
    t45 = (t3 != 0);
    if (t45 == 1)
        goto LAB3;

LAB2:    t46 = (t6 + 12U);
    *((char **)t46) = t4;
    t47 = (t4 + 12U);
    t31 = *((unsigned int *)t47);
    t48 = (t31 < 1);
    if (t48 != 0)
        goto LAB4;

LAB6:
LAB5:    t7 = (t26 + 0U);
    t9 = *((int *)t7);
    t19 = 0;
    t21 = t9;

LAB8:    if (t19 <= t21)
        goto LAB9;

LAB11:    t7 = (t29 + 56U);
    t11 = *((char **)t7);
    t7 = (t26 + 12U);
    t8 = *((unsigned int *)t7);
    t8 = (t8 * 1U);
    t0 = xsi_get_transient_memory(t8);
    memcpy(t0, t11, t8);
    t12 = (t26 + 0U);
    t9 = *((int *)t12);
    t14 = (t26 + 4U);
    t19 = *((int *)t14);
    t15 = (t26 + 8U);
    t21 = *((int *)t15);
    t17 = (t2 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = t9;
    t18 = (t17 + 4U);
    *((int *)t18) = t19;
    t18 = (t17 + 8U);
    *((int *)t18) = t21;
    t24 = (t19 - t9);
    t22 = (t24 * t21);
    t22 = (t22 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t22;

LAB1:    return t0;
LAB3:    *((char **)t44) = t3;
    goto LAB2;

LAB4:    t49 = (t1 + 1288U);
    t50 = *((char **)t49);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t50, 0U);
    t49 = (t2 + 0U);
    t51 = (t49 + 0U);
    *((int *)t51) = 0;
    t51 = (t49 + 4U);
    *((int *)t51) = 1;
    t51 = (t49 + 8U);
    *((int *)t51) = -1;
    t52 = (1 - 0);
    t53 = (t52 * -1);
    t53 = (t53 + 1);
    t51 = (t49 + 12U);
    *((unsigned int *)t51) = t53;
    goto LAB1;

LAB7:    goto LAB5;

LAB9:    t11 = (t3 + 0);
    t12 = (t16 + 0U);
    t24 = *((int *)t12);
    t14 = (t16 + 8U);
    t25 = *((int *)t14);
    t28 = (t19 - t24);
    t8 = (t28 * t25);
    t15 = (t16 + 4U);
    t30 = *((int *)t15);
    xsi_vhdl_check_range_of_index(t24, t30, t25, t19);
    t22 = (1U * t8);
    t31 = (0 + t22);
    t17 = (t11 + t31);
    t45 = *((unsigned char *)t17);
    t48 = (!(t45));
    t18 = (t38 + 56U);
    t20 = *((char **)t18);
    t54 = *((unsigned char *)t20);
    t55 = (t48 ^ t54);
    t18 = (t29 + 56U);
    t23 = *((char **)t18);
    t18 = (t26 + 0U);
    t52 = *((int *)t18);
    t27 = (t26 + 8U);
    t56 = *((int *)t27);
    t57 = (t19 - t52);
    t53 = (t57 * t56);
    t32 = (t26 + 4U);
    t58 = *((int *)t32);
    xsi_vhdl_check_range_of_index(t52, t58, t56, t19);
    t59 = (1U * t53);
    t60 = (0 + t59);
    t33 = (t23 + t60);
    *((unsigned char *)t33) = t55;
    t7 = (t38 + 56U);
    t11 = *((char **)t7);
    t48 = *((unsigned char *)t11);
    if (t48 == 1)
        goto LAB12;

LAB13:    t45 = (unsigned char)0;

LAB14:    t18 = (t38 + 56U);
    t20 = *((char **)t18);
    t18 = (t20 + 0);
    *((unsigned char *)t18) = t45;

LAB10:    if (t19 == t21)
        goto LAB11;

LAB15:    t9 = (t19 + 1);
    t19 = t9;
    goto LAB8;

LAB12:    t7 = (t3 + 0);
    t12 = (t16 + 0U);
    t9 = *((int *)t12);
    t14 = (t16 + 8U);
    t24 = *((int *)t14);
    t25 = (t19 - t9);
    t8 = (t25 * t24);
    t15 = (t16 + 4U);
    t28 = *((int *)t15);
    xsi_vhdl_check_range_of_index(t9, t28, t24, t19);
    t22 = (1U * t8);
    t31 = (0 + t22);
    t17 = (t7 + t31);
    t54 = *((unsigned char *)t17);
    t55 = (!(t54));
    t45 = t55;
    goto LAB14;

LAB16:;
}

char *ieee_p_3039841270_sub_1717157770_2334307252(char *t1, char *t2, char *t3, char *t4, char *t5, char *t6)
{
    char t7[488];
    char t8[40];
    char t15[8];
    char t24[8];
    char t35[8];
    char t44[16];
    char t74[16];
    char t75[16];
    char t76[16];
    char *t0;
    char *t9;
    unsigned int t10;
    int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    int t40;
    int t41;
    int t42;
    unsigned int t43;
    char *t45;
    int t46;
    int t47;
    char *t48;
    int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    unsigned char t58;
    char *t59;
    char *t60;
    unsigned char t61;
    char *t62;
    unsigned char t63;
    char *t64;
    unsigned char t65;
    char *t66;
    unsigned int t67;
    unsigned char t68;
    char *t69;
    char *t70;
    char *t71;
    int t72;
    unsigned int t73;

LAB0:    t9 = (t4 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = (t10 - 1);
    t12 = (t7 + 4U);
    t13 = ((STD_STANDARD) + 384);
    t14 = (t12 + 88U);
    *((char **)t14) = t13;
    t16 = (t12 + 56U);
    *((char **)t16) = t15;
    *((int *)t15) = t11;
    t17 = (t12 + 80U);
    *((unsigned int *)t17) = 4U;
    t18 = (t6 + 12U);
    t19 = *((unsigned int *)t18);
    t20 = (t19 - 1);
    t21 = (t7 + 124U);
    t22 = ((STD_STANDARD) + 384);
    t23 = (t21 + 88U);
    *((char **)t23) = t22;
    t25 = (t21 + 56U);
    *((char **)t25) = t24;
    *((int *)t24) = t20;
    t26 = (t21 + 80U);
    *((unsigned int *)t26) = 4U;
    t27 = (t4 + 12U);
    t28 = *((unsigned int *)t27);
    t29 = (t6 + 12U);
    t30 = *((unsigned int *)t29);
    t31 = ieee_p_3039841270_sub_3160373586_2334307252(t1, ((t28)), ((t30)));
    t32 = (t7 + 244U);
    t33 = ((STD_STANDARD) + 832);
    t34 = (t32 + 88U);
    *((char **)t34) = t33;
    t36 = (t32 + 56U);
    *((char **)t36) = t35;
    *((int *)t35) = t31;
    t37 = (t32 + 80U);
    *((unsigned int *)t37) = 4U;
    t38 = (t32 + 56U);
    t39 = *((char **)t38);
    t40 = *((int *)t39);
    t41 = (t40 - 1);
    t42 = (0 - t41);
    t43 = (t42 * -1);
    t43 = (t43 + 1);
    t43 = (t43 * 1U);
    t38 = (t32 + 56U);
    t45 = *((char **)t38);
    t46 = *((int *)t45);
    t47 = (t46 - 1);
    t38 = (t44 + 0U);
    t48 = (t38 + 0U);
    *((int *)t48) = t47;
    t48 = (t38 + 4U);
    *((int *)t48) = 0;
    t48 = (t38 + 8U);
    *((int *)t48) = -1;
    t49 = (0 - t47);
    t50 = (t49 * -1);
    t50 = (t50 + 1);
    t48 = (t38 + 12U);
    *((unsigned int *)t48) = t50;
    t48 = (t7 + 364U);
    t51 = (t1 + 2880);
    t52 = (t48 + 88U);
    *((char **)t52) = t51;
    t53 = (char *)alloca(t43);
    t54 = (t48 + 56U);
    *((char **)t54) = t53;
    xsi_type_set_default_value(t51, t53, t44);
    t55 = (t48 + 64U);
    *((char **)t55) = t44;
    t56 = (t48 + 80U);
    *((unsigned int *)t56) = t43;
    t57 = (t8 + 4U);
    t58 = (t3 != 0);
    if (t58 == 1)
        goto LAB3;

LAB2:    t59 = (t8 + 12U);
    *((char **)t59) = t4;
    t60 = (t8 + 20U);
    t61 = (t5 != 0);
    if (t61 == 1)
        goto LAB5;

LAB4:    t62 = (t8 + 28U);
    *((char **)t62) = t6;
    t64 = (t4 + 12U);
    t50 = *((unsigned int *)t64);
    t65 = (t50 < 1);
    if (t65 == 1)
        goto LAB9;

LAB10:    t66 = (t6 + 12U);
    t67 = *((unsigned int *)t66);
    t68 = (t67 < 1);
    t63 = t68;

LAB11:    if (t63 != 0)
        goto LAB6;

LAB8:
LAB7:    t9 = (t32 + 56U);
    t13 = *((char **)t9);
    t11 = *((int *)t13);
    t9 = ieee_p_3039841270_sub_2675122452_2334307252(t1, t75, t3, t4, t11);
    t14 = (t32 + 56U);
    t16 = *((char **)t14);
    t20 = *((int *)t16);
    t14 = ieee_p_3039841270_sub_2675122452_2334307252(t1, t76, t5, t6, t20);
    t17 = ieee_p_3039841270_sub_451878023_2334307252(t1, t74, t9, t75, t14, t76, (unsigned char)0);
    t18 = (t74 + 12U);
    t10 = *((unsigned int *)t18);
    t10 = (t10 * 1U);
    t0 = xsi_get_transient_memory(t10);
    memcpy(t0, t17, t10);
    t22 = (t74 + 0U);
    t31 = *((int *)t22);
    t23 = (t74 + 4U);
    t40 = *((int *)t23);
    t25 = (t74 + 8U);
    t41 = *((int *)t25);
    t26 = (t2 + 0U);
    t27 = (t26 + 0U);
    *((int *)t27) = t31;
    t27 = (t26 + 4U);
    *((int *)t27) = t40;
    t27 = (t26 + 8U);
    *((int *)t27) = t41;
    t42 = (t40 - t31);
    t19 = (t42 * t41);
    t19 = (t19 + 1);
    t27 = (t26 + 12U);
    *((unsigned int *)t27) = t19;

LAB1:    return t0;
LAB3:    *((char **)t57) = t3;
    goto LAB2;

LAB5:    *((char **)t60) = t5;
    goto LAB4;

LAB6:    t69 = (t1 + 1168U);
    t70 = *((char **)t69);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t70, 0U);
    t69 = (t2 + 0U);
    t71 = (t69 + 0U);
    *((int *)t71) = 0;
    t71 = (t69 + 4U);
    *((int *)t71) = 1;
    t71 = (t69 + 8U);
    *((int *)t71) = -1;
    t72 = (1 - 0);
    t73 = (t72 * -1);
    t73 = (t73 + 1);
    t71 = (t69 + 12U);
    *((unsigned int *)t71) = t73;
    goto LAB1;

LAB9:    t63 = (unsigned char)1;
    goto LAB11;

LAB12:    goto LAB7;

LAB13:;
}

char *ieee_p_3039841270_sub_3088487591_2334307252(char *t1, char *t2, char *t3, char *t4, char *t5, char *t6)
{
    char t7[488];
    char t8[40];
    char t15[8];
    char t24[8];
    char t35[8];
    char t44[16];
    char t74[16];
    char t75[16];
    char t76[16];
    char *t0;
    char *t9;
    unsigned int t10;
    int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    int t40;
    int t41;
    int t42;
    unsigned int t43;
    char *t45;
    int t46;
    int t47;
    char *t48;
    int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    unsigned char t58;
    char *t59;
    char *t60;
    unsigned char t61;
    char *t62;
    unsigned char t63;
    char *t64;
    unsigned char t65;
    char *t66;
    unsigned int t67;
    unsigned char t68;
    char *t69;
    char *t70;
    char *t71;
    int t72;
    unsigned int t73;

LAB0:    t9 = (t4 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = (t10 - 1);
    t12 = (t7 + 4U);
    t13 = ((STD_STANDARD) + 384);
    t14 = (t12 + 88U);
    *((char **)t14) = t13;
    t16 = (t12 + 56U);
    *((char **)t16) = t15;
    *((int *)t15) = t11;
    t17 = (t12 + 80U);
    *((unsigned int *)t17) = 4U;
    t18 = (t6 + 12U);
    t19 = *((unsigned int *)t18);
    t20 = (t19 - 1);
    t21 = (t7 + 124U);
    t22 = ((STD_STANDARD) + 384);
    t23 = (t21 + 88U);
    *((char **)t23) = t22;
    t25 = (t21 + 56U);
    *((char **)t25) = t24;
    *((int *)t24) = t20;
    t26 = (t21 + 80U);
    *((unsigned int *)t26) = 4U;
    t27 = (t4 + 12U);
    t28 = *((unsigned int *)t27);
    t29 = (t6 + 12U);
    t30 = *((unsigned int *)t29);
    t31 = ieee_p_3039841270_sub_3160373586_2334307252(t1, ((t28)), ((t30)));
    t32 = (t7 + 244U);
    t33 = ((STD_STANDARD) + 832);
    t34 = (t32 + 88U);
    *((char **)t34) = t33;
    t36 = (t32 + 56U);
    *((char **)t36) = t35;
    *((int *)t35) = t31;
    t37 = (t32 + 80U);
    *((unsigned int *)t37) = 4U;
    t38 = (t32 + 56U);
    t39 = *((char **)t38);
    t40 = *((int *)t39);
    t41 = (t40 - 1);
    t42 = (0 - t41);
    t43 = (t42 * -1);
    t43 = (t43 + 1);
    t43 = (t43 * 1U);
    t38 = (t32 + 56U);
    t45 = *((char **)t38);
    t46 = *((int *)t45);
    t47 = (t46 - 1);
    t38 = (t44 + 0U);
    t48 = (t38 + 0U);
    *((int *)t48) = t47;
    t48 = (t38 + 4U);
    *((int *)t48) = 0;
    t48 = (t38 + 8U);
    *((int *)t48) = -1;
    t49 = (0 - t47);
    t50 = (t49 * -1);
    t50 = (t50 + 1);
    t48 = (t38 + 12U);
    *((unsigned int *)t48) = t50;
    t48 = (t7 + 364U);
    t51 = (t1 + 2992);
    t52 = (t48 + 88U);
    *((char **)t52) = t51;
    t53 = (char *)alloca(t43);
    t54 = (t48 + 56U);
    *((char **)t54) = t53;
    xsi_type_set_default_value(t51, t53, t44);
    t55 = (t48 + 64U);
    *((char **)t55) = t44;
    t56 = (t48 + 80U);
    *((unsigned int *)t56) = t43;
    t57 = (t8 + 4U);
    t58 = (t3 != 0);
    if (t58 == 1)
        goto LAB3;

LAB2:    t59 = (t8 + 12U);
    *((char **)t59) = t4;
    t60 = (t8 + 20U);
    t61 = (t5 != 0);
    if (t61 == 1)
        goto LAB5;

LAB4:    t62 = (t8 + 28U);
    *((char **)t62) = t6;
    t64 = (t4 + 12U);
    t50 = *((unsigned int *)t64);
    t65 = (t50 < 1);
    if (t65 == 1)
        goto LAB9;

LAB10:    t66 = (t6 + 12U);
    t67 = *((unsigned int *)t66);
    t68 = (t67 < 1);
    t63 = t68;

LAB11:    if (t63 != 0)
        goto LAB6;

LAB8:
LAB7:    t9 = (t32 + 56U);
    t13 = *((char **)t9);
    t11 = *((int *)t13);
    t9 = ieee_p_3039841270_sub_3322286019_2334307252(t1, t75, t3, t4, t11);
    t14 = (t32 + 56U);
    t16 = *((char **)t14);
    t20 = *((int *)t16);
    t14 = ieee_p_3039841270_sub_3322286019_2334307252(t1, t76, t5, t6, t20);
    t17 = ieee_p_3039841270_sub_941415796_2334307252(t1, t74, t9, t75, t14, t76, (unsigned char)0);
    t18 = (t74 + 12U);
    t10 = *((unsigned int *)t18);
    t10 = (t10 * 1U);
    t0 = xsi_get_transient_memory(t10);
    memcpy(t0, t17, t10);
    t22 = (t74 + 0U);
    t31 = *((int *)t22);
    t23 = (t74 + 4U);
    t40 = *((int *)t23);
    t25 = (t74 + 8U);
    t41 = *((int *)t25);
    t26 = (t2 + 0U);
    t27 = (t26 + 0U);
    *((int *)t27) = t31;
    t27 = (t26 + 4U);
    *((int *)t27) = t40;
    t27 = (t26 + 8U);
    *((int *)t27) = t41;
    t42 = (t40 - t31);
    t19 = (t42 * t41);
    t19 = (t19 + 1);
    t27 = (t26 + 12U);
    *((unsigned int *)t27) = t19;

LAB1:    return t0;
LAB3:    *((char **)t57) = t3;
    goto LAB2;

LAB5:    *((char **)t60) = t5;
    goto LAB4;

LAB6:    t69 = (t1 + 1288U);
    t70 = *((char **)t69);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t70, 0U);
    t69 = (t2 + 0U);
    t71 = (t69 + 0U);
    *((int *)t71) = 0;
    t71 = (t69 + 4U);
    *((int *)t71) = 1;
    t71 = (t69 + 8U);
    *((int *)t71) = -1;
    t72 = (1 - 0);
    t73 = (t72 * -1);
    t73 = (t73 + 1);
    t71 = (t69 + 12U);
    *((unsigned int *)t71) = t73;
    goto LAB1;

LAB9:    t63 = (unsigned char)1;
    goto LAB11;

LAB12:    goto LAB7;

LAB13:;
}

char *ieee_p_3039841270_sub_2065729909_2334307252(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t7[24];
    char t12[16];
    char t13[16];
    char *t0;
    char *t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    int t22;
    char *t23;
    int t24;
    char *t25;
    int t26;
    char *t27;
    char *t28;
    int t29;
    unsigned int t30;

LAB0:    t8 = (t7 + 4U);
    t9 = (t3 != 0);
    if (t9 == 1)
        goto LAB3;

LAB2:    t10 = (t7 + 12U);
    *((char **)t10) = t4;
    t11 = (t7 + 20U);
    *((int *)t11) = t5;
    t14 = (t4 + 12U);
    t15 = *((unsigned int *)t14);
    t16 = ieee_p_3039841270_sub_180853171_2334307252(t1, t13, t5, ((t15)));
    t17 = ieee_p_3039841270_sub_1717157770_2334307252(t1, t12, t3, t4, t16, t13);
    t18 = (t12 + 12U);
    t19 = *((unsigned int *)t18);
    t20 = (1U * t19);
    t0 = xsi_get_transient_memory(t20);
    memcpy(t0, t17, t20);
    t21 = (t12 + 0U);
    t22 = *((int *)t21);
    t23 = (t12 + 4U);
    t24 = *((int *)t23);
    t25 = (t12 + 8U);
    t26 = *((int *)t25);
    t27 = (t2 + 0U);
    t28 = (t27 + 0U);
    *((int *)t28) = t22;
    t28 = (t27 + 4U);
    *((int *)t28) = t24;
    t28 = (t27 + 8U);
    *((int *)t28) = t26;
    t29 = (t24 - t22);
    t30 = (t29 * t26);
    t30 = (t30 + 1);
    t28 = (t27 + 12U);
    *((unsigned int *)t28) = t30;

LAB1:    return t0;
LAB3:    *((char **)t8) = t3;
    goto LAB2;

LAB4:;
}

char *ieee_p_3039841270_sub_1777701285_2334307252(char *t1, char *t2, int t3, char *t4, char *t5)
{
    char t7[24];
    char t12[16];
    char t13[16];
    char *t0;
    char *t8;
    char *t9;
    unsigned char t10;
    char *t11;
    char *t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    int t22;
    char *t23;
    int t24;
    char *t25;
    int t26;
    char *t27;
    char *t28;
    int t29;
    unsigned int t30;

LAB0:    t8 = (t7 + 4U);
    *((int *)t8) = t3;
    t9 = (t7 + 8U);
    t10 = (t4 != 0);
    if (t10 == 1)
        goto LAB3;

LAB2:    t11 = (t7 + 16U);
    *((char **)t11) = t5;
    t14 = (t5 + 12U);
    t15 = *((unsigned int *)t14);
    t16 = ieee_p_3039841270_sub_180853171_2334307252(t1, t13, t3, ((t15)));
    t17 = ieee_p_3039841270_sub_1717157770_2334307252(t1, t12, t16, t13, t4, t5);
    t18 = (t12 + 12U);
    t19 = *((unsigned int *)t18);
    t20 = (1U * t19);
    t0 = xsi_get_transient_memory(t20);
    memcpy(t0, t17, t20);
    t21 = (t12 + 0U);
    t22 = *((int *)t21);
    t23 = (t12 + 4U);
    t24 = *((int *)t23);
    t25 = (t12 + 8U);
    t26 = *((int *)t25);
    t27 = (t2 + 0U);
    t28 = (t27 + 0U);
    *((int *)t28) = t22;
    t28 = (t27 + 4U);
    *((int *)t28) = t24;
    t28 = (t27 + 8U);
    *((int *)t28) = t26;
    t29 = (t24 - t22);
    t30 = (t29 * t26);
    t30 = (t30 + 1);
    t28 = (t27 + 12U);
    *((unsigned int *)t28) = t30;

LAB1:    return t0;
LAB3:    *((char **)t9) = t4;
    goto LAB2;

LAB4:;
}

char *ieee_p_3039841270_sub_3125426059_2334307252(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t7[24];
    char t12[16];
    char t13[16];
    char *t0;
    char *t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    int t22;
    char *t23;
    int t24;
    char *t25;
    int t26;
    char *t27;
    char *t28;
    int t29;
    unsigned int t30;

LAB0:    t8 = (t7 + 4U);
    t9 = (t3 != 0);
    if (t9 == 1)
        goto LAB3;

LAB2:    t10 = (t7 + 12U);
    *((char **)t10) = t4;
    t11 = (t7 + 20U);
    *((int *)t11) = t5;
    t14 = (t4 + 12U);
    t15 = *((unsigned int *)t14);
    t16 = ieee_p_3039841270_sub_2780269832_2334307252(t1, t13, t5, ((t15)));
    t17 = ieee_p_3039841270_sub_3088487591_2334307252(t1, t12, t3, t4, t16, t13);
    t18 = (t12 + 12U);
    t19 = *((unsigned int *)t18);
    t20 = (1U * t19);
    t0 = xsi_get_transient_memory(t20);
    memcpy(t0, t17, t20);
    t21 = (t12 + 0U);
    t22 = *((int *)t21);
    t23 = (t12 + 4U);
    t24 = *((int *)t23);
    t25 = (t12 + 8U);
    t26 = *((int *)t25);
    t27 = (t2 + 0U);
    t28 = (t27 + 0U);
    *((int *)t28) = t22;
    t28 = (t27 + 4U);
    *((int *)t28) = t24;
    t28 = (t27 + 8U);
    *((int *)t28) = t26;
    t29 = (t24 - t22);
    t30 = (t29 * t26);
    t30 = (t30 + 1);
    t28 = (t27 + 12U);
    *((unsigned int *)t28) = t30;

LAB1:    return t0;
LAB3:    *((char **)t8) = t3;
    goto LAB2;

LAB4:;
}

char *ieee_p_3039841270_sub_3620553971_2334307252(char *t1, char *t2, int t3, char *t4, char *t5)
{
    char t7[24];
    char t12[16];
    char t13[16];
    char *t0;
    char *t8;
    char *t9;
    unsigned char t10;
    char *t11;
    char *t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    int t22;
    char *t23;
    int t24;
    char *t25;
    int t26;
    char *t27;
    char *t28;
    int t29;
    unsigned int t30;

LAB0:    t8 = (t7 + 4U);
    *((int *)t8) = t3;
    t9 = (t7 + 8U);
    t10 = (t4 != 0);
    if (t10 == 1)
        goto LAB3;

LAB2:    t11 = (t7 + 16U);
    *((char **)t11) = t5;
    t14 = (t5 + 12U);
    t15 = *((unsigned int *)t14);
    t16 = ieee_p_3039841270_sub_2780269832_2334307252(t1, t13, t3, ((t15)));
    t17 = ieee_p_3039841270_sub_3088487591_2334307252(t1, t12, t16, t13, t4, t5);
    t18 = (t12 + 12U);
    t19 = *((unsigned int *)t18);
    t20 = (1U * t19);
    t0 = xsi_get_transient_memory(t20);
    memcpy(t0, t17, t20);
    t21 = (t12 + 0U);
    t22 = *((int *)t21);
    t23 = (t12 + 4U);
    t24 = *((int *)t23);
    t25 = (t12 + 8U);
    t26 = *((int *)t25);
    t27 = (t2 + 0U);
    t28 = (t27 + 0U);
    *((int *)t28) = t22;
    t28 = (t27 + 4U);
    *((int *)t28) = t24;
    t28 = (t27 + 8U);
    *((int *)t28) = t26;
    t29 = (t24 - t22);
    t30 = (t29 * t26);
    t30 = (t30 + 1);
    t28 = (t27 + 12U);
    *((unsigned int *)t28) = t30;

LAB1:    return t0;
LAB3:    *((char **)t9) = t4;
    goto LAB2;

LAB4:;
}

char *ieee_p_3039841270_sub_1717229644_2334307252(char *t1, char *t2, char *t3, char *t4, char *t5, char *t6)
{
    char t7[488];
    char t8[40];
    char t15[8];
    char t24[8];
    char t35[8];
    char t44[16];
    char t74[16];
    char t75[16];
    char t76[16];
    char t77[16];
    char *t0;
    char *t9;
    unsigned int t10;
    int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    int t40;
    int t41;
    int t42;
    unsigned int t43;
    char *t45;
    int t46;
    int t47;
    char *t48;
    int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    unsigned char t58;
    char *t59;
    char *t60;
    unsigned char t61;
    char *t62;
    unsigned char t63;
    char *t64;
    unsigned char t65;
    char *t66;
    unsigned int t67;
    unsigned char t68;
    char *t69;
    char *t70;
    char *t71;
    int t72;
    unsigned int t73;

LAB0:    t9 = (t4 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = (t10 - 1);
    t12 = (t7 + 4U);
    t13 = ((STD_STANDARD) + 384);
    t14 = (t12 + 88U);
    *((char **)t14) = t13;
    t16 = (t12 + 56U);
    *((char **)t16) = t15;
    *((int *)t15) = t11;
    t17 = (t12 + 80U);
    *((unsigned int *)t17) = 4U;
    t18 = (t6 + 12U);
    t19 = *((unsigned int *)t18);
    t20 = (t19 - 1);
    t21 = (t7 + 124U);
    t22 = ((STD_STANDARD) + 384);
    t23 = (t21 + 88U);
    *((char **)t23) = t22;
    t25 = (t21 + 56U);
    *((char **)t25) = t24;
    *((int *)t24) = t20;
    t26 = (t21 + 80U);
    *((unsigned int *)t26) = 4U;
    t27 = (t4 + 12U);
    t28 = *((unsigned int *)t27);
    t29 = (t6 + 12U);
    t30 = *((unsigned int *)t29);
    t31 = ieee_p_3039841270_sub_3160373586_2334307252(t1, ((t28)), ((t30)));
    t32 = (t7 + 244U);
    t33 = ((STD_STANDARD) + 832);
    t34 = (t32 + 88U);
    *((char **)t34) = t33;
    t36 = (t32 + 56U);
    *((char **)t36) = t35;
    *((int *)t35) = t31;
    t37 = (t32 + 80U);
    *((unsigned int *)t37) = 4U;
    t38 = (t32 + 56U);
    t39 = *((char **)t38);
    t40 = *((int *)t39);
    t41 = (t40 - 1);
    t42 = (0 - t41);
    t43 = (t42 * -1);
    t43 = (t43 + 1);
    t43 = (t43 * 1U);
    t38 = (t32 + 56U);
    t45 = *((char **)t38);
    t46 = *((int *)t45);
    t47 = (t46 - 1);
    t38 = (t44 + 0U);
    t48 = (t38 + 0U);
    *((int *)t48) = t47;
    t48 = (t38 + 4U);
    *((int *)t48) = 0;
    t48 = (t38 + 8U);
    *((int *)t48) = -1;
    t49 = (0 - t47);
    t50 = (t49 * -1);
    t50 = (t50 + 1);
    t48 = (t38 + 12U);
    *((unsigned int *)t48) = t50;
    t48 = (t7 + 364U);
    t51 = (t1 + 2880);
    t52 = (t48 + 88U);
    *((char **)t52) = t51;
    t53 = (char *)alloca(t43);
    t54 = (t48 + 56U);
    *((char **)t54) = t53;
    xsi_type_set_default_value(t51, t53, t44);
    t55 = (t48 + 64U);
    *((char **)t55) = t44;
    t56 = (t48 + 80U);
    *((unsigned int *)t56) = t43;
    t57 = (t8 + 4U);
    t58 = (t3 != 0);
    if (t58 == 1)
        goto LAB3;

LAB2:    t59 = (t8 + 12U);
    *((char **)t59) = t4;
    t60 = (t8 + 20U);
    t61 = (t5 != 0);
    if (t61 == 1)
        goto LAB5;

LAB4:    t62 = (t8 + 28U);
    *((char **)t62) = t6;
    t64 = (t4 + 12U);
    t50 = *((unsigned int *)t64);
    t65 = (t50 < 1);
    if (t65 == 1)
        goto LAB9;

LAB10:    t66 = (t6 + 12U);
    t67 = *((unsigned int *)t66);
    t68 = (t67 < 1);
    t63 = t68;

LAB11:    if (t63 != 0)
        goto LAB6;

LAB8:
LAB7:    t9 = (t32 + 56U);
    t13 = *((char **)t9);
    t11 = *((int *)t13);
    t9 = ieee_p_3039841270_sub_2675122452_2334307252(t1, t75, t3, t4, t11);
    t14 = (t32 + 56U);
    t16 = *((char **)t14);
    t20 = *((int *)t16);
    t14 = ieee_p_3039841270_sub_2675122452_2334307252(t1, t77, t5, t6, t20);
    t17 = ieee_p_3039841270_sub_3038752187_2334307252(t1, t76, t14, t77);
    t18 = ieee_p_3039841270_sub_451878023_2334307252(t1, t74, t9, t75, t17, t76, (unsigned char)1);
    t22 = (t74 + 12U);
    t10 = *((unsigned int *)t22);
    t10 = (t10 * 1U);
    t0 = xsi_get_transient_memory(t10);
    memcpy(t0, t18, t10);
    t23 = (t74 + 0U);
    t31 = *((int *)t23);
    t25 = (t74 + 4U);
    t40 = *((int *)t25);
    t26 = (t74 + 8U);
    t41 = *((int *)t26);
    t27 = (t2 + 0U);
    t29 = (t27 + 0U);
    *((int *)t29) = t31;
    t29 = (t27 + 4U);
    *((int *)t29) = t40;
    t29 = (t27 + 8U);
    *((int *)t29) = t41;
    t42 = (t40 - t31);
    t19 = (t42 * t41);
    t19 = (t19 + 1);
    t29 = (t27 + 12U);
    *((unsigned int *)t29) = t19;

LAB1:    return t0;
LAB3:    *((char **)t57) = t3;
    goto LAB2;

LAB5:    *((char **)t60) = t5;
    goto LAB4;

LAB6:    t69 = (t1 + 1168U);
    t70 = *((char **)t69);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t70, 0U);
    t69 = (t2 + 0U);
    t71 = (t69 + 0U);
    *((int *)t71) = 0;
    t71 = (t69 + 4U);
    *((int *)t71) = 1;
    t71 = (t69 + 8U);
    *((int *)t71) = -1;
    t72 = (1 - 0);
    t73 = (t72 * -1);
    t73 = (t73 + 1);
    t71 = (t69 + 12U);
    *((unsigned int *)t71) = t73;
    goto LAB1;

LAB9:    t63 = (unsigned char)1;
    goto LAB11;

LAB12:    goto LAB7;

LAB13:;
}

char *ieee_p_3039841270_sub_3088559465_2334307252(char *t1, char *t2, char *t3, char *t4, char *t5, char *t6)
{
    char t7[488];
    char t8[40];
    char t15[8];
    char t24[8];
    char t35[8];
    char t44[16];
    char t74[16];
    char t75[16];
    char t76[16];
    char t77[16];
    char *t0;
    char *t9;
    unsigned int t10;
    int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    int t40;
    int t41;
    int t42;
    unsigned int t43;
    char *t45;
    int t46;
    int t47;
    char *t48;
    int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    unsigned char t58;
    char *t59;
    char *t60;
    unsigned char t61;
    char *t62;
    unsigned char t63;
    char *t64;
    unsigned char t65;
    char *t66;
    unsigned int t67;
    unsigned char t68;
    char *t69;
    char *t70;
    char *t71;
    int t72;
    unsigned int t73;

LAB0:    t9 = (t4 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = (t10 - 1);
    t12 = (t7 + 4U);
    t13 = ((STD_STANDARD) + 384);
    t14 = (t12 + 88U);
    *((char **)t14) = t13;
    t16 = (t12 + 56U);
    *((char **)t16) = t15;
    *((int *)t15) = t11;
    t17 = (t12 + 80U);
    *((unsigned int *)t17) = 4U;
    t18 = (t6 + 12U);
    t19 = *((unsigned int *)t18);
    t20 = (t19 - 1);
    t21 = (t7 + 124U);
    t22 = ((STD_STANDARD) + 384);
    t23 = (t21 + 88U);
    *((char **)t23) = t22;
    t25 = (t21 + 56U);
    *((char **)t25) = t24;
    *((int *)t24) = t20;
    t26 = (t21 + 80U);
    *((unsigned int *)t26) = 4U;
    t27 = (t4 + 12U);
    t28 = *((unsigned int *)t27);
    t29 = (t6 + 12U);
    t30 = *((unsigned int *)t29);
    t31 = ieee_p_3039841270_sub_3160373586_2334307252(t1, ((t28)), ((t30)));
    t32 = (t7 + 244U);
    t33 = ((STD_STANDARD) + 832);
    t34 = (t32 + 88U);
    *((char **)t34) = t33;
    t36 = (t32 + 56U);
    *((char **)t36) = t35;
    *((int *)t35) = t31;
    t37 = (t32 + 80U);
    *((unsigned int *)t37) = 4U;
    t38 = (t32 + 56U);
    t39 = *((char **)t38);
    t40 = *((int *)t39);
    t41 = (t40 - 1);
    t42 = (0 - t41);
    t43 = (t42 * -1);
    t43 = (t43 + 1);
    t43 = (t43 * 1U);
    t38 = (t32 + 56U);
    t45 = *((char **)t38);
    t46 = *((int *)t45);
    t47 = (t46 - 1);
    t38 = (t44 + 0U);
    t48 = (t38 + 0U);
    *((int *)t48) = t47;
    t48 = (t38 + 4U);
    *((int *)t48) = 0;
    t48 = (t38 + 8U);
    *((int *)t48) = -1;
    t49 = (0 - t47);
    t50 = (t49 * -1);
    t50 = (t50 + 1);
    t48 = (t38 + 12U);
    *((unsigned int *)t48) = t50;
    t48 = (t7 + 364U);
    t51 = (t1 + 2992);
    t52 = (t48 + 88U);
    *((char **)t52) = t51;
    t53 = (char *)alloca(t43);
    t54 = (t48 + 56U);
    *((char **)t54) = t53;
    xsi_type_set_default_value(t51, t53, t44);
    t55 = (t48 + 64U);
    *((char **)t55) = t44;
    t56 = (t48 + 80U);
    *((unsigned int *)t56) = t43;
    t57 = (t8 + 4U);
    t58 = (t3 != 0);
    if (t58 == 1)
        goto LAB3;

LAB2:    t59 = (t8 + 12U);
    *((char **)t59) = t4;
    t60 = (t8 + 20U);
    t61 = (t5 != 0);
    if (t61 == 1)
        goto LAB5;

LAB4:    t62 = (t8 + 28U);
    *((char **)t62) = t6;
    t64 = (t4 + 12U);
    t50 = *((unsigned int *)t64);
    t65 = (t50 < 1);
    if (t65 == 1)
        goto LAB9;

LAB10:    t66 = (t6 + 12U);
    t67 = *((unsigned int *)t66);
    t68 = (t67 < 1);
    t63 = t68;

LAB11:    if (t63 != 0)
        goto LAB6;

LAB8:
LAB7:    t9 = (t32 + 56U);
    t13 = *((char **)t9);
    t11 = *((int *)t13);
    t9 = ieee_p_3039841270_sub_3322286019_2334307252(t1, t75, t3, t4, t11);
    t14 = (t32 + 56U);
    t16 = *((char **)t14);
    t20 = *((int *)t16);
    t14 = ieee_p_3039841270_sub_3322286019_2334307252(t1, t77, t5, t6, t20);
    t17 = ieee_p_3039841270_sub_4184611595_2334307252(t1, t76, t14, t77);
    t18 = ieee_p_3039841270_sub_941415796_2334307252(t1, t74, t9, t75, t17, t76, (unsigned char)1);
    t22 = (t74 + 12U);
    t10 = *((unsigned int *)t22);
    t10 = (t10 * 1U);
    t0 = xsi_get_transient_memory(t10);
    memcpy(t0, t18, t10);
    t23 = (t74 + 0U);
    t31 = *((int *)t23);
    t25 = (t74 + 4U);
    t40 = *((int *)t25);
    t26 = (t74 + 8U);
    t41 = *((int *)t26);
    t27 = (t2 + 0U);
    t29 = (t27 + 0U);
    *((int *)t29) = t31;
    t29 = (t27 + 4U);
    *((int *)t29) = t40;
    t29 = (t27 + 8U);
    *((int *)t29) = t41;
    t42 = (t40 - t31);
    t19 = (t42 * t41);
    t19 = (t19 + 1);
    t29 = (t27 + 12U);
    *((unsigned int *)t29) = t19;

LAB1:    return t0;
LAB3:    *((char **)t57) = t3;
    goto LAB2;

LAB5:    *((char **)t60) = t5;
    goto LAB4;

LAB6:    t69 = (t1 + 1288U);
    t70 = *((char **)t69);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t70, 0U);
    t69 = (t2 + 0U);
    t71 = (t69 + 0U);
    *((int *)t71) = 0;
    t71 = (t69 + 4U);
    *((int *)t71) = 1;
    t71 = (t69 + 8U);
    *((int *)t71) = -1;
    t72 = (1 - 0);
    t73 = (t72 * -1);
    t73 = (t73 + 1);
    t71 = (t69 + 12U);
    *((unsigned int *)t71) = t73;
    goto LAB1;

LAB9:    t63 = (unsigned char)1;
    goto LAB11;

LAB12:    goto LAB7;

LAB13:;
}

char *ieee_p_3039841270_sub_2065801783_2334307252(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t7[24];
    char t12[16];
    char t13[16];
    char *t0;
    char *t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    int t22;
    char *t23;
    int t24;
    char *t25;
    int t26;
    char *t27;
    char *t28;
    int t29;
    unsigned int t30;

LAB0:    t8 = (t7 + 4U);
    t9 = (t3 != 0);
    if (t9 == 1)
        goto LAB3;

LAB2:    t10 = (t7 + 12U);
    *((char **)t10) = t4;
    t11 = (t7 + 20U);
    *((int *)t11) = t5;
    t14 = (t4 + 12U);
    t15 = *((unsigned int *)t14);
    t16 = ieee_p_3039841270_sub_180853171_2334307252(t1, t13, t5, ((t15)));
    t17 = ieee_p_3039841270_sub_1717229644_2334307252(t1, t12, t3, t4, t16, t13);
    t18 = (t12 + 12U);
    t19 = *((unsigned int *)t18);
    t20 = (1U * t19);
    t0 = xsi_get_transient_memory(t20);
    memcpy(t0, t17, t20);
    t21 = (t12 + 0U);
    t22 = *((int *)t21);
    t23 = (t12 + 4U);
    t24 = *((int *)t23);
    t25 = (t12 + 8U);
    t26 = *((int *)t25);
    t27 = (t2 + 0U);
    t28 = (t27 + 0U);
    *((int *)t28) = t22;
    t28 = (t27 + 4U);
    *((int *)t28) = t24;
    t28 = (t27 + 8U);
    *((int *)t28) = t26;
    t29 = (t24 - t22);
    t30 = (t29 * t26);
    t30 = (t30 + 1);
    t28 = (t27 + 12U);
    *((unsigned int *)t28) = t30;

LAB1:    return t0;
LAB3:    *((char **)t8) = t3;
    goto LAB2;

LAB4:;
}

char *ieee_p_3039841270_sub_1777773159_2334307252(char *t1, char *t2, int t3, char *t4, char *t5)
{
    char t7[24];
    char t12[16];
    char t13[16];
    char *t0;
    char *t8;
    char *t9;
    unsigned char t10;
    char *t11;
    char *t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    int t22;
    char *t23;
    int t24;
    char *t25;
    int t26;
    char *t27;
    char *t28;
    int t29;
    unsigned int t30;

LAB0:    t8 = (t7 + 4U);
    *((int *)t8) = t3;
    t9 = (t7 + 8U);
    t10 = (t4 != 0);
    if (t10 == 1)
        goto LAB3;

LAB2:    t11 = (t7 + 16U);
    *((char **)t11) = t5;
    t14 = (t5 + 12U);
    t15 = *((unsigned int *)t14);
    t16 = ieee_p_3039841270_sub_180853171_2334307252(t1, t13, t3, ((t15)));
    t17 = ieee_p_3039841270_sub_1717229644_2334307252(t1, t12, t16, t13, t4, t5);
    t18 = (t12 + 12U);
    t19 = *((unsigned int *)t18);
    t20 = (1U * t19);
    t0 = xsi_get_transient_memory(t20);
    memcpy(t0, t17, t20);
    t21 = (t12 + 0U);
    t22 = *((int *)t21);
    t23 = (t12 + 4U);
    t24 = *((int *)t23);
    t25 = (t12 + 8U);
    t26 = *((int *)t25);
    t27 = (t2 + 0U);
    t28 = (t27 + 0U);
    *((int *)t28) = t22;
    t28 = (t27 + 4U);
    *((int *)t28) = t24;
    t28 = (t27 + 8U);
    *((int *)t28) = t26;
    t29 = (t24 - t22);
    t30 = (t29 * t26);
    t30 = (t30 + 1);
    t28 = (t27 + 12U);
    *((unsigned int *)t28) = t30;

LAB1:    return t0;
LAB3:    *((char **)t9) = t4;
    goto LAB2;

LAB4:;
}

char *ieee_p_3039841270_sub_3125497933_2334307252(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t7[24];
    char t12[16];
    char t13[16];
    char *t0;
    char *t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    int t22;
    char *t23;
    int t24;
    char *t25;
    int t26;
    char *t27;
    char *t28;
    int t29;
    unsigned int t30;

LAB0:    t8 = (t7 + 4U);
    t9 = (t3 != 0);
    if (t9 == 1)
        goto LAB3;

LAB2:    t10 = (t7 + 12U);
    *((char **)t10) = t4;
    t11 = (t7 + 20U);
    *((int *)t11) = t5;
    t14 = (t4 + 12U);
    t15 = *((unsigned int *)t14);
    t16 = ieee_p_3039841270_sub_2780269832_2334307252(t1, t13, t5, ((t15)));
    t17 = ieee_p_3039841270_sub_3088559465_2334307252(t1, t12, t3, t4, t16, t13);
    t18 = (t12 + 12U);
    t19 = *((unsigned int *)t18);
    t20 = (1U * t19);
    t0 = xsi_get_transient_memory(t20);
    memcpy(t0, t17, t20);
    t21 = (t12 + 0U);
    t22 = *((int *)t21);
    t23 = (t12 + 4U);
    t24 = *((int *)t23);
    t25 = (t12 + 8U);
    t26 = *((int *)t25);
    t27 = (t2 + 0U);
    t28 = (t27 + 0U);
    *((int *)t28) = t22;
    t28 = (t27 + 4U);
    *((int *)t28) = t24;
    t28 = (t27 + 8U);
    *((int *)t28) = t26;
    t29 = (t24 - t22);
    t30 = (t29 * t26);
    t30 = (t30 + 1);
    t28 = (t27 + 12U);
    *((unsigned int *)t28) = t30;

LAB1:    return t0;
LAB3:    *((char **)t8) = t3;
    goto LAB2;

LAB4:;
}

char *ieee_p_3039841270_sub_3620625845_2334307252(char *t1, char *t2, int t3, char *t4, char *t5)
{
    char t7[24];
    char t12[16];
    char t13[16];
    char *t0;
    char *t8;
    char *t9;
    unsigned char t10;
    char *t11;
    char *t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    int t22;
    char *t23;
    int t24;
    char *t25;
    int t26;
    char *t27;
    char *t28;
    int t29;
    unsigned int t30;

LAB0:    t8 = (t7 + 4U);
    *((int *)t8) = t3;
    t9 = (t7 + 8U);
    t10 = (t4 != 0);
    if (t10 == 1)
        goto LAB3;

LAB2:    t11 = (t7 + 16U);
    *((char **)t11) = t5;
    t14 = (t5 + 12U);
    t15 = *((unsigned int *)t14);
    t16 = ieee_p_3039841270_sub_2780269832_2334307252(t1, t13, t3, ((t15)));
    t17 = ieee_p_3039841270_sub_3088559465_2334307252(t1, t12, t16, t13, t4, t5);
    t18 = (t12 + 12U);
    t19 = *((unsigned int *)t18);
    t20 = (1U * t19);
    t0 = xsi_get_transient_memory(t20);
    memcpy(t0, t17, t20);
    t21 = (t12 + 0U);
    t22 = *((int *)t21);
    t23 = (t12 + 4U);
    t24 = *((int *)t23);
    t25 = (t12 + 8U);
    t26 = *((int *)t25);
    t27 = (t2 + 0U);
    t28 = (t27 + 0U);
    *((int *)t28) = t22;
    t28 = (t27 + 4U);
    *((int *)t28) = t24;
    t28 = (t27 + 8U);
    *((int *)t28) = t26;
    t29 = (t24 - t22);
    t30 = (t29 * t26);
    t30 = (t30 + 1);
    t28 = (t27 + 12U);
    *((unsigned int *)t28) = t30;

LAB1:    return t0;
LAB3:    *((char **)t9) = t4;
    goto LAB2;

LAB4:;
}

char *ieee_p_3039841270_sub_2382883967_2334307252(char *t1, char *t2, char *t3, char *t4, char *t5, char *t6)
{
    char t7[488];
    char t8[40];
    char t15[8];
    char t24[8];
    char t27[16];
    char t34[16];
    char t55[16];
    char t79[16];
    char t113[16];
    char *t0;
    char *t9;
    unsigned int t10;
    int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t25;
    char *t26;
    char *t28;
    char *t29;
    int t30;
    char *t31;
    int t32;
    unsigned int t33;
    char *t35;
    int t36;
    char *t37;
    int t38;
    char *t39;
    unsigned int t40;
    int t41;
    int t42;
    int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    char *t49;
    unsigned int t50;
    int t51;
    int t52;
    int t53;
    unsigned int t54;
    char *t56;
    unsigned int t57;
    char *t58;
    unsigned int t59;
    int t60;
    int t61;
    char *t62;
    char *t63;
    int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    unsigned int t74;
    int t75;
    int t76;
    int t77;
    unsigned int t78;
    char *t80;
    unsigned int t81;
    char *t82;
    unsigned int t83;
    int t84;
    int t85;
    char *t86;
    char *t87;
    int t88;
    unsigned int t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    char *t96;
    unsigned char t97;
    char *t98;
    char *t99;
    unsigned char t100;
    char *t101;
    unsigned char t102;
    char *t103;
    unsigned char t104;
    char *t105;
    unsigned int t106;
    unsigned char t107;
    char *t108;
    char *t109;
    char *t110;
    int t111;
    unsigned int t112;

LAB0:    t9 = (t4 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = (t10 - 1);
    t12 = (t7 + 4U);
    t13 = ((STD_STANDARD) + 384);
    t14 = (t12 + 88U);
    *((char **)t14) = t13;
    t16 = (t12 + 56U);
    *((char **)t16) = t15;
    *((int *)t15) = t11;
    t17 = (t12 + 80U);
    *((unsigned int *)t17) = 4U;
    t18 = (t6 + 12U);
    t19 = *((unsigned int *)t18);
    t20 = (t19 - 1);
    t21 = (t7 + 124U);
    t22 = ((STD_STANDARD) + 384);
    t23 = (t21 + 88U);
    *((char **)t23) = t22;
    t25 = (t21 + 56U);
    *((char **)t25) = t24;
    *((int *)t24) = t20;
    t26 = (t21 + 80U);
    *((unsigned int *)t26) = 4U;
    t28 = (t12 + 56U);
    t29 = *((char **)t28);
    t30 = *((int *)t29);
    t28 = (t27 + 0U);
    t31 = (t28 + 0U);
    *((int *)t31) = t30;
    t31 = (t28 + 4U);
    *((int *)t31) = 0;
    t31 = (t28 + 8U);
    *((int *)t31) = -1;
    t32 = (0 - t30);
    t33 = (t32 * -1);
    t33 = (t33 + 1);
    t31 = (t28 + 12U);
    *((unsigned int *)t31) = t33;
    t31 = (t21 + 56U);
    t35 = *((char **)t31);
    t36 = *((int *)t35);
    t31 = (t34 + 0U);
    t37 = (t31 + 0U);
    *((int *)t37) = t36;
    t37 = (t31 + 4U);
    *((int *)t37) = 0;
    t37 = (t31 + 8U);
    *((int *)t37) = -1;
    t38 = (0 - t36);
    t33 = (t38 * -1);
    t33 = (t33 + 1);
    t37 = (t31 + 12U);
    *((unsigned int *)t37) = t33;
    t37 = (t4 + 12U);
    t33 = *((unsigned int *)t37);
    t39 = (t6 + 12U);
    t40 = *((unsigned int *)t39);
    t41 = (t33 + t40);
    t42 = (t41 - 1);
    t43 = (0 - t42);
    t44 = (t43 * -1);
    t44 = (t44 + 1);
    t44 = (t44 * 1U);
    t45 = xsi_get_transient_memory(t44);
    memset(t45, 0, t44);
    t46 = t45;
    memset(t46, (unsigned char)0, t44);
    t47 = (t4 + 12U);
    t48 = *((unsigned int *)t47);
    t49 = (t6 + 12U);
    t50 = *((unsigned int *)t49);
    t51 = (t48 + t50);
    t52 = (t51 - 1);
    t53 = (0 - t52);
    t54 = (t53 * -1);
    t54 = (t54 + 1);
    t54 = (t54 * 1U);
    t56 = (t4 + 12U);
    t57 = *((unsigned int *)t56);
    t58 = (t6 + 12U);
    t59 = *((unsigned int *)t58);
    t60 = (t57 + t59);
    t61 = (t60 - 1);
    t62 = (t55 + 0U);
    t63 = (t62 + 0U);
    *((int *)t63) = t61;
    t63 = (t62 + 4U);
    *((int *)t63) = 0;
    t63 = (t62 + 8U);
    *((int *)t63) = -1;
    t64 = (0 - t61);
    t65 = (t64 * -1);
    t65 = (t65 + 1);
    t63 = (t62 + 12U);
    *((unsigned int *)t63) = t65;
    t63 = (t7 + 244U);
    t66 = (t1 + 2880);
    t67 = (t63 + 88U);
    *((char **)t67) = t66;
    t68 = (char *)alloca(t54);
    t69 = (t63 + 56U);
    *((char **)t69) = t68;
    memcpy(t68, t45, t54);
    t70 = (t63 + 64U);
    *((char **)t70) = t55;
    t71 = (t63 + 80U);
    *((unsigned int *)t71) = t54;
    t72 = (t4 + 12U);
    t65 = *((unsigned int *)t72);
    t73 = (t6 + 12U);
    t74 = *((unsigned int *)t73);
    t75 = (t65 + t74);
    t76 = (t75 - 1);
    t77 = (0 - t76);
    t78 = (t77 * -1);
    t78 = (t78 + 1);
    t78 = (t78 * 1U);
    t80 = (t4 + 12U);
    t81 = *((unsigned int *)t80);
    t82 = (t6 + 12U);
    t83 = *((unsigned int *)t82);
    t84 = (t81 + t83);
    t85 = (t84 - 1);
    t86 = (t79 + 0U);
    t87 = (t86 + 0U);
    *((int *)t87) = t85;
    t87 = (t86 + 4U);
    *((int *)t87) = 0;
    t87 = (t86 + 8U);
    *((int *)t87) = -1;
    t88 = (0 - t85);
    t89 = (t88 * -1);
    t89 = (t89 + 1);
    t87 = (t86 + 12U);
    *((unsigned int *)t87) = t89;
    t87 = (t7 + 364U);
    t90 = (t1 + 2880);
    t91 = (t87 + 88U);
    *((char **)t91) = t90;
    t92 = (char *)alloca(t78);
    t93 = (t87 + 56U);
    *((char **)t93) = t92;
    xsi_type_set_default_value(t90, t92, t79);
    t94 = (t87 + 64U);
    *((char **)t94) = t79;
    t95 = (t87 + 80U);
    *((unsigned int *)t95) = t78;
    t96 = (t8 + 4U);
    t97 = (t3 != 0);
    if (t97 == 1)
        goto LAB3;

LAB2:    t98 = (t8 + 12U);
    *((char **)t98) = t4;
    t99 = (t8 + 20U);
    t100 = (t5 != 0);
    if (t100 == 1)
        goto LAB5;

LAB4:    t101 = (t8 + 28U);
    *((char **)t101) = t6;
    t103 = (t4 + 12U);
    t89 = *((unsigned int *)t103);
    t104 = (t89 < 1);
    if (t104 == 1)
        goto LAB9;

LAB10:    t105 = (t6 + 12U);
    t106 = *((unsigned int *)t105);
    t107 = (t106 < 1);
    t102 = t107;

LAB11:    if (t102 != 0)
        goto LAB6;

LAB8:
LAB7:    t9 = (t5 + 0);
    t13 = (t55 + 12U);
    t10 = *((unsigned int *)t13);
    t14 = ieee_p_3039841270_sub_2675122452_2334307252(t1, t113, t9, t34, ((t10)));
    t16 = (t87 + 56U);
    t17 = *((char **)t16);
    t16 = (t17 + 0);
    t18 = (t113 + 12U);
    t19 = *((unsigned int *)t18);
    t19 = (t19 * 1U);
    memcpy(t16, t14, t19);
    t9 = (t12 + 56U);
    t13 = *((char **)t9);
    t11 = *((int *)t13);
    t20 = 0;
    t30 = t11;

LAB13:    if (t20 <= t30)
        goto LAB14;

LAB16:    t9 = (t63 + 56U);
    t13 = *((char **)t9);
    t9 = (t55 + 12U);
    t10 = *((unsigned int *)t9);
    t10 = (t10 * 1U);
    t0 = xsi_get_transient_memory(t10);
    memcpy(t0, t13, t10);
    t14 = (t55 + 0U);
    t11 = *((int *)t14);
    t16 = (t55 + 4U);
    t20 = *((int *)t16);
    t17 = (t55 + 8U);
    t30 = *((int *)t17);
    t18 = (t2 + 0U);
    t22 = (t18 + 0U);
    *((int *)t22) = t11;
    t22 = (t18 + 4U);
    *((int *)t22) = t20;
    t22 = (t18 + 8U);
    *((int *)t22) = t30;
    t32 = (t20 - t11);
    t19 = (t32 * t30);
    t19 = (t19 + 1);
    t22 = (t18 + 12U);
    *((unsigned int *)t22) = t19;

LAB1:    return t0;
LAB3:    *((char **)t96) = t3;
    goto LAB2;

LAB5:    *((char **)t99) = t5;
    goto LAB4;

LAB6:    t108 = (t1 + 1168U);
    t109 = *((char **)t108);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t109, 0U);
    t108 = (t2 + 0U);
    t110 = (t108 + 0U);
    *((int *)t110) = 0;
    t110 = (t108 + 4U);
    *((int *)t110) = 1;
    t110 = (t108 + 8U);
    *((int *)t110) = -1;
    t111 = (1 - 0);
    t112 = (t111 * -1);
    t112 = (t112 + 1);
    t110 = (t108 + 12U);
    *((unsigned int *)t110) = t112;
    goto LAB1;

LAB9:    t102 = (unsigned char)1;
    goto LAB11;

LAB12:    goto LAB7;

LAB14:    t9 = (t3 + 0);
    t14 = (t27 + 0U);
    t32 = *((int *)t14);
    t16 = (t27 + 8U);
    t36 = *((int *)t16);
    t38 = (t20 - t32);
    t10 = (t38 * t36);
    t17 = (t27 + 4U);
    t41 = *((int *)t17);
    xsi_vhdl_check_range_of_index(t32, t41, t36, t20);
    t19 = (1U * t10);
    t33 = (0 + t19);
    t18 = (t9 + t33);
    t97 = *((unsigned char *)t18);
    t100 = (t97 == (unsigned char)1);
    if (t100 != 0)
        goto LAB17;

LAB19:
LAB18:    t9 = (t87 + 56U);
    t13 = *((char **)t9);
    t9 = ieee_p_3039841270_sub_2926835514_2334307252(t1, t113, t13, t79, 1);
    t14 = (t87 + 56U);
    t16 = *((char **)t14);
    t14 = (t16 + 0);
    t17 = (t113 + 12U);
    t10 = *((unsigned int *)t17);
    t10 = (t10 * 1U);
    memcpy(t14, t9, t10);

LAB15:    if (t20 == t30)
        goto LAB16;

LAB20:    t11 = (t20 + 1);
    t20 = t11;
    goto LAB13;

LAB17:    t22 = (t63 + 56U);
    t23 = *((char **)t22);
    t22 = (t87 + 56U);
    t25 = *((char **)t22);
    t22 = ieee_p_3039841270_sub_1717157770_2334307252(t1, t113, t23, t55, t25, t79);
    t26 = (t63 + 56U);
    t28 = *((char **)t26);
    t26 = (t28 + 0);
    t29 = (t113 + 12U);
    t40 = *((unsigned int *)t29);
    t44 = (1U * t40);
    memcpy(t26, t22, t44);
    goto LAB18;

LAB21:;
}

char *ieee_p_3039841270_sub_3337867729_2334307252(char *t1, char *t2, char *t3, char *t4, char *t5, char *t6)
{
    char t7[728];
    char t8[40];
    char t15[8];
    char t24[8];
    char t32[16];
    char t48[16];
    char t78[16];
    char t102[16];
    char t135[16];
    char *t0;
    char *t9;
    unsigned int t10;
    int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    int t29;
    int t30;
    unsigned int t31;
    char *t33;
    int t34;
    char *t35;
    int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    int t46;
    int t47;
    char *t49;
    int t50;
    char *t51;
    int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    int t62;
    char *t63;
    int t64;
    int t65;
    int t66;
    int t67;
    char *t68;
    char *t69;
    char *t70;
    int t71;
    char *t72;
    int t73;
    int t74;
    int t75;
    int t76;
    unsigned int t77;
    char *t79;
    int t80;
    char *t81;
    int t82;
    int t83;
    int t84;
    char *t85;
    int t86;
    unsigned int t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    int t96;
    char *t97;
    int t98;
    int t99;
    int t100;
    int t101;
    char *t103;
    int t104;
    char *t105;
    int t106;
    int t107;
    int t108;
    char *t109;
    int t110;
    unsigned int t111;
    char *t112;
    char *t113;
    char *t114;
    char *t115;
    char *t116;
    char *t117;
    char *t118;
    unsigned char t119;
    char *t120;
    char *t121;
    unsigned char t122;
    char *t123;
    unsigned char t124;
    char *t125;
    char *t126;
    int t127;
    unsigned char t128;
    char *t129;
    int t130;
    unsigned char t131;
    char *t132;
    char *t133;
    int t134;

LAB0:    t9 = (t4 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = (t10 - 1);
    t12 = (t7 + 4U);
    t13 = ((STD_STANDARD) + 384);
    t14 = (t12 + 88U);
    *((char **)t14) = t13;
    t16 = (t12 + 56U);
    *((char **)t16) = t15;
    *((int *)t15) = t11;
    t17 = (t12 + 80U);
    *((unsigned int *)t17) = 4U;
    t18 = (t6 + 12U);
    t19 = *((unsigned int *)t18);
    t20 = (t19 - 1);
    t21 = (t7 + 124U);
    t22 = ((STD_STANDARD) + 384);
    t23 = (t21 + 88U);
    *((char **)t23) = t22;
    t25 = (t21 + 56U);
    *((char **)t25) = t24;
    *((int *)t24) = t20;
    t26 = (t21 + 80U);
    *((unsigned int *)t26) = 4U;
    t27 = (t12 + 56U);
    t28 = *((char **)t27);
    t29 = *((int *)t28);
    t30 = (0 - t29);
    t31 = (t30 * -1);
    t31 = (t31 + 1);
    t31 = (t31 * 1U);
    t27 = (t12 + 56U);
    t33 = *((char **)t27);
    t34 = *((int *)t33);
    t27 = (t32 + 0U);
    t35 = (t27 + 0U);
    *((int *)t35) = t34;
    t35 = (t27 + 4U);
    *((int *)t35) = 0;
    t35 = (t27 + 8U);
    *((int *)t35) = -1;
    t36 = (0 - t34);
    t37 = (t36 * -1);
    t37 = (t37 + 1);
    t35 = (t27 + 12U);
    *((unsigned int *)t35) = t37;
    t35 = (t7 + 244U);
    t38 = (t1 + 2992);
    t39 = (t35 + 88U);
    *((char **)t39) = t38;
    t40 = (char *)alloca(t31);
    t41 = (t35 + 56U);
    *((char **)t41) = t40;
    xsi_type_set_default_value(t38, t40, t32);
    t42 = (t35 + 64U);
    *((char **)t42) = t32;
    t43 = (t35 + 80U);
    *((unsigned int *)t43) = t31;
    t44 = (t21 + 56U);
    t45 = *((char **)t44);
    t46 = *((int *)t45);
    t47 = (0 - t46);
    t37 = (t47 * -1);
    t37 = (t37 + 1);
    t37 = (t37 * 1U);
    t44 = (t21 + 56U);
    t49 = *((char **)t44);
    t50 = *((int *)t49);
    t44 = (t48 + 0U);
    t51 = (t44 + 0U);
    *((int *)t51) = t50;
    t51 = (t44 + 4U);
    *((int *)t51) = 0;
    t51 = (t44 + 8U);
    *((int *)t51) = -1;
    t52 = (0 - t50);
    t53 = (t52 * -1);
    t53 = (t53 + 1);
    t51 = (t44 + 12U);
    *((unsigned int *)t51) = t53;
    t51 = (t7 + 364U);
    t54 = (t1 + 2992);
    t55 = (t51 + 88U);
    *((char **)t55) = t54;
    t56 = (char *)alloca(t37);
    t57 = (t51 + 56U);
    *((char **)t57) = t56;
    xsi_type_set_default_value(t54, t56, t48);
    t58 = (t51 + 64U);
    *((char **)t58) = t48;
    t59 = (t51 + 80U);
    *((unsigned int *)t59) = t37;
    t60 = (t12 + 56U);
    t61 = *((char **)t60);
    t62 = *((int *)t61);
    t60 = (t21 + 56U);
    t63 = *((char **)t60);
    t64 = *((int *)t63);
    t65 = (t62 + t64);
    t66 = (t65 + 1);
    t67 = (0 - t66);
    t53 = (t67 * -1);
    t53 = (t53 + 1);
    t53 = (t53 * 1U);
    t60 = xsi_get_transient_memory(t53);
    memset(t60, 0, t53);
    t68 = t60;
    memset(t68, (unsigned char)0, t53);
    t69 = (t12 + 56U);
    t70 = *((char **)t69);
    t71 = *((int *)t70);
    t69 = (t21 + 56U);
    t72 = *((char **)t69);
    t73 = *((int *)t72);
    t74 = (t71 + t73);
    t75 = (t74 + 1);
    t76 = (0 - t75);
    t77 = (t76 * -1);
    t77 = (t77 + 1);
    t77 = (t77 * 1U);
    t69 = (t12 + 56U);
    t79 = *((char **)t69);
    t80 = *((int *)t79);
    t69 = (t21 + 56U);
    t81 = *((char **)t69);
    t82 = *((int *)t81);
    t83 = (t80 + t82);
    t84 = (t83 + 1);
    t69 = (t78 + 0U);
    t85 = (t69 + 0U);
    *((int *)t85) = t84;
    t85 = (t69 + 4U);
    *((int *)t85) = 0;
    t85 = (t69 + 8U);
    *((int *)t85) = -1;
    t86 = (0 - t84);
    t87 = (t86 * -1);
    t87 = (t87 + 1);
    t85 = (t69 + 12U);
    *((unsigned int *)t85) = t87;
    t85 = (t7 + 484U);
    t88 = (t1 + 2992);
    t89 = (t85 + 88U);
    *((char **)t89) = t88;
    t90 = (char *)alloca(t77);
    t91 = (t85 + 56U);
    *((char **)t91) = t90;
    memcpy(t90, t60, t77);
    t92 = (t85 + 64U);
    *((char **)t92) = t78;
    t93 = (t85 + 80U);
    *((unsigned int *)t93) = t77;
    t94 = (t12 + 56U);
    t95 = *((char **)t94);
    t96 = *((int *)t95);
    t94 = (t21 + 56U);
    t97 = *((char **)t94);
    t98 = *((int *)t97);
    t99 = (t96 + t98);
    t100 = (t99 + 1);
    t101 = (0 - t100);
    t87 = (t101 * -1);
    t87 = (t87 + 1);
    t87 = (t87 * 1U);
    t94 = (t12 + 56U);
    t103 = *((char **)t94);
    t104 = *((int *)t103);
    t94 = (t21 + 56U);
    t105 = *((char **)t94);
    t106 = *((int *)t105);
    t107 = (t104 + t106);
    t108 = (t107 + 1);
    t94 = (t102 + 0U);
    t109 = (t94 + 0U);
    *((int *)t109) = t108;
    t109 = (t94 + 4U);
    *((int *)t109) = 0;
    t109 = (t94 + 8U);
    *((int *)t109) = -1;
    t110 = (0 - t108);
    t111 = (t110 * -1);
    t111 = (t111 + 1);
    t109 = (t94 + 12U);
    *((unsigned int *)t109) = t111;
    t109 = (t7 + 604U);
    t112 = (t1 + 2992);
    t113 = (t109 + 88U);
    *((char **)t113) = t112;
    t114 = (char *)alloca(t87);
    t115 = (t109 + 56U);
    *((char **)t115) = t114;
    xsi_type_set_default_value(t112, t114, t102);
    t116 = (t109 + 64U);
    *((char **)t116) = t102;
    t117 = (t109 + 80U);
    *((unsigned int *)t117) = t87;
    t118 = (t8 + 4U);
    t119 = (t3 != 0);
    if (t119 == 1)
        goto LAB3;

LAB2:    t120 = (t8 + 12U);
    *((char **)t120) = t4;
    t121 = (t8 + 20U);
    t122 = (t5 != 0);
    if (t122 == 1)
        goto LAB5;

LAB4:    t123 = (t8 + 28U);
    *((char **)t123) = t6;
    t125 = (t12 + 56U);
    t126 = *((char **)t125);
    t127 = *((int *)t126);
    t128 = (t127 < 0);
    if (t128 == 1)
        goto LAB9;

LAB10:    t125 = (t21 + 56U);
    t129 = *((char **)t125);
    t130 = *((int *)t129);
    t131 = (t130 < 0);
    t124 = t131;

LAB11:    if (t124 != 0)
        goto LAB6;

LAB8:
LAB7:    t9 = (t35 + 56U);
    t13 = *((char **)t9);
    t9 = (t13 + 0);
    t14 = (t4 + 12U);
    t10 = *((unsigned int *)t14);
    t10 = (t10 * 1U);
    memcpy(t9, t3, t10);
    t9 = (t51 + 56U);
    t13 = *((char **)t9);
    t9 = (t13 + 0);
    t14 = (t6 + 12U);
    t10 = *((unsigned int *)t14);
    t10 = (t10 * 1U);
    memcpy(t9, t5, t10);
    t9 = (t51 + 56U);
    t13 = *((char **)t9);
    t9 = (t78 + 12U);
    t10 = *((unsigned int *)t9);
    t14 = ieee_p_3039841270_sub_3322286019_2334307252(t1, t135, t13, t48, ((t10)));
    t16 = (t109 + 56U);
    t17 = *((char **)t16);
    t16 = (t17 + 0);
    t18 = (t135 + 12U);
    t19 = *((unsigned int *)t18);
    t19 = (t19 * 1U);
    memcpy(t16, t14, t19);
    t9 = (t12 + 56U);
    t13 = *((char **)t9);
    t11 = *((int *)t13);
    t20 = (t11 - 1);
    t29 = 0;
    t30 = t20;

LAB13:    if (t29 <= t30)
        goto LAB14;

LAB16:    t9 = (t35 + 56U);
    t13 = *((char **)t9);
    t9 = (t12 + 56U);
    t14 = *((char **)t9);
    t11 = *((int *)t14);
    t9 = (t32 + 0U);
    t20 = *((int *)t9);
    t16 = (t32 + 8U);
    t29 = *((int *)t16);
    t30 = (t11 - t20);
    t10 = (t30 * t29);
    t17 = (t32 + 4U);
    t34 = *((int *)t17);
    xsi_vhdl_check_range_of_index(t20, t34, t29, t11);
    t19 = (1U * t10);
    t31 = (0 + t19);
    t18 = (t13 + t31);
    t119 = *((unsigned char *)t18);
    t122 = (t119 == (unsigned char)1);
    if (t122 != 0)
        goto LAB21;

LAB23:
LAB22:    t9 = (t85 + 56U);
    t13 = *((char **)t9);
    t9 = (t78 + 12U);
    t10 = *((unsigned int *)t9);
    t10 = (t10 * 1U);
    t0 = xsi_get_transient_memory(t10);
    memcpy(t0, t13, t10);
    t14 = (t78 + 0U);
    t11 = *((int *)t14);
    t16 = (t78 + 4U);
    t20 = *((int *)t16);
    t17 = (t78 + 8U);
    t29 = *((int *)t17);
    t18 = (t2 + 0U);
    t22 = (t18 + 0U);
    *((int *)t22) = t11;
    t22 = (t18 + 4U);
    *((int *)t22) = t20;
    t22 = (t18 + 8U);
    *((int *)t22) = t29;
    t30 = (t20 - t11);
    t19 = (t30 * t29);
    t19 = (t19 + 1);
    t22 = (t18 + 12U);
    *((unsigned int *)t22) = t19;

LAB1:    return t0;
LAB3:    *((char **)t118) = t3;
    goto LAB2;

LAB5:    *((char **)t121) = t5;
    goto LAB4;

LAB6:    t125 = (t1 + 1288U);
    t132 = *((char **)t125);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t132, 0U);
    t125 = (t2 + 0U);
    t133 = (t125 + 0U);
    *((int *)t133) = 0;
    t133 = (t125 + 4U);
    *((int *)t133) = 1;
    t133 = (t125 + 8U);
    *((int *)t133) = -1;
    t134 = (1 - 0);
    t111 = (t134 * -1);
    t111 = (t111 + 1);
    t133 = (t125 + 12U);
    *((unsigned int *)t133) = t111;
    goto LAB1;

LAB9:    t124 = (unsigned char)1;
    goto LAB11;

LAB12:    goto LAB7;

LAB14:    t9 = (t35 + 56U);
    t14 = *((char **)t9);
    t9 = (t32 + 0U);
    t34 = *((int *)t9);
    t16 = (t32 + 8U);
    t36 = *((int *)t16);
    t46 = (t29 - t34);
    t10 = (t46 * t36);
    t17 = (t32 + 4U);
    t47 = *((int *)t17);
    xsi_vhdl_check_range_of_index(t34, t47, t36, t29);
    t19 = (1U * t10);
    t31 = (0 + t19);
    t18 = (t14 + t31);
    t119 = *((unsigned char *)t18);
    t122 = (t119 == (unsigned char)1);
    if (t122 != 0)
        goto LAB17;

LAB19:
LAB18:    t9 = (t109 + 56U);
    t13 = *((char **)t9);
    t9 = ieee_p_3039841270_sub_4208422723_2334307252(t1, t135, t13, t102, 1);
    t14 = (t109 + 56U);
    t16 = *((char **)t14);
    t14 = (t16 + 0);
    t17 = (t135 + 12U);
    t10 = *((unsigned int *)t17);
    t10 = (t10 * 1U);
    memcpy(t14, t9, t10);

LAB15:    if (t29 == t30)
        goto LAB16;

LAB20:    t11 = (t29 + 1);
    t29 = t11;
    goto LAB13;

LAB17:    t22 = (t85 + 56U);
    t23 = *((char **)t22);
    t22 = (t109 + 56U);
    t25 = *((char **)t22);
    t22 = ieee_p_3039841270_sub_3088487591_2334307252(t1, t135, t23, t78, t25, t102);
    t26 = (t85 + 56U);
    t27 = *((char **)t26);
    t26 = (t27 + 0);
    t28 = (t135 + 12U);
    t37 = *((unsigned int *)t28);
    t53 = (1U * t37);
    memcpy(t26, t22, t53);
    goto LAB18;

LAB21:    t22 = (t85 + 56U);
    t23 = *((char **)t22);
    t22 = (t109 + 56U);
    t25 = *((char **)t22);
    t22 = ieee_p_3039841270_sub_3088559465_2334307252(t1, t135, t23, t78, t25, t102);
    t26 = (t85 + 56U);
    t27 = *((char **)t26);
    t26 = (t27 + 0);
    t28 = (t135 + 12U);
    t37 = *((unsigned int *)t28);
    t53 = (1U * t37);
    memcpy(t26, t22, t53);
    goto LAB22;

LAB24:;
}

char *ieee_p_3039841270_sub_2065693972_2334307252(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t7[24];
    char t12[16];
    char t13[16];
    char *t0;
    char *t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    int t22;
    char *t23;
    int t24;
    char *t25;
    int t26;
    char *t27;
    char *t28;
    int t29;
    unsigned int t30;

LAB0:    t8 = (t7 + 4U);
    t9 = (t3 != 0);
    if (t9 == 1)
        goto LAB3;

LAB2:    t10 = (t7 + 12U);
    *((char **)t10) = t4;
    t11 = (t7 + 20U);
    *((int *)t11) = t5;
    t14 = (t4 + 12U);
    t15 = *((unsigned int *)t14);
    t16 = ieee_p_3039841270_sub_180853171_2334307252(t1, t13, t5, ((t15)));
    t17 = ieee_p_3039841270_sub_2382883967_2334307252(t1, t12, t3, t4, t16, t13);
    t18 = (t12 + 12U);
    t19 = *((unsigned int *)t18);
    t20 = (1U * t19);
    t0 = xsi_get_transient_memory(t20);
    memcpy(t0, t17, t20);
    t21 = (t12 + 0U);
    t22 = *((int *)t21);
    t23 = (t12 + 4U);
    t24 = *((int *)t23);
    t25 = (t12 + 8U);
    t26 = *((int *)t25);
    t27 = (t2 + 0U);
    t28 = (t27 + 0U);
    *((int *)t28) = t22;
    t28 = (t27 + 4U);
    *((int *)t28) = t24;
    t28 = (t27 + 8U);
    *((int *)t28) = t26;
    t29 = (t24 - t22);
    t30 = (t29 * t26);
    t30 = (t30 + 1);
    t28 = (t27 + 12U);
    *((unsigned int *)t28) = t30;

LAB1:    return t0;
LAB3:    *((char **)t8) = t3;
    goto LAB2;

LAB4:;
}

char *ieee_p_3039841270_sub_1777665348_2334307252(char *t1, char *t2, int t3, char *t4, char *t5)
{
    char t7[24];
    char t12[16];
    char t13[16];
    char *t0;
    char *t8;
    char *t9;
    unsigned char t10;
    char *t11;
    char *t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    int t22;
    char *t23;
    int t24;
    char *t25;
    int t26;
    char *t27;
    char *t28;
    int t29;
    unsigned int t30;

LAB0:    t8 = (t7 + 4U);
    *((int *)t8) = t3;
    t9 = (t7 + 8U);
    t10 = (t4 != 0);
    if (t10 == 1)
        goto LAB3;

LAB2:    t11 = (t7 + 16U);
    *((char **)t11) = t5;
    t14 = (t5 + 12U);
    t15 = *((unsigned int *)t14);
    t16 = ieee_p_3039841270_sub_180853171_2334307252(t1, t13, t3, ((t15)));
    t17 = ieee_p_3039841270_sub_2382883967_2334307252(t1, t12, t16, t13, t4, t5);
    t18 = (t12 + 12U);
    t19 = *((unsigned int *)t18);
    t20 = (1U * t19);
    t0 = xsi_get_transient_memory(t20);
    memcpy(t0, t17, t20);
    t21 = (t12 + 0U);
    t22 = *((int *)t21);
    t23 = (t12 + 4U);
    t24 = *((int *)t23);
    t25 = (t12 + 8U);
    t26 = *((int *)t25);
    t27 = (t2 + 0U);
    t28 = (t27 + 0U);
    *((int *)t28) = t22;
    t28 = (t27 + 4U);
    *((int *)t28) = t24;
    t28 = (t27 + 8U);
    *((int *)t28) = t26;
    t29 = (t24 - t22);
    t30 = (t29 * t26);
    t30 = (t30 + 1);
    t28 = (t27 + 12U);
    *((unsigned int *)t28) = t30;

LAB1:    return t0;
LAB3:    *((char **)t9) = t4;
    goto LAB2;

LAB4:;
}

char *ieee_p_3039841270_sub_3125390122_2334307252(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t7[24];
    char t12[16];
    char t13[16];
    char *t0;
    char *t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    int t22;
    char *t23;
    int t24;
    char *t25;
    int t26;
    char *t27;
    char *t28;
    int t29;
    unsigned int t30;

LAB0:    t8 = (t7 + 4U);
    t9 = (t3 != 0);
    if (t9 == 1)
        goto LAB3;

LAB2:    t10 = (t7 + 12U);
    *((char **)t10) = t4;
    t11 = (t7 + 20U);
    *((int *)t11) = t5;
    t14 = (t4 + 12U);
    t15 = *((unsigned int *)t14);
    t16 = ieee_p_3039841270_sub_2780269832_2334307252(t1, t13, t5, ((t15)));
    t17 = ieee_p_3039841270_sub_3337867729_2334307252(t1, t12, t3, t4, t16, t13);
    t18 = (t12 + 12U);
    t19 = *((unsigned int *)t18);
    t20 = (1U * t19);
    t0 = xsi_get_transient_memory(t20);
    memcpy(t0, t17, t20);
    t21 = (t12 + 0U);
    t22 = *((int *)t21);
    t23 = (t12 + 4U);
    t24 = *((int *)t23);
    t25 = (t12 + 8U);
    t26 = *((int *)t25);
    t27 = (t2 + 0U);
    t28 = (t27 + 0U);
    *((int *)t28) = t22;
    t28 = (t27 + 4U);
    *((int *)t28) = t24;
    t28 = (t27 + 8U);
    *((int *)t28) = t26;
    t29 = (t24 - t22);
    t30 = (t29 * t26);
    t30 = (t30 + 1);
    t28 = (t27 + 12U);
    *((unsigned int *)t28) = t30;

LAB1:    return t0;
LAB3:    *((char **)t8) = t3;
    goto LAB2;

LAB4:;
}

char *ieee_p_3039841270_sub_3620518034_2334307252(char *t1, char *t2, int t3, char *t4, char *t5)
{
    char t7[24];
    char t12[16];
    char t13[16];
    char *t0;
    char *t8;
    char *t9;
    unsigned char t10;
    char *t11;
    char *t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    int t22;
    char *t23;
    int t24;
    char *t25;
    int t26;
    char *t27;
    char *t28;
    int t29;
    unsigned int t30;

LAB0:    t8 = (t7 + 4U);
    *((int *)t8) = t3;
    t9 = (t7 + 8U);
    t10 = (t4 != 0);
    if (t10 == 1)
        goto LAB3;

LAB2:    t11 = (t7 + 16U);
    *((char **)t11) = t5;
    t14 = (t5 + 12U);
    t15 = *((unsigned int *)t14);
    t16 = ieee_p_3039841270_sub_2780269832_2334307252(t1, t13, t3, ((t15)));
    t17 = ieee_p_3039841270_sub_3337867729_2334307252(t1, t12, t16, t13, t4, t5);
    t18 = (t12 + 12U);
    t19 = *((unsigned int *)t18);
    t20 = (1U * t19);
    t0 = xsi_get_transient_memory(t20);
    memcpy(t0, t17, t20);
    t21 = (t12 + 0U);
    t22 = *((int *)t21);
    t23 = (t12 + 4U);
    t24 = *((int *)t23);
    t25 = (t12 + 8U);
    t26 = *((int *)t25);
    t27 = (t2 + 0U);
    t28 = (t27 + 0U);
    *((int *)t28) = t22;
    t28 = (t27 + 4U);
    *((int *)t28) = t24;
    t28 = (t27 + 8U);
    *((int *)t28) = t26;
    t29 = (t24 - t22);
    t30 = (t29 * t26);
    t30 = (t30 + 1);
    t28 = (t27 + 12U);
    *((unsigned int *)t28) = t30;

LAB1:    return t0;
LAB3:    *((char **)t9) = t4;
    goto LAB2;

LAB4:;
}

char *ieee_p_3039841270_sub_1666942187_2334307252(char *t1, char *t2, char *t3, char *t4, char *t5, char *t6)
{
    char t7[248];
    char t8[40];
    char t14[16];
    char t32[16];
    char *t0;
    char *t9;
    unsigned int t10;
    int t11;
    int t12;
    unsigned int t13;
    char *t15;
    unsigned int t16;
    int t17;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    int t29;
    int t30;
    unsigned int t31;
    char *t33;
    unsigned int t34;
    int t35;
    char *t36;
    char *t37;
    int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned char t47;
    char *t48;
    char *t49;
    unsigned char t50;
    char *t51;
    unsigned char t52;
    char *t53;
    unsigned char t54;
    char *t55;
    unsigned int t56;
    unsigned char t57;
    char *t58;
    char *t59;
    char *t60;
    int t61;
    unsigned int t62;

LAB0:    t9 = (t4 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = (t10 - 1);
    t12 = (0 - t11);
    t13 = (t12 * -1);
    t13 = (t13 + 1);
    t13 = (t13 * 1U);
    t15 = (t4 + 12U);
    t16 = *((unsigned int *)t15);
    t17 = (t16 - 1);
    t18 = (t14 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = t17;
    t19 = (t18 + 4U);
    *((int *)t19) = 0;
    t19 = (t18 + 8U);
    *((int *)t19) = -1;
    t20 = (0 - t17);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    t19 = (t7 + 4U);
    t22 = (t1 + 2880);
    t23 = (t19 + 88U);
    *((char **)t23) = t22;
    t24 = (char *)alloca(t13);
    t25 = (t19 + 56U);
    *((char **)t25) = t24;
    xsi_type_set_default_value(t22, t24, t14);
    t26 = (t19 + 64U);
    *((char **)t26) = t14;
    t27 = (t19 + 80U);
    *((unsigned int *)t27) = t13;
    t28 = (t6 + 12U);
    t21 = *((unsigned int *)t28);
    t29 = (t21 - 1);
    t30 = (0 - t29);
    t31 = (t30 * -1);
    t31 = (t31 + 1);
    t31 = (t31 * 1U);
    t33 = (t6 + 12U);
    t34 = *((unsigned int *)t33);
    t35 = (t34 - 1);
    t36 = (t32 + 0U);
    t37 = (t36 + 0U);
    *((int *)t37) = t35;
    t37 = (t36 + 4U);
    *((int *)t37) = 0;
    t37 = (t36 + 8U);
    *((int *)t37) = -1;
    t38 = (0 - t35);
    t39 = (t38 * -1);
    t39 = (t39 + 1);
    t37 = (t36 + 12U);
    *((unsigned int *)t37) = t39;
    t37 = (t7 + 124U);
    t40 = (t1 + 2880);
    t41 = (t37 + 88U);
    *((char **)t41) = t40;
    t42 = (char *)alloca(t31);
    t43 = (t37 + 56U);
    *((char **)t43) = t42;
    xsi_type_set_default_value(t40, t42, t32);
    t44 = (t37 + 64U);
    *((char **)t44) = t32;
    t45 = (t37 + 80U);
    *((unsigned int *)t45) = t31;
    t46 = (t8 + 4U);
    t47 = (t3 != 0);
    if (t47 == 1)
        goto LAB3;

LAB2:    t48 = (t8 + 12U);
    *((char **)t48) = t4;
    t49 = (t8 + 20U);
    t50 = (t5 != 0);
    if (t50 == 1)
        goto LAB5;

LAB4:    t51 = (t8 + 28U);
    *((char **)t51) = t6;
    t53 = (t4 + 12U);
    t39 = *((unsigned int *)t53);
    t54 = (t39 < 1);
    if (t54 == 1)
        goto LAB9;

LAB10:    t55 = (t6 + 12U);
    t56 = *((unsigned int *)t55);
    t57 = (t56 < 1);
    t52 = t57;

LAB11:    if (t52 != 0)
        goto LAB6;

LAB8:
LAB7:    t9 = (t4 + 12U);
    t10 = *((unsigned int *)t9);
    t10 = (t10 * 1U);
    t15 = (char *)alloca(t10);
    memcpy(t15, t3, t10);
    t18 = (t6 + 12U);
    t13 = *((unsigned int *)t18);
    t13 = (t13 * 1U);
    t22 = (char *)alloca(t13);
    memcpy(t22, t5, t13);
    t23 = (t19 + 56U);
    t25 = *((char **)t23);
    t23 = (t37 + 56U);
    t26 = *((char **)t23);
    ieee_p_3039841270_sub_3828635824_2334307252(t1, (char *)0, t15, t4, t22, t6, t25, t14, t26, t32);
    t9 = (t19 + 56U);
    t18 = *((char **)t9);
    t9 = (t14 + 12U);
    t10 = *((unsigned int *)t9);
    t10 = (t10 * 1U);
    t0 = xsi_get_transient_memory(t10);
    memcpy(t0, t18, t10);
    t23 = (t14 + 0U);
    t11 = *((int *)t23);
    t25 = (t14 + 4U);
    t12 = *((int *)t25);
    t26 = (t14 + 8U);
    t17 = *((int *)t26);
    t27 = (t2 + 0U);
    t28 = (t27 + 0U);
    *((int *)t28) = t11;
    t28 = (t27 + 4U);
    *((int *)t28) = t12;
    t28 = (t27 + 8U);
    *((int *)t28) = t17;
    t20 = (t12 - t11);
    t13 = (t20 * t17);
    t13 = (t13 + 1);
    t28 = (t27 + 12U);
    *((unsigned int *)t28) = t13;

LAB1:    return t0;
LAB3:    *((char **)t46) = t3;
    goto LAB2;

LAB5:    *((char **)t49) = t5;
    goto LAB4;

LAB6:    t58 = (t1 + 1168U);
    t59 = *((char **)t58);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t59, 0U);
    t58 = (t2 + 0U);
    t60 = (t58 + 0U);
    *((int *)t60) = 0;
    t60 = (t58 + 4U);
    *((int *)t60) = 1;
    t60 = (t58 + 8U);
    *((int *)t60) = -1;
    t61 = (1 - 0);
    t62 = (t61 * -1);
    t62 = (t62 + 1);
    t60 = (t58 + 12U);
    *((unsigned int *)t60) = t62;
    goto LAB1;

LAB9:    t52 = (unsigned char)1;
    goto LAB11;

LAB12:    goto LAB7;

LAB13:;
}

char *ieee_p_3039841270_sub_3599636057_2334307252(char *t1, char *t2, char *t3, char *t4, char *t5, char *t6)
{
    char t7[608];
    char t8[40];
    char t14[16];
    char t32[16];
    char t50[16];
    char t68[16];
    char t85[8];
    char t105[16];
    char t106[16];
    char *t0;
    char *t9;
    unsigned int t10;
    int t11;
    int t12;
    unsigned int t13;
    char *t15;
    unsigned int t16;
    int t17;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    int t29;
    int t30;
    unsigned int t31;
    char *t33;
    unsigned int t34;
    int t35;
    char *t36;
    char *t37;
    int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    int t47;
    int t48;
    unsigned int t49;
    char *t51;
    unsigned int t52;
    int t53;
    char *t54;
    char *t55;
    int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    int t65;
    int t66;
    unsigned int t67;
    char *t69;
    unsigned int t70;
    int t71;
    char *t72;
    char *t73;
    int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t86;
    char *t87;
    char *t88;
    unsigned char t89;
    char *t90;
    char *t91;
    unsigned char t92;
    char *t93;
    unsigned char t94;
    char *t95;
    unsigned char t96;
    char *t97;
    unsigned int t98;
    unsigned char t99;
    char *t100;
    char *t101;
    char *t102;
    int t103;
    unsigned int t104;

LAB0:    t9 = (t4 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = (t10 - 1);
    t12 = (0 - t11);
    t13 = (t12 * -1);
    t13 = (t13 + 1);
    t13 = (t13 * 1U);
    t15 = (t4 + 12U);
    t16 = *((unsigned int *)t15);
    t17 = (t16 - 1);
    t18 = (t14 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = t17;
    t19 = (t18 + 4U);
    *((int *)t19) = 0;
    t19 = (t18 + 8U);
    *((int *)t19) = -1;
    t20 = (0 - t17);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    t19 = (t7 + 4U);
    t22 = (t1 + 2880);
    t23 = (t19 + 88U);
    *((char **)t23) = t22;
    t24 = (char *)alloca(t13);
    t25 = (t19 + 56U);
    *((char **)t25) = t24;
    xsi_type_set_default_value(t22, t24, t14);
    t26 = (t19 + 64U);
    *((char **)t26) = t14;
    t27 = (t19 + 80U);
    *((unsigned int *)t27) = t13;
    t28 = (t6 + 12U);
    t21 = *((unsigned int *)t28);
    t29 = (t21 - 1);
    t30 = (0 - t29);
    t31 = (t30 * -1);
    t31 = (t31 + 1);
    t31 = (t31 * 1U);
    t33 = (t6 + 12U);
    t34 = *((unsigned int *)t33);
    t35 = (t34 - 1);
    t36 = (t32 + 0U);
    t37 = (t36 + 0U);
    *((int *)t37) = t35;
    t37 = (t36 + 4U);
    *((int *)t37) = 0;
    t37 = (t36 + 8U);
    *((int *)t37) = -1;
    t38 = (0 - t35);
    t39 = (t38 * -1);
    t39 = (t39 + 1);
    t37 = (t36 + 12U);
    *((unsigned int *)t37) = t39;
    t37 = (t7 + 124U);
    t40 = (t1 + 2880);
    t41 = (t37 + 88U);
    *((char **)t41) = t40;
    t42 = (char *)alloca(t31);
    t43 = (t37 + 56U);
    *((char **)t43) = t42;
    xsi_type_set_default_value(t40, t42, t32);
    t44 = (t37 + 64U);
    *((char **)t44) = t32;
    t45 = (t37 + 80U);
    *((unsigned int *)t45) = t31;
    t46 = (t4 + 12U);
    t39 = *((unsigned int *)t46);
    t47 = (t39 - 1);
    t48 = (0 - t47);
    t49 = (t48 * -1);
    t49 = (t49 + 1);
    t49 = (t49 * 1U);
    t51 = (t4 + 12U);
    t52 = *((unsigned int *)t51);
    t53 = (t52 - 1);
    t54 = (t50 + 0U);
    t55 = (t54 + 0U);
    *((int *)t55) = t53;
    t55 = (t54 + 4U);
    *((int *)t55) = 0;
    t55 = (t54 + 8U);
    *((int *)t55) = -1;
    t56 = (0 - t53);
    t57 = (t56 * -1);
    t57 = (t57 + 1);
    t55 = (t54 + 12U);
    *((unsigned int *)t55) = t57;
    t55 = (t7 + 244U);
    t58 = (t1 + 2880);
    t59 = (t55 + 88U);
    *((char **)t59) = t58;
    t60 = (char *)alloca(t49);
    t61 = (t55 + 56U);
    *((char **)t61) = t60;
    xsi_type_set_default_value(t58, t60, t50);
    t62 = (t55 + 64U);
    *((char **)t62) = t50;
    t63 = (t55 + 80U);
    *((unsigned int *)t63) = t49;
    t64 = (t6 + 12U);
    t57 = *((unsigned int *)t64);
    t65 = (t57 - 1);
    t66 = (0 - t65);
    t67 = (t66 * -1);
    t67 = (t67 + 1);
    t67 = (t67 * 1U);
    t69 = (t6 + 12U);
    t70 = *((unsigned int *)t69);
    t71 = (t70 - 1);
    t72 = (t68 + 0U);
    t73 = (t72 + 0U);
    *((int *)t73) = t71;
    t73 = (t72 + 4U);
    *((int *)t73) = 0;
    t73 = (t72 + 8U);
    *((int *)t73) = -1;
    t74 = (0 - t71);
    t75 = (t74 * -1);
    t75 = (t75 + 1);
    t73 = (t72 + 12U);
    *((unsigned int *)t73) = t75;
    t73 = (t7 + 364U);
    t76 = (t1 + 2880);
    t77 = (t73 + 88U);
    *((char **)t77) = t76;
    t78 = (char *)alloca(t67);
    t79 = (t73 + 56U);
    *((char **)t79) = t78;
    xsi_type_set_default_value(t76, t78, t68);
    t80 = (t73 + 64U);
    *((char **)t80) = t68;
    t81 = (t73 + 80U);
    *((unsigned int *)t81) = t67;
    t82 = (t7 + 484U);
    t83 = ((STD_STANDARD) + 0);
    t84 = (t82 + 88U);
    *((char **)t84) = t83;
    t86 = (t82 + 56U);
    *((char **)t86) = t85;
    *((unsigned char *)t85) = (unsigned char)0;
    t87 = (t82 + 80U);
    *((unsigned int *)t87) = 1U;
    t88 = (t8 + 4U);
    t89 = (t3 != 0);
    if (t89 == 1)
        goto LAB3;

LAB2:    t90 = (t8 + 12U);
    *((char **)t90) = t4;
    t91 = (t8 + 20U);
    t92 = (t5 != 0);
    if (t92 == 1)
        goto LAB5;

LAB4:    t93 = (t8 + 28U);
    *((char **)t93) = t6;
    t95 = (t4 + 12U);
    t75 = *((unsigned int *)t95);
    t96 = (t75 < 1);
    if (t96 == 1)
        goto LAB9;

LAB10:    t97 = (t6 + 12U);
    t98 = *((unsigned int *)t97);
    t99 = (t98 < 1);
    t94 = t99;

LAB11:    if (t94 != 0)
        goto LAB6;

LAB8:
LAB7:    t9 = (t4 + 0U);
    t11 = *((int *)t9);
    t15 = (t4 + 0U);
    t12 = *((int *)t15);
    t18 = (t4 + 8U);
    t17 = *((int *)t18);
    t20 = (t11 - t12);
    t10 = (t20 * t17);
    t13 = (1U * t10);
    t16 = (0 + t13);
    t22 = (t3 + t16);
    t89 = *((unsigned char *)t22);
    t92 = (t89 == (unsigned char)1);
    if (t92 != 0)
        goto LAB13;

LAB15:    t9 = (t55 + 56U);
    t15 = *((char **)t9);
    t9 = (t15 + 0);
    t18 = (t4 + 12U);
    t10 = *((unsigned int *)t18);
    t10 = (t10 * 1U);
    memcpy(t9, t3, t10);

LAB14:    t9 = (t6 + 0U);
    t11 = *((int *)t9);
    t15 = (t6 + 0U);
    t12 = *((int *)t15);
    t18 = (t6 + 8U);
    t17 = *((int *)t18);
    t20 = (t11 - t12);
    t10 = (t20 * t17);
    t13 = (1U * t10);
    t16 = (0 + t13);
    t22 = (t5 + t16);
    t89 = *((unsigned char *)t22);
    t92 = (t89 == (unsigned char)1);
    if (t92 != 0)
        goto LAB16;

LAB18:    t9 = (t73 + 56U);
    t15 = *((char **)t9);
    t9 = (t15 + 0);
    t18 = (t6 + 12U);
    t10 = *((unsigned int *)t18);
    t10 = (t10 * 1U);
    memcpy(t9, t5, t10);

LAB17:    t9 = (t55 + 56U);
    t15 = *((char **)t9);
    t9 = (t50 + 12U);
    t10 = *((unsigned int *)t9);
    t10 = (t10 * 1U);
    t18 = (char *)alloca(t10);
    memcpy(t18, t15, t10);
    t22 = (t73 + 56U);
    t23 = *((char **)t22);
    t22 = (t68 + 12U);
    t13 = *((unsigned int *)t22);
    t13 = (t13 * 1U);
    t25 = (char *)alloca(t13);
    memcpy(t25, t23, t13);
    t26 = (t19 + 56U);
    t27 = *((char **)t26);
    t26 = (t37 + 56U);
    t28 = *((char **)t26);
    ieee_p_3039841270_sub_3828635824_2334307252(t1, (char *)0, t18, t50, t25, t68, t27, t14, t28, t32);
    t9 = (t82 + 56U);
    t15 = *((char **)t9);
    t89 = *((unsigned char *)t15);
    if (t89 != 0)
        goto LAB19;

LAB21:
LAB20:    t9 = (t19 + 56U);
    t15 = *((char **)t9);
    t9 = (t14 + 12U);
    t10 = *((unsigned int *)t9);
    t10 = (t10 * 1U);
    t0 = xsi_get_transient_memory(t10);
    memcpy(t0, t15, t10);
    t22 = (t14 + 0U);
    t11 = *((int *)t22);
    t23 = (t14 + 4U);
    t12 = *((int *)t23);
    t26 = (t14 + 8U);
    t17 = *((int *)t26);
    t27 = (t2 + 0U);
    t28 = (t27 + 0U);
    *((int *)t28) = t11;
    t28 = (t27 + 4U);
    *((int *)t28) = t12;
    t28 = (t27 + 8U);
    *((int *)t28) = t17;
    t20 = (t12 - t11);
    t13 = (t20 * t17);
    t13 = (t13 + 1);
    t28 = (t27 + 12U);
    *((unsigned int *)t28) = t13;

LAB1:    return t0;
LAB3:    *((char **)t88) = t3;
    goto LAB2;

LAB5:    *((char **)t91) = t5;
    goto LAB4;

LAB6:    t100 = (t1 + 1288U);
    t101 = *((char **)t100);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t101, 0U);
    t100 = (t2 + 0U);
    t102 = (t100 + 0U);
    *((int *)t102) = 0;
    t102 = (t100 + 4U);
    *((int *)t102) = 1;
    t102 = (t100 + 8U);
    *((int *)t102) = -1;
    t103 = (1 - 0);
    t104 = (t103 * -1);
    t104 = (t104 + 1);
    t102 = (t100 + 12U);
    *((unsigned int *)t102) = t104;
    goto LAB1;

LAB9:    t94 = (unsigned char)1;
    goto LAB11;

LAB12:    goto LAB7;

LAB13:    t23 = ieee_p_3039841270_sub_3118404406_2334307252(t1, t105, t3, t4);
    t25 = (t55 + 56U);
    t26 = *((char **)t25);
    t25 = (t26 + 0);
    t27 = (t105 + 12U);
    t21 = *((unsigned int *)t27);
    t31 = (1U * t21);
    memcpy(t25, t23, t31);
    t9 = (t82 + 56U);
    t15 = *((char **)t9);
    t9 = (t15 + 0);
    *((unsigned char *)t9) = (unsigned char)1;
    goto LAB14;

LAB16:    t23 = ieee_p_3039841270_sub_3118404406_2334307252(t1, t105, t5, t6);
    t25 = (t73 + 56U);
    t26 = *((char **)t25);
    t25 = (t26 + 0);
    t27 = (t105 + 12U);
    t21 = *((unsigned int *)t27);
    t31 = (1U * t21);
    memcpy(t25, t23, t31);
    t9 = (t82 + 56U);
    t15 = *((char **)t9);
    t89 = *((unsigned char *)t15);
    t92 = (!(t89));
    t9 = (t82 + 56U);
    t18 = *((char **)t9);
    t9 = (t18 + 0);
    *((unsigned char *)t9) = t92;
    goto LAB17;

LAB19:    t9 = (t1 + 4565);
    t23 = (t106 + 0U);
    t26 = (t23 + 0U);
    *((int *)t26) = 0;
    t26 = (t23 + 4U);
    *((int *)t26) = 0;
    t26 = (t23 + 8U);
    *((int *)t26) = 1;
    t11 = (0 - 0);
    t10 = (t11 * 1);
    t10 = (t10 + 1);
    t26 = (t23 + 12U);
    *((unsigned int *)t26) = t10;
    t26 = (t19 + 56U);
    t27 = *((char **)t26);
    t26 = ieee_p_3039841270_sub_1717229644_2334307252(t1, t105, t9, t106, t27, t14);
    t28 = (t19 + 56U);
    t33 = *((char **)t28);
    t28 = (t33 + 0);
    t36 = (t105 + 12U);
    t10 = *((unsigned int *)t36);
    t13 = (1U * t10);
    memcpy(t28, t26, t13);
    goto LAB20;

LAB22:;
}

char *ieee_p_3039841270_sub_1918719512_2334307252(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t6[488];
    char t7[24];
    char t15[8];
    char t24[16];
    char t48[16];
    char t73[16];
    char t74[16];
    char *t0;
    char *t8;
    unsigned int t9;
    int t10;
    int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    int t20;
    int t21;
    int t22;
    unsigned int t23;
    char *t25;
    int t26;
    int t27;
    char *t28;
    int t29;
    unsigned int t30;
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
    char *t42;
    char *t43;
    char *t44;
    int t45;
    int t46;
    unsigned int t47;
    char *t49;
    unsigned int t50;
    int t51;
    char *t52;
    char *t53;
    int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    unsigned char t63;
    char *t64;
    char *t65;
    char *t66;
    unsigned char t67;
    char *t68;
    char *t69;
    char *t70;
    int t71;
    unsigned int t72;

LAB0:    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = ieee_p_3039841270_sub_3295552210_2334307252(t1, t5);
    t11 = ieee_p_3039841270_sub_3160373586_2334307252(t1, ((t9)), t10);
    t12 = (t6 + 4U);
    t13 = ((STD_STANDARD) + 832);
    t14 = (t12 + 88U);
    *((char **)t14) = t13;
    t16 = (t12 + 56U);
    *((char **)t16) = t15;
    *((int *)t15) = t11;
    t17 = (t12 + 80U);
    *((unsigned int *)t17) = 4U;
    t18 = (t12 + 56U);
    t19 = *((char **)t18);
    t20 = *((int *)t19);
    t21 = (t20 - 1);
    t22 = (0 - t21);
    t23 = (t22 * -1);
    t23 = (t23 + 1);
    t23 = (t23 * 1U);
    t18 = (t12 + 56U);
    t25 = *((char **)t18);
    t26 = *((int *)t25);
    t27 = (t26 - 1);
    t18 = (t24 + 0U);
    t28 = (t18 + 0U);
    *((int *)t28) = t27;
    t28 = (t18 + 4U);
    *((int *)t28) = 0;
    t28 = (t18 + 8U);
    *((int *)t28) = -1;
    t29 = (0 - t27);
    t30 = (t29 * -1);
    t30 = (t30 + 1);
    t28 = (t18 + 12U);
    *((unsigned int *)t28) = t30;
    t28 = (t6 + 124U);
    t31 = (t1 + 2880);
    t32 = (t28 + 88U);
    *((char **)t32) = t31;
    t33 = (char *)alloca(t23);
    t34 = (t28 + 56U);
    *((char **)t34) = t33;
    xsi_type_set_default_value(t31, t33, t24);
    t35 = (t28 + 64U);
    *((char **)t35) = t24;
    t36 = (t28 + 80U);
    *((unsigned int *)t36) = t23;
    t37 = (t6 + 244U);
    t38 = (t1 + 2880);
    t39 = (t37 + 88U);
    *((char **)t39) = t38;
    t40 = (char *)alloca(t23);
    t41 = (t37 + 56U);
    *((char **)t41) = t40;
    xsi_type_set_default_value(t38, t40, t24);
    t42 = (t37 + 64U);
    *((char **)t42) = t24;
    t43 = (t37 + 80U);
    *((unsigned int *)t43) = t23;
    t44 = (t4 + 12U);
    t30 = *((unsigned int *)t44);
    t45 = (t30 - 1);
    t46 = (0 - t45);
    t47 = (t46 * -1);
    t47 = (t47 + 1);
    t47 = (t47 * 1U);
    t49 = (t4 + 12U);
    t50 = *((unsigned int *)t49);
    t51 = (t50 - 1);
    t52 = (t48 + 0U);
    t53 = (t52 + 0U);
    *((int *)t53) = t51;
    t53 = (t52 + 4U);
    *((int *)t53) = 0;
    t53 = (t52 + 8U);
    *((int *)t53) = -1;
    t54 = (0 - t51);
    t55 = (t54 * -1);
    t55 = (t55 + 1);
    t53 = (t52 + 12U);
    *((unsigned int *)t53) = t55;
    t53 = (t6 + 364U);
    t56 = (t1 + 2880);
    t57 = (t53 + 88U);
    *((char **)t57) = t56;
    t58 = (char *)alloca(t47);
    t59 = (t53 + 56U);
    *((char **)t59) = t58;
    xsi_type_set_default_value(t56, t58, t48);
    t60 = (t53 + 64U);
    *((char **)t60) = t48;
    t61 = (t53 + 80U);
    *((unsigned int *)t61) = t47;
    t62 = (t7 + 4U);
    t63 = (t3 != 0);
    if (t63 == 1)
        goto LAB3;

LAB2:    t64 = (t7 + 12U);
    *((char **)t64) = t4;
    t65 = (t7 + 20U);
    *((int *)t65) = t5;
    t66 = (t4 + 12U);
    t55 = *((unsigned int *)t66);
    t67 = (t55 < 1);
    if (t67 != 0)
        goto LAB4;

LAB6:
LAB5:    t8 = (t12 + 56U);
    t13 = *((char **)t8);
    t10 = *((int *)t13);
    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t63 = (t10 > t9);
    if (t63 != 0)
        goto LAB8;

LAB10:
LAB9:    t8 = (t12 + 56U);
    t13 = *((char **)t8);
    t10 = *((int *)t13);
    t8 = ieee_p_3039841270_sub_180853171_2334307252(t1, t73, t5, t10);
    t14 = (t28 + 56U);
    t16 = *((char **)t14);
    t14 = (t16 + 0);
    t17 = (t73 + 12U);
    t9 = *((unsigned int *)t17);
    t9 = (t9 * 1U);
    memcpy(t14, t8, t9);
    t8 = (t28 + 56U);
    t13 = *((char **)t8);
    t8 = ieee_p_3039841270_sub_1666942187_2334307252(t1, t74, t3, t4, t13, t24);
    t14 = (t24 + 12U);
    t9 = *((unsigned int *)t14);
    t16 = ieee_p_3039841270_sub_2675122452_2334307252(t1, t73, t8, t74, ((t9)));
    t17 = (t37 + 56U);
    t18 = *((char **)t17);
    t17 = (t18 + 0);
    t19 = (t73 + 12U);
    t23 = *((unsigned int *)t19);
    t23 = (t23 * 1U);
    memcpy(t17, t16, t23);
    t8 = (t37 + 56U);
    t13 = *((char **)t8);
    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t14 = ieee_p_3039841270_sub_2675122452_2334307252(t1, t73, t13, t24, ((t9)));
    t16 = (t73 + 12U);
    t23 = *((unsigned int *)t16);
    t23 = (t23 * 1U);
    t0 = xsi_get_transient_memory(t23);
    memcpy(t0, t14, t23);
    t17 = (t73 + 0U);
    t10 = *((int *)t17);
    t18 = (t73 + 4U);
    t11 = *((int *)t18);
    t19 = (t73 + 8U);
    t20 = *((int *)t19);
    t25 = (t2 + 0U);
    t31 = (t25 + 0U);
    *((int *)t31) = t10;
    t31 = (t25 + 4U);
    *((int *)t31) = t11;
    t31 = (t25 + 8U);
    *((int *)t31) = t20;
    t21 = (t11 - t10);
    t30 = (t21 * t20);
    t30 = (t30 + 1);
    t31 = (t25 + 12U);
    *((unsigned int *)t31) = t30;

LAB1:    return t0;
LAB3:    *((char **)t62) = t3;
    goto LAB2;

LAB4:    t68 = (t1 + 1168U);
    t69 = *((char **)t68);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t69, 0U);
    t68 = (t2 + 0U);
    t70 = (t68 + 0U);
    *((int *)t70) = 0;
    t70 = (t68 + 4U);
    *((int *)t70) = 1;
    t70 = (t68 + 8U);
    *((int *)t70) = -1;
    t71 = (1 - 0);
    t72 = (t71 * -1);
    t72 = (t72 + 1);
    t70 = (t68 + 12U);
    *((unsigned int *)t70) = t72;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:    t14 = (t24 + 12U);
    t23 = *((unsigned int *)t14);
    t23 = (t23 * 1U);
    t16 = xsi_get_transient_memory(t23);
    memset(t16, 0, t23);
    t17 = t16;
    memset(t17, (unsigned char)0, t23);
    t18 = (t37 + 56U);
    t19 = *((char **)t18);
    t18 = (t19 + 0);
    t25 = (t24 + 12U);
    t30 = *((unsigned int *)t25);
    t30 = (t30 * 1U);
    memcpy(t18, t16, t30);
    t8 = (t37 + 56U);
    t13 = *((char **)t8);
    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t14 = ieee_p_3039841270_sub_2675122452_2334307252(t1, t73, t13, t24, ((t9)));
    t16 = (t73 + 12U);
    t23 = *((unsigned int *)t16);
    t23 = (t23 * 1U);
    t0 = xsi_get_transient_memory(t23);
    memcpy(t0, t14, t23);
    t17 = (t73 + 0U);
    t10 = *((int *)t17);
    t18 = (t73 + 4U);
    t11 = *((int *)t18);
    t19 = (t73 + 8U);
    t20 = *((int *)t19);
    t25 = (t2 + 0U);
    t31 = (t25 + 0U);
    *((int *)t31) = t10;
    t31 = (t25 + 4U);
    *((int *)t31) = t11;
    t31 = (t25 + 8U);
    *((int *)t31) = t20;
    t21 = (t11 - t10);
    t30 = (t21 * t20);
    t30 = (t30 + 1);
    t31 = (t25 + 12U);
    *((unsigned int *)t31) = t30;
    goto LAB1;

LAB11:    goto LAB9;

LAB12:;
}

char *ieee_p_3039841270_sub_1477432179_2334307252(char *t1, char *t2, int t3, char *t4, char *t5)
{
    char t6[488];
    char t7[24];
    char t15[8];
    char t24[16];
    char t48[16];
    char t73[16];
    char t74[16];
    char *t0;
    int t8;
    char *t9;
    unsigned int t10;
    int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    int t20;
    int t21;
    int t22;
    unsigned int t23;
    char *t25;
    int t26;
    int t27;
    char *t28;
    int t29;
    unsigned int t30;
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
    char *t42;
    char *t43;
    char *t44;
    int t45;
    int t46;
    unsigned int t47;
    char *t49;
    unsigned int t50;
    int t51;
    char *t52;
    char *t53;
    int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    unsigned char t64;
    char *t65;
    char *t66;
    unsigned char t67;
    char *t68;
    char *t69;
    char *t70;
    int t71;
    unsigned int t72;
    unsigned int t75;
    unsigned int t76;
    int t77;
    int t78;
    int t79;
    unsigned int t80;
    unsigned int t81;
    int t82;
    unsigned int t83;
    unsigned int t84;
    int t85;
    int t86;
    unsigned int t87;
    int t88;
    unsigned int t89;
    unsigned int t90;
    int t91;
    int t92;
    unsigned int t93;
    int t94;
    unsigned int t95;
    unsigned char t96;
    unsigned char t97;

LAB0:    t8 = ieee_p_3039841270_sub_3295552210_2334307252(t1, t3);
    t9 = (t5 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = ieee_p_3039841270_sub_3160373586_2334307252(t1, t8, ((t10)));
    t12 = (t6 + 4U);
    t13 = ((STD_STANDARD) + 832);
    t14 = (t12 + 88U);
    *((char **)t14) = t13;
    t16 = (t12 + 56U);
    *((char **)t16) = t15;
    *((int *)t15) = t11;
    t17 = (t12 + 80U);
    *((unsigned int *)t17) = 4U;
    t18 = (t12 + 56U);
    t19 = *((char **)t18);
    t20 = *((int *)t19);
    t21 = (t20 - 1);
    t22 = (0 - t21);
    t23 = (t22 * -1);
    t23 = (t23 + 1);
    t23 = (t23 * 1U);
    t18 = (t12 + 56U);
    t25 = *((char **)t18);
    t26 = *((int *)t25);
    t27 = (t26 - 1);
    t18 = (t24 + 0U);
    t28 = (t18 + 0U);
    *((int *)t28) = t27;
    t28 = (t18 + 4U);
    *((int *)t28) = 0;
    t28 = (t18 + 8U);
    *((int *)t28) = -1;
    t29 = (0 - t27);
    t30 = (t29 * -1);
    t30 = (t30 + 1);
    t28 = (t18 + 12U);
    *((unsigned int *)t28) = t30;
    t28 = (t6 + 124U);
    t31 = (t1 + 2880);
    t32 = (t28 + 88U);
    *((char **)t32) = t31;
    t33 = (char *)alloca(t23);
    t34 = (t28 + 56U);
    *((char **)t34) = t33;
    xsi_type_set_default_value(t31, t33, t24);
    t35 = (t28 + 64U);
    *((char **)t35) = t24;
    t36 = (t28 + 80U);
    *((unsigned int *)t36) = t23;
    t37 = (t6 + 244U);
    t38 = (t1 + 2880);
    t39 = (t37 + 88U);
    *((char **)t39) = t38;
    t40 = (char *)alloca(t23);
    t41 = (t37 + 56U);
    *((char **)t41) = t40;
    xsi_type_set_default_value(t38, t40, t24);
    t42 = (t37 + 64U);
    *((char **)t42) = t24;
    t43 = (t37 + 80U);
    *((unsigned int *)t43) = t23;
    t44 = (t5 + 12U);
    t30 = *((unsigned int *)t44);
    t45 = (t30 - 1);
    t46 = (0 - t45);
    t47 = (t46 * -1);
    t47 = (t47 + 1);
    t47 = (t47 * 1U);
    t49 = (t5 + 12U);
    t50 = *((unsigned int *)t49);
    t51 = (t50 - 1);
    t52 = (t48 + 0U);
    t53 = (t52 + 0U);
    *((int *)t53) = t51;
    t53 = (t52 + 4U);
    *((int *)t53) = 0;
    t53 = (t52 + 8U);
    *((int *)t53) = -1;
    t54 = (0 - t51);
    t55 = (t54 * -1);
    t55 = (t55 + 1);
    t53 = (t52 + 12U);
    *((unsigned int *)t53) = t55;
    t53 = (t6 + 364U);
    t56 = (t1 + 2880);
    t57 = (t53 + 88U);
    *((char **)t57) = t56;
    t58 = (char *)alloca(t47);
    t59 = (t53 + 56U);
    *((char **)t59) = t58;
    xsi_type_set_default_value(t56, t58, t48);
    t60 = (t53 + 64U);
    *((char **)t60) = t48;
    t61 = (t53 + 80U);
    *((unsigned int *)t61) = t47;
    t62 = (t7 + 4U);
    *((int *)t62) = t3;
    t63 = (t7 + 8U);
    t64 = (t4 != 0);
    if (t64 == 1)
        goto LAB3;

LAB2:    t65 = (t7 + 16U);
    *((char **)t65) = t5;
    t66 = (t5 + 12U);
    t55 = *((unsigned int *)t66);
    t67 = (t55 < 1);
    if (t67 != 0)
        goto LAB4;

LAB6:
LAB5:    t9 = (t12 + 56U);
    t13 = *((char **)t9);
    t8 = *((int *)t13);
    t9 = ieee_p_3039841270_sub_180853171_2334307252(t1, t73, t3, t8);
    t14 = (t28 + 56U);
    t16 = *((char **)t14);
    t14 = (t16 + 0);
    t17 = (t73 + 12U);
    t10 = *((unsigned int *)t17);
    t10 = (t10 * 1U);
    memcpy(t14, t9, t10);
    t9 = (t28 + 56U);
    t13 = *((char **)t9);
    t9 = ieee_p_3039841270_sub_1666942187_2334307252(t1, t74, t13, t24, t4, t5);
    t14 = (t24 + 12U);
    t10 = *((unsigned int *)t14);
    t16 = ieee_p_3039841270_sub_2675122452_2334307252(t1, t73, t9, t74, ((t10)));
    t17 = (t37 + 56U);
    t18 = *((char **)t17);
    t17 = (t18 + 0);
    t19 = (t73 + 12U);
    t23 = *((unsigned int *)t19);
    t23 = (t23 * 1U);
    memcpy(t17, t16, t23);
    t9 = (t12 + 56U);
    t13 = *((char **)t9);
    t8 = *((int *)t13);
    t9 = (t5 + 12U);
    t10 = *((unsigned int *)t9);
    t67 = (t8 > t10);
    if (t67 == 1)
        goto LAB11;

LAB12:    t64 = (unsigned char)0;

LAB13:    if (t64 != 0)
        goto LAB8;

LAB10:
LAB9:    t9 = (t37 + 56U);
    t13 = *((char **)t9);
    t9 = (t5 + 12U);
    t10 = *((unsigned int *)t9);
    t14 = ieee_p_3039841270_sub_2675122452_2334307252(t1, t73, t13, t24, ((t10)));
    t16 = (t73 + 12U);
    t23 = *((unsigned int *)t16);
    t23 = (t23 * 1U);
    t0 = xsi_get_transient_memory(t23);
    memcpy(t0, t14, t23);
    t17 = (t73 + 0U);
    t8 = *((int *)t17);
    t18 = (t73 + 4U);
    t11 = *((int *)t18);
    t19 = (t73 + 8U);
    t20 = *((int *)t19);
    t25 = (t2 + 0U);
    t31 = (t25 + 0U);
    *((int *)t31) = t8;
    t31 = (t25 + 4U);
    *((int *)t31) = t11;
    t31 = (t25 + 8U);
    *((int *)t31) = t20;
    t21 = (t11 - t8);
    t30 = (t21 * t20);
    t30 = (t30 + 1);
    t31 = (t25 + 12U);
    *((unsigned int *)t31) = t30;

LAB1:    return t0;
LAB3:    *((char **)t63) = t4;
    goto LAB2;

LAB4:    t68 = (t1 + 1168U);
    t69 = *((char **)t68);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t69, 0U);
    t68 = (t2 + 0U);
    t70 = (t68 + 0U);
    *((int *)t70) = 0;
    t70 = (t68 + 4U);
    *((int *)t70) = 1;
    t70 = (t68 + 8U);
    *((int *)t70) = -1;
    t71 = (1 - 0);
    t72 = (t71 * -1);
    t72 = (t72 + 1);
    t70 = (t68 + 12U);
    *((unsigned int *)t70) = t72;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:    t61 = (t1 + 1408U);
    t66 = *((char **)t61);
    t97 = *((unsigned char *)t66);
    if (t97 == 0)
        goto LAB17;

LAB18:    goto LAB9;

LAB11:    t14 = (t37 + 56U);
    t16 = *((char **)t14);
    t14 = (t24 + 0U);
    t11 = *((int *)t14);
    t17 = (t12 + 56U);
    t18 = *((char **)t17);
    t20 = *((int *)t18);
    t21 = (t20 - 1);
    t23 = (t11 - t21);
    t17 = (t5 + 12U);
    t30 = *((unsigned int *)t17);
    t19 = (t24 + 4U);
    t22 = *((int *)t19);
    t25 = (t24 + 8U);
    t26 = *((int *)t25);
    xsi_vhdl_check_range_of_slice(t11, t22, t26, t21, t30, -1);
    t47 = (t23 * 1U);
    t50 = (0 + t47);
    t31 = (t16 + t50);
    t32 = (t12 + 56U);
    t34 = *((char **)t32);
    t27 = *((int *)t34);
    t29 = (t27 - 1);
    t32 = (t5 + 12U);
    t55 = *((unsigned int *)t32);
    t35 = (t73 + 0U);
    t36 = (t35 + 0U);
    *((int *)t36) = t29;
    t36 = (t35 + 4U);
    *((unsigned int *)t36) = t55;
    t36 = (t35 + 8U);
    *((int *)t36) = -1;
    t45 = (t55 - t29);
    t72 = (t45 * -1);
    t72 = (t72 + 1);
    t36 = (t35 + 12U);
    *((unsigned int *)t36) = t72;
    t36 = (t12 + 56U);
    t38 = *((char **)t36);
    t46 = *((int *)t38);
    t51 = (t46 - 1);
    t36 = (t5 + 12U);
    t72 = *((unsigned int *)t36);
    t54 = (t72 - t51);
    t75 = (t54 * -1);
    t75 = (t75 + 1);
    t76 = (1U * t75);
    t39 = xsi_get_transient_memory(t76);
    memset(t39, 0, t76);
    t41 = t39;
    t42 = (t12 + 56U);
    t43 = *((char **)t42);
    t71 = *((int *)t43);
    t77 = (t71 - 1);
    t42 = (t12 + 56U);
    t44 = *((char **)t42);
    t78 = *((int *)t44);
    t79 = (t78 - 1);
    t42 = (t5 + 12U);
    t80 = *((unsigned int *)t42);
    if (-1 == -1)
        goto LAB14;

LAB15:    t81 = t80;

LAB16:    t82 = (t81 - t77);
    t83 = (t82 * -1);
    t84 = (1U * t83);
    t49 = (t41 + t84);
    t52 = (t12 + 56U);
    t56 = *((char **)t52);
    t85 = *((int *)t56);
    t86 = (t85 - 1);
    t52 = (t5 + 12U);
    t87 = *((unsigned int *)t52);
    t88 = (t87 - t86);
    t89 = (t88 * -1);
    t89 = (t89 + 1);
    t90 = (1U * t89);
    memset(t49, (unsigned char)0, t90);
    t57 = (t12 + 56U);
    t59 = *((char **)t57);
    t91 = *((int *)t59);
    t92 = (t91 - 1);
    t57 = (t5 + 12U);
    t93 = *((unsigned int *)t57);
    t60 = (t74 + 0U);
    t61 = (t60 + 0U);
    *((int *)t61) = t92;
    t61 = (t60 + 4U);
    *((unsigned int *)t61) = t93;
    t61 = (t60 + 8U);
    *((int *)t61) = -1;
    t94 = (t93 - t92);
    t95 = (t94 * -1);
    t95 = (t95 + 1);
    t61 = (t60 + 12U);
    *((unsigned int *)t61) = t95;
    t96 = ieee_p_3039841270_sub_4062508670_2334307252(t1, t31, t73, t39, t74);
    t64 = t96;
    goto LAB13;

LAB14:    t81 = t79;
    goto LAB16;

LAB17:    t61 = (t1 + 4566);
    xsi_report(t61, 35U, (unsigned char)1);
    goto LAB18;

LAB19:;
}

char *ieee_p_3039841270_sub_3493444518_2334307252(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t6[488];
    char t7[24];
    char t15[8];
    char t24[16];
    char t48[16];
    char t73[16];
    char t74[16];
    char *t0;
    char *t8;
    unsigned int t9;
    int t10;
    int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    int t20;
    int t21;
    int t22;
    unsigned int t23;
    char *t25;
    int t26;
    int t27;
    char *t28;
    int t29;
    unsigned int t30;
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
    char *t42;
    char *t43;
    char *t44;
    int t45;
    int t46;
    unsigned int t47;
    char *t49;
    unsigned int t50;
    int t51;
    char *t52;
    char *t53;
    int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    unsigned char t63;
    char *t64;
    char *t65;
    char *t66;
    unsigned char t67;
    char *t68;
    char *t69;
    char *t70;
    int t71;
    unsigned int t72;

LAB0:    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = ieee_p_3039841270_sub_3824177444_2334307252(t1, t5);
    t11 = ieee_p_3039841270_sub_3160373586_2334307252(t1, ((t9)), t10);
    t12 = (t6 + 4U);
    t13 = ((STD_STANDARD) + 832);
    t14 = (t12 + 88U);
    *((char **)t14) = t13;
    t16 = (t12 + 56U);
    *((char **)t16) = t15;
    *((int *)t15) = t11;
    t17 = (t12 + 80U);
    *((unsigned int *)t17) = 4U;
    t18 = (t12 + 56U);
    t19 = *((char **)t18);
    t20 = *((int *)t19);
    t21 = (t20 - 1);
    t22 = (0 - t21);
    t23 = (t22 * -1);
    t23 = (t23 + 1);
    t23 = (t23 * 1U);
    t18 = (t12 + 56U);
    t25 = *((char **)t18);
    t26 = *((int *)t25);
    t27 = (t26 - 1);
    t18 = (t24 + 0U);
    t28 = (t18 + 0U);
    *((int *)t28) = t27;
    t28 = (t18 + 4U);
    *((int *)t28) = 0;
    t28 = (t18 + 8U);
    *((int *)t28) = -1;
    t29 = (0 - t27);
    t30 = (t29 * -1);
    t30 = (t30 + 1);
    t28 = (t18 + 12U);
    *((unsigned int *)t28) = t30;
    t28 = (t6 + 124U);
    t31 = (t1 + 2992);
    t32 = (t28 + 88U);
    *((char **)t32) = t31;
    t33 = (char *)alloca(t23);
    t34 = (t28 + 56U);
    *((char **)t34) = t33;
    xsi_type_set_default_value(t31, t33, t24);
    t35 = (t28 + 64U);
    *((char **)t35) = t24;
    t36 = (t28 + 80U);
    *((unsigned int *)t36) = t23;
    t37 = (t6 + 244U);
    t38 = (t1 + 2992);
    t39 = (t37 + 88U);
    *((char **)t39) = t38;
    t40 = (char *)alloca(t23);
    t41 = (t37 + 56U);
    *((char **)t41) = t40;
    xsi_type_set_default_value(t38, t40, t24);
    t42 = (t37 + 64U);
    *((char **)t42) = t24;
    t43 = (t37 + 80U);
    *((unsigned int *)t43) = t23;
    t44 = (t4 + 12U);
    t30 = *((unsigned int *)t44);
    t45 = (t30 - 1);
    t46 = (0 - t45);
    t47 = (t46 * -1);
    t47 = (t47 + 1);
    t47 = (t47 * 1U);
    t49 = (t4 + 12U);
    t50 = *((unsigned int *)t49);
    t51 = (t50 - 1);
    t52 = (t48 + 0U);
    t53 = (t52 + 0U);
    *((int *)t53) = t51;
    t53 = (t52 + 4U);
    *((int *)t53) = 0;
    t53 = (t52 + 8U);
    *((int *)t53) = -1;
    t54 = (0 - t51);
    t55 = (t54 * -1);
    t55 = (t55 + 1);
    t53 = (t52 + 12U);
    *((unsigned int *)t53) = t55;
    t53 = (t6 + 364U);
    t56 = (t1 + 2992);
    t57 = (t53 + 88U);
    *((char **)t57) = t56;
    t58 = (char *)alloca(t47);
    t59 = (t53 + 56U);
    *((char **)t59) = t58;
    xsi_type_set_default_value(t56, t58, t48);
    t60 = (t53 + 64U);
    *((char **)t60) = t48;
    t61 = (t53 + 80U);
    *((unsigned int *)t61) = t47;
    t62 = (t7 + 4U);
    t63 = (t3 != 0);
    if (t63 == 1)
        goto LAB3;

LAB2:    t64 = (t7 + 12U);
    *((char **)t64) = t4;
    t65 = (t7 + 20U);
    *((int *)t65) = t5;
    t66 = (t4 + 12U);
    t55 = *((unsigned int *)t66);
    t67 = (t55 < 1);
    if (t67 != 0)
        goto LAB4;

LAB6:
LAB5:    t44 = (t12 + 56U);
    t49 = *((char **)t44);
    t45 = *((int *)t49);
    t44 = (t4 + 12U);
    t47 = *((unsigned int *)t44);
    t63 = (t45 > t47);
    if (t63 != 0)
        goto LAB8;

LAB10:
LAB9:    t44 = (t12 + 56U);
    t49 = *((char **)t44);
    t45 = *((int *)t49);
    t44 = ieee_p_3039841270_sub_2780269832_2334307252(t1, t73, t5, t45);
    t52 = (t28 + 56U);
    t56 = *((char **)t52);
    t52 = (t56 + 0);
    t57 = (t73 + 12U);
    t47 = *((unsigned int *)t57);
    t47 = (t47 * 1U);
    memcpy(t52, t44, t47);
    t44 = (t28 + 56U);
    t49 = *((char **)t44);
    t44 = ieee_p_3039841270_sub_3599636057_2334307252(t1, t74, t3, t4, t49, t24);
    t52 = (t24 + 12U);
    t47 = *((unsigned int *)t52);
    t56 = ieee_p_3039841270_sub_3322286019_2334307252(t1, t73, t44, t74, ((t47)));
    t57 = (t37 + 56U);
    t59 = *((char **)t57);
    t57 = (t59 + 0);
    t60 = (t73 + 12U);
    t50 = *((unsigned int *)t60);
    t50 = (t50 * 1U);
    memcpy(t57, t56, t50);
    t44 = (t37 + 56U);
    t49 = *((char **)t44);
    t44 = (t4 + 12U);
    t47 = *((unsigned int *)t44);
    t52 = ieee_p_3039841270_sub_3322286019_2334307252(t1, t73, t49, t24, ((t47)));
    t56 = (t73 + 12U);
    t50 = *((unsigned int *)t56);
    t50 = (t50 * 1U);
    t0 = xsi_get_transient_memory(t50);
    memcpy(t0, t52, t50);
    t57 = (t73 + 0U);
    t45 = *((int *)t57);
    t59 = (t73 + 4U);
    t46 = *((int *)t59);
    t60 = (t73 + 8U);
    t51 = *((int *)t60);
    t61 = (t2 + 0U);
    t66 = (t61 + 0U);
    *((int *)t66) = t45;
    t66 = (t61 + 4U);
    *((int *)t66) = t46;
    t66 = (t61 + 8U);
    *((int *)t66) = t51;
    t54 = (t46 - t45);
    t55 = (t54 * t51);
    t55 = (t55 + 1);
    t66 = (t61 + 12U);
    *((unsigned int *)t66) = t55;

LAB1:    return t0;
LAB3:    *((char **)t62) = t3;
    goto LAB2;

LAB4:    t68 = (t1 + 1288U);
    t69 = *((char **)t68);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t69, 0U);
    t68 = (t2 + 0U);
    t70 = (t68 + 0U);
    *((int *)t70) = 0;
    t70 = (t68 + 4U);
    *((int *)t70) = 1;
    t70 = (t68 + 8U);
    *((int *)t70) = -1;
    t71 = (1 - 0);
    t72 = (t71 * -1);
    t72 = (t72 + 1);
    t70 = (t68 + 12U);
    *((unsigned int *)t70) = t72;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:    t52 = (t24 + 12U);
    t50 = *((unsigned int *)t52);
    t50 = (t50 * 1U);
    t56 = xsi_get_transient_memory(t50);
    memset(t56, 0, t50);
    t57 = t56;
    memset(t57, (unsigned char)0, t50);
    t59 = (t37 + 56U);
    t60 = *((char **)t59);
    t59 = (t60 + 0);
    t61 = (t24 + 12U);
    t55 = *((unsigned int *)t61);
    t55 = (t55 * 1U);
    memcpy(t59, t56, t55);
    t44 = (t37 + 56U);
    t49 = *((char **)t44);
    t44 = (t4 + 12U);
    t47 = *((unsigned int *)t44);
    t52 = ieee_p_3039841270_sub_3322286019_2334307252(t1, t73, t49, t24, ((t47)));
    t56 = (t73 + 12U);
    t50 = *((unsigned int *)t56);
    t50 = (t50 * 1U);
    t0 = xsi_get_transient_memory(t50);
    memcpy(t0, t52, t50);
    t57 = (t73 + 0U);
    t45 = *((int *)t57);
    t59 = (t73 + 4U);
    t46 = *((int *)t59);
    t60 = (t73 + 8U);
    t51 = *((int *)t60);
    t61 = (t2 + 0U);
    t66 = (t61 + 0U);
    *((int *)t66) = t45;
    t66 = (t61 + 4U);
    *((int *)t66) = t46;
    t66 = (t61 + 8U);
    *((int *)t66) = t51;
    t54 = (t46 - t45);
    t55 = (t54 * t51);
    t55 = (t55 + 1);
    t66 = (t61 + 12U);
    *((unsigned int *)t66) = t55;
    goto LAB1;

LAB11:    goto LAB9;

LAB12:;
}

char *ieee_p_3039841270_sub_2853085545_2334307252(char *t1, char *t2, int t3, char *t4, char *t5)
{
    char t6[488];
    char t7[24];
    char t15[8];
    char t24[16];
    char t48[16];
    char t73[16];
    char t74[16];
    char *t0;
    int t8;
    char *t9;
    unsigned int t10;
    int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    int t20;
    int t21;
    int t22;
    unsigned int t23;
    char *t25;
    int t26;
    int t27;
    char *t28;
    int t29;
    unsigned int t30;
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
    char *t42;
    char *t43;
    char *t44;
    int t45;
    int t46;
    unsigned int t47;
    char *t49;
    unsigned int t50;
    int t51;
    char *t52;
    char *t53;
    int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    unsigned char t64;
    char *t65;
    char *t66;
    unsigned char t67;
    char *t68;
    char *t69;
    char *t70;
    int t71;
    unsigned int t72;
    unsigned int t75;
    unsigned int t76;
    int t77;
    unsigned int t78;
    int t79;
    int t80;
    int t81;
    int t82;
    unsigned int t83;
    int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned char t87;
    int t88;
    int t89;
    unsigned int t90;
    unsigned int t91;
    int t92;
    unsigned int t93;
    unsigned int t94;
    int t95;
    int t96;
    unsigned int t97;
    int t98;
    unsigned int t99;
    unsigned int t100;
    int t101;
    int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    int t106;
    unsigned int t107;
    unsigned char t108;
    char *t109;
    unsigned char t110;

LAB0:    t8 = ieee_p_3039841270_sub_3824177444_2334307252(t1, t3);
    t9 = (t5 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = ieee_p_3039841270_sub_3160373586_2334307252(t1, t8, ((t10)));
    t12 = (t6 + 4U);
    t13 = ((STD_STANDARD) + 832);
    t14 = (t12 + 88U);
    *((char **)t14) = t13;
    t16 = (t12 + 56U);
    *((char **)t16) = t15;
    *((int *)t15) = t11;
    t17 = (t12 + 80U);
    *((unsigned int *)t17) = 4U;
    t18 = (t12 + 56U);
    t19 = *((char **)t18);
    t20 = *((int *)t19);
    t21 = (t20 - 1);
    t22 = (0 - t21);
    t23 = (t22 * -1);
    t23 = (t23 + 1);
    t23 = (t23 * 1U);
    t18 = (t12 + 56U);
    t25 = *((char **)t18);
    t26 = *((int *)t25);
    t27 = (t26 - 1);
    t18 = (t24 + 0U);
    t28 = (t18 + 0U);
    *((int *)t28) = t27;
    t28 = (t18 + 4U);
    *((int *)t28) = 0;
    t28 = (t18 + 8U);
    *((int *)t28) = -1;
    t29 = (0 - t27);
    t30 = (t29 * -1);
    t30 = (t30 + 1);
    t28 = (t18 + 12U);
    *((unsigned int *)t28) = t30;
    t28 = (t6 + 124U);
    t31 = (t1 + 2992);
    t32 = (t28 + 88U);
    *((char **)t32) = t31;
    t33 = (char *)alloca(t23);
    t34 = (t28 + 56U);
    *((char **)t34) = t33;
    xsi_type_set_default_value(t31, t33, t24);
    t35 = (t28 + 64U);
    *((char **)t35) = t24;
    t36 = (t28 + 80U);
    *((unsigned int *)t36) = t23;
    t37 = (t6 + 244U);
    t38 = (t1 + 2992);
    t39 = (t37 + 88U);
    *((char **)t39) = t38;
    t40 = (char *)alloca(t23);
    t41 = (t37 + 56U);
    *((char **)t41) = t40;
    xsi_type_set_default_value(t38, t40, t24);
    t42 = (t37 + 64U);
    *((char **)t42) = t24;
    t43 = (t37 + 80U);
    *((unsigned int *)t43) = t23;
    t44 = (t5 + 12U);
    t30 = *((unsigned int *)t44);
    t45 = (t30 - 1);
    t46 = (0 - t45);
    t47 = (t46 * -1);
    t47 = (t47 + 1);
    t47 = (t47 * 1U);
    t49 = (t5 + 12U);
    t50 = *((unsigned int *)t49);
    t51 = (t50 - 1);
    t52 = (t48 + 0U);
    t53 = (t52 + 0U);
    *((int *)t53) = t51;
    t53 = (t52 + 4U);
    *((int *)t53) = 0;
    t53 = (t52 + 8U);
    *((int *)t53) = -1;
    t54 = (0 - t51);
    t55 = (t54 * -1);
    t55 = (t55 + 1);
    t53 = (t52 + 12U);
    *((unsigned int *)t53) = t55;
    t53 = (t6 + 364U);
    t56 = (t1 + 2992);
    t57 = (t53 + 88U);
    *((char **)t57) = t56;
    t58 = (char *)alloca(t47);
    t59 = (t53 + 56U);
    *((char **)t59) = t58;
    xsi_type_set_default_value(t56, t58, t48);
    t60 = (t53 + 64U);
    *((char **)t60) = t48;
    t61 = (t53 + 80U);
    *((unsigned int *)t61) = t47;
    t62 = (t7 + 4U);
    *((int *)t62) = t3;
    t63 = (t7 + 8U);
    t64 = (t4 != 0);
    if (t64 == 1)
        goto LAB3;

LAB2:    t65 = (t7 + 16U);
    *((char **)t65) = t5;
    t66 = (t5 + 12U);
    t55 = *((unsigned int *)t66);
    t67 = (t55 < 1);
    if (t67 != 0)
        goto LAB4;

LAB6:
LAB5:    t9 = (t12 + 56U);
    t13 = *((char **)t9);
    t8 = *((int *)t13);
    t9 = ieee_p_3039841270_sub_2780269832_2334307252(t1, t73, t3, t8);
    t14 = (t28 + 56U);
    t16 = *((char **)t14);
    t14 = (t16 + 0);
    t17 = (t73 + 12U);
    t10 = *((unsigned int *)t17);
    t10 = (t10 * 1U);
    memcpy(t14, t9, t10);
    t9 = (t28 + 56U);
    t13 = *((char **)t9);
    t9 = ieee_p_3039841270_sub_3599636057_2334307252(t1, t74, t13, t24, t4, t5);
    t14 = (t24 + 12U);
    t10 = *((unsigned int *)t14);
    t16 = ieee_p_3039841270_sub_3322286019_2334307252(t1, t73, t9, t74, ((t10)));
    t17 = (t37 + 56U);
    t18 = *((char **)t17);
    t17 = (t18 + 0);
    t19 = (t73 + 12U);
    t23 = *((unsigned int *)t19);
    t23 = (t23 * 1U);
    memcpy(t17, t16, t23);
    t9 = (t12 + 56U);
    t13 = *((char **)t9);
    t8 = *((int *)t13);
    t9 = (t5 + 12U);
    t10 = *((unsigned int *)t9);
    t67 = (t8 > t10);
    if (t67 == 1)
        goto LAB11;

LAB12:    t64 = (unsigned char)0;

LAB13:    if (t64 != 0)
        goto LAB8;

LAB10:
LAB9:    t9 = (t37 + 56U);
    t13 = *((char **)t9);
    t9 = (t5 + 12U);
    t10 = *((unsigned int *)t9);
    t14 = ieee_p_3039841270_sub_3322286019_2334307252(t1, t73, t13, t24, ((t10)));
    t16 = (t73 + 12U);
    t23 = *((unsigned int *)t16);
    t23 = (t23 * 1U);
    t0 = xsi_get_transient_memory(t23);
    memcpy(t0, t14, t23);
    t17 = (t73 + 0U);
    t8 = *((int *)t17);
    t18 = (t73 + 4U);
    t11 = *((int *)t18);
    t19 = (t73 + 8U);
    t20 = *((int *)t19);
    t25 = (t2 + 0U);
    t31 = (t25 + 0U);
    *((int *)t31) = t8;
    t31 = (t25 + 4U);
    *((int *)t31) = t11;
    t31 = (t25 + 8U);
    *((int *)t31) = t20;
    t21 = (t11 - t8);
    t30 = (t21 * t20);
    t30 = (t30 + 1);
    t31 = (t25 + 12U);
    *((unsigned int *)t31) = t30;

LAB1:    return t0;
LAB3:    *((char **)t63) = t4;
    goto LAB2;

LAB4:    t68 = (t1 + 1288U);
    t69 = *((char **)t68);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t69, 0U);
    t68 = (t2 + 0U);
    t70 = (t68 + 0U);
    *((int *)t70) = 0;
    t70 = (t68 + 4U);
    *((int *)t70) = 1;
    t70 = (t68 + 8U);
    *((int *)t70) = -1;
    t71 = (1 - 0);
    t72 = (t71 * -1);
    t72 = (t72 + 1);
    t70 = (t68 + 12U);
    *((unsigned int *)t70) = t72;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:    t105 = (t1 + 1408U);
    t109 = *((char **)t105);
    t110 = *((unsigned char *)t109);
    if (t110 == 0)
        goto LAB17;

LAB18:    goto LAB9;

LAB11:    t14 = (t37 + 56U);
    t16 = *((char **)t14);
    t14 = (t24 + 0U);
    t11 = *((int *)t14);
    t17 = (t12 + 56U);
    t18 = *((char **)t17);
    t20 = *((int *)t18);
    t21 = (t20 - 1);
    t23 = (t11 - t21);
    t17 = (t5 + 12U);
    t30 = *((unsigned int *)t17);
    t19 = (t24 + 4U);
    t22 = *((int *)t19);
    t25 = (t24 + 8U);
    t26 = *((int *)t25);
    xsi_vhdl_check_range_of_slice(t11, t22, t26, t21, t30, -1);
    t47 = (t23 * 1U);
    t50 = (0 + t47);
    t31 = (t16 + t50);
    t32 = (t12 + 56U);
    t34 = *((char **)t32);
    t27 = *((int *)t34);
    t29 = (t27 - 1);
    t32 = (t5 + 12U);
    t55 = *((unsigned int *)t32);
    t35 = (t73 + 0U);
    t36 = (t35 + 0U);
    *((int *)t36) = t29;
    t36 = (t35 + 4U);
    *((unsigned int *)t36) = t55;
    t36 = (t35 + 8U);
    *((int *)t36) = -1;
    t45 = (t55 - t29);
    t72 = (t45 * -1);
    t72 = (t72 + 1);
    t36 = (t35 + 12U);
    *((unsigned int *)t36) = t72;
    t36 = (t12 + 56U);
    t38 = *((char **)t36);
    t46 = *((int *)t38);
    t51 = (t46 - 1);
    t36 = (t5 + 12U);
    t72 = *((unsigned int *)t36);
    t54 = (t72 - t51);
    t75 = (t54 * -1);
    t75 = (t75 + 1);
    t76 = (1U * t75);
    t39 = xsi_get_transient_memory(t76);
    memset(t39, 0, t76);
    t41 = t39;
    t42 = (t12 + 56U);
    t43 = *((char **)t42);
    t71 = *((int *)t43);
    t77 = (t71 - 1);
    t42 = (t37 + 56U);
    t44 = *((char **)t42);
    t42 = (t5 + 12U);
    t78 = *((unsigned int *)t42);
    t79 = (t78 - 1);
    t49 = (t24 + 0U);
    t80 = *((int *)t49);
    t52 = (t24 + 8U);
    t81 = *((int *)t52);
    t82 = (t79 - t80);
    t83 = (t82 * t81);
    t56 = (t24 + 4U);
    t84 = *((int *)t56);
    xsi_vhdl_check_range_of_index(t80, t84, t81, t79);
    t85 = (1U * t83);
    t86 = (0 + t85);
    t57 = (t44 + t86);
    t87 = *((unsigned char *)t57);
    t59 = (t12 + 56U);
    t60 = *((char **)t59);
    t88 = *((int *)t60);
    t89 = (t88 - 1);
    t59 = (t5 + 12U);
    t90 = *((unsigned int *)t59);
    if (-1 == -1)
        goto LAB14;

LAB15:    t91 = t90;

LAB16:    t92 = (t91 - t77);
    t93 = (t92 * -1);
    t94 = (1U * t93);
    t61 = (t41 + t94);
    t66 = (t12 + 56U);
    t68 = *((char **)t66);
    t95 = *((int *)t68);
    t96 = (t95 - 1);
    t66 = (t5 + 12U);
    t97 = *((unsigned int *)t66);
    t98 = (t97 - t96);
    t99 = (t98 * -1);
    t99 = (t99 + 1);
    t100 = (1U * t99);
    memset(t61, t87, t100);
    t69 = (t12 + 56U);
    t70 = *((char **)t69);
    t101 = *((int *)t70);
    t102 = (t101 - 1);
    t69 = (t5 + 12U);
    t103 = *((unsigned int *)t69);
    t104 = (t74 + 0U);
    t105 = (t104 + 0U);
    *((int *)t105) = t102;
    t105 = (t104 + 4U);
    *((unsigned int *)t105) = t103;
    t105 = (t104 + 8U);
    *((int *)t105) = -1;
    t106 = (t103 - t102);
    t107 = (t106 * -1);
    t107 = (t107 + 1);
    t105 = (t104 + 12U);
    *((unsigned int *)t105) = t107;
    t108 = ieee_p_3039841270_sub_3348550333_2334307252(t1, t31, t73, t39, t74);
    t64 = t108;
    goto LAB13;

LAB14:    t91 = t89;
    goto LAB16;

LAB17:    t105 = (t1 + 4601);
    xsi_report(t105, 35U, (unsigned char)1);
    goto LAB18;

LAB19:;
}

char *ieee_p_3039841270_sub_2804069568_2334307252(char *t1, char *t2, char *t3, char *t4, char *t5, char *t6)
{
    char t7[248];
    char t8[40];
    char t14[16];
    char t32[16];
    char *t0;
    char *t9;
    unsigned int t10;
    int t11;
    int t12;
    unsigned int t13;
    char *t15;
    unsigned int t16;
    int t17;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    int t29;
    int t30;
    unsigned int t31;
    char *t33;
    unsigned int t34;
    int t35;
    char *t36;
    char *t37;
    int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned char t47;
    char *t48;
    char *t49;
    unsigned char t50;
    char *t51;
    unsigned char t52;
    char *t53;
    unsigned char t54;
    char *t55;
    unsigned int t56;
    unsigned char t57;
    char *t58;
    char *t59;
    char *t60;
    int t61;
    unsigned int t62;

LAB0:    t9 = (t4 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = (t10 - 1);
    t12 = (0 - t11);
    t13 = (t12 * -1);
    t13 = (t13 + 1);
    t13 = (t13 * 1U);
    t15 = (t4 + 12U);
    t16 = *((unsigned int *)t15);
    t17 = (t16 - 1);
    t18 = (t14 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = t17;
    t19 = (t18 + 4U);
    *((int *)t19) = 0;
    t19 = (t18 + 8U);
    *((int *)t19) = -1;
    t20 = (0 - t17);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    t19 = (t7 + 4U);
    t22 = (t1 + 2880);
    t23 = (t19 + 88U);
    *((char **)t23) = t22;
    t24 = (char *)alloca(t13);
    t25 = (t19 + 56U);
    *((char **)t25) = t24;
    xsi_type_set_default_value(t22, t24, t14);
    t26 = (t19 + 64U);
    *((char **)t26) = t14;
    t27 = (t19 + 80U);
    *((unsigned int *)t27) = t13;
    t28 = (t6 + 12U);
    t21 = *((unsigned int *)t28);
    t29 = (t21 - 1);
    t30 = (0 - t29);
    t31 = (t30 * -1);
    t31 = (t31 + 1);
    t31 = (t31 * 1U);
    t33 = (t6 + 12U);
    t34 = *((unsigned int *)t33);
    t35 = (t34 - 1);
    t36 = (t32 + 0U);
    t37 = (t36 + 0U);
    *((int *)t37) = t35;
    t37 = (t36 + 4U);
    *((int *)t37) = 0;
    t37 = (t36 + 8U);
    *((int *)t37) = -1;
    t38 = (0 - t35);
    t39 = (t38 * -1);
    t39 = (t39 + 1);
    t37 = (t36 + 12U);
    *((unsigned int *)t37) = t39;
    t37 = (t7 + 124U);
    t40 = (t1 + 2880);
    t41 = (t37 + 88U);
    *((char **)t41) = t40;
    t42 = (char *)alloca(t31);
    t43 = (t37 + 56U);
    *((char **)t43) = t42;
    xsi_type_set_default_value(t40, t42, t32);
    t44 = (t37 + 64U);
    *((char **)t44) = t32;
    t45 = (t37 + 80U);
    *((unsigned int *)t45) = t31;
    t46 = (t8 + 4U);
    t47 = (t3 != 0);
    if (t47 == 1)
        goto LAB3;

LAB2:    t48 = (t8 + 12U);
    *((char **)t48) = t4;
    t49 = (t8 + 20U);
    t50 = (t5 != 0);
    if (t50 == 1)
        goto LAB5;

LAB4:    t51 = (t8 + 28U);
    *((char **)t51) = t6;
    t53 = (t4 + 12U);
    t39 = *((unsigned int *)t53);
    t54 = (t39 < 1);
    if (t54 == 1)
        goto LAB9;

LAB10:    t55 = (t6 + 12U);
    t56 = *((unsigned int *)t55);
    t57 = (t56 < 1);
    t52 = t57;

LAB11:    if (t52 != 0)
        goto LAB6;

LAB8:
LAB7:    t9 = (t4 + 12U);
    t10 = *((unsigned int *)t9);
    t10 = (t10 * 1U);
    t15 = (char *)alloca(t10);
    memcpy(t15, t3, t10);
    t18 = (t6 + 12U);
    t13 = *((unsigned int *)t18);
    t13 = (t13 * 1U);
    t22 = (char *)alloca(t13);
    memcpy(t22, t5, t13);
    t23 = (t19 + 56U);
    t25 = *((char **)t23);
    t23 = (t37 + 56U);
    t26 = *((char **)t23);
    ieee_p_3039841270_sub_3828635824_2334307252(t1, (char *)0, t15, t4, t22, t6, t25, t14, t26, t32);
    t9 = (t37 + 56U);
    t18 = *((char **)t9);
    t9 = (t32 + 12U);
    t10 = *((unsigned int *)t9);
    t10 = (t10 * 1U);
    t0 = xsi_get_transient_memory(t10);
    memcpy(t0, t18, t10);
    t23 = (t32 + 0U);
    t11 = *((int *)t23);
    t25 = (t32 + 4U);
    t12 = *((int *)t25);
    t26 = (t32 + 8U);
    t17 = *((int *)t26);
    t27 = (t2 + 0U);
    t28 = (t27 + 0U);
    *((int *)t28) = t11;
    t28 = (t27 + 4U);
    *((int *)t28) = t12;
    t28 = (t27 + 8U);
    *((int *)t28) = t17;
    t20 = (t12 - t11);
    t13 = (t20 * t17);
    t13 = (t13 + 1);
    t28 = (t27 + 12U);
    *((unsigned int *)t28) = t13;

LAB1:    return t0;
LAB3:    *((char **)t46) = t3;
    goto LAB2;

LAB5:    *((char **)t49) = t5;
    goto LAB4;

LAB6:    t58 = (t1 + 1168U);
    t59 = *((char **)t58);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t59, 0U);
    t58 = (t2 + 0U);
    t60 = (t58 + 0U);
    *((int *)t60) = 0;
    t60 = (t58 + 4U);
    *((int *)t60) = 1;
    t60 = (t58 + 8U);
    *((int *)t60) = -1;
    t61 = (1 - 0);
    t62 = (t61 * -1);
    t62 = (t62 + 1);
    t60 = (t58 + 12U);
    *((unsigned int *)t60) = t62;
    goto LAB1;

LAB9:    t52 = (unsigned char)1;
    goto LAB11;

LAB12:    goto LAB7;

LAB13:;
}

char *ieee_p_3039841270_sub_441870262_2334307252(char *t1, char *t2, char *t3, char *t4, char *t5, char *t6)
{
    char t7[608];
    char t8[40];
    char t14[16];
    char t32[16];
    char t50[16];
    char t68[16];
    char t85[8];
    char t105[16];
    char t106[16];
    char *t0;
    char *t9;
    unsigned int t10;
    int t11;
    int t12;
    unsigned int t13;
    char *t15;
    unsigned int t16;
    int t17;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    int t29;
    int t30;
    unsigned int t31;
    char *t33;
    unsigned int t34;
    int t35;
    char *t36;
    char *t37;
    int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    int t47;
    int t48;
    unsigned int t49;
    char *t51;
    unsigned int t52;
    int t53;
    char *t54;
    char *t55;
    int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    int t65;
    int t66;
    unsigned int t67;
    char *t69;
    unsigned int t70;
    int t71;
    char *t72;
    char *t73;
    int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t86;
    char *t87;
    char *t88;
    unsigned char t89;
    char *t90;
    char *t91;
    unsigned char t92;
    char *t93;
    unsigned char t94;
    char *t95;
    unsigned char t96;
    char *t97;
    unsigned int t98;
    unsigned char t99;
    char *t100;
    char *t101;
    char *t102;
    int t103;
    unsigned int t104;

LAB0:    t9 = (t4 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = (t10 - 1);
    t12 = (0 - t11);
    t13 = (t12 * -1);
    t13 = (t13 + 1);
    t13 = (t13 * 1U);
    t15 = (t4 + 12U);
    t16 = *((unsigned int *)t15);
    t17 = (t16 - 1);
    t18 = (t14 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = t17;
    t19 = (t18 + 4U);
    *((int *)t19) = 0;
    t19 = (t18 + 8U);
    *((int *)t19) = -1;
    t20 = (0 - t17);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    t19 = (t7 + 4U);
    t22 = (t1 + 2880);
    t23 = (t19 + 88U);
    *((char **)t23) = t22;
    t24 = (char *)alloca(t13);
    t25 = (t19 + 56U);
    *((char **)t25) = t24;
    xsi_type_set_default_value(t22, t24, t14);
    t26 = (t19 + 64U);
    *((char **)t26) = t14;
    t27 = (t19 + 80U);
    *((unsigned int *)t27) = t13;
    t28 = (t6 + 12U);
    t21 = *((unsigned int *)t28);
    t29 = (t21 - 1);
    t30 = (0 - t29);
    t31 = (t30 * -1);
    t31 = (t31 + 1);
    t31 = (t31 * 1U);
    t33 = (t6 + 12U);
    t34 = *((unsigned int *)t33);
    t35 = (t34 - 1);
    t36 = (t32 + 0U);
    t37 = (t36 + 0U);
    *((int *)t37) = t35;
    t37 = (t36 + 4U);
    *((int *)t37) = 0;
    t37 = (t36 + 8U);
    *((int *)t37) = -1;
    t38 = (0 - t35);
    t39 = (t38 * -1);
    t39 = (t39 + 1);
    t37 = (t36 + 12U);
    *((unsigned int *)t37) = t39;
    t37 = (t7 + 124U);
    t40 = (t1 + 2880);
    t41 = (t37 + 88U);
    *((char **)t41) = t40;
    t42 = (char *)alloca(t31);
    t43 = (t37 + 56U);
    *((char **)t43) = t42;
    xsi_type_set_default_value(t40, t42, t32);
    t44 = (t37 + 64U);
    *((char **)t44) = t32;
    t45 = (t37 + 80U);
    *((unsigned int *)t45) = t31;
    t46 = (t4 + 12U);
    t39 = *((unsigned int *)t46);
    t47 = (t39 - 1);
    t48 = (0 - t47);
    t49 = (t48 * -1);
    t49 = (t49 + 1);
    t49 = (t49 * 1U);
    t51 = (t4 + 12U);
    t52 = *((unsigned int *)t51);
    t53 = (t52 - 1);
    t54 = (t50 + 0U);
    t55 = (t54 + 0U);
    *((int *)t55) = t53;
    t55 = (t54 + 4U);
    *((int *)t55) = 0;
    t55 = (t54 + 8U);
    *((int *)t55) = -1;
    t56 = (0 - t53);
    t57 = (t56 * -1);
    t57 = (t57 + 1);
    t55 = (t54 + 12U);
    *((unsigned int *)t55) = t57;
    t55 = (t7 + 244U);
    t58 = (t1 + 2880);
    t59 = (t55 + 88U);
    *((char **)t59) = t58;
    t60 = (char *)alloca(t49);
    t61 = (t55 + 56U);
    *((char **)t61) = t60;
    xsi_type_set_default_value(t58, t60, t50);
    t62 = (t55 + 64U);
    *((char **)t62) = t50;
    t63 = (t55 + 80U);
    *((unsigned int *)t63) = t49;
    t64 = (t6 + 12U);
    t57 = *((unsigned int *)t64);
    t65 = (t57 - 1);
    t66 = (0 - t65);
    t67 = (t66 * -1);
    t67 = (t67 + 1);
    t67 = (t67 * 1U);
    t69 = (t6 + 12U);
    t70 = *((unsigned int *)t69);
    t71 = (t70 - 1);
    t72 = (t68 + 0U);
    t73 = (t72 + 0U);
    *((int *)t73) = t71;
    t73 = (t72 + 4U);
    *((int *)t73) = 0;
    t73 = (t72 + 8U);
    *((int *)t73) = -1;
    t74 = (0 - t71);
    t75 = (t74 * -1);
    t75 = (t75 + 1);
    t73 = (t72 + 12U);
    *((unsigned int *)t73) = t75;
    t73 = (t7 + 364U);
    t76 = (t1 + 2880);
    t77 = (t73 + 88U);
    *((char **)t77) = t76;
    t78 = (char *)alloca(t67);
    t79 = (t73 + 56U);
    *((char **)t79) = t78;
    xsi_type_set_default_value(t76, t78, t68);
    t80 = (t73 + 64U);
    *((char **)t80) = t68;
    t81 = (t73 + 80U);
    *((unsigned int *)t81) = t67;
    t82 = (t7 + 484U);
    t83 = ((STD_STANDARD) + 0);
    t84 = (t82 + 88U);
    *((char **)t84) = t83;
    t86 = (t82 + 56U);
    *((char **)t86) = t85;
    *((unsigned char *)t85) = (unsigned char)0;
    t87 = (t82 + 80U);
    *((unsigned int *)t87) = 1U;
    t88 = (t8 + 4U);
    t89 = (t3 != 0);
    if (t89 == 1)
        goto LAB3;

LAB2:    t90 = (t8 + 12U);
    *((char **)t90) = t4;
    t91 = (t8 + 20U);
    t92 = (t5 != 0);
    if (t92 == 1)
        goto LAB5;

LAB4:    t93 = (t8 + 28U);
    *((char **)t93) = t6;
    t95 = (t4 + 12U);
    t75 = *((unsigned int *)t95);
    t96 = (t75 < 1);
    if (t96 == 1)
        goto LAB9;

LAB10:    t97 = (t6 + 12U);
    t98 = *((unsigned int *)t97);
    t99 = (t98 < 1);
    t94 = t99;

LAB11:    if (t94 != 0)
        goto LAB6;

LAB8:
LAB7:    t9 = (t4 + 0U);
    t11 = *((int *)t9);
    t15 = (t4 + 0U);
    t12 = *((int *)t15);
    t18 = (t4 + 8U);
    t17 = *((int *)t18);
    t20 = (t11 - t12);
    t10 = (t20 * t17);
    t13 = (1U * t10);
    t16 = (0 + t13);
    t22 = (t3 + t16);
    t89 = *((unsigned char *)t22);
    t92 = (t89 == (unsigned char)1);
    if (t92 != 0)
        goto LAB13;

LAB15:    t9 = (t55 + 56U);
    t15 = *((char **)t9);
    t9 = (t15 + 0);
    t18 = (t4 + 12U);
    t10 = *((unsigned int *)t18);
    t10 = (t10 * 1U);
    memcpy(t9, t3, t10);

LAB14:    t9 = (t6 + 0U);
    t11 = *((int *)t9);
    t15 = (t6 + 0U);
    t12 = *((int *)t15);
    t18 = (t6 + 8U);
    t17 = *((int *)t18);
    t20 = (t11 - t12);
    t10 = (t20 * t17);
    t13 = (1U * t10);
    t16 = (0 + t13);
    t22 = (t5 + t16);
    t89 = *((unsigned char *)t22);
    t92 = (t89 == (unsigned char)1);
    if (t92 != 0)
        goto LAB16;

LAB18:    t9 = (t73 + 56U);
    t15 = *((char **)t9);
    t9 = (t15 + 0);
    t18 = (t6 + 12U);
    t10 = *((unsigned int *)t18);
    t10 = (t10 * 1U);
    memcpy(t9, t5, t10);

LAB17:    t9 = (t55 + 56U);
    t15 = *((char **)t9);
    t9 = (t50 + 12U);
    t10 = *((unsigned int *)t9);
    t10 = (t10 * 1U);
    t18 = (char *)alloca(t10);
    memcpy(t18, t15, t10);
    t22 = (t73 + 56U);
    t23 = *((char **)t22);
    t22 = (t68 + 12U);
    t13 = *((unsigned int *)t22);
    t13 = (t13 * 1U);
    t25 = (char *)alloca(t13);
    memcpy(t25, t23, t13);
    t26 = (t19 + 56U);
    t27 = *((char **)t26);
    t26 = (t37 + 56U);
    t28 = *((char **)t26);
    ieee_p_3039841270_sub_3828635824_2334307252(t1, (char *)0, t18, t50, t25, t68, t27, t14, t28, t32);
    t9 = (t82 + 56U);
    t15 = *((char **)t9);
    t89 = *((unsigned char *)t15);
    if (t89 != 0)
        goto LAB19;

LAB21:
LAB20:    t9 = (t37 + 56U);
    t15 = *((char **)t9);
    t9 = (t32 + 12U);
    t10 = *((unsigned int *)t9);
    t10 = (t10 * 1U);
    t0 = xsi_get_transient_memory(t10);
    memcpy(t0, t15, t10);
    t22 = (t32 + 0U);
    t11 = *((int *)t22);
    t23 = (t32 + 4U);
    t12 = *((int *)t23);
    t26 = (t32 + 8U);
    t17 = *((int *)t26);
    t27 = (t2 + 0U);
    t28 = (t27 + 0U);
    *((int *)t28) = t11;
    t28 = (t27 + 4U);
    *((int *)t28) = t12;
    t28 = (t27 + 8U);
    *((int *)t28) = t17;
    t20 = (t12 - t11);
    t13 = (t20 * t17);
    t13 = (t13 + 1);
    t28 = (t27 + 12U);
    *((unsigned int *)t28) = t13;

LAB1:    return t0;
LAB3:    *((char **)t88) = t3;
    goto LAB2;

LAB5:    *((char **)t91) = t5;
    goto LAB4;

LAB6:    t100 = (t1 + 1288U);
    t101 = *((char **)t100);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t101, 0U);
    t100 = (t2 + 0U);
    t102 = (t100 + 0U);
    *((int *)t102) = 0;
    t102 = (t100 + 4U);
    *((int *)t102) = 1;
    t102 = (t100 + 8U);
    *((int *)t102) = -1;
    t103 = (1 - 0);
    t104 = (t103 * -1);
    t104 = (t104 + 1);
    t102 = (t100 + 12U);
    *((unsigned int *)t102) = t104;
    goto LAB1;

LAB9:    t94 = (unsigned char)1;
    goto LAB11;

LAB12:    goto LAB7;

LAB13:    t23 = ieee_p_3039841270_sub_3118404406_2334307252(t1, t105, t3, t4);
    t25 = (t55 + 56U);
    t26 = *((char **)t25);
    t25 = (t26 + 0);
    t27 = (t105 + 12U);
    t21 = *((unsigned int *)t27);
    t31 = (1U * t21);
    memcpy(t25, t23, t31);
    t9 = (t82 + 56U);
    t15 = *((char **)t9);
    t9 = (t15 + 0);
    *((unsigned char *)t9) = (unsigned char)1;
    goto LAB14;

LAB16:    t23 = ieee_p_3039841270_sub_3118404406_2334307252(t1, t105, t5, t6);
    t25 = (t73 + 56U);
    t26 = *((char **)t25);
    t25 = (t26 + 0);
    t27 = (t105 + 12U);
    t21 = *((unsigned int *)t27);
    t31 = (1U * t21);
    memcpy(t25, t23, t31);
    goto LAB17;

LAB19:    t9 = (t1 + 4636);
    t23 = (t106 + 0U);
    t26 = (t23 + 0U);
    *((int *)t26) = 0;
    t26 = (t23 + 4U);
    *((int *)t26) = 0;
    t26 = (t23 + 8U);
    *((int *)t26) = 1;
    t11 = (0 - 0);
    t10 = (t11 * 1);
    t10 = (t10 + 1);
    t26 = (t23 + 12U);
    *((unsigned int *)t26) = t10;
    t26 = (t37 + 56U);
    t27 = *((char **)t26);
    t26 = ieee_p_3039841270_sub_1717229644_2334307252(t1, t105, t9, t106, t27, t32);
    t28 = (t37 + 56U);
    t33 = *((char **)t28);
    t28 = (t33 + 0);
    t36 = (t105 + 12U);
    t10 = *((unsigned int *)t36);
    t13 = (1U * t10);
    memcpy(t28, t26, t13);
    goto LAB20;

LAB22:;
}

char *ieee_p_3039841270_sub_3072723324_2334307252(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t6[488];
    char t7[24];
    char t15[8];
    char t24[16];
    char t48[16];
    char t73[16];
    char t74[16];
    char *t0;
    char *t8;
    unsigned int t9;
    int t10;
    int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    int t20;
    int t21;
    int t22;
    unsigned int t23;
    char *t25;
    int t26;
    int t27;
    char *t28;
    int t29;
    unsigned int t30;
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
    char *t42;
    char *t43;
    char *t44;
    int t45;
    int t46;
    unsigned int t47;
    char *t49;
    unsigned int t50;
    int t51;
    char *t52;
    char *t53;
    int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    unsigned char t63;
    char *t64;
    char *t65;
    char *t66;
    unsigned char t67;
    char *t68;
    char *t69;
    char *t70;
    int t71;
    unsigned int t72;
    unsigned int t75;
    unsigned int t76;
    int t77;
    int t78;
    int t79;
    unsigned int t80;
    unsigned int t81;
    int t82;
    unsigned int t83;
    unsigned int t84;
    int t85;
    int t86;
    unsigned int t87;
    int t88;
    unsigned int t89;
    unsigned int t90;
    int t91;
    int t92;
    unsigned int t93;
    int t94;
    unsigned int t95;
    unsigned char t96;
    unsigned char t97;

LAB0:    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = ieee_p_3039841270_sub_3295552210_2334307252(t1, t5);
    t11 = ieee_p_3039841270_sub_3160373586_2334307252(t1, ((t9)), t10);
    t12 = (t6 + 4U);
    t13 = ((STD_STANDARD) + 832);
    t14 = (t12 + 88U);
    *((char **)t14) = t13;
    t16 = (t12 + 56U);
    *((char **)t16) = t15;
    *((int *)t15) = t11;
    t17 = (t12 + 80U);
    *((unsigned int *)t17) = 4U;
    t18 = (t12 + 56U);
    t19 = *((char **)t18);
    t20 = *((int *)t19);
    t21 = (t20 - 1);
    t22 = (0 - t21);
    t23 = (t22 * -1);
    t23 = (t23 + 1);
    t23 = (t23 * 1U);
    t18 = (t12 + 56U);
    t25 = *((char **)t18);
    t26 = *((int *)t25);
    t27 = (t26 - 1);
    t18 = (t24 + 0U);
    t28 = (t18 + 0U);
    *((int *)t28) = t27;
    t28 = (t18 + 4U);
    *((int *)t28) = 0;
    t28 = (t18 + 8U);
    *((int *)t28) = -1;
    t29 = (0 - t27);
    t30 = (t29 * -1);
    t30 = (t30 + 1);
    t28 = (t18 + 12U);
    *((unsigned int *)t28) = t30;
    t28 = (t6 + 124U);
    t31 = (t1 + 2880);
    t32 = (t28 + 88U);
    *((char **)t32) = t31;
    t33 = (char *)alloca(t23);
    t34 = (t28 + 56U);
    *((char **)t34) = t33;
    xsi_type_set_default_value(t31, t33, t24);
    t35 = (t28 + 64U);
    *((char **)t35) = t24;
    t36 = (t28 + 80U);
    *((unsigned int *)t36) = t23;
    t37 = (t6 + 244U);
    t38 = (t1 + 2880);
    t39 = (t37 + 88U);
    *((char **)t39) = t38;
    t40 = (char *)alloca(t23);
    t41 = (t37 + 56U);
    *((char **)t41) = t40;
    xsi_type_set_default_value(t38, t40, t24);
    t42 = (t37 + 64U);
    *((char **)t42) = t24;
    t43 = (t37 + 80U);
    *((unsigned int *)t43) = t23;
    t44 = (t4 + 12U);
    t30 = *((unsigned int *)t44);
    t45 = (t30 - 1);
    t46 = (0 - t45);
    t47 = (t46 * -1);
    t47 = (t47 + 1);
    t47 = (t47 * 1U);
    t49 = (t4 + 12U);
    t50 = *((unsigned int *)t49);
    t51 = (t50 - 1);
    t52 = (t48 + 0U);
    t53 = (t52 + 0U);
    *((int *)t53) = t51;
    t53 = (t52 + 4U);
    *((int *)t53) = 0;
    t53 = (t52 + 8U);
    *((int *)t53) = -1;
    t54 = (0 - t51);
    t55 = (t54 * -1);
    t55 = (t55 + 1);
    t53 = (t52 + 12U);
    *((unsigned int *)t53) = t55;
    t53 = (t6 + 364U);
    t56 = (t1 + 2880);
    t57 = (t53 + 88U);
    *((char **)t57) = t56;
    t58 = (char *)alloca(t47);
    t59 = (t53 + 56U);
    *((char **)t59) = t58;
    xsi_type_set_default_value(t56, t58, t48);
    t60 = (t53 + 64U);
    *((char **)t60) = t48;
    t61 = (t53 + 80U);
    *((unsigned int *)t61) = t47;
    t62 = (t7 + 4U);
    t63 = (t3 != 0);
    if (t63 == 1)
        goto LAB3;

LAB2:    t64 = (t7 + 12U);
    *((char **)t64) = t4;
    t65 = (t7 + 20U);
    *((int *)t65) = t5;
    t66 = (t4 + 12U);
    t55 = *((unsigned int *)t66);
    t67 = (t55 < 1);
    if (t67 != 0)
        goto LAB4;

LAB6:
LAB5:    t8 = (t12 + 56U);
    t13 = *((char **)t8);
    t10 = *((int *)t13);
    t8 = ieee_p_3039841270_sub_180853171_2334307252(t1, t73, t5, t10);
    t14 = (t28 + 56U);
    t16 = *((char **)t14);
    t14 = (t16 + 0);
    t17 = (t73 + 12U);
    t9 = *((unsigned int *)t17);
    t9 = (t9 * 1U);
    memcpy(t14, t8, t9);
    t8 = (t28 + 56U);
    t13 = *((char **)t8);
    t8 = ieee_p_3039841270_sub_2804069568_2334307252(t1, t74, t3, t4, t13, t24);
    t14 = (t24 + 12U);
    t9 = *((unsigned int *)t14);
    t16 = ieee_p_3039841270_sub_2675122452_2334307252(t1, t73, t8, t74, ((t9)));
    t17 = (t37 + 56U);
    t18 = *((char **)t17);
    t17 = (t18 + 0);
    t19 = (t73 + 12U);
    t23 = *((unsigned int *)t19);
    t23 = (t23 * 1U);
    memcpy(t17, t16, t23);
    t8 = (t12 + 56U);
    t13 = *((char **)t8);
    t10 = *((int *)t13);
    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t67 = (t10 > t9);
    if (t67 == 1)
        goto LAB11;

LAB12:    t63 = (unsigned char)0;

LAB13:    if (t63 != 0)
        goto LAB8;

LAB10:
LAB9:    t8 = (t37 + 56U);
    t13 = *((char **)t8);
    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t14 = ieee_p_3039841270_sub_2675122452_2334307252(t1, t73, t13, t24, ((t9)));
    t16 = (t73 + 12U);
    t23 = *((unsigned int *)t16);
    t23 = (t23 * 1U);
    t0 = xsi_get_transient_memory(t23);
    memcpy(t0, t14, t23);
    t17 = (t73 + 0U);
    t10 = *((int *)t17);
    t18 = (t73 + 4U);
    t11 = *((int *)t18);
    t19 = (t73 + 8U);
    t20 = *((int *)t19);
    t25 = (t2 + 0U);
    t31 = (t25 + 0U);
    *((int *)t31) = t10;
    t31 = (t25 + 4U);
    *((int *)t31) = t11;
    t31 = (t25 + 8U);
    *((int *)t31) = t20;
    t21 = (t11 - t10);
    t30 = (t21 * t20);
    t30 = (t30 + 1);
    t31 = (t25 + 12U);
    *((unsigned int *)t31) = t30;

LAB1:    return t0;
LAB3:    *((char **)t62) = t3;
    goto LAB2;

LAB4:    t68 = (t1 + 1168U);
    t69 = *((char **)t68);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t69, 0U);
    t68 = (t2 + 0U);
    t70 = (t68 + 0U);
    *((int *)t70) = 0;
    t70 = (t68 + 4U);
    *((int *)t70) = 1;
    t70 = (t68 + 8U);
    *((int *)t70) = -1;
    t71 = (1 - 0);
    t72 = (t71 * -1);
    t72 = (t72 + 1);
    t70 = (t68 + 12U);
    *((unsigned int *)t70) = t72;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:    t61 = (t1 + 1408U);
    t66 = *((char **)t61);
    t97 = *((unsigned char *)t66);
    if (t97 == 0)
        goto LAB17;

LAB18:    goto LAB9;

LAB11:    t14 = (t37 + 56U);
    t16 = *((char **)t14);
    t14 = (t24 + 0U);
    t11 = *((int *)t14);
    t17 = (t12 + 56U);
    t18 = *((char **)t17);
    t20 = *((int *)t18);
    t21 = (t20 - 1);
    t23 = (t11 - t21);
    t17 = (t4 + 12U);
    t30 = *((unsigned int *)t17);
    t19 = (t24 + 4U);
    t22 = *((int *)t19);
    t25 = (t24 + 8U);
    t26 = *((int *)t25);
    xsi_vhdl_check_range_of_slice(t11, t22, t26, t21, t30, -1);
    t47 = (t23 * 1U);
    t50 = (0 + t47);
    t31 = (t16 + t50);
    t32 = (t12 + 56U);
    t34 = *((char **)t32);
    t27 = *((int *)t34);
    t29 = (t27 - 1);
    t32 = (t4 + 12U);
    t55 = *((unsigned int *)t32);
    t35 = (t73 + 0U);
    t36 = (t35 + 0U);
    *((int *)t36) = t29;
    t36 = (t35 + 4U);
    *((unsigned int *)t36) = t55;
    t36 = (t35 + 8U);
    *((int *)t36) = -1;
    t45 = (t55 - t29);
    t72 = (t45 * -1);
    t72 = (t72 + 1);
    t36 = (t35 + 12U);
    *((unsigned int *)t36) = t72;
    t36 = (t12 + 56U);
    t38 = *((char **)t36);
    t46 = *((int *)t38);
    t51 = (t46 - 1);
    t36 = (t4 + 12U);
    t72 = *((unsigned int *)t36);
    t54 = (t72 - t51);
    t75 = (t54 * -1);
    t75 = (t75 + 1);
    t76 = (1U * t75);
    t39 = xsi_get_transient_memory(t76);
    memset(t39, 0, t76);
    t41 = t39;
    t42 = (t12 + 56U);
    t43 = *((char **)t42);
    t71 = *((int *)t43);
    t77 = (t71 - 1);
    t42 = (t12 + 56U);
    t44 = *((char **)t42);
    t78 = *((int *)t44);
    t79 = (t78 - 1);
    t42 = (t4 + 12U);
    t80 = *((unsigned int *)t42);
    if (-1 == -1)
        goto LAB14;

LAB15:    t81 = t80;

LAB16:    t82 = (t81 - t77);
    t83 = (t82 * -1);
    t84 = (1U * t83);
    t49 = (t41 + t84);
    t52 = (t12 + 56U);
    t56 = *((char **)t52);
    t85 = *((int *)t56);
    t86 = (t85 - 1);
    t52 = (t4 + 12U);
    t87 = *((unsigned int *)t52);
    t88 = (t87 - t86);
    t89 = (t88 * -1);
    t89 = (t89 + 1);
    t90 = (1U * t89);
    memset(t49, (unsigned char)0, t90);
    t57 = (t12 + 56U);
    t59 = *((char **)t57);
    t91 = *((int *)t59);
    t92 = (t91 - 1);
    t57 = (t4 + 12U);
    t93 = *((unsigned int *)t57);
    t60 = (t74 + 0U);
    t61 = (t60 + 0U);
    *((int *)t61) = t92;
    t61 = (t60 + 4U);
    *((unsigned int *)t61) = t93;
    t61 = (t60 + 8U);
    *((int *)t61) = -1;
    t94 = (t93 - t92);
    t95 = (t94 * -1);
    t95 = (t95 + 1);
    t61 = (t60 + 12U);
    *((unsigned int *)t61) = t95;
    t96 = ieee_p_3039841270_sub_4062508670_2334307252(t1, t31, t73, t39, t74);
    t63 = t96;
    goto LAB13;

LAB14:    t81 = t79;
    goto LAB16;

LAB17:    t61 = (t1 + 4637);
    xsi_report(t61, 38U, (unsigned char)1);
    goto LAB18;

LAB19:;
}

char *ieee_p_3039841270_sub_2631435991_2334307252(char *t1, char *t2, int t3, char *t4, char *t5)
{
    char t6[488];
    char t7[24];
    char t15[8];
    char t24[16];
    char t48[16];
    char t73[16];
    char t74[16];
    char *t0;
    int t8;
    char *t9;
    unsigned int t10;
    int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    int t20;
    int t21;
    int t22;
    unsigned int t23;
    char *t25;
    int t26;
    int t27;
    char *t28;
    int t29;
    unsigned int t30;
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
    char *t42;
    char *t43;
    char *t44;
    int t45;
    int t46;
    unsigned int t47;
    char *t49;
    unsigned int t50;
    int t51;
    char *t52;
    char *t53;
    int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    unsigned char t64;
    char *t65;
    char *t66;
    unsigned char t67;
    char *t68;
    char *t69;
    char *t70;
    int t71;
    unsigned int t72;
    unsigned int t75;
    unsigned int t76;
    int t77;
    int t78;
    int t79;
    unsigned int t80;
    unsigned int t81;
    int t82;
    unsigned int t83;
    unsigned int t84;
    int t85;
    int t86;
    unsigned int t87;
    int t88;
    unsigned int t89;
    unsigned int t90;
    int t91;
    int t92;
    unsigned int t93;
    int t94;
    unsigned int t95;
    unsigned char t96;
    unsigned char t97;

LAB0:    t8 = ieee_p_3039841270_sub_3295552210_2334307252(t1, t3);
    t9 = (t5 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = ieee_p_3039841270_sub_3160373586_2334307252(t1, t8, ((t10)));
    t12 = (t6 + 4U);
    t13 = ((STD_STANDARD) + 832);
    t14 = (t12 + 88U);
    *((char **)t14) = t13;
    t16 = (t12 + 56U);
    *((char **)t16) = t15;
    *((int *)t15) = t11;
    t17 = (t12 + 80U);
    *((unsigned int *)t17) = 4U;
    t18 = (t12 + 56U);
    t19 = *((char **)t18);
    t20 = *((int *)t19);
    t21 = (t20 - 1);
    t22 = (0 - t21);
    t23 = (t22 * -1);
    t23 = (t23 + 1);
    t23 = (t23 * 1U);
    t18 = (t12 + 56U);
    t25 = *((char **)t18);
    t26 = *((int *)t25);
    t27 = (t26 - 1);
    t18 = (t24 + 0U);
    t28 = (t18 + 0U);
    *((int *)t28) = t27;
    t28 = (t18 + 4U);
    *((int *)t28) = 0;
    t28 = (t18 + 8U);
    *((int *)t28) = -1;
    t29 = (0 - t27);
    t30 = (t29 * -1);
    t30 = (t30 + 1);
    t28 = (t18 + 12U);
    *((unsigned int *)t28) = t30;
    t28 = (t6 + 124U);
    t31 = (t1 + 2880);
    t32 = (t28 + 88U);
    *((char **)t32) = t31;
    t33 = (char *)alloca(t23);
    t34 = (t28 + 56U);
    *((char **)t34) = t33;
    xsi_type_set_default_value(t31, t33, t24);
    t35 = (t28 + 64U);
    *((char **)t35) = t24;
    t36 = (t28 + 80U);
    *((unsigned int *)t36) = t23;
    t37 = (t6 + 244U);
    t38 = (t1 + 2880);
    t39 = (t37 + 88U);
    *((char **)t39) = t38;
    t40 = (char *)alloca(t23);
    t41 = (t37 + 56U);
    *((char **)t41) = t40;
    xsi_type_set_default_value(t38, t40, t24);
    t42 = (t37 + 64U);
    *((char **)t42) = t24;
    t43 = (t37 + 80U);
    *((unsigned int *)t43) = t23;
    t44 = (t5 + 12U);
    t30 = *((unsigned int *)t44);
    t45 = (t30 - 1);
    t46 = (0 - t45);
    t47 = (t46 * -1);
    t47 = (t47 + 1);
    t47 = (t47 * 1U);
    t49 = (t5 + 12U);
    t50 = *((unsigned int *)t49);
    t51 = (t50 - 1);
    t52 = (t48 + 0U);
    t53 = (t52 + 0U);
    *((int *)t53) = t51;
    t53 = (t52 + 4U);
    *((int *)t53) = 0;
    t53 = (t52 + 8U);
    *((int *)t53) = -1;
    t54 = (0 - t51);
    t55 = (t54 * -1);
    t55 = (t55 + 1);
    t53 = (t52 + 12U);
    *((unsigned int *)t53) = t55;
    t53 = (t6 + 364U);
    t56 = (t1 + 2880);
    t57 = (t53 + 88U);
    *((char **)t57) = t56;
    t58 = (char *)alloca(t47);
    t59 = (t53 + 56U);
    *((char **)t59) = t58;
    xsi_type_set_default_value(t56, t58, t48);
    t60 = (t53 + 64U);
    *((char **)t60) = t48;
    t61 = (t53 + 80U);
    *((unsigned int *)t61) = t47;
    t62 = (t7 + 4U);
    *((int *)t62) = t3;
    t63 = (t7 + 8U);
    t64 = (t4 != 0);
    if (t64 == 1)
        goto LAB3;

LAB2:    t65 = (t7 + 16U);
    *((char **)t65) = t5;
    t66 = (t5 + 12U);
    t55 = *((unsigned int *)t66);
    t67 = (t55 < 1);
    if (t67 != 0)
        goto LAB4;

LAB6:
LAB5:    t9 = (t12 + 56U);
    t13 = *((char **)t9);
    t8 = *((int *)t13);
    t9 = ieee_p_3039841270_sub_180853171_2334307252(t1, t73, t3, t8);
    t14 = (t28 + 56U);
    t16 = *((char **)t14);
    t14 = (t16 + 0);
    t17 = (t73 + 12U);
    t10 = *((unsigned int *)t17);
    t10 = (t10 * 1U);
    memcpy(t14, t9, t10);
    t9 = (t28 + 56U);
    t13 = *((char **)t9);
    t9 = ieee_p_3039841270_sub_2804069568_2334307252(t1, t74, t13, t24, t4, t5);
    t14 = (t24 + 12U);
    t10 = *((unsigned int *)t14);
    t16 = ieee_p_3039841270_sub_2675122452_2334307252(t1, t73, t9, t74, ((t10)));
    t17 = (t37 + 56U);
    t18 = *((char **)t17);
    t17 = (t18 + 0);
    t19 = (t73 + 12U);
    t23 = *((unsigned int *)t19);
    t23 = (t23 * 1U);
    memcpy(t17, t16, t23);
    t9 = (t12 + 56U);
    t13 = *((char **)t9);
    t8 = *((int *)t13);
    t9 = (t5 + 12U);
    t10 = *((unsigned int *)t9);
    t67 = (t8 > t10);
    if (t67 == 1)
        goto LAB11;

LAB12:    t64 = (unsigned char)0;

LAB13:    if (t64 != 0)
        goto LAB8;

LAB10:
LAB9:    t9 = (t37 + 56U);
    t13 = *((char **)t9);
    t9 = (t5 + 12U);
    t10 = *((unsigned int *)t9);
    t14 = ieee_p_3039841270_sub_2675122452_2334307252(t1, t73, t13, t24, ((t10)));
    t16 = (t73 + 12U);
    t23 = *((unsigned int *)t16);
    t23 = (t23 * 1U);
    t0 = xsi_get_transient_memory(t23);
    memcpy(t0, t14, t23);
    t17 = (t73 + 0U);
    t8 = *((int *)t17);
    t18 = (t73 + 4U);
    t11 = *((int *)t18);
    t19 = (t73 + 8U);
    t20 = *((int *)t19);
    t25 = (t2 + 0U);
    t31 = (t25 + 0U);
    *((int *)t31) = t8;
    t31 = (t25 + 4U);
    *((int *)t31) = t11;
    t31 = (t25 + 8U);
    *((int *)t31) = t20;
    t21 = (t11 - t8);
    t30 = (t21 * t20);
    t30 = (t30 + 1);
    t31 = (t25 + 12U);
    *((unsigned int *)t31) = t30;

LAB1:    return t0;
LAB3:    *((char **)t63) = t4;
    goto LAB2;

LAB4:    t68 = (t1 + 1168U);
    t69 = *((char **)t68);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t69, 0U);
    t68 = (t2 + 0U);
    t70 = (t68 + 0U);
    *((int *)t70) = 0;
    t70 = (t68 + 4U);
    *((int *)t70) = 1;
    t70 = (t68 + 8U);
    *((int *)t70) = -1;
    t71 = (1 - 0);
    t72 = (t71 * -1);
    t72 = (t72 + 1);
    t70 = (t68 + 12U);
    *((unsigned int *)t70) = t72;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:    t61 = (t1 + 1408U);
    t66 = *((char **)t61);
    t97 = *((unsigned char *)t66);
    if (t97 == 0)
        goto LAB17;

LAB18:    goto LAB9;

LAB11:    t14 = (t37 + 56U);
    t16 = *((char **)t14);
    t14 = (t24 + 0U);
    t11 = *((int *)t14);
    t17 = (t12 + 56U);
    t18 = *((char **)t17);
    t20 = *((int *)t18);
    t21 = (t20 - 1);
    t23 = (t11 - t21);
    t17 = (t5 + 12U);
    t30 = *((unsigned int *)t17);
    t19 = (t24 + 4U);
    t22 = *((int *)t19);
    t25 = (t24 + 8U);
    t26 = *((int *)t25);
    xsi_vhdl_check_range_of_slice(t11, t22, t26, t21, t30, -1);
    t47 = (t23 * 1U);
    t50 = (0 + t47);
    t31 = (t16 + t50);
    t32 = (t12 + 56U);
    t34 = *((char **)t32);
    t27 = *((int *)t34);
    t29 = (t27 - 1);
    t32 = (t5 + 12U);
    t55 = *((unsigned int *)t32);
    t35 = (t73 + 0U);
    t36 = (t35 + 0U);
    *((int *)t36) = t29;
    t36 = (t35 + 4U);
    *((unsigned int *)t36) = t55;
    t36 = (t35 + 8U);
    *((int *)t36) = -1;
    t45 = (t55 - t29);
    t72 = (t45 * -1);
    t72 = (t72 + 1);
    t36 = (t35 + 12U);
    *((unsigned int *)t36) = t72;
    t36 = (t12 + 56U);
    t38 = *((char **)t36);
    t46 = *((int *)t38);
    t51 = (t46 - 1);
    t36 = (t5 + 12U);
    t72 = *((unsigned int *)t36);
    t54 = (t72 - t51);
    t75 = (t54 * -1);
    t75 = (t75 + 1);
    t76 = (1U * t75);
    t39 = xsi_get_transient_memory(t76);
    memset(t39, 0, t76);
    t41 = t39;
    t42 = (t12 + 56U);
    t43 = *((char **)t42);
    t71 = *((int *)t43);
    t77 = (t71 - 1);
    t42 = (t12 + 56U);
    t44 = *((char **)t42);
    t78 = *((int *)t44);
    t79 = (t78 - 1);
    t42 = (t5 + 12U);
    t80 = *((unsigned int *)t42);
    if (-1 == -1)
        goto LAB14;

LAB15:    t81 = t80;

LAB16:    t82 = (t81 - t77);
    t83 = (t82 * -1);
    t84 = (1U * t83);
    t49 = (t41 + t84);
    t52 = (t12 + 56U);
    t56 = *((char **)t52);
    t85 = *((int *)t56);
    t86 = (t85 - 1);
    t52 = (t5 + 12U);
    t87 = *((unsigned int *)t52);
    t88 = (t87 - t86);
    t89 = (t88 * -1);
    t89 = (t89 + 1);
    t90 = (1U * t89);
    memset(t49, (unsigned char)0, t90);
    t57 = (t12 + 56U);
    t59 = *((char **)t57);
    t91 = *((int *)t59);
    t92 = (t91 - 1);
    t57 = (t5 + 12U);
    t93 = *((unsigned int *)t57);
    t60 = (t74 + 0U);
    t61 = (t60 + 0U);
    *((int *)t61) = t92;
    t61 = (t60 + 4U);
    *((unsigned int *)t61) = t93;
    t61 = (t60 + 8U);
    *((int *)t61) = -1;
    t94 = (t93 - t92);
    t95 = (t94 * -1);
    t95 = (t95 + 1);
    t61 = (t60 + 12U);
    *((unsigned int *)t61) = t95;
    t96 = ieee_p_3039841270_sub_4062508670_2334307252(t1, t31, t73, t39, t74);
    t64 = t96;
    goto LAB13;

LAB14:    t81 = t79;
    goto LAB16;

LAB17:    t61 = (t1 + 4675);
    xsi_report(t61, 38U, (unsigned char)1);
    goto LAB18;

LAB19:;
}

char *ieee_p_3039841270_sub_352481042_2334307252(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t6[488];
    char t7[24];
    char t15[8];
    char t24[16];
    char t48[16];
    char t73[16];
    char t74[16];
    char *t0;
    char *t8;
    unsigned int t9;
    int t10;
    int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    int t20;
    int t21;
    int t22;
    unsigned int t23;
    char *t25;
    int t26;
    int t27;
    char *t28;
    int t29;
    unsigned int t30;
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
    char *t42;
    char *t43;
    char *t44;
    int t45;
    int t46;
    unsigned int t47;
    char *t49;
    unsigned int t50;
    int t51;
    char *t52;
    char *t53;
    int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    unsigned char t63;
    char *t64;
    char *t65;
    char *t66;
    unsigned char t67;
    char *t68;
    char *t69;
    char *t70;
    int t71;
    unsigned int t72;
    unsigned int t75;
    unsigned int t76;
    int t77;
    unsigned int t78;
    int t79;
    int t80;
    int t81;
    int t82;
    unsigned int t83;
    int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned char t87;
    int t88;
    int t89;
    unsigned int t90;
    unsigned int t91;
    int t92;
    unsigned int t93;
    unsigned int t94;
    int t95;
    int t96;
    unsigned int t97;
    int t98;
    unsigned int t99;
    unsigned int t100;
    int t101;
    int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    int t106;
    unsigned int t107;
    unsigned char t108;
    char *t109;
    unsigned char t110;

LAB0:    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = ieee_p_3039841270_sub_3824177444_2334307252(t1, t5);
    t11 = ieee_p_3039841270_sub_3160373586_2334307252(t1, ((t9)), t10);
    t12 = (t6 + 4U);
    t13 = ((STD_STANDARD) + 832);
    t14 = (t12 + 88U);
    *((char **)t14) = t13;
    t16 = (t12 + 56U);
    *((char **)t16) = t15;
    *((int *)t15) = t11;
    t17 = (t12 + 80U);
    *((unsigned int *)t17) = 4U;
    t18 = (t12 + 56U);
    t19 = *((char **)t18);
    t20 = *((int *)t19);
    t21 = (t20 - 1);
    t22 = (0 - t21);
    t23 = (t22 * -1);
    t23 = (t23 + 1);
    t23 = (t23 * 1U);
    t18 = (t12 + 56U);
    t25 = *((char **)t18);
    t26 = *((int *)t25);
    t27 = (t26 - 1);
    t18 = (t24 + 0U);
    t28 = (t18 + 0U);
    *((int *)t28) = t27;
    t28 = (t18 + 4U);
    *((int *)t28) = 0;
    t28 = (t18 + 8U);
    *((int *)t28) = -1;
    t29 = (0 - t27);
    t30 = (t29 * -1);
    t30 = (t30 + 1);
    t28 = (t18 + 12U);
    *((unsigned int *)t28) = t30;
    t28 = (t6 + 124U);
    t31 = (t1 + 2992);
    t32 = (t28 + 88U);
    *((char **)t32) = t31;
    t33 = (char *)alloca(t23);
    t34 = (t28 + 56U);
    *((char **)t34) = t33;
    xsi_type_set_default_value(t31, t33, t24);
    t35 = (t28 + 64U);
    *((char **)t35) = t24;
    t36 = (t28 + 80U);
    *((unsigned int *)t36) = t23;
    t37 = (t6 + 244U);
    t38 = (t1 + 2992);
    t39 = (t37 + 88U);
    *((char **)t39) = t38;
    t40 = (char *)alloca(t23);
    t41 = (t37 + 56U);
    *((char **)t41) = t40;
    xsi_type_set_default_value(t38, t40, t24);
    t42 = (t37 + 64U);
    *((char **)t42) = t24;
    t43 = (t37 + 80U);
    *((unsigned int *)t43) = t23;
    t44 = (t4 + 12U);
    t30 = *((unsigned int *)t44);
    t45 = (t30 - 1);
    t46 = (0 - t45);
    t47 = (t46 * -1);
    t47 = (t47 + 1);
    t47 = (t47 * 1U);
    t49 = (t4 + 12U);
    t50 = *((unsigned int *)t49);
    t51 = (t50 - 1);
    t52 = (t48 + 0U);
    t53 = (t52 + 0U);
    *((int *)t53) = t51;
    t53 = (t52 + 4U);
    *((int *)t53) = 0;
    t53 = (t52 + 8U);
    *((int *)t53) = -1;
    t54 = (0 - t51);
    t55 = (t54 * -1);
    t55 = (t55 + 1);
    t53 = (t52 + 12U);
    *((unsigned int *)t53) = t55;
    t53 = (t6 + 364U);
    t56 = (t1 + 2992);
    t57 = (t53 + 88U);
    *((char **)t57) = t56;
    t58 = (char *)alloca(t47);
    t59 = (t53 + 56U);
    *((char **)t59) = t58;
    xsi_type_set_default_value(t56, t58, t48);
    t60 = (t53 + 64U);
    *((char **)t60) = t48;
    t61 = (t53 + 80U);
    *((unsigned int *)t61) = t47;
    t62 = (t7 + 4U);
    t63 = (t3 != 0);
    if (t63 == 1)
        goto LAB3;

LAB2:    t64 = (t7 + 12U);
    *((char **)t64) = t4;
    t65 = (t7 + 20U);
    *((int *)t65) = t5;
    t66 = (t4 + 12U);
    t55 = *((unsigned int *)t66);
    t67 = (t55 < 1);
    if (t67 != 0)
        goto LAB4;

LAB6:
LAB5:    t8 = (t12 + 56U);
    t13 = *((char **)t8);
    t10 = *((int *)t13);
    t8 = ieee_p_3039841270_sub_2780269832_2334307252(t1, t73, t5, t10);
    t14 = (t28 + 56U);
    t16 = *((char **)t14);
    t14 = (t16 + 0);
    t17 = (t73 + 12U);
    t9 = *((unsigned int *)t17);
    t9 = (t9 * 1U);
    memcpy(t14, t8, t9);
    t8 = (t28 + 56U);
    t13 = *((char **)t8);
    t8 = ieee_p_3039841270_sub_441870262_2334307252(t1, t74, t3, t4, t13, t24);
    t14 = (t24 + 12U);
    t9 = *((unsigned int *)t14);
    t16 = ieee_p_3039841270_sub_3322286019_2334307252(t1, t73, t8, t74, ((t9)));
    t17 = (t37 + 56U);
    t18 = *((char **)t17);
    t17 = (t18 + 0);
    t19 = (t73 + 12U);
    t23 = *((unsigned int *)t19);
    t23 = (t23 * 1U);
    memcpy(t17, t16, t23);
    t8 = (t12 + 56U);
    t13 = *((char **)t8);
    t10 = *((int *)t13);
    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t67 = (t10 > t9);
    if (t67 == 1)
        goto LAB11;

LAB12:    t63 = (unsigned char)0;

LAB13:    if (t63 != 0)
        goto LAB8;

LAB10:
LAB9:    t8 = (t37 + 56U);
    t13 = *((char **)t8);
    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t14 = ieee_p_3039841270_sub_3322286019_2334307252(t1, t73, t13, t24, ((t9)));
    t16 = (t73 + 12U);
    t23 = *((unsigned int *)t16);
    t23 = (t23 * 1U);
    t0 = xsi_get_transient_memory(t23);
    memcpy(t0, t14, t23);
    t17 = (t73 + 0U);
    t10 = *((int *)t17);
    t18 = (t73 + 4U);
    t11 = *((int *)t18);
    t19 = (t73 + 8U);
    t20 = *((int *)t19);
    t25 = (t2 + 0U);
    t31 = (t25 + 0U);
    *((int *)t31) = t10;
    t31 = (t25 + 4U);
    *((int *)t31) = t11;
    t31 = (t25 + 8U);
    *((int *)t31) = t20;
    t21 = (t11 - t10);
    t30 = (t21 * t20);
    t30 = (t30 + 1);
    t31 = (t25 + 12U);
    *((unsigned int *)t31) = t30;

LAB1:    return t0;
LAB3:    *((char **)t62) = t3;
    goto LAB2;

LAB4:    t68 = (t1 + 1288U);
    t69 = *((char **)t68);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t69, 0U);
    t68 = (t2 + 0U);
    t70 = (t68 + 0U);
    *((int *)t70) = 0;
    t70 = (t68 + 4U);
    *((int *)t70) = 1;
    t70 = (t68 + 8U);
    *((int *)t70) = -1;
    t71 = (1 - 0);
    t72 = (t71 * -1);
    t72 = (t72 + 1);
    t70 = (t68 + 12U);
    *((unsigned int *)t70) = t72;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:    t105 = (t1 + 1408U);
    t109 = *((char **)t105);
    t110 = *((unsigned char *)t109);
    if (t110 == 0)
        goto LAB17;

LAB18:    goto LAB9;

LAB11:    t14 = (t37 + 56U);
    t16 = *((char **)t14);
    t14 = (t24 + 0U);
    t11 = *((int *)t14);
    t17 = (t12 + 56U);
    t18 = *((char **)t17);
    t20 = *((int *)t18);
    t21 = (t20 - 1);
    t23 = (t11 - t21);
    t17 = (t4 + 12U);
    t30 = *((unsigned int *)t17);
    t19 = (t24 + 4U);
    t22 = *((int *)t19);
    t25 = (t24 + 8U);
    t26 = *((int *)t25);
    xsi_vhdl_check_range_of_slice(t11, t22, t26, t21, t30, -1);
    t47 = (t23 * 1U);
    t50 = (0 + t47);
    t31 = (t16 + t50);
    t32 = (t12 + 56U);
    t34 = *((char **)t32);
    t27 = *((int *)t34);
    t29 = (t27 - 1);
    t32 = (t4 + 12U);
    t55 = *((unsigned int *)t32);
    t35 = (t73 + 0U);
    t36 = (t35 + 0U);
    *((int *)t36) = t29;
    t36 = (t35 + 4U);
    *((unsigned int *)t36) = t55;
    t36 = (t35 + 8U);
    *((int *)t36) = -1;
    t45 = (t55 - t29);
    t72 = (t45 * -1);
    t72 = (t72 + 1);
    t36 = (t35 + 12U);
    *((unsigned int *)t36) = t72;
    t36 = (t12 + 56U);
    t38 = *((char **)t36);
    t46 = *((int *)t38);
    t51 = (t46 - 1);
    t36 = (t4 + 12U);
    t72 = *((unsigned int *)t36);
    t54 = (t72 - t51);
    t75 = (t54 * -1);
    t75 = (t75 + 1);
    t76 = (1U * t75);
    t39 = xsi_get_transient_memory(t76);
    memset(t39, 0, t76);
    t41 = t39;
    t42 = (t12 + 56U);
    t43 = *((char **)t42);
    t71 = *((int *)t43);
    t77 = (t71 - 1);
    t42 = (t37 + 56U);
    t44 = *((char **)t42);
    t42 = (t4 + 12U);
    t78 = *((unsigned int *)t42);
    t79 = (t78 - 1);
    t49 = (t24 + 0U);
    t80 = *((int *)t49);
    t52 = (t24 + 8U);
    t81 = *((int *)t52);
    t82 = (t79 - t80);
    t83 = (t82 * t81);
    t56 = (t24 + 4U);
    t84 = *((int *)t56);
    xsi_vhdl_check_range_of_index(t80, t84, t81, t79);
    t85 = (1U * t83);
    t86 = (0 + t85);
    t57 = (t44 + t86);
    t87 = *((unsigned char *)t57);
    t59 = (t12 + 56U);
    t60 = *((char **)t59);
    t88 = *((int *)t60);
    t89 = (t88 - 1);
    t59 = (t4 + 12U);
    t90 = *((unsigned int *)t59);
    if (-1 == -1)
        goto LAB14;

LAB15:    t91 = t90;

LAB16:    t92 = (t91 - t77);
    t93 = (t92 * -1);
    t94 = (1U * t93);
    t61 = (t41 + t94);
    t66 = (t12 + 56U);
    t68 = *((char **)t66);
    t95 = *((int *)t68);
    t96 = (t95 - 1);
    t66 = (t4 + 12U);
    t97 = *((unsigned int *)t66);
    t98 = (t97 - t96);
    t99 = (t98 * -1);
    t99 = (t99 + 1);
    t100 = (1U * t99);
    memset(t61, t87, t100);
    t69 = (t12 + 56U);
    t70 = *((char **)t69);
    t101 = *((int *)t70);
    t102 = (t101 - 1);
    t69 = (t4 + 12U);
    t103 = *((unsigned int *)t69);
    t104 = (t74 + 0U);
    t105 = (t104 + 0U);
    *((int *)t105) = t102;
    t105 = (t104 + 4U);
    *((unsigned int *)t105) = t103;
    t105 = (t104 + 8U);
    *((int *)t105) = -1;
    t106 = (t103 - t102);
    t107 = (t106 * -1);
    t107 = (t107 + 1);
    t105 = (t104 + 12U);
    *((unsigned int *)t105) = t107;
    t108 = ieee_p_3039841270_sub_3348550333_2334307252(t1, t31, t73, t39, t74);
    t63 = t108;
    goto LAB13;

LAB14:    t91 = t89;
    goto LAB16;

LAB17:    t105 = (t1 + 4713);
    xsi_report(t105, 38U, (unsigned char)1);
    goto LAB18;

LAB19:;
}

char *ieee_p_3039841270_sub_4007089365_2334307252(char *t1, char *t2, int t3, char *t4, char *t5)
{
    char t6[488];
    char t7[24];
    char t15[8];
    char t24[16];
    char t48[16];
    char t73[16];
    char t74[16];
    char *t0;
    int t8;
    char *t9;
    unsigned int t10;
    int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    int t20;
    int t21;
    int t22;
    unsigned int t23;
    char *t25;
    int t26;
    int t27;
    char *t28;
    int t29;
    unsigned int t30;
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
    char *t42;
    char *t43;
    char *t44;
    int t45;
    int t46;
    unsigned int t47;
    char *t49;
    unsigned int t50;
    int t51;
    char *t52;
    char *t53;
    int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    unsigned char t64;
    char *t65;
    char *t66;
    unsigned char t67;
    char *t68;
    char *t69;
    char *t70;
    int t71;
    unsigned int t72;
    unsigned int t75;
    unsigned int t76;
    int t77;
    unsigned int t78;
    int t79;
    int t80;
    int t81;
    int t82;
    unsigned int t83;
    int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned char t87;
    int t88;
    int t89;
    unsigned int t90;
    unsigned int t91;
    int t92;
    unsigned int t93;
    unsigned int t94;
    int t95;
    int t96;
    unsigned int t97;
    int t98;
    unsigned int t99;
    unsigned int t100;
    int t101;
    int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    int t106;
    unsigned int t107;
    unsigned char t108;
    char *t109;
    unsigned char t110;

LAB0:    t8 = ieee_p_3039841270_sub_3824177444_2334307252(t1, t3);
    t9 = (t5 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = ieee_p_3039841270_sub_3160373586_2334307252(t1, t8, ((t10)));
    t12 = (t6 + 4U);
    t13 = ((STD_STANDARD) + 832);
    t14 = (t12 + 88U);
    *((char **)t14) = t13;
    t16 = (t12 + 56U);
    *((char **)t16) = t15;
    *((int *)t15) = t11;
    t17 = (t12 + 80U);
    *((unsigned int *)t17) = 4U;
    t18 = (t12 + 56U);
    t19 = *((char **)t18);
    t20 = *((int *)t19);
    t21 = (t20 - 1);
    t22 = (0 - t21);
    t23 = (t22 * -1);
    t23 = (t23 + 1);
    t23 = (t23 * 1U);
    t18 = (t12 + 56U);
    t25 = *((char **)t18);
    t26 = *((int *)t25);
    t27 = (t26 - 1);
    t18 = (t24 + 0U);
    t28 = (t18 + 0U);
    *((int *)t28) = t27;
    t28 = (t18 + 4U);
    *((int *)t28) = 0;
    t28 = (t18 + 8U);
    *((int *)t28) = -1;
    t29 = (0 - t27);
    t30 = (t29 * -1);
    t30 = (t30 + 1);
    t28 = (t18 + 12U);
    *((unsigned int *)t28) = t30;
    t28 = (t6 + 124U);
    t31 = (t1 + 2992);
    t32 = (t28 + 88U);
    *((char **)t32) = t31;
    t33 = (char *)alloca(t23);
    t34 = (t28 + 56U);
    *((char **)t34) = t33;
    xsi_type_set_default_value(t31, t33, t24);
    t35 = (t28 + 64U);
    *((char **)t35) = t24;
    t36 = (t28 + 80U);
    *((unsigned int *)t36) = t23;
    t37 = (t6 + 244U);
    t38 = (t1 + 2992);
    t39 = (t37 + 88U);
    *((char **)t39) = t38;
    t40 = (char *)alloca(t23);
    t41 = (t37 + 56U);
    *((char **)t41) = t40;
    xsi_type_set_default_value(t38, t40, t24);
    t42 = (t37 + 64U);
    *((char **)t42) = t24;
    t43 = (t37 + 80U);
    *((unsigned int *)t43) = t23;
    t44 = (t5 + 12U);
    t30 = *((unsigned int *)t44);
    t45 = (t30 - 1);
    t46 = (0 - t45);
    t47 = (t46 * -1);
    t47 = (t47 + 1);
    t47 = (t47 * 1U);
    t49 = (t5 + 12U);
    t50 = *((unsigned int *)t49);
    t51 = (t50 - 1);
    t52 = (t48 + 0U);
    t53 = (t52 + 0U);
    *((int *)t53) = t51;
    t53 = (t52 + 4U);
    *((int *)t53) = 0;
    t53 = (t52 + 8U);
    *((int *)t53) = -1;
    t54 = (0 - t51);
    t55 = (t54 * -1);
    t55 = (t55 + 1);
    t53 = (t52 + 12U);
    *((unsigned int *)t53) = t55;
    t53 = (t6 + 364U);
    t56 = (t1 + 2992);
    t57 = (t53 + 88U);
    *((char **)t57) = t56;
    t58 = (char *)alloca(t47);
    t59 = (t53 + 56U);
    *((char **)t59) = t58;
    xsi_type_set_default_value(t56, t58, t48);
    t60 = (t53 + 64U);
    *((char **)t60) = t48;
    t61 = (t53 + 80U);
    *((unsigned int *)t61) = t47;
    t62 = (t7 + 4U);
    *((int *)t62) = t3;
    t63 = (t7 + 8U);
    t64 = (t4 != 0);
    if (t64 == 1)
        goto LAB3;

LAB2:    t65 = (t7 + 16U);
    *((char **)t65) = t5;
    t66 = (t5 + 12U);
    t55 = *((unsigned int *)t66);
    t67 = (t55 < 1);
    if (t67 != 0)
        goto LAB4;

LAB6:
LAB5:    t9 = (t12 + 56U);
    t13 = *((char **)t9);
    t8 = *((int *)t13);
    t9 = ieee_p_3039841270_sub_2780269832_2334307252(t1, t73, t3, t8);
    t14 = (t28 + 56U);
    t16 = *((char **)t14);
    t14 = (t16 + 0);
    t17 = (t73 + 12U);
    t10 = *((unsigned int *)t17);
    t10 = (t10 * 1U);
    memcpy(t14, t9, t10);
    t9 = (t28 + 56U);
    t13 = *((char **)t9);
    t9 = ieee_p_3039841270_sub_441870262_2334307252(t1, t74, t13, t24, t4, t5);
    t14 = (t24 + 12U);
    t10 = *((unsigned int *)t14);
    t16 = ieee_p_3039841270_sub_3322286019_2334307252(t1, t73, t9, t74, ((t10)));
    t17 = (t37 + 56U);
    t18 = *((char **)t17);
    t17 = (t18 + 0);
    t19 = (t73 + 12U);
    t23 = *((unsigned int *)t19);
    t23 = (t23 * 1U);
    memcpy(t17, t16, t23);
    t9 = (t12 + 56U);
    t13 = *((char **)t9);
    t8 = *((int *)t13);
    t9 = (t5 + 12U);
    t10 = *((unsigned int *)t9);
    t67 = (t8 > t10);
    if (t67 == 1)
        goto LAB11;

LAB12:    t64 = (unsigned char)0;

LAB13:    if (t64 != 0)
        goto LAB8;

LAB10:
LAB9:    t9 = (t37 + 56U);
    t13 = *((char **)t9);
    t9 = (t5 + 12U);
    t10 = *((unsigned int *)t9);
    t14 = ieee_p_3039841270_sub_3322286019_2334307252(t1, t73, t13, t24, ((t10)));
    t16 = (t73 + 12U);
    t23 = *((unsigned int *)t16);
    t23 = (t23 * 1U);
    t0 = xsi_get_transient_memory(t23);
    memcpy(t0, t14, t23);
    t17 = (t73 + 0U);
    t8 = *((int *)t17);
    t18 = (t73 + 4U);
    t11 = *((int *)t18);
    t19 = (t73 + 8U);
    t20 = *((int *)t19);
    t25 = (t2 + 0U);
    t31 = (t25 + 0U);
    *((int *)t31) = t8;
    t31 = (t25 + 4U);
    *((int *)t31) = t11;
    t31 = (t25 + 8U);
    *((int *)t31) = t20;
    t21 = (t11 - t8);
    t30 = (t21 * t20);
    t30 = (t30 + 1);
    t31 = (t25 + 12U);
    *((unsigned int *)t31) = t30;

LAB1:    return t0;
LAB3:    *((char **)t63) = t4;
    goto LAB2;

LAB4:    t68 = (t1 + 1288U);
    t69 = *((char **)t68);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t69, 0U);
    t68 = (t2 + 0U);
    t70 = (t68 + 0U);
    *((int *)t70) = 0;
    t70 = (t68 + 4U);
    *((int *)t70) = 1;
    t70 = (t68 + 8U);
    *((int *)t70) = -1;
    t71 = (1 - 0);
    t72 = (t71 * -1);
    t72 = (t72 + 1);
    t70 = (t68 + 12U);
    *((unsigned int *)t70) = t72;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:    t105 = (t1 + 1408U);
    t109 = *((char **)t105);
    t110 = *((unsigned char *)t109);
    if (t110 == 0)
        goto LAB17;

LAB18:    goto LAB9;

LAB11:    t14 = (t37 + 56U);
    t16 = *((char **)t14);
    t14 = (t24 + 0U);
    t11 = *((int *)t14);
    t17 = (t12 + 56U);
    t18 = *((char **)t17);
    t20 = *((int *)t18);
    t21 = (t20 - 1);
    t23 = (t11 - t21);
    t17 = (t5 + 12U);
    t30 = *((unsigned int *)t17);
    t19 = (t24 + 4U);
    t22 = *((int *)t19);
    t25 = (t24 + 8U);
    t26 = *((int *)t25);
    xsi_vhdl_check_range_of_slice(t11, t22, t26, t21, t30, -1);
    t47 = (t23 * 1U);
    t50 = (0 + t47);
    t31 = (t16 + t50);
    t32 = (t12 + 56U);
    t34 = *((char **)t32);
    t27 = *((int *)t34);
    t29 = (t27 - 1);
    t32 = (t5 + 12U);
    t55 = *((unsigned int *)t32);
    t35 = (t73 + 0U);
    t36 = (t35 + 0U);
    *((int *)t36) = t29;
    t36 = (t35 + 4U);
    *((unsigned int *)t36) = t55;
    t36 = (t35 + 8U);
    *((int *)t36) = -1;
    t45 = (t55 - t29);
    t72 = (t45 * -1);
    t72 = (t72 + 1);
    t36 = (t35 + 12U);
    *((unsigned int *)t36) = t72;
    t36 = (t12 + 56U);
    t38 = *((char **)t36);
    t46 = *((int *)t38);
    t51 = (t46 - 1);
    t36 = (t5 + 12U);
    t72 = *((unsigned int *)t36);
    t54 = (t72 - t51);
    t75 = (t54 * -1);
    t75 = (t75 + 1);
    t76 = (1U * t75);
    t39 = xsi_get_transient_memory(t76);
    memset(t39, 0, t76);
    t41 = t39;
    t42 = (t12 + 56U);
    t43 = *((char **)t42);
    t71 = *((int *)t43);
    t77 = (t71 - 1);
    t42 = (t37 + 56U);
    t44 = *((char **)t42);
    t42 = (t5 + 12U);
    t78 = *((unsigned int *)t42);
    t79 = (t78 - 1);
    t49 = (t24 + 0U);
    t80 = *((int *)t49);
    t52 = (t24 + 8U);
    t81 = *((int *)t52);
    t82 = (t79 - t80);
    t83 = (t82 * t81);
    t56 = (t24 + 4U);
    t84 = *((int *)t56);
    xsi_vhdl_check_range_of_index(t80, t84, t81, t79);
    t85 = (1U * t83);
    t86 = (0 + t85);
    t57 = (t44 + t86);
    t87 = *((unsigned char *)t57);
    t59 = (t12 + 56U);
    t60 = *((char **)t59);
    t88 = *((int *)t60);
    t89 = (t88 - 1);
    t59 = (t5 + 12U);
    t90 = *((unsigned int *)t59);
    if (-1 == -1)
        goto LAB14;

LAB15:    t91 = t90;

LAB16:    t92 = (t91 - t77);
    t93 = (t92 * -1);
    t94 = (1U * t93);
    t61 = (t41 + t94);
    t66 = (t12 + 56U);
    t68 = *((char **)t66);
    t95 = *((int *)t68);
    t96 = (t95 - 1);
    t66 = (t5 + 12U);
    t97 = *((unsigned int *)t66);
    t98 = (t97 - t96);
    t99 = (t98 * -1);
    t99 = (t99 + 1);
    t100 = (1U * t99);
    memset(t61, t87, t100);
    t69 = (t12 + 56U);
    t70 = *((char **)t69);
    t101 = *((int *)t70);
    t102 = (t101 - 1);
    t69 = (t5 + 12U);
    t103 = *((unsigned int *)t69);
    t104 = (t74 + 0U);
    t105 = (t104 + 0U);
    *((int *)t105) = t102;
    t105 = (t104 + 4U);
    *((unsigned int *)t105) = t103;
    t105 = (t104 + 8U);
    *((int *)t105) = -1;
    t106 = (t103 - t102);
    t107 = (t106 * -1);
    t107 = (t107 + 1);
    t105 = (t104 + 12U);
    *((unsigned int *)t105) = t107;
    t108 = ieee_p_3039841270_sub_3348550333_2334307252(t1, t31, t73, t39, t74);
    t64 = t108;
    goto LAB13;

LAB14:    t91 = t89;
    goto LAB16;

LAB17:    t105 = (t1 + 4751);
    xsi_report(t105, 38U, (unsigned char)1);
    goto LAB18;

LAB19:;
}

char *ieee_p_3039841270_sub_2619928380_2334307252(char *t1, char *t2, char *t3, char *t4, char *t5, char *t6)
{
    char t7[248];
    char t8[40];
    char t14[16];
    char t32[16];
    char *t0;
    char *t9;
    unsigned int t10;
    int t11;
    int t12;
    unsigned int t13;
    char *t15;
    unsigned int t16;
    int t17;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    int t29;
    int t30;
    unsigned int t31;
    char *t33;
    unsigned int t34;
    int t35;
    char *t36;
    char *t37;
    int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned char t47;
    char *t48;
    char *t49;
    unsigned char t50;
    char *t51;
    unsigned char t52;
    char *t53;
    unsigned char t54;
    char *t55;
    unsigned int t56;
    unsigned char t57;
    char *t58;
    char *t59;
    char *t60;
    int t61;
    unsigned int t62;

LAB0:    t9 = (t4 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = (t10 - 1);
    t12 = (0 - t11);
    t13 = (t12 * -1);
    t13 = (t13 + 1);
    t13 = (t13 * 1U);
    t15 = (t4 + 12U);
    t16 = *((unsigned int *)t15);
    t17 = (t16 - 1);
    t18 = (t14 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = t17;
    t19 = (t18 + 4U);
    *((int *)t19) = 0;
    t19 = (t18 + 8U);
    *((int *)t19) = -1;
    t20 = (0 - t17);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    t19 = (t7 + 4U);
    t22 = (t1 + 2880);
    t23 = (t19 + 88U);
    *((char **)t23) = t22;
    t24 = (char *)alloca(t13);
    t25 = (t19 + 56U);
    *((char **)t25) = t24;
    xsi_type_set_default_value(t22, t24, t14);
    t26 = (t19 + 64U);
    *((char **)t26) = t14;
    t27 = (t19 + 80U);
    *((unsigned int *)t27) = t13;
    t28 = (t6 + 12U);
    t21 = *((unsigned int *)t28);
    t29 = (t21 - 1);
    t30 = (0 - t29);
    t31 = (t30 * -1);
    t31 = (t31 + 1);
    t31 = (t31 * 1U);
    t33 = (t6 + 12U);
    t34 = *((unsigned int *)t33);
    t35 = (t34 - 1);
    t36 = (t32 + 0U);
    t37 = (t36 + 0U);
    *((int *)t37) = t35;
    t37 = (t36 + 4U);
    *((int *)t37) = 0;
    t37 = (t36 + 8U);
    *((int *)t37) = -1;
    t38 = (0 - t35);
    t39 = (t38 * -1);
    t39 = (t39 + 1);
    t37 = (t36 + 12U);
    *((unsigned int *)t37) = t39;
    t37 = (t7 + 124U);
    t40 = (t1 + 2880);
    t41 = (t37 + 88U);
    *((char **)t41) = t40;
    t42 = (char *)alloca(t31);
    t43 = (t37 + 56U);
    *((char **)t43) = t42;
    xsi_type_set_default_value(t40, t42, t32);
    t44 = (t37 + 64U);
    *((char **)t44) = t32;
    t45 = (t37 + 80U);
    *((unsigned int *)t45) = t31;
    t46 = (t8 + 4U);
    t47 = (t3 != 0);
    if (t47 == 1)
        goto LAB3;

LAB2:    t48 = (t8 + 12U);
    *((char **)t48) = t4;
    t49 = (t8 + 20U);
    t50 = (t5 != 0);
    if (t50 == 1)
        goto LAB5;

LAB4:    t51 = (t8 + 28U);
    *((char **)t51) = t6;
    t53 = (t4 + 12U);
    t39 = *((unsigned int *)t53);
    t54 = (t39 < 1);
    if (t54 == 1)
        goto LAB9;

LAB10:    t55 = (t6 + 12U);
    t56 = *((unsigned int *)t55);
    t57 = (t56 < 1);
    t52 = t57;

LAB11:    if (t52 != 0)
        goto LAB6;

LAB8:
LAB7:    t9 = (t4 + 12U);
    t10 = *((unsigned int *)t9);
    t10 = (t10 * 1U);
    t15 = (char *)alloca(t10);
    memcpy(t15, t3, t10);
    t18 = (t6 + 12U);
    t13 = *((unsigned int *)t18);
    t13 = (t13 * 1U);
    t22 = (char *)alloca(t13);
    memcpy(t22, t5, t13);
    t23 = (t19 + 56U);
    t25 = *((char **)t23);
    t23 = (t37 + 56U);
    t26 = *((char **)t23);
    ieee_p_3039841270_sub_3828635824_2334307252(t1, (char *)0, t15, t4, t22, t6, t25, t14, t26, t32);
    t9 = (t37 + 56U);
    t18 = *((char **)t9);
    t9 = (t32 + 12U);
    t10 = *((unsigned int *)t9);
    t10 = (t10 * 1U);
    t0 = xsi_get_transient_memory(t10);
    memcpy(t0, t18, t10);
    t23 = (t32 + 0U);
    t11 = *((int *)t23);
    t25 = (t32 + 4U);
    t12 = *((int *)t25);
    t26 = (t32 + 8U);
    t17 = *((int *)t26);
    t27 = (t2 + 0U);
    t28 = (t27 + 0U);
    *((int *)t28) = t11;
    t28 = (t27 + 4U);
    *((int *)t28) = t12;
    t28 = (t27 + 8U);
    *((int *)t28) = t17;
    t20 = (t12 - t11);
    t13 = (t20 * t17);
    t13 = (t13 + 1);
    t28 = (t27 + 12U);
    *((unsigned int *)t28) = t13;

LAB1:    return t0;
LAB3:    *((char **)t46) = t3;
    goto LAB2;

LAB5:    *((char **)t49) = t5;
    goto LAB4;

LAB6:    t58 = (t1 + 1168U);
    t59 = *((char **)t58);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t59, 0U);
    t58 = (t2 + 0U);
    t60 = (t58 + 0U);
    *((int *)t60) = 0;
    t60 = (t58 + 4U);
    *((int *)t60) = 1;
    t60 = (t58 + 8U);
    *((int *)t60) = -1;
    t61 = (1 - 0);
    t62 = (t61 * -1);
    t62 = (t62 + 1);
    t60 = (t58 + 12U);
    *((unsigned int *)t60) = t62;
    goto LAB1;

LAB9:    t52 = (unsigned char)1;
    goto LAB11;

LAB12:    goto LAB7;

LAB13:;
}

char *ieee_p_3039841270_sub_257729074_2334307252(char *t1, char *t2, char *t3, char *t4, char *t5, char *t6)
{
    char t7[608];
    char t8[40];
    char t14[16];
    char t32[16];
    char t50[16];
    char t68[16];
    char t85[8];
    char t105[16];
    char t106[16];
    char *t0;
    char *t9;
    unsigned int t10;
    int t11;
    int t12;
    unsigned int t13;
    char *t15;
    unsigned int t16;
    int t17;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    int t29;
    int t30;
    unsigned int t31;
    char *t33;
    unsigned int t34;
    int t35;
    char *t36;
    char *t37;
    int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    int t47;
    int t48;
    unsigned int t49;
    char *t51;
    unsigned int t52;
    int t53;
    char *t54;
    char *t55;
    int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    int t65;
    int t66;
    unsigned int t67;
    char *t69;
    unsigned int t70;
    int t71;
    char *t72;
    char *t73;
    int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t86;
    char *t87;
    char *t88;
    unsigned char t89;
    char *t90;
    char *t91;
    unsigned char t92;
    char *t93;
    unsigned char t94;
    char *t95;
    unsigned char t96;
    char *t97;
    unsigned int t98;
    unsigned char t99;
    char *t100;
    char *t101;
    char *t102;
    int t103;
    unsigned int t104;

LAB0:    t9 = (t4 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = (t10 - 1);
    t12 = (0 - t11);
    t13 = (t12 * -1);
    t13 = (t13 + 1);
    t13 = (t13 * 1U);
    t15 = (t4 + 12U);
    t16 = *((unsigned int *)t15);
    t17 = (t16 - 1);
    t18 = (t14 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = t17;
    t19 = (t18 + 4U);
    *((int *)t19) = 0;
    t19 = (t18 + 8U);
    *((int *)t19) = -1;
    t20 = (0 - t17);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    t19 = (t7 + 4U);
    t22 = (t1 + 2880);
    t23 = (t19 + 88U);
    *((char **)t23) = t22;
    t24 = (char *)alloca(t13);
    t25 = (t19 + 56U);
    *((char **)t25) = t24;
    xsi_type_set_default_value(t22, t24, t14);
    t26 = (t19 + 64U);
    *((char **)t26) = t14;
    t27 = (t19 + 80U);
    *((unsigned int *)t27) = t13;
    t28 = (t6 + 12U);
    t21 = *((unsigned int *)t28);
    t29 = (t21 - 1);
    t30 = (0 - t29);
    t31 = (t30 * -1);
    t31 = (t31 + 1);
    t31 = (t31 * 1U);
    t33 = (t6 + 12U);
    t34 = *((unsigned int *)t33);
    t35 = (t34 - 1);
    t36 = (t32 + 0U);
    t37 = (t36 + 0U);
    *((int *)t37) = t35;
    t37 = (t36 + 4U);
    *((int *)t37) = 0;
    t37 = (t36 + 8U);
    *((int *)t37) = -1;
    t38 = (0 - t35);
    t39 = (t38 * -1);
    t39 = (t39 + 1);
    t37 = (t36 + 12U);
    *((unsigned int *)t37) = t39;
    t37 = (t7 + 124U);
    t40 = (t1 + 2880);
    t41 = (t37 + 88U);
    *((char **)t41) = t40;
    t42 = (char *)alloca(t31);
    t43 = (t37 + 56U);
    *((char **)t43) = t42;
    xsi_type_set_default_value(t40, t42, t32);
    t44 = (t37 + 64U);
    *((char **)t44) = t32;
    t45 = (t37 + 80U);
    *((unsigned int *)t45) = t31;
    t46 = (t4 + 12U);
    t39 = *((unsigned int *)t46);
    t47 = (t39 - 1);
    t48 = (0 - t47);
    t49 = (t48 * -1);
    t49 = (t49 + 1);
    t49 = (t49 * 1U);
    t51 = (t4 + 12U);
    t52 = *((unsigned int *)t51);
    t53 = (t52 - 1);
    t54 = (t50 + 0U);
    t55 = (t54 + 0U);
    *((int *)t55) = t53;
    t55 = (t54 + 4U);
    *((int *)t55) = 0;
    t55 = (t54 + 8U);
    *((int *)t55) = -1;
    t56 = (0 - t53);
    t57 = (t56 * -1);
    t57 = (t57 + 1);
    t55 = (t54 + 12U);
    *((unsigned int *)t55) = t57;
    t55 = (t7 + 244U);
    t58 = (t1 + 2880);
    t59 = (t55 + 88U);
    *((char **)t59) = t58;
    t60 = (char *)alloca(t49);
    t61 = (t55 + 56U);
    *((char **)t61) = t60;
    xsi_type_set_default_value(t58, t60, t50);
    t62 = (t55 + 64U);
    *((char **)t62) = t50;
    t63 = (t55 + 80U);
    *((unsigned int *)t63) = t49;
    t64 = (t6 + 12U);
    t57 = *((unsigned int *)t64);
    t65 = (t57 - 1);
    t66 = (0 - t65);
    t67 = (t66 * -1);
    t67 = (t67 + 1);
    t67 = (t67 * 1U);
    t69 = (t6 + 12U);
    t70 = *((unsigned int *)t69);
    t71 = (t70 - 1);
    t72 = (t68 + 0U);
    t73 = (t72 + 0U);
    *((int *)t73) = t71;
    t73 = (t72 + 4U);
    *((int *)t73) = 0;
    t73 = (t72 + 8U);
    *((int *)t73) = -1;
    t74 = (0 - t71);
    t75 = (t74 * -1);
    t75 = (t75 + 1);
    t73 = (t72 + 12U);
    *((unsigned int *)t73) = t75;
    t73 = (t7 + 364U);
    t76 = (t1 + 2880);
    t77 = (t73 + 88U);
    *((char **)t77) = t76;
    t78 = (char *)alloca(t67);
    t79 = (t73 + 56U);
    *((char **)t79) = t78;
    xsi_type_set_default_value(t76, t78, t68);
    t80 = (t73 + 64U);
    *((char **)t80) = t68;
    t81 = (t73 + 80U);
    *((unsigned int *)t81) = t67;
    t82 = (t7 + 484U);
    t83 = ((STD_STANDARD) + 0);
    t84 = (t82 + 88U);
    *((char **)t84) = t83;
    t86 = (t82 + 56U);
    *((char **)t86) = t85;
    *((unsigned char *)t85) = (unsigned char)0;
    t87 = (t82 + 80U);
    *((unsigned int *)t87) = 1U;
    t88 = (t8 + 4U);
    t89 = (t3 != 0);
    if (t89 == 1)
        goto LAB3;

LAB2:    t90 = (t8 + 12U);
    *((char **)t90) = t4;
    t91 = (t8 + 20U);
    t92 = (t5 != 0);
    if (t92 == 1)
        goto LAB5;

LAB4:    t93 = (t8 + 28U);
    *((char **)t93) = t6;
    t95 = (t4 + 12U);
    t75 = *((unsigned int *)t95);
    t96 = (t75 < 1);
    if (t96 == 1)
        goto LAB9;

LAB10:    t97 = (t6 + 12U);
    t98 = *((unsigned int *)t97);
    t99 = (t98 < 1);
    t94 = t99;

LAB11:    if (t94 != 0)
        goto LAB6;

LAB8:
LAB7:    t9 = (t4 + 0U);
    t11 = *((int *)t9);
    t15 = (t4 + 0U);
    t12 = *((int *)t15);
    t18 = (t4 + 8U);
    t17 = *((int *)t18);
    t20 = (t11 - t12);
    t10 = (t20 * t17);
    t13 = (1U * t10);
    t16 = (0 + t13);
    t22 = (t3 + t16);
    t89 = *((unsigned char *)t22);
    t92 = (t89 == (unsigned char)1);
    if (t92 != 0)
        goto LAB13;

LAB15:    t9 = (t55 + 56U);
    t15 = *((char **)t9);
    t9 = (t15 + 0);
    t18 = (t4 + 12U);
    t10 = *((unsigned int *)t18);
    t10 = (t10 * 1U);
    memcpy(t9, t3, t10);

LAB14:    t9 = (t6 + 0U);
    t11 = *((int *)t9);
    t15 = (t6 + 0U);
    t12 = *((int *)t15);
    t18 = (t6 + 8U);
    t17 = *((int *)t18);
    t20 = (t11 - t12);
    t10 = (t20 * t17);
    t13 = (1U * t10);
    t16 = (0 + t13);
    t22 = (t5 + t16);
    t89 = *((unsigned char *)t22);
    t92 = (t89 == (unsigned char)1);
    if (t92 != 0)
        goto LAB16;

LAB18:    t9 = (t73 + 56U);
    t15 = *((char **)t9);
    t9 = (t15 + 0);
    t18 = (t6 + 12U);
    t10 = *((unsigned int *)t18);
    t10 = (t10 * 1U);
    memcpy(t9, t5, t10);

LAB17:    t9 = (t55 + 56U);
    t15 = *((char **)t9);
    t9 = (t50 + 12U);
    t10 = *((unsigned int *)t9);
    t10 = (t10 * 1U);
    t18 = (char *)alloca(t10);
    memcpy(t18, t15, t10);
    t22 = (t73 + 56U);
    t23 = *((char **)t22);
    t22 = (t68 + 12U);
    t13 = *((unsigned int *)t22);
    t13 = (t13 * 1U);
    t25 = (char *)alloca(t13);
    memcpy(t25, t23, t13);
    t26 = (t19 + 56U);
    t27 = *((char **)t26);
    t26 = (t37 + 56U);
    t28 = *((char **)t26);
    ieee_p_3039841270_sub_3828635824_2334307252(t1, (char *)0, t18, t50, t25, t68, t27, t14, t28, t32);
    t9 = (t82 + 56U);
    t15 = *((char **)t9);
    t92 = *((unsigned char *)t15);
    if (t92 == 1)
        goto LAB22;

LAB23:    t89 = (unsigned char)0;

LAB24:    if (t89 != 0)
        goto LAB19;

LAB21:    t9 = (t82 + 56U);
    t15 = *((char **)t9);
    t92 = *((unsigned char *)t15);
    if (t92 == 1)
        goto LAB27;

LAB28:    t89 = (unsigned char)0;

LAB29:    if (t89 != 0)
        goto LAB25;

LAB26:    t9 = (t4 + 0U);
    t11 = *((int *)t9);
    t15 = (t4 + 0U);
    t12 = *((int *)t15);
    t22 = (t4 + 8U);
    t17 = *((int *)t22);
    t20 = (t11 - t12);
    t10 = (t20 * t17);
    t13 = (1U * t10);
    t16 = (0 + t13);
    t23 = (t3 + t16);
    t92 = *((unsigned char *)t23);
    t94 = (t92 == (unsigned char)1);
    if (t94 == 1)
        goto LAB32;

LAB33:    t89 = (unsigned char)0;

LAB34:    if (t89 != 0)
        goto LAB30;

LAB31:
LAB20:    t9 = (t37 + 56U);
    t15 = *((char **)t9);
    t9 = (t32 + 12U);
    t10 = *((unsigned int *)t9);
    t10 = (t10 * 1U);
    t0 = xsi_get_transient_memory(t10);
    memcpy(t0, t15, t10);
    t22 = (t32 + 0U);
    t11 = *((int *)t22);
    t23 = (t32 + 4U);
    t12 = *((int *)t23);
    t26 = (t32 + 8U);
    t17 = *((int *)t26);
    t27 = (t2 + 0U);
    t28 = (t27 + 0U);
    *((int *)t28) = t11;
    t28 = (t27 + 4U);
    *((int *)t28) = t12;
    t28 = (t27 + 8U);
    *((int *)t28) = t17;
    t20 = (t12 - t11);
    t13 = (t20 * t17);
    t13 = (t13 + 1);
    t28 = (t27 + 12U);
    *((unsigned int *)t28) = t13;

LAB1:    return t0;
LAB3:    *((char **)t88) = t3;
    goto LAB2;

LAB5:    *((char **)t91) = t5;
    goto LAB4;

LAB6:    t100 = (t1 + 1288U);
    t101 = *((char **)t100);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t101, 0U);
    t100 = (t2 + 0U);
    t102 = (t100 + 0U);
    *((int *)t102) = 0;
    t102 = (t100 + 4U);
    *((int *)t102) = 1;
    t102 = (t100 + 8U);
    *((int *)t102) = -1;
    t103 = (1 - 0);
    t104 = (t103 * -1);
    t104 = (t104 + 1);
    t102 = (t100 + 12U);
    *((unsigned int *)t102) = t104;
    goto LAB1;

LAB9:    t94 = (unsigned char)1;
    goto LAB11;

LAB12:    goto LAB7;

LAB13:    t23 = ieee_p_3039841270_sub_3118404406_2334307252(t1, t105, t3, t4);
    t25 = (t55 + 56U);
    t26 = *((char **)t25);
    t25 = (t26 + 0);
    t27 = (t105 + 12U);
    t21 = *((unsigned int *)t27);
    t31 = (1U * t21);
    memcpy(t25, t23, t31);
    goto LAB14;

LAB16:    t23 = ieee_p_3039841270_sub_3118404406_2334307252(t1, t105, t5, t6);
    t25 = (t73 + 56U);
    t26 = *((char **)t25);
    t25 = (t26 + 0);
    t27 = (t105 + 12U);
    t21 = *((unsigned int *)t27);
    t31 = (1U * t21);
    memcpy(t25, t23, t31);
    t9 = (t82 + 56U);
    t15 = *((char **)t9);
    t9 = (t15 + 0);
    *((unsigned char *)t9) = (unsigned char)1;
    goto LAB17;

LAB19:    t27 = (t1 + 4789);
    t33 = (t106 + 0U);
    t36 = (t33 + 0U);
    *((int *)t36) = 0;
    t36 = (t33 + 4U);
    *((int *)t36) = 0;
    t36 = (t33 + 8U);
    *((int *)t36) = 1;
    t29 = (0 - 0);
    t21 = (t29 * 1);
    t21 = (t21 + 1);
    t36 = (t33 + 12U);
    *((unsigned int *)t36) = t21;
    t36 = (t37 + 56U);
    t40 = *((char **)t36);
    t36 = ieee_p_3039841270_sub_1717229644_2334307252(t1, t105, t27, t106, t40, t32);
    t41 = (t37 + 56U);
    t43 = *((char **)t41);
    t41 = (t43 + 0);
    t44 = (t105 + 12U);
    t21 = *((unsigned int *)t44);
    t31 = (1U * t21);
    memcpy(t41, t36, t31);
    goto LAB20;

LAB22:    t9 = (t4 + 0U);
    t11 = *((int *)t9);
    t22 = (t4 + 0U);
    t12 = *((int *)t22);
    t23 = (t4 + 8U);
    t17 = *((int *)t23);
    t20 = (t11 - t12);
    t10 = (t20 * t17);
    t13 = (1U * t10);
    t16 = (0 + t13);
    t26 = (t3 + t16);
    t94 = *((unsigned char *)t26);
    t96 = (t94 == (unsigned char)1);
    t89 = t96;
    goto LAB24;

LAB25:    t27 = (t37 + 56U);
    t28 = *((char **)t27);
    t27 = (t73 + 56U);
    t33 = *((char **)t27);
    t27 = ieee_p_3039841270_sub_1717229644_2334307252(t1, t106, t28, t32, t33, t68);
    t36 = (t37 + 56U);
    t40 = *((char **)t36);
    t36 = (t40 + 0);
    t41 = (t106 + 12U);
    t10 = *((unsigned int *)t41);
    t13 = (1U * t10);
    memcpy(t36, t27, t13);
    goto LAB20;

LAB27:    t9 = (t37 + 56U);
    t22 = *((char **)t9);
    t9 = (t1 + 4790);
    t26 = (t105 + 0U);
    t27 = (t26 + 0U);
    *((int *)t27) = 0;
    t27 = (t26 + 4U);
    *((int *)t27) = 0;
    t27 = (t26 + 8U);
    *((int *)t27) = 1;
    t11 = (0 - 0);
    t10 = (t11 * 1);
    t10 = (t10 + 1);
    t27 = (t26 + 12U);
    *((unsigned int *)t27) = t10;
    t94 = ieee_p_3039841270_sub_4062508670_2334307252(t1, t22, t32, t9, t105);
    t89 = t94;
    goto LAB29;

LAB30:    t36 = (t73 + 56U);
    t40 = *((char **)t36);
    t36 = (t37 + 56U);
    t41 = *((char **)t36);
    t36 = ieee_p_3039841270_sub_1717229644_2334307252(t1, t106, t40, t68, t41, t32);
    t43 = (t37 + 56U);
    t44 = *((char **)t43);
    t43 = (t44 + 0);
    t45 = (t106 + 12U);
    t21 = *((unsigned int *)t45);
    t31 = (1U * t21);
    memcpy(t43, t36, t31);
    goto LAB20;

LAB32:    t26 = (t37 + 56U);
    t27 = *((char **)t26);
    t26 = (t1 + 4791);
    t33 = (t105 + 0U);
    t36 = (t33 + 0U);
    *((int *)t36) = 0;
    t36 = (t33 + 4U);
    *((int *)t36) = 0;
    t36 = (t33 + 8U);
    *((int *)t36) = 1;
    t29 = (0 - 0);
    t21 = (t29 * 1);
    t21 = (t21 + 1);
    t36 = (t33 + 12U);
    *((unsigned int *)t36) = t21;
    t96 = ieee_p_3039841270_sub_4062508670_2334307252(t1, t27, t32, t26, t105);
    t89 = t96;
    goto LAB34;

LAB35:;
}

char *ieee_p_3039841270_sub_2888582136_2334307252(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t6[488];
    char t7[24];
    char t15[8];
    char t24[16];
    char t48[16];
    char t73[16];
    char t74[16];
    char *t0;
    char *t8;
    unsigned int t9;
    int t10;
    int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    int t20;
    int t21;
    int t22;
    unsigned int t23;
    char *t25;
    int t26;
    int t27;
    char *t28;
    int t29;
    unsigned int t30;
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
    char *t42;
    char *t43;
    char *t44;
    int t45;
    int t46;
    unsigned int t47;
    char *t49;
    unsigned int t50;
    int t51;
    char *t52;
    char *t53;
    int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    unsigned char t63;
    char *t64;
    char *t65;
    char *t66;
    unsigned char t67;
    char *t68;
    char *t69;
    char *t70;
    int t71;
    unsigned int t72;
    unsigned int t75;
    unsigned int t76;
    int t77;
    int t78;
    int t79;
    unsigned int t80;
    unsigned int t81;
    int t82;
    unsigned int t83;
    unsigned int t84;
    int t85;
    int t86;
    unsigned int t87;
    int t88;
    unsigned int t89;
    unsigned int t90;
    int t91;
    int t92;
    unsigned int t93;
    int t94;
    unsigned int t95;
    unsigned char t96;
    unsigned char t97;

LAB0:    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = ieee_p_3039841270_sub_3295552210_2334307252(t1, t5);
    t11 = ieee_p_3039841270_sub_3160373586_2334307252(t1, ((t9)), t10);
    t12 = (t6 + 4U);
    t13 = ((STD_STANDARD) + 832);
    t14 = (t12 + 88U);
    *((char **)t14) = t13;
    t16 = (t12 + 56U);
    *((char **)t16) = t15;
    *((int *)t15) = t11;
    t17 = (t12 + 80U);
    *((unsigned int *)t17) = 4U;
    t18 = (t12 + 56U);
    t19 = *((char **)t18);
    t20 = *((int *)t19);
    t21 = (t20 - 1);
    t22 = (0 - t21);
    t23 = (t22 * -1);
    t23 = (t23 + 1);
    t23 = (t23 * 1U);
    t18 = (t12 + 56U);
    t25 = *((char **)t18);
    t26 = *((int *)t25);
    t27 = (t26 - 1);
    t18 = (t24 + 0U);
    t28 = (t18 + 0U);
    *((int *)t28) = t27;
    t28 = (t18 + 4U);
    *((int *)t28) = 0;
    t28 = (t18 + 8U);
    *((int *)t28) = -1;
    t29 = (0 - t27);
    t30 = (t29 * -1);
    t30 = (t30 + 1);
    t28 = (t18 + 12U);
    *((unsigned int *)t28) = t30;
    t28 = (t6 + 124U);
    t31 = (t1 + 2880);
    t32 = (t28 + 88U);
    *((char **)t32) = t31;
    t33 = (char *)alloca(t23);
    t34 = (t28 + 56U);
    *((char **)t34) = t33;
    xsi_type_set_default_value(t31, t33, t24);
    t35 = (t28 + 64U);
    *((char **)t35) = t24;
    t36 = (t28 + 80U);
    *((unsigned int *)t36) = t23;
    t37 = (t6 + 244U);
    t38 = (t1 + 2880);
    t39 = (t37 + 88U);
    *((char **)t39) = t38;
    t40 = (char *)alloca(t23);
    t41 = (t37 + 56U);
    *((char **)t41) = t40;
    xsi_type_set_default_value(t38, t40, t24);
    t42 = (t37 + 64U);
    *((char **)t42) = t24;
    t43 = (t37 + 80U);
    *((unsigned int *)t43) = t23;
    t44 = (t4 + 12U);
    t30 = *((unsigned int *)t44);
    t45 = (t30 - 1);
    t46 = (0 - t45);
    t47 = (t46 * -1);
    t47 = (t47 + 1);
    t47 = (t47 * 1U);
    t49 = (t4 + 12U);
    t50 = *((unsigned int *)t49);
    t51 = (t50 - 1);
    t52 = (t48 + 0U);
    t53 = (t52 + 0U);
    *((int *)t53) = t51;
    t53 = (t52 + 4U);
    *((int *)t53) = 0;
    t53 = (t52 + 8U);
    *((int *)t53) = -1;
    t54 = (0 - t51);
    t55 = (t54 * -1);
    t55 = (t55 + 1);
    t53 = (t52 + 12U);
    *((unsigned int *)t53) = t55;
    t53 = (t6 + 364U);
    t56 = (t1 + 2880);
    t57 = (t53 + 88U);
    *((char **)t57) = t56;
    t58 = (char *)alloca(t47);
    t59 = (t53 + 56U);
    *((char **)t59) = t58;
    xsi_type_set_default_value(t56, t58, t48);
    t60 = (t53 + 64U);
    *((char **)t60) = t48;
    t61 = (t53 + 80U);
    *((unsigned int *)t61) = t47;
    t62 = (t7 + 4U);
    t63 = (t3 != 0);
    if (t63 == 1)
        goto LAB3;

LAB2:    t64 = (t7 + 12U);
    *((char **)t64) = t4;
    t65 = (t7 + 20U);
    *((int *)t65) = t5;
    t66 = (t4 + 12U);
    t55 = *((unsigned int *)t66);
    t67 = (t55 < 1);
    if (t67 != 0)
        goto LAB4;

LAB6:
LAB5:    t8 = (t12 + 56U);
    t13 = *((char **)t8);
    t10 = *((int *)t13);
    t8 = ieee_p_3039841270_sub_180853171_2334307252(t1, t73, t5, t10);
    t14 = (t28 + 56U);
    t16 = *((char **)t14);
    t14 = (t16 + 0);
    t17 = (t73 + 12U);
    t9 = *((unsigned int *)t17);
    t9 = (t9 * 1U);
    memcpy(t14, t8, t9);
    t8 = (t28 + 56U);
    t13 = *((char **)t8);
    t8 = ieee_p_3039841270_sub_2619928380_2334307252(t1, t74, t3, t4, t13, t24);
    t14 = (t24 + 12U);
    t9 = *((unsigned int *)t14);
    t16 = ieee_p_3039841270_sub_2675122452_2334307252(t1, t73, t8, t74, ((t9)));
    t17 = (t37 + 56U);
    t18 = *((char **)t17);
    t17 = (t18 + 0);
    t19 = (t73 + 12U);
    t23 = *((unsigned int *)t19);
    t23 = (t23 * 1U);
    memcpy(t17, t16, t23);
    t8 = (t12 + 56U);
    t13 = *((char **)t8);
    t10 = *((int *)t13);
    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t67 = (t10 > t9);
    if (t67 == 1)
        goto LAB11;

LAB12:    t63 = (unsigned char)0;

LAB13:    if (t63 != 0)
        goto LAB8;

LAB10:
LAB9:    t8 = (t37 + 56U);
    t13 = *((char **)t8);
    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t14 = ieee_p_3039841270_sub_2675122452_2334307252(t1, t73, t13, t24, ((t9)));
    t16 = (t73 + 12U);
    t23 = *((unsigned int *)t16);
    t23 = (t23 * 1U);
    t0 = xsi_get_transient_memory(t23);
    memcpy(t0, t14, t23);
    t17 = (t73 + 0U);
    t10 = *((int *)t17);
    t18 = (t73 + 4U);
    t11 = *((int *)t18);
    t19 = (t73 + 8U);
    t20 = *((int *)t19);
    t25 = (t2 + 0U);
    t31 = (t25 + 0U);
    *((int *)t31) = t10;
    t31 = (t25 + 4U);
    *((int *)t31) = t11;
    t31 = (t25 + 8U);
    *((int *)t31) = t20;
    t21 = (t11 - t10);
    t30 = (t21 * t20);
    t30 = (t30 + 1);
    t31 = (t25 + 12U);
    *((unsigned int *)t31) = t30;

LAB1:    return t0;
LAB3:    *((char **)t62) = t3;
    goto LAB2;

LAB4:    t68 = (t1 + 1168U);
    t69 = *((char **)t68);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t69, 0U);
    t68 = (t2 + 0U);
    t70 = (t68 + 0U);
    *((int *)t70) = 0;
    t70 = (t68 + 4U);
    *((int *)t70) = 1;
    t70 = (t68 + 8U);
    *((int *)t70) = -1;
    t71 = (1 - 0);
    t72 = (t71 * -1);
    t72 = (t72 + 1);
    t70 = (t68 + 12U);
    *((unsigned int *)t70) = t72;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:    t61 = (t1 + 1408U);
    t66 = *((char **)t61);
    t97 = *((unsigned char *)t66);
    if (t97 == 0)
        goto LAB17;

LAB18:    goto LAB9;

LAB11:    t14 = (t37 + 56U);
    t16 = *((char **)t14);
    t14 = (t24 + 0U);
    t11 = *((int *)t14);
    t17 = (t12 + 56U);
    t18 = *((char **)t17);
    t20 = *((int *)t18);
    t21 = (t20 - 1);
    t23 = (t11 - t21);
    t17 = (t4 + 12U);
    t30 = *((unsigned int *)t17);
    t19 = (t24 + 4U);
    t22 = *((int *)t19);
    t25 = (t24 + 8U);
    t26 = *((int *)t25);
    xsi_vhdl_check_range_of_slice(t11, t22, t26, t21, t30, -1);
    t47 = (t23 * 1U);
    t50 = (0 + t47);
    t31 = (t16 + t50);
    t32 = (t12 + 56U);
    t34 = *((char **)t32);
    t27 = *((int *)t34);
    t29 = (t27 - 1);
    t32 = (t4 + 12U);
    t55 = *((unsigned int *)t32);
    t35 = (t73 + 0U);
    t36 = (t35 + 0U);
    *((int *)t36) = t29;
    t36 = (t35 + 4U);
    *((unsigned int *)t36) = t55;
    t36 = (t35 + 8U);
    *((int *)t36) = -1;
    t45 = (t55 - t29);
    t72 = (t45 * -1);
    t72 = (t72 + 1);
    t36 = (t35 + 12U);
    *((unsigned int *)t36) = t72;
    t36 = (t12 + 56U);
    t38 = *((char **)t36);
    t46 = *((int *)t38);
    t51 = (t46 - 1);
    t36 = (t4 + 12U);
    t72 = *((unsigned int *)t36);
    t54 = (t72 - t51);
    t75 = (t54 * -1);
    t75 = (t75 + 1);
    t76 = (1U * t75);
    t39 = xsi_get_transient_memory(t76);
    memset(t39, 0, t76);
    t41 = t39;
    t42 = (t12 + 56U);
    t43 = *((char **)t42);
    t71 = *((int *)t43);
    t77 = (t71 - 1);
    t42 = (t12 + 56U);
    t44 = *((char **)t42);
    t78 = *((int *)t44);
    t79 = (t78 - 1);
    t42 = (t4 + 12U);
    t80 = *((unsigned int *)t42);
    if (-1 == -1)
        goto LAB14;

LAB15:    t81 = t80;

LAB16:    t82 = (t81 - t77);
    t83 = (t82 * -1);
    t84 = (1U * t83);
    t49 = (t41 + t84);
    t52 = (t12 + 56U);
    t56 = *((char **)t52);
    t85 = *((int *)t56);
    t86 = (t85 - 1);
    t52 = (t4 + 12U);
    t87 = *((unsigned int *)t52);
    t88 = (t87 - t86);
    t89 = (t88 * -1);
    t89 = (t89 + 1);
    t90 = (1U * t89);
    memset(t49, (unsigned char)0, t90);
    t57 = (t12 + 56U);
    t59 = *((char **)t57);
    t91 = *((int *)t59);
    t92 = (t91 - 1);
    t57 = (t4 + 12U);
    t93 = *((unsigned int *)t57);
    t60 = (t74 + 0U);
    t61 = (t60 + 0U);
    *((int *)t61) = t92;
    t61 = (t60 + 4U);
    *((unsigned int *)t61) = t93;
    t61 = (t60 + 8U);
    *((int *)t61) = -1;
    t94 = (t93 - t92);
    t95 = (t94 * -1);
    t95 = (t95 + 1);
    t61 = (t60 + 12U);
    *((unsigned int *)t61) = t95;
    t96 = ieee_p_3039841270_sub_4062508670_2334307252(t1, t31, t73, t39, t74);
    t63 = t96;
    goto LAB13;

LAB14:    t81 = t79;
    goto LAB16;

LAB17:    t61 = (t1 + 4792);
    xsi_report(t61, 36U, (unsigned char)1);
    goto LAB18;

LAB19:;
}

char *ieee_p_3039841270_sub_2447294803_2334307252(char *t1, char *t2, int t3, char *t4, char *t5)
{
    char t6[488];
    char t7[24];
    char t15[8];
    char t24[16];
    char t48[16];
    char t73[16];
    char t74[16];
    char *t0;
    int t8;
    char *t9;
    unsigned int t10;
    int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    int t20;
    int t21;
    int t22;
    unsigned int t23;
    char *t25;
    int t26;
    int t27;
    char *t28;
    int t29;
    unsigned int t30;
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
    char *t42;
    char *t43;
    char *t44;
    int t45;
    int t46;
    unsigned int t47;
    char *t49;
    unsigned int t50;
    int t51;
    char *t52;
    char *t53;
    int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    unsigned char t64;
    char *t65;
    char *t66;
    unsigned char t67;
    char *t68;
    char *t69;
    char *t70;
    int t71;
    unsigned int t72;
    unsigned int t75;
    unsigned int t76;
    int t77;
    int t78;
    int t79;
    unsigned int t80;
    unsigned int t81;
    int t82;
    unsigned int t83;
    unsigned int t84;
    int t85;
    int t86;
    unsigned int t87;
    int t88;
    unsigned int t89;
    unsigned int t90;
    int t91;
    int t92;
    unsigned int t93;
    int t94;
    unsigned int t95;
    unsigned char t96;
    unsigned char t97;

LAB0:    t8 = ieee_p_3039841270_sub_3295552210_2334307252(t1, t3);
    t9 = (t5 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = ieee_p_3039841270_sub_3160373586_2334307252(t1, t8, ((t10)));
    t12 = (t6 + 4U);
    t13 = ((STD_STANDARD) + 832);
    t14 = (t12 + 88U);
    *((char **)t14) = t13;
    t16 = (t12 + 56U);
    *((char **)t16) = t15;
    *((int *)t15) = t11;
    t17 = (t12 + 80U);
    *((unsigned int *)t17) = 4U;
    t18 = (t12 + 56U);
    t19 = *((char **)t18);
    t20 = *((int *)t19);
    t21 = (t20 - 1);
    t22 = (0 - t21);
    t23 = (t22 * -1);
    t23 = (t23 + 1);
    t23 = (t23 * 1U);
    t18 = (t12 + 56U);
    t25 = *((char **)t18);
    t26 = *((int *)t25);
    t27 = (t26 - 1);
    t18 = (t24 + 0U);
    t28 = (t18 + 0U);
    *((int *)t28) = t27;
    t28 = (t18 + 4U);
    *((int *)t28) = 0;
    t28 = (t18 + 8U);
    *((int *)t28) = -1;
    t29 = (0 - t27);
    t30 = (t29 * -1);
    t30 = (t30 + 1);
    t28 = (t18 + 12U);
    *((unsigned int *)t28) = t30;
    t28 = (t6 + 124U);
    t31 = (t1 + 2880);
    t32 = (t28 + 88U);
    *((char **)t32) = t31;
    t33 = (char *)alloca(t23);
    t34 = (t28 + 56U);
    *((char **)t34) = t33;
    xsi_type_set_default_value(t31, t33, t24);
    t35 = (t28 + 64U);
    *((char **)t35) = t24;
    t36 = (t28 + 80U);
    *((unsigned int *)t36) = t23;
    t37 = (t6 + 244U);
    t38 = (t1 + 2880);
    t39 = (t37 + 88U);
    *((char **)t39) = t38;
    t40 = (char *)alloca(t23);
    t41 = (t37 + 56U);
    *((char **)t41) = t40;
    xsi_type_set_default_value(t38, t40, t24);
    t42 = (t37 + 64U);
    *((char **)t42) = t24;
    t43 = (t37 + 80U);
    *((unsigned int *)t43) = t23;
    t44 = (t5 + 12U);
    t30 = *((unsigned int *)t44);
    t45 = (t30 - 1);
    t46 = (0 - t45);
    t47 = (t46 * -1);
    t47 = (t47 + 1);
    t47 = (t47 * 1U);
    t49 = (t5 + 12U);
    t50 = *((unsigned int *)t49);
    t51 = (t50 - 1);
    t52 = (t48 + 0U);
    t53 = (t52 + 0U);
    *((int *)t53) = t51;
    t53 = (t52 + 4U);
    *((int *)t53) = 0;
    t53 = (t52 + 8U);
    *((int *)t53) = -1;
    t54 = (0 - t51);
    t55 = (t54 * -1);
    t55 = (t55 + 1);
    t53 = (t52 + 12U);
    *((unsigned int *)t53) = t55;
    t53 = (t6 + 364U);
    t56 = (t1 + 2880);
    t57 = (t53 + 88U);
    *((char **)t57) = t56;
    t58 = (char *)alloca(t47);
    t59 = (t53 + 56U);
    *((char **)t59) = t58;
    xsi_type_set_default_value(t56, t58, t48);
    t60 = (t53 + 64U);
    *((char **)t60) = t48;
    t61 = (t53 + 80U);
    *((unsigned int *)t61) = t47;
    t62 = (t7 + 4U);
    *((int *)t62) = t3;
    t63 = (t7 + 8U);
    t64 = (t4 != 0);
    if (t64 == 1)
        goto LAB3;

LAB2:    t65 = (t7 + 16U);
    *((char **)t65) = t5;
    t66 = (t5 + 12U);
    t55 = *((unsigned int *)t66);
    t67 = (t55 < 1);
    if (t67 != 0)
        goto LAB4;

LAB6:
LAB5:    t9 = (t12 + 56U);
    t13 = *((char **)t9);
    t8 = *((int *)t13);
    t9 = ieee_p_3039841270_sub_180853171_2334307252(t1, t73, t3, t8);
    t14 = (t28 + 56U);
    t16 = *((char **)t14);
    t14 = (t16 + 0);
    t17 = (t73 + 12U);
    t10 = *((unsigned int *)t17);
    t10 = (t10 * 1U);
    memcpy(t14, t9, t10);
    t9 = (t28 + 56U);
    t13 = *((char **)t9);
    t9 = ieee_p_3039841270_sub_2619928380_2334307252(t1, t74, t13, t24, t4, t5);
    t14 = (t24 + 12U);
    t10 = *((unsigned int *)t14);
    t16 = ieee_p_3039841270_sub_2675122452_2334307252(t1, t73, t9, t74, ((t10)));
    t17 = (t37 + 56U);
    t18 = *((char **)t17);
    t17 = (t18 + 0);
    t19 = (t73 + 12U);
    t23 = *((unsigned int *)t19);
    t23 = (t23 * 1U);
    memcpy(t17, t16, t23);
    t9 = (t12 + 56U);
    t13 = *((char **)t9);
    t8 = *((int *)t13);
    t9 = (t5 + 12U);
    t10 = *((unsigned int *)t9);
    t67 = (t8 > t10);
    if (t67 == 1)
        goto LAB11;

LAB12:    t64 = (unsigned char)0;

LAB13:    if (t64 != 0)
        goto LAB8;

LAB10:
LAB9:    t9 = (t37 + 56U);
    t13 = *((char **)t9);
    t9 = (t5 + 12U);
    t10 = *((unsigned int *)t9);
    t14 = ieee_p_3039841270_sub_2675122452_2334307252(t1, t73, t13, t24, ((t10)));
    t16 = (t73 + 12U);
    t23 = *((unsigned int *)t16);
    t23 = (t23 * 1U);
    t0 = xsi_get_transient_memory(t23);
    memcpy(t0, t14, t23);
    t17 = (t73 + 0U);
    t8 = *((int *)t17);
    t18 = (t73 + 4U);
    t11 = *((int *)t18);
    t19 = (t73 + 8U);
    t20 = *((int *)t19);
    t25 = (t2 + 0U);
    t31 = (t25 + 0U);
    *((int *)t31) = t8;
    t31 = (t25 + 4U);
    *((int *)t31) = t11;
    t31 = (t25 + 8U);
    *((int *)t31) = t20;
    t21 = (t11 - t8);
    t30 = (t21 * t20);
    t30 = (t30 + 1);
    t31 = (t25 + 12U);
    *((unsigned int *)t31) = t30;

LAB1:    return t0;
LAB3:    *((char **)t63) = t4;
    goto LAB2;

LAB4:    t68 = (t1 + 1168U);
    t69 = *((char **)t68);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t69, 0U);
    t68 = (t2 + 0U);
    t70 = (t68 + 0U);
    *((int *)t70) = 0;
    t70 = (t68 + 4U);
    *((int *)t70) = 1;
    t70 = (t68 + 8U);
    *((int *)t70) = -1;
    t71 = (1 - 0);
    t72 = (t71 * -1);
    t72 = (t72 + 1);
    t70 = (t68 + 12U);
    *((unsigned int *)t70) = t72;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:    t61 = (t1 + 1408U);
    t66 = *((char **)t61);
    t97 = *((unsigned char *)t66);
    if (t97 == 0)
        goto LAB17;

LAB18:    goto LAB9;

LAB11:    t14 = (t37 + 56U);
    t16 = *((char **)t14);
    t14 = (t24 + 0U);
    t11 = *((int *)t14);
    t17 = (t12 + 56U);
    t18 = *((char **)t17);
    t20 = *((int *)t18);
    t21 = (t20 - 1);
    t23 = (t11 - t21);
    t17 = (t5 + 12U);
    t30 = *((unsigned int *)t17);
    t19 = (t24 + 4U);
    t22 = *((int *)t19);
    t25 = (t24 + 8U);
    t26 = *((int *)t25);
    xsi_vhdl_check_range_of_slice(t11, t22, t26, t21, t30, -1);
    t47 = (t23 * 1U);
    t50 = (0 + t47);
    t31 = (t16 + t50);
    t32 = (t12 + 56U);
    t34 = *((char **)t32);
    t27 = *((int *)t34);
    t29 = (t27 - 1);
    t32 = (t5 + 12U);
    t55 = *((unsigned int *)t32);
    t35 = (t73 + 0U);
    t36 = (t35 + 0U);
    *((int *)t36) = t29;
    t36 = (t35 + 4U);
    *((unsigned int *)t36) = t55;
    t36 = (t35 + 8U);
    *((int *)t36) = -1;
    t45 = (t55 - t29);
    t72 = (t45 * -1);
    t72 = (t72 + 1);
    t36 = (t35 + 12U);
    *((unsigned int *)t36) = t72;
    t36 = (t12 + 56U);
    t38 = *((char **)t36);
    t46 = *((int *)t38);
    t51 = (t46 - 1);
    t36 = (t5 + 12U);
    t72 = *((unsigned int *)t36);
    t54 = (t72 - t51);
    t75 = (t54 * -1);
    t75 = (t75 + 1);
    t76 = (1U * t75);
    t39 = xsi_get_transient_memory(t76);
    memset(t39, 0, t76);
    t41 = t39;
    t42 = (t12 + 56U);
    t43 = *((char **)t42);
    t71 = *((int *)t43);
    t77 = (t71 - 1);
    t42 = (t12 + 56U);
    t44 = *((char **)t42);
    t78 = *((int *)t44);
    t79 = (t78 - 1);
    t42 = (t5 + 12U);
    t80 = *((unsigned int *)t42);
    if (-1 == -1)
        goto LAB14;

LAB15:    t81 = t80;

LAB16:    t82 = (t81 - t77);
    t83 = (t82 * -1);
    t84 = (1U * t83);
    t49 = (t41 + t84);
    t52 = (t12 + 56U);
    t56 = *((char **)t52);
    t85 = *((int *)t56);
    t86 = (t85 - 1);
    t52 = (t5 + 12U);
    t87 = *((unsigned int *)t52);
    t88 = (t87 - t86);
    t89 = (t88 * -1);
    t89 = (t89 + 1);
    t90 = (1U * t89);
    memset(t49, (unsigned char)0, t90);
    t57 = (t12 + 56U);
    t59 = *((char **)t57);
    t91 = *((int *)t59);
    t92 = (t91 - 1);
    t57 = (t5 + 12U);
    t93 = *((unsigned int *)t57);
    t60 = (t74 + 0U);
    t61 = (t60 + 0U);
    *((int *)t61) = t92;
    t61 = (t60 + 4U);
    *((unsigned int *)t61) = t93;
    t61 = (t60 + 8U);
    *((int *)t61) = -1;
    t94 = (t93 - t92);
    t95 = (t94 * -1);
    t95 = (t95 + 1);
    t61 = (t60 + 12U);
    *((unsigned int *)t61) = t95;
    t96 = ieee_p_3039841270_sub_4062508670_2334307252(t1, t31, t73, t39, t74);
    t64 = t96;
    goto LAB13;

LAB14:    t81 = t79;
    goto LAB16;

LAB17:    t61 = (t1 + 4828);
    xsi_report(t61, 36U, (unsigned char)1);
    goto LAB18;

LAB19:;
}

char *ieee_p_3039841270_sub_168339854_2334307252(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t6[488];
    char t7[24];
    char t15[8];
    char t24[16];
    char t48[16];
    char t73[16];
    char t74[16];
    char *t0;
    char *t8;
    unsigned int t9;
    int t10;
    int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    int t20;
    int t21;
    int t22;
    unsigned int t23;
    char *t25;
    int t26;
    int t27;
    char *t28;
    int t29;
    unsigned int t30;
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
    char *t42;
    char *t43;
    char *t44;
    int t45;
    int t46;
    unsigned int t47;
    char *t49;
    unsigned int t50;
    int t51;
    char *t52;
    char *t53;
    int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    unsigned char t63;
    char *t64;
    char *t65;
    char *t66;
    unsigned char t67;
    char *t68;
    char *t69;
    char *t70;
    int t71;
    unsigned int t72;
    unsigned int t75;
    unsigned int t76;
    int t77;
    unsigned int t78;
    int t79;
    int t80;
    int t81;
    int t82;
    unsigned int t83;
    int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned char t87;
    int t88;
    int t89;
    unsigned int t90;
    unsigned int t91;
    int t92;
    unsigned int t93;
    unsigned int t94;
    int t95;
    int t96;
    unsigned int t97;
    int t98;
    unsigned int t99;
    unsigned int t100;
    int t101;
    int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    int t106;
    unsigned int t107;
    unsigned char t108;
    char *t109;
    unsigned char t110;

LAB0:    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = ieee_p_3039841270_sub_3824177444_2334307252(t1, t5);
    t11 = ieee_p_3039841270_sub_3160373586_2334307252(t1, ((t9)), t10);
    t12 = (t6 + 4U);
    t13 = ((STD_STANDARD) + 832);
    t14 = (t12 + 88U);
    *((char **)t14) = t13;
    t16 = (t12 + 56U);
    *((char **)t16) = t15;
    *((int *)t15) = t11;
    t17 = (t12 + 80U);
    *((unsigned int *)t17) = 4U;
    t18 = (t12 + 56U);
    t19 = *((char **)t18);
    t20 = *((int *)t19);
    t21 = (t20 - 1);
    t22 = (0 - t21);
    t23 = (t22 * -1);
    t23 = (t23 + 1);
    t23 = (t23 * 1U);
    t18 = (t12 + 56U);
    t25 = *((char **)t18);
    t26 = *((int *)t25);
    t27 = (t26 - 1);
    t18 = (t24 + 0U);
    t28 = (t18 + 0U);
    *((int *)t28) = t27;
    t28 = (t18 + 4U);
    *((int *)t28) = 0;
    t28 = (t18 + 8U);
    *((int *)t28) = -1;
    t29 = (0 - t27);
    t30 = (t29 * -1);
    t30 = (t30 + 1);
    t28 = (t18 + 12U);
    *((unsigned int *)t28) = t30;
    t28 = (t6 + 124U);
    t31 = (t1 + 2992);
    t32 = (t28 + 88U);
    *((char **)t32) = t31;
    t33 = (char *)alloca(t23);
    t34 = (t28 + 56U);
    *((char **)t34) = t33;
    xsi_type_set_default_value(t31, t33, t24);
    t35 = (t28 + 64U);
    *((char **)t35) = t24;
    t36 = (t28 + 80U);
    *((unsigned int *)t36) = t23;
    t37 = (t6 + 244U);
    t38 = (t1 + 2992);
    t39 = (t37 + 88U);
    *((char **)t39) = t38;
    t40 = (char *)alloca(t23);
    t41 = (t37 + 56U);
    *((char **)t41) = t40;
    xsi_type_set_default_value(t38, t40, t24);
    t42 = (t37 + 64U);
    *((char **)t42) = t24;
    t43 = (t37 + 80U);
    *((unsigned int *)t43) = t23;
    t44 = (t4 + 12U);
    t30 = *((unsigned int *)t44);
    t45 = (t30 - 1);
    t46 = (0 - t45);
    t47 = (t46 * -1);
    t47 = (t47 + 1);
    t47 = (t47 * 1U);
    t49 = (t4 + 12U);
    t50 = *((unsigned int *)t49);
    t51 = (t50 - 1);
    t52 = (t48 + 0U);
    t53 = (t52 + 0U);
    *((int *)t53) = t51;
    t53 = (t52 + 4U);
    *((int *)t53) = 0;
    t53 = (t52 + 8U);
    *((int *)t53) = -1;
    t54 = (0 - t51);
    t55 = (t54 * -1);
    t55 = (t55 + 1);
    t53 = (t52 + 12U);
    *((unsigned int *)t53) = t55;
    t53 = (t6 + 364U);
    t56 = (t1 + 2992);
    t57 = (t53 + 88U);
    *((char **)t57) = t56;
    t58 = (char *)alloca(t47);
    t59 = (t53 + 56U);
    *((char **)t59) = t58;
    xsi_type_set_default_value(t56, t58, t48);
    t60 = (t53 + 64U);
    *((char **)t60) = t48;
    t61 = (t53 + 80U);
    *((unsigned int *)t61) = t47;
    t62 = (t7 + 4U);
    t63 = (t3 != 0);
    if (t63 == 1)
        goto LAB3;

LAB2:    t64 = (t7 + 12U);
    *((char **)t64) = t4;
    t65 = (t7 + 20U);
    *((int *)t65) = t5;
    t66 = (t4 + 12U);
    t55 = *((unsigned int *)t66);
    t67 = (t55 < 1);
    if (t67 != 0)
        goto LAB4;

LAB6:
LAB5:    t8 = (t12 + 56U);
    t13 = *((char **)t8);
    t10 = *((int *)t13);
    t8 = ieee_p_3039841270_sub_2780269832_2334307252(t1, t73, t5, t10);
    t14 = (t28 + 56U);
    t16 = *((char **)t14);
    t14 = (t16 + 0);
    t17 = (t73 + 12U);
    t9 = *((unsigned int *)t17);
    t9 = (t9 * 1U);
    memcpy(t14, t8, t9);
    t8 = (t28 + 56U);
    t13 = *((char **)t8);
    t8 = ieee_p_3039841270_sub_257729074_2334307252(t1, t74, t3, t4, t13, t24);
    t14 = (t24 + 12U);
    t9 = *((unsigned int *)t14);
    t16 = ieee_p_3039841270_sub_3322286019_2334307252(t1, t73, t8, t74, ((t9)));
    t17 = (t37 + 56U);
    t18 = *((char **)t17);
    t17 = (t18 + 0);
    t19 = (t73 + 12U);
    t23 = *((unsigned int *)t19);
    t23 = (t23 * 1U);
    memcpy(t17, t16, t23);
    t8 = (t12 + 56U);
    t13 = *((char **)t8);
    t10 = *((int *)t13);
    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t67 = (t10 > t9);
    if (t67 == 1)
        goto LAB11;

LAB12:    t63 = (unsigned char)0;

LAB13:    if (t63 != 0)
        goto LAB8;

LAB10:
LAB9:    t8 = (t37 + 56U);
    t13 = *((char **)t8);
    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t14 = ieee_p_3039841270_sub_3322286019_2334307252(t1, t73, t13, t24, ((t9)));
    t16 = (t73 + 12U);
    t23 = *((unsigned int *)t16);
    t23 = (t23 * 1U);
    t0 = xsi_get_transient_memory(t23);
    memcpy(t0, t14, t23);
    t17 = (t73 + 0U);
    t10 = *((int *)t17);
    t18 = (t73 + 4U);
    t11 = *((int *)t18);
    t19 = (t73 + 8U);
    t20 = *((int *)t19);
    t25 = (t2 + 0U);
    t31 = (t25 + 0U);
    *((int *)t31) = t10;
    t31 = (t25 + 4U);
    *((int *)t31) = t11;
    t31 = (t25 + 8U);
    *((int *)t31) = t20;
    t21 = (t11 - t10);
    t30 = (t21 * t20);
    t30 = (t30 + 1);
    t31 = (t25 + 12U);
    *((unsigned int *)t31) = t30;

LAB1:    return t0;
LAB3:    *((char **)t62) = t3;
    goto LAB2;

LAB4:    t68 = (t1 + 1288U);
    t69 = *((char **)t68);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t69, 0U);
    t68 = (t2 + 0U);
    t70 = (t68 + 0U);
    *((int *)t70) = 0;
    t70 = (t68 + 4U);
    *((int *)t70) = 1;
    t70 = (t68 + 8U);
    *((int *)t70) = -1;
    t71 = (1 - 0);
    t72 = (t71 * -1);
    t72 = (t72 + 1);
    t70 = (t68 + 12U);
    *((unsigned int *)t70) = t72;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:    t105 = (t1 + 1408U);
    t109 = *((char **)t105);
    t110 = *((unsigned char *)t109);
    if (t110 == 0)
        goto LAB17;

LAB18:    goto LAB9;

LAB11:    t14 = (t37 + 56U);
    t16 = *((char **)t14);
    t14 = (t24 + 0U);
    t11 = *((int *)t14);
    t17 = (t12 + 56U);
    t18 = *((char **)t17);
    t20 = *((int *)t18);
    t21 = (t20 - 1);
    t23 = (t11 - t21);
    t17 = (t4 + 12U);
    t30 = *((unsigned int *)t17);
    t19 = (t24 + 4U);
    t22 = *((int *)t19);
    t25 = (t24 + 8U);
    t26 = *((int *)t25);
    xsi_vhdl_check_range_of_slice(t11, t22, t26, t21, t30, -1);
    t47 = (t23 * 1U);
    t50 = (0 + t47);
    t31 = (t16 + t50);
    t32 = (t12 + 56U);
    t34 = *((char **)t32);
    t27 = *((int *)t34);
    t29 = (t27 - 1);
    t32 = (t4 + 12U);
    t55 = *((unsigned int *)t32);
    t35 = (t73 + 0U);
    t36 = (t35 + 0U);
    *((int *)t36) = t29;
    t36 = (t35 + 4U);
    *((unsigned int *)t36) = t55;
    t36 = (t35 + 8U);
    *((int *)t36) = -1;
    t45 = (t55 - t29);
    t72 = (t45 * -1);
    t72 = (t72 + 1);
    t36 = (t35 + 12U);
    *((unsigned int *)t36) = t72;
    t36 = (t12 + 56U);
    t38 = *((char **)t36);
    t46 = *((int *)t38);
    t51 = (t46 - 1);
    t36 = (t4 + 12U);
    t72 = *((unsigned int *)t36);
    t54 = (t72 - t51);
    t75 = (t54 * -1);
    t75 = (t75 + 1);
    t76 = (1U * t75);
    t39 = xsi_get_transient_memory(t76);
    memset(t39, 0, t76);
    t41 = t39;
    t42 = (t12 + 56U);
    t43 = *((char **)t42);
    t71 = *((int *)t43);
    t77 = (t71 - 1);
    t42 = (t37 + 56U);
    t44 = *((char **)t42);
    t42 = (t4 + 12U);
    t78 = *((unsigned int *)t42);
    t79 = (t78 - 1);
    t49 = (t24 + 0U);
    t80 = *((int *)t49);
    t52 = (t24 + 8U);
    t81 = *((int *)t52);
    t82 = (t79 - t80);
    t83 = (t82 * t81);
    t56 = (t24 + 4U);
    t84 = *((int *)t56);
    xsi_vhdl_check_range_of_index(t80, t84, t81, t79);
    t85 = (1U * t83);
    t86 = (0 + t85);
    t57 = (t44 + t86);
    t87 = *((unsigned char *)t57);
    t59 = (t12 + 56U);
    t60 = *((char **)t59);
    t88 = *((int *)t60);
    t89 = (t88 - 1);
    t59 = (t4 + 12U);
    t90 = *((unsigned int *)t59);
    if (-1 == -1)
        goto LAB14;

LAB15:    t91 = t90;

LAB16:    t92 = (t91 - t77);
    t93 = (t92 * -1);
    t94 = (1U * t93);
    t61 = (t41 + t94);
    t66 = (t12 + 56U);
    t68 = *((char **)t66);
    t95 = *((int *)t68);
    t96 = (t95 - 1);
    t66 = (t4 + 12U);
    t97 = *((unsigned int *)t66);
    t98 = (t97 - t96);
    t99 = (t98 * -1);
    t99 = (t99 + 1);
    t100 = (1U * t99);
    memset(t61, t87, t100);
    t69 = (t12 + 56U);
    t70 = *((char **)t69);
    t101 = *((int *)t70);
    t102 = (t101 - 1);
    t69 = (t4 + 12U);
    t103 = *((unsigned int *)t69);
    t104 = (t74 + 0U);
    t105 = (t104 + 0U);
    *((int *)t105) = t102;
    t105 = (t104 + 4U);
    *((unsigned int *)t105) = t103;
    t105 = (t104 + 8U);
    *((int *)t105) = -1;
    t106 = (t103 - t102);
    t107 = (t106 * -1);
    t107 = (t107 + 1);
    t105 = (t104 + 12U);
    *((unsigned int *)t105) = t107;
    t108 = ieee_p_3039841270_sub_3348550333_2334307252(t1, t31, t73, t39, t74);
    t63 = t108;
    goto LAB13;

LAB14:    t91 = t89;
    goto LAB16;

LAB17:    t105 = (t1 + 4864);
    xsi_report(t105, 36U, (unsigned char)1);
    goto LAB18;

LAB19:;
}

char *ieee_p_3039841270_sub_3822948177_2334307252(char *t1, char *t2, int t3, char *t4, char *t5)
{
    char t6[488];
    char t7[24];
    char t15[8];
    char t24[16];
    char t48[16];
    char t73[16];
    char t74[16];
    char *t0;
    int t8;
    char *t9;
    unsigned int t10;
    int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    int t20;
    int t21;
    int t22;
    unsigned int t23;
    char *t25;
    int t26;
    int t27;
    char *t28;
    int t29;
    unsigned int t30;
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
    char *t42;
    char *t43;
    char *t44;
    int t45;
    int t46;
    unsigned int t47;
    char *t49;
    unsigned int t50;
    int t51;
    char *t52;
    char *t53;
    int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    unsigned char t64;
    char *t65;
    char *t66;
    unsigned char t67;
    char *t68;
    char *t69;
    char *t70;
    int t71;
    unsigned int t72;
    unsigned int t75;
    unsigned int t76;
    int t77;
    unsigned int t78;
    int t79;
    int t80;
    int t81;
    int t82;
    unsigned int t83;
    int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned char t87;
    int t88;
    int t89;
    unsigned int t90;
    unsigned int t91;
    int t92;
    unsigned int t93;
    unsigned int t94;
    int t95;
    int t96;
    unsigned int t97;
    int t98;
    unsigned int t99;
    unsigned int t100;
    int t101;
    int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    int t106;
    unsigned int t107;
    unsigned char t108;
    char *t109;
    unsigned char t110;

LAB0:    t8 = ieee_p_3039841270_sub_3824177444_2334307252(t1, t3);
    t9 = (t5 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = ieee_p_3039841270_sub_3160373586_2334307252(t1, t8, ((t10)));
    t12 = (t6 + 4U);
    t13 = ((STD_STANDARD) + 832);
    t14 = (t12 + 88U);
    *((char **)t14) = t13;
    t16 = (t12 + 56U);
    *((char **)t16) = t15;
    *((int *)t15) = t11;
    t17 = (t12 + 80U);
    *((unsigned int *)t17) = 4U;
    t18 = (t12 + 56U);
    t19 = *((char **)t18);
    t20 = *((int *)t19);
    t21 = (t20 - 1);
    t22 = (0 - t21);
    t23 = (t22 * -1);
    t23 = (t23 + 1);
    t23 = (t23 * 1U);
    t18 = (t12 + 56U);
    t25 = *((char **)t18);
    t26 = *((int *)t25);
    t27 = (t26 - 1);
    t18 = (t24 + 0U);
    t28 = (t18 + 0U);
    *((int *)t28) = t27;
    t28 = (t18 + 4U);
    *((int *)t28) = 0;
    t28 = (t18 + 8U);
    *((int *)t28) = -1;
    t29 = (0 - t27);
    t30 = (t29 * -1);
    t30 = (t30 + 1);
    t28 = (t18 + 12U);
    *((unsigned int *)t28) = t30;
    t28 = (t6 + 124U);
    t31 = (t1 + 2992);
    t32 = (t28 + 88U);
    *((char **)t32) = t31;
    t33 = (char *)alloca(t23);
    t34 = (t28 + 56U);
    *((char **)t34) = t33;
    xsi_type_set_default_value(t31, t33, t24);
    t35 = (t28 + 64U);
    *((char **)t35) = t24;
    t36 = (t28 + 80U);
    *((unsigned int *)t36) = t23;
    t37 = (t6 + 244U);
    t38 = (t1 + 2992);
    t39 = (t37 + 88U);
    *((char **)t39) = t38;
    t40 = (char *)alloca(t23);
    t41 = (t37 + 56U);
    *((char **)t41) = t40;
    xsi_type_set_default_value(t38, t40, t24);
    t42 = (t37 + 64U);
    *((char **)t42) = t24;
    t43 = (t37 + 80U);
    *((unsigned int *)t43) = t23;
    t44 = (t5 + 12U);
    t30 = *((unsigned int *)t44);
    t45 = (t30 - 1);
    t46 = (0 - t45);
    t47 = (t46 * -1);
    t47 = (t47 + 1);
    t47 = (t47 * 1U);
    t49 = (t5 + 12U);
    t50 = *((unsigned int *)t49);
    t51 = (t50 - 1);
    t52 = (t48 + 0U);
    t53 = (t52 + 0U);
    *((int *)t53) = t51;
    t53 = (t52 + 4U);
    *((int *)t53) = 0;
    t53 = (t52 + 8U);
    *((int *)t53) = -1;
    t54 = (0 - t51);
    t55 = (t54 * -1);
    t55 = (t55 + 1);
    t53 = (t52 + 12U);
    *((unsigned int *)t53) = t55;
    t53 = (t6 + 364U);
    t56 = (t1 + 2992);
    t57 = (t53 + 88U);
    *((char **)t57) = t56;
    t58 = (char *)alloca(t47);
    t59 = (t53 + 56U);
    *((char **)t59) = t58;
    xsi_type_set_default_value(t56, t58, t48);
    t60 = (t53 + 64U);
    *((char **)t60) = t48;
    t61 = (t53 + 80U);
    *((unsigned int *)t61) = t47;
    t62 = (t7 + 4U);
    *((int *)t62) = t3;
    t63 = (t7 + 8U);
    t64 = (t4 != 0);
    if (t64 == 1)
        goto LAB3;

LAB2:    t65 = (t7 + 16U);
    *((char **)t65) = t5;
    t66 = (t5 + 12U);
    t55 = *((unsigned int *)t66);
    t67 = (t55 < 1);
    if (t67 != 0)
        goto LAB4;

LAB6:
LAB5:    t9 = (t12 + 56U);
    t13 = *((char **)t9);
    t8 = *((int *)t13);
    t9 = ieee_p_3039841270_sub_2780269832_2334307252(t1, t73, t3, t8);
    t14 = (t28 + 56U);
    t16 = *((char **)t14);
    t14 = (t16 + 0);
    t17 = (t73 + 12U);
    t10 = *((unsigned int *)t17);
    t10 = (t10 * 1U);
    memcpy(t14, t9, t10);
    t9 = (t28 + 56U);
    t13 = *((char **)t9);
    t9 = ieee_p_3039841270_sub_257729074_2334307252(t1, t74, t13, t24, t4, t5);
    t14 = (t24 + 12U);
    t10 = *((unsigned int *)t14);
    t16 = ieee_p_3039841270_sub_3322286019_2334307252(t1, t73, t9, t74, ((t10)));
    t17 = (t37 + 56U);
    t18 = *((char **)t17);
    t17 = (t18 + 0);
    t19 = (t73 + 12U);
    t23 = *((unsigned int *)t19);
    t23 = (t23 * 1U);
    memcpy(t17, t16, t23);
    t9 = (t12 + 56U);
    t13 = *((char **)t9);
    t8 = *((int *)t13);
    t9 = (t5 + 12U);
    t10 = *((unsigned int *)t9);
    t67 = (t8 > t10);
    if (t67 == 1)
        goto LAB11;

LAB12:    t64 = (unsigned char)0;

LAB13:    if (t64 != 0)
        goto LAB8;

LAB10:
LAB9:    t9 = (t37 + 56U);
    t13 = *((char **)t9);
    t9 = (t5 + 12U);
    t10 = *((unsigned int *)t9);
    t14 = ieee_p_3039841270_sub_3322286019_2334307252(t1, t73, t13, t24, ((t10)));
    t16 = (t73 + 12U);
    t23 = *((unsigned int *)t16);
    t23 = (t23 * 1U);
    t0 = xsi_get_transient_memory(t23);
    memcpy(t0, t14, t23);
    t17 = (t73 + 0U);
    t8 = *((int *)t17);
    t18 = (t73 + 4U);
    t11 = *((int *)t18);
    t19 = (t73 + 8U);
    t20 = *((int *)t19);
    t25 = (t2 + 0U);
    t31 = (t25 + 0U);
    *((int *)t31) = t8;
    t31 = (t25 + 4U);
    *((int *)t31) = t11;
    t31 = (t25 + 8U);
    *((int *)t31) = t20;
    t21 = (t11 - t8);
    t30 = (t21 * t20);
    t30 = (t30 + 1);
    t31 = (t25 + 12U);
    *((unsigned int *)t31) = t30;

LAB1:    return t0;
LAB3:    *((char **)t63) = t4;
    goto LAB2;

LAB4:    t68 = (t1 + 1288U);
    t69 = *((char **)t68);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t69, 0U);
    t68 = (t2 + 0U);
    t70 = (t68 + 0U);
    *((int *)t70) = 0;
    t70 = (t68 + 4U);
    *((int *)t70) = 1;
    t70 = (t68 + 8U);
    *((int *)t70) = -1;
    t71 = (1 - 0);
    t72 = (t71 * -1);
    t72 = (t72 + 1);
    t70 = (t68 + 12U);
    *((unsigned int *)t70) = t72;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:    t105 = (t1 + 1408U);
    t109 = *((char **)t105);
    t110 = *((unsigned char *)t109);
    if (t110 == 0)
        goto LAB17;

LAB18:    goto LAB9;

LAB11:    t14 = (t37 + 56U);
    t16 = *((char **)t14);
    t14 = (t24 + 0U);
    t11 = *((int *)t14);
    t17 = (t12 + 56U);
    t18 = *((char **)t17);
    t20 = *((int *)t18);
    t21 = (t20 - 1);
    t23 = (t11 - t21);
    t17 = (t5 + 12U);
    t30 = *((unsigned int *)t17);
    t19 = (t24 + 4U);
    t22 = *((int *)t19);
    t25 = (t24 + 8U);
    t26 = *((int *)t25);
    xsi_vhdl_check_range_of_slice(t11, t22, t26, t21, t30, -1);
    t47 = (t23 * 1U);
    t50 = (0 + t47);
    t31 = (t16 + t50);
    t32 = (t12 + 56U);
    t34 = *((char **)t32);
    t27 = *((int *)t34);
    t29 = (t27 - 1);
    t32 = (t5 + 12U);
    t55 = *((unsigned int *)t32);
    t35 = (t73 + 0U);
    t36 = (t35 + 0U);
    *((int *)t36) = t29;
    t36 = (t35 + 4U);
    *((unsigned int *)t36) = t55;
    t36 = (t35 + 8U);
    *((int *)t36) = -1;
    t45 = (t55 - t29);
    t72 = (t45 * -1);
    t72 = (t72 + 1);
    t36 = (t35 + 12U);
    *((unsigned int *)t36) = t72;
    t36 = (t12 + 56U);
    t38 = *((char **)t36);
    t46 = *((int *)t38);
    t51 = (t46 - 1);
    t36 = (t5 + 12U);
    t72 = *((unsigned int *)t36);
    t54 = (t72 - t51);
    t75 = (t54 * -1);
    t75 = (t75 + 1);
    t76 = (1U * t75);
    t39 = xsi_get_transient_memory(t76);
    memset(t39, 0, t76);
    t41 = t39;
    t42 = (t12 + 56U);
    t43 = *((char **)t42);
    t71 = *((int *)t43);
    t77 = (t71 - 1);
    t42 = (t37 + 56U);
    t44 = *((char **)t42);
    t42 = (t5 + 12U);
    t78 = *((unsigned int *)t42);
    t79 = (t78 - 1);
    t49 = (t24 + 0U);
    t80 = *((int *)t49);
    t52 = (t24 + 8U);
    t81 = *((int *)t52);
    t82 = (t79 - t80);
    t83 = (t82 * t81);
    t56 = (t24 + 4U);
    t84 = *((int *)t56);
    xsi_vhdl_check_range_of_index(t80, t84, t81, t79);
    t85 = (1U * t83);
    t86 = (0 + t85);
    t57 = (t44 + t86);
    t87 = *((unsigned char *)t57);
    t59 = (t12 + 56U);
    t60 = *((char **)t59);
    t88 = *((int *)t60);
    t89 = (t88 - 1);
    t59 = (t5 + 12U);
    t90 = *((unsigned int *)t59);
    if (-1 == -1)
        goto LAB14;

LAB15:    t91 = t90;

LAB16:    t92 = (t91 - t77);
    t93 = (t92 * -1);
    t94 = (1U * t93);
    t61 = (t41 + t94);
    t66 = (t12 + 56U);
    t68 = *((char **)t66);
    t95 = *((int *)t68);
    t96 = (t95 - 1);
    t66 = (t5 + 12U);
    t97 = *((unsigned int *)t66);
    t98 = (t97 - t96);
    t99 = (t98 * -1);
    t99 = (t99 + 1);
    t100 = (1U * t99);
    memset(t61, t87, t100);
    t69 = (t12 + 56U);
    t70 = *((char **)t69);
    t101 = *((int *)t70);
    t102 = (t101 - 1);
    t69 = (t5 + 12U);
    t103 = *((unsigned int *)t69);
    t104 = (t74 + 0U);
    t105 = (t104 + 0U);
    *((int *)t105) = t102;
    t105 = (t104 + 4U);
    *((unsigned int *)t105) = t103;
    t105 = (t104 + 8U);
    *((int *)t105) = -1;
    t106 = (t103 - t102);
    t107 = (t106 * -1);
    t107 = (t107 + 1);
    t105 = (t104 + 12U);
    *((unsigned int *)t105) = t107;
    t108 = ieee_p_3039841270_sub_3348550333_2334307252(t1, t31, t73, t39, t74);
    t64 = t108;
    goto LAB13;

LAB14:    t91 = t89;
    goto LAB16;

LAB17:    t105 = (t1 + 4900);
    xsi_report(t105, 36U, (unsigned char)1);
    goto LAB18;

LAB19:;
}

unsigned char ieee_p_3039841270_sub_2718620240_2334307252(char *t1, char *t2, char *t3, char *t4, char *t5)
{
    char t6[248];
    char t7[40];
    char t16[8];
    char t22[8];
    char t42[16];
    char t43[16];
    unsigned char t0;
    char *t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    char *t25;
    unsigned char t26;
    char *t27;
    char *t28;
    unsigned char t29;
    char *t30;
    unsigned char t31;
    char *t32;
    unsigned int t33;
    unsigned char t34;
    char *t35;
    unsigned int t36;
    unsigned char t37;
    char *t38;
    char *t39;
    unsigned char t40;
    int t44;

LAB0:    t8 = (t3 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = (t5 + 12U);
    t11 = *((unsigned int *)t10);
    t12 = ieee_p_3039841270_sub_3160373586_2334307252(t1, ((t9)), ((t11)));
    t13 = (t6 + 4U);
    t14 = ((STD_STANDARD) + 832);
    t15 = (t13 + 88U);
    *((char **)t15) = t14;
    t17 = (t13 + 56U);
    *((char **)t17) = t16;
    *((int *)t16) = t12;
    t18 = (t13 + 80U);
    *((unsigned int *)t18) = 4U;
    t19 = (t6 + 124U);
    t20 = ((STD_STANDARD) + 0);
    t21 = (t19 + 88U);
    *((char **)t21) = t20;
    t23 = (t19 + 56U);
    *((char **)t23) = t22;
    xsi_type_set_default_value(t20, t22, 0);
    t24 = (t19 + 80U);
    *((unsigned int *)t24) = 1U;
    t25 = (t7 + 4U);
    t26 = (t2 != 0);
    if (t26 == 1)
        goto LAB3;

LAB2:    t27 = (t7 + 12U);
    *((char **)t27) = t3;
    t28 = (t7 + 20U);
    t29 = (t4 != 0);
    if (t29 == 1)
        goto LAB5;

LAB4:    t30 = (t7 + 28U);
    *((char **)t30) = t5;
    t32 = (t3 + 12U);
    t33 = *((unsigned int *)t32);
    t34 = (t33 < 1);
    if (t34 == 1)
        goto LAB9;

LAB10:    t35 = (t5 + 12U);
    t36 = *((unsigned int *)t35);
    t37 = (t36 < 1);
    t31 = t37;

LAB11:    if (t31 != 0)
        goto LAB6;

LAB8:
LAB7:    t8 = (t13 + 56U);
    t10 = *((char **)t8);
    t12 = *((int *)t10);
    t8 = ieee_p_3039841270_sub_2675122452_2334307252(t1, t42, t2, t3, t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t44 = *((int *)t15);
    t14 = ieee_p_3039841270_sub_2675122452_2334307252(t1, t43, t4, t5, t44);
    t26 = ieee_p_3039841270_sub_1229053073_2334307252(t1, t8, t42, t14, t43);
    t29 = (!(t26));
    t0 = t29;

LAB1:    return t0;
LAB3:    *((char **)t25) = t2;
    goto LAB2;

LAB5:    *((char **)t28) = t4;
    goto LAB4;

LAB6:    t38 = (t1 + 1408U);
    t39 = *((char **)t38);
    t40 = *((unsigned char *)t39);
    if (t40 == 0)
        goto LAB12;

LAB13:    t0 = (unsigned char)0;
    goto LAB1;

LAB9:    t31 = (unsigned char)1;
    goto LAB11;

LAB12:    t38 = (t1 + 4936);
    xsi_report(t38, 56U, (unsigned char)1);
    goto LAB13;

LAB14:    goto LAB7;

LAB15:;
}

unsigned char ieee_p_3039841270_sub_2004661903_2334307252(char *t1, char *t2, char *t3, char *t4, char *t5)
{
    char t6[248];
    char t7[40];
    char t16[8];
    char t22[8];
    char t42[16];
    char t43[16];
    unsigned char t0;
    char *t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    char *t25;
    unsigned char t26;
    char *t27;
    char *t28;
    unsigned char t29;
    char *t30;
    unsigned char t31;
    char *t32;
    unsigned int t33;
    unsigned char t34;
    char *t35;
    unsigned int t36;
    unsigned char t37;
    char *t38;
    char *t39;
    unsigned char t40;
    int t44;

LAB0:    t8 = (t3 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = (t5 + 12U);
    t11 = *((unsigned int *)t10);
    t12 = ieee_p_3039841270_sub_3160373586_2334307252(t1, ((t9)), ((t11)));
    t13 = (t6 + 4U);
    t14 = ((STD_STANDARD) + 832);
    t15 = (t13 + 88U);
    *((char **)t15) = t14;
    t17 = (t13 + 56U);
    *((char **)t17) = t16;
    *((int *)t16) = t12;
    t18 = (t13 + 80U);
    *((unsigned int *)t18) = 4U;
    t19 = (t6 + 124U);
    t20 = ((STD_STANDARD) + 0);
    t21 = (t19 + 88U);
    *((char **)t21) = t20;
    t23 = (t19 + 56U);
    *((char **)t23) = t22;
    xsi_type_set_default_value(t20, t22, 0);
    t24 = (t19 + 80U);
    *((unsigned int *)t24) = 1U;
    t25 = (t7 + 4U);
    t26 = (t2 != 0);
    if (t26 == 1)
        goto LAB3;

LAB2:    t27 = (t7 + 12U);
    *((char **)t27) = t3;
    t28 = (t7 + 20U);
    t29 = (t4 != 0);
    if (t29 == 1)
        goto LAB5;

LAB4:    t30 = (t7 + 28U);
    *((char **)t30) = t5;
    t32 = (t3 + 12U);
    t33 = *((unsigned int *)t32);
    t34 = (t33 < 1);
    if (t34 == 1)
        goto LAB9;

LAB10:    t35 = (t5 + 12U);
    t36 = *((unsigned int *)t35);
    t37 = (t36 < 1);
    t31 = t37;

LAB11:    if (t31 != 0)
        goto LAB6;

LAB8:
LAB7:    t8 = (t13 + 56U);
    t10 = *((char **)t8);
    t12 = *((int *)t10);
    t8 = ieee_p_3039841270_sub_3322286019_2334307252(t1, t42, t2, t3, t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t44 = *((int *)t15);
    t14 = ieee_p_3039841270_sub_3322286019_2334307252(t1, t43, t4, t5, t44);
    t26 = ieee_p_3039841270_sub_2208510890_2334307252(t1, t8, t42, t14, t43);
    t29 = (!(t26));
    t0 = t29;

LAB1:    return t0;
LAB3:    *((char **)t25) = t2;
    goto LAB2;

LAB5:    *((char **)t28) = t4;
    goto LAB4;

LAB6:    t38 = (t1 + 1408U);
    t39 = *((char **)t38);
    t40 = *((unsigned char *)t39);
    if (t40 == 0)
        goto LAB12;

LAB13:    t0 = (unsigned char)0;
    goto LAB1;

LAB9:    t31 = (unsigned char)1;
    goto LAB11;

LAB12:    t38 = (t1 + 4992);
    xsi_report(t38, 56U, (unsigned char)1);
    goto LAB13;

LAB14:    goto LAB7;

LAB15:;
}

unsigned char ieee_p_3039841270_sub_1962725059_2334307252(char *t1, int t2, char *t3, char *t4)
{
    char t5[128];
    char t6[24];
    char t10[8];
    char t25[16];
    unsigned char t0;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned char t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned char t19;
    char *t20;
    char *t21;
    unsigned char t22;
    int t24;

LAB0:    t7 = (t5 + 4U);
    t8 = ((STD_STANDARD) + 0);
    t9 = (t7 + 88U);
    *((char **)t9) = t8;
    t11 = (t7 + 56U);
    *((char **)t11) = t10;
    xsi_type_set_default_value(t8, t10, 0);
    t12 = (t7 + 80U);
    *((unsigned int *)t12) = 1U;
    t13 = (t6 + 4U);
    *((int *)t13) = t2;
    t14 = (t6 + 8U);
    t15 = (t3 != 0);
    if (t15 == 1)
        goto LAB3;

LAB2:    t16 = (t6 + 16U);
    *((char **)t16) = t4;
    t17 = (t4 + 12U);
    t18 = *((unsigned int *)t17);
    t19 = (t18 < 1);
    if (t19 != 0)
        goto LAB4;

LAB6:
LAB5:    t24 = ieee_p_3039841270_sub_3295552210_2334307252(t1, t2);
    t8 = (t4 + 12U);
    t18 = *((unsigned int *)t8);
    t15 = (t24 > t18);
    if (t15 != 0)
        goto LAB10;

LAB12:
LAB11:    t8 = (t4 + 12U);
    t18 = *((unsigned int *)t8);
    t9 = ieee_p_3039841270_sub_180853171_2334307252(t1, t25, t2, ((t18)));
    t15 = ieee_p_3039841270_sub_1229053073_2334307252(t1, t9, t25, t3, t4);
    t19 = (!(t15));
    t0 = t19;

LAB1:    return t0;
LAB3:    *((char **)t14) = t3;
    goto LAB2;

LAB4:    t20 = (t1 + 1408U);
    t21 = *((char **)t20);
    t22 = *((unsigned char *)t21);
    if (t22 == 0)
        goto LAB7;

LAB8:    t0 = (unsigned char)0;
    goto LAB1;

LAB7:    t20 = (t1 + 5048);
    xsi_report(t20, 56U, (unsigned char)1);
    goto LAB8;

LAB9:    goto LAB5;

LAB10:    t0 = (unsigned char)1;
    goto LAB1;

LAB13:    goto LAB11;

LAB14:;
}

unsigned char ieee_p_3039841270_sub_2115134373_2334307252(char *t1, int t2, char *t3, char *t4)
{
    char t5[128];
    char t6[24];
    char t10[8];
    char t25[16];
    unsigned char t0;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned char t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned char t19;
    char *t20;
    char *t21;
    unsigned char t22;
    int t24;

LAB0:    t7 = (t5 + 4U);
    t8 = ((STD_STANDARD) + 0);
    t9 = (t7 + 88U);
    *((char **)t9) = t8;
    t11 = (t7 + 56U);
    *((char **)t11) = t10;
    xsi_type_set_default_value(t8, t10, 0);
    t12 = (t7 + 80U);
    *((unsigned int *)t12) = 1U;
    t13 = (t6 + 4U);
    *((int *)t13) = t2;
    t14 = (t6 + 8U);
    t15 = (t3 != 0);
    if (t15 == 1)
        goto LAB3;

LAB2:    t16 = (t6 + 16U);
    *((char **)t16) = t4;
    t17 = (t4 + 12U);
    t18 = *((unsigned int *)t17);
    t19 = (t18 < 1);
    if (t19 != 0)
        goto LAB4;

LAB6:
LAB5:    t24 = ieee_p_3039841270_sub_3824177444_2334307252(t1, t2);
    t8 = (t4 + 12U);
    t18 = *((unsigned int *)t8);
    t15 = (t24 > t18);
    if (t15 != 0)
        goto LAB10;

LAB12:
LAB11:    t8 = (t4 + 12U);
    t18 = *((unsigned int *)t8);
    t9 = ieee_p_3039841270_sub_2780269832_2334307252(t1, t25, t2, ((t18)));
    t15 = ieee_p_3039841270_sub_2208510890_2334307252(t1, t9, t25, t3, t4);
    t19 = (!(t15));
    t0 = t19;

LAB1:    return t0;
LAB3:    *((char **)t14) = t3;
    goto LAB2;

LAB4:    t20 = (t1 + 1408U);
    t21 = *((char **)t20);
    t22 = *((unsigned char *)t21);
    if (t22 == 0)
        goto LAB7;

LAB8:    t0 = (unsigned char)0;
    goto LAB1;

LAB7:    t20 = (t1 + 5104);
    xsi_report(t20, 56U, (unsigned char)1);
    goto LAB8;

LAB9:    goto LAB5;

LAB10:    t19 = (t2 > 0);
    t0 = t19;
    goto LAB1;

LAB13:    goto LAB11;

LAB14:;
}

unsigned char ieee_p_3039841270_sub_1803993244_2334307252(char *t1, char *t2, char *t3, int t4)
{
    char t5[128];
    char t6[24];
    char t10[8];
    char t25[16];
    unsigned char t0;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned char t19;
    char *t20;
    char *t21;
    unsigned char t22;
    int t24;

LAB0:    t7 = (t5 + 4U);
    t8 = ((STD_STANDARD) + 0);
    t9 = (t7 + 88U);
    *((char **)t9) = t8;
    t11 = (t7 + 56U);
    *((char **)t11) = t10;
    xsi_type_set_default_value(t8, t10, 0);
    t12 = (t7 + 80U);
    *((unsigned int *)t12) = 1U;
    t13 = (t6 + 4U);
    t14 = (t2 != 0);
    if (t14 == 1)
        goto LAB3;

LAB2:    t15 = (t6 + 12U);
    *((char **)t15) = t3;
    t16 = (t6 + 20U);
    *((int *)t16) = t4;
    t17 = (t3 + 12U);
    t18 = *((unsigned int *)t17);
    t19 = (t18 < 1);
    if (t19 != 0)
        goto LAB4;

LAB6:
LAB5:    t24 = ieee_p_3039841270_sub_3295552210_2334307252(t1, t4);
    t8 = (t3 + 12U);
    t18 = *((unsigned int *)t8);
    t14 = (t24 > t18);
    if (t14 != 0)
        goto LAB10;

LAB12:
LAB11:    t8 = (t3 + 12U);
    t18 = *((unsigned int *)t8);
    t9 = ieee_p_3039841270_sub_180853171_2334307252(t1, t25, t4, ((t18)));
    t14 = ieee_p_3039841270_sub_1229053073_2334307252(t1, t2, t3, t9, t25);
    t19 = (!(t14));
    t0 = t19;

LAB1:    return t0;
LAB3:    *((char **)t13) = t2;
    goto LAB2;

LAB4:    t20 = (t1 + 1408U);
    t21 = *((char **)t20);
    t22 = *((unsigned char *)t21);
    if (t22 == 0)
        goto LAB7;

LAB8:    t0 = (unsigned char)0;
    goto LAB1;

LAB7:    t20 = (t1 + 5160);
    xsi_report(t20, 56U, (unsigned char)1);
    goto LAB8;

LAB9:    goto LAB5;

LAB10:    t0 = (unsigned char)0;
    goto LAB1;

LAB13:    goto LAB11;

LAB14:;
}

unsigned char ieee_p_3039841270_sub_1882040637_2334307252(char *t1, char *t2, char *t3, int t4)
{
    char t5[128];
    char t6[24];
    char t10[8];
    char t25[16];
    unsigned char t0;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned char t19;
    char *t20;
    char *t21;
    unsigned char t22;
    int t24;

LAB0:    t7 = (t5 + 4U);
    t8 = ((STD_STANDARD) + 0);
    t9 = (t7 + 88U);
    *((char **)t9) = t8;
    t11 = (t7 + 56U);
    *((char **)t11) = t10;
    xsi_type_set_default_value(t8, t10, 0);
    t12 = (t7 + 80U);
    *((unsigned int *)t12) = 1U;
    t13 = (t6 + 4U);
    t14 = (t2 != 0);
    if (t14 == 1)
        goto LAB3;

LAB2:    t15 = (t6 + 12U);
    *((char **)t15) = t3;
    t16 = (t6 + 20U);
    *((int *)t16) = t4;
    t17 = (t3 + 12U);
    t18 = *((unsigned int *)t17);
    t19 = (t18 < 1);
    if (t19 != 0)
        goto LAB4;

LAB6:
LAB5:    t24 = ieee_p_3039841270_sub_3824177444_2334307252(t1, t4);
    t8 = (t3 + 12U);
    t18 = *((unsigned int *)t8);
    t14 = (t24 > t18);
    if (t14 != 0)
        goto LAB10;

LAB12:
LAB11:    t8 = (t3 + 12U);
    t18 = *((unsigned int *)t8);
    t9 = ieee_p_3039841270_sub_2780269832_2334307252(t1, t25, t4, ((t18)));
    t14 = ieee_p_3039841270_sub_2208510890_2334307252(t1, t2, t3, t9, t25);
    t19 = (!(t14));
    t0 = t19;

LAB1:    return t0;
LAB3:    *((char **)t13) = t2;
    goto LAB2;

LAB4:    t20 = (t1 + 1408U);
    t21 = *((char **)t20);
    t22 = *((unsigned char *)t21);
    if (t22 == 0)
        goto LAB7;

LAB8:    t0 = (unsigned char)0;
    goto LAB1;

LAB7:    t20 = (t1 + 5216);
    xsi_report(t20, 56U, (unsigned char)1);
    goto LAB8;

LAB9:    goto LAB5;

LAB10:    t19 = (0 > t4);
    t0 = t19;
    goto LAB1;

LAB13:    goto LAB11;

LAB14:;
}

unsigned char ieee_p_3039841270_sub_2718548366_2334307252(char *t1, char *t2, char *t3, char *t4, char *t5)
{
    char t6[248];
    char t7[40];
    char t16[8];
    char t22[8];
    char t42[16];
    char t43[16];
    unsigned char t0;
    char *t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    char *t25;
    unsigned char t26;
    char *t27;
    char *t28;
    unsigned char t29;
    char *t30;
    unsigned char t31;
    char *t32;
    unsigned int t33;
    unsigned char t34;
    char *t35;
    unsigned int t36;
    unsigned char t37;
    char *t38;
    char *t39;
    unsigned char t40;
    int t44;

LAB0:    t8 = (t3 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = (t5 + 12U);
    t11 = *((unsigned int *)t10);
    t12 = ieee_p_3039841270_sub_3160373586_2334307252(t1, ((t9)), ((t11)));
    t13 = (t6 + 4U);
    t14 = ((STD_STANDARD) + 832);
    t15 = (t13 + 88U);
    *((char **)t15) = t14;
    t17 = (t13 + 56U);
    *((char **)t17) = t16;
    *((int *)t16) = t12;
    t18 = (t13 + 80U);
    *((unsigned int *)t18) = 4U;
    t19 = (t6 + 124U);
    t20 = ((STD_STANDARD) + 0);
    t21 = (t19 + 88U);
    *((char **)t21) = t20;
    t23 = (t19 + 56U);
    *((char **)t23) = t22;
    xsi_type_set_default_value(t20, t22, 0);
    t24 = (t19 + 80U);
    *((unsigned int *)t24) = 1U;
    t25 = (t7 + 4U);
    t26 = (t2 != 0);
    if (t26 == 1)
        goto LAB3;

LAB2:    t27 = (t7 + 12U);
    *((char **)t27) = t3;
    t28 = (t7 + 20U);
    t29 = (t4 != 0);
    if (t29 == 1)
        goto LAB5;

LAB4:    t30 = (t7 + 28U);
    *((char **)t30) = t5;
    t32 = (t3 + 12U);
    t33 = *((unsigned int *)t32);
    t34 = (t33 < 1);
    if (t34 == 1)
        goto LAB9;

LAB10:    t35 = (t5 + 12U);
    t36 = *((unsigned int *)t35);
    t37 = (t36 < 1);
    t31 = t37;

LAB11:    if (t31 != 0)
        goto LAB6;

LAB8:
LAB7:    t8 = (t13 + 56U);
    t10 = *((char **)t8);
    t12 = *((int *)t10);
    t8 = ieee_p_3039841270_sub_2675122452_2334307252(t1, t42, t2, t3, t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t44 = *((int *)t15);
    t14 = ieee_p_3039841270_sub_2675122452_2334307252(t1, t43, t4, t5, t44);
    t26 = ieee_p_3039841270_sub_552804570_2334307252(t1, t8, t42, t14, t43);
    t0 = t26;

LAB1:    return t0;
LAB3:    *((char **)t25) = t2;
    goto LAB2;

LAB5:    *((char **)t28) = t4;
    goto LAB4;

LAB6:    t38 = (t1 + 1408U);
    t39 = *((char **)t38);
    t40 = *((unsigned char *)t39);
    if (t40 == 0)
        goto LAB12;

LAB13:    t0 = (unsigned char)0;
    goto LAB1;

LAB9:    t31 = (unsigned char)1;
    goto LAB11;

LAB12:    t38 = (t1 + 5272);
    xsi_report(t38, 56U, (unsigned char)1);
    goto LAB13;

LAB14:    goto LAB7;

LAB15:;
}

unsigned char ieee_p_3039841270_sub_2004590029_2334307252(char *t1, char *t2, char *t3, char *t4, char *t5)
{
    char t6[248];
    char t7[40];
    char t16[8];
    char t22[8];
    char t42[16];
    char t43[16];
    unsigned char t0;
    char *t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    char *t25;
    unsigned char t26;
    char *t27;
    char *t28;
    unsigned char t29;
    char *t30;
    unsigned char t31;
    char *t32;
    unsigned int t33;
    unsigned char t34;
    char *t35;
    unsigned int t36;
    unsigned char t37;
    char *t38;
    char *t39;
    unsigned char t40;
    int t44;

LAB0:    t8 = (t3 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = (t5 + 12U);
    t11 = *((unsigned int *)t10);
    t12 = ieee_p_3039841270_sub_3160373586_2334307252(t1, ((t9)), ((t11)));
    t13 = (t6 + 4U);
    t14 = ((STD_STANDARD) + 832);
    t15 = (t13 + 88U);
    *((char **)t15) = t14;
    t17 = (t13 + 56U);
    *((char **)t17) = t16;
    *((int *)t16) = t12;
    t18 = (t13 + 80U);
    *((unsigned int *)t18) = 4U;
    t19 = (t6 + 124U);
    t20 = ((STD_STANDARD) + 0);
    t21 = (t19 + 88U);
    *((char **)t21) = t20;
    t23 = (t19 + 56U);
    *((char **)t23) = t22;
    xsi_type_set_default_value(t20, t22, 0);
    t24 = (t19 + 80U);
    *((unsigned int *)t24) = 1U;
    t25 = (t7 + 4U);
    t26 = (t2 != 0);
    if (t26 == 1)
        goto LAB3;

LAB2:    t27 = (t7 + 12U);
    *((char **)t27) = t3;
    t28 = (t7 + 20U);
    t29 = (t4 != 0);
    if (t29 == 1)
        goto LAB5;

LAB4:    t30 = (t7 + 28U);
    *((char **)t30) = t5;
    t32 = (t3 + 12U);
    t33 = *((unsigned int *)t32);
    t34 = (t33 < 1);
    if (t34 == 1)
        goto LAB9;

LAB10:    t35 = (t5 + 12U);
    t36 = *((unsigned int *)t35);
    t37 = (t36 < 1);
    t31 = t37;

LAB11:    if (t31 != 0)
        goto LAB6;

LAB8:
LAB7:    t8 = (t13 + 56U);
    t10 = *((char **)t8);
    t12 = *((int *)t10);
    t8 = ieee_p_3039841270_sub_3322286019_2334307252(t1, t42, t2, t3, t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t44 = *((int *)t15);
    t14 = ieee_p_3039841270_sub_3322286019_2334307252(t1, t43, t4, t5, t44);
    t26 = ieee_p_3039841270_sub_3185639251_2334307252(t1, t8, t42, t14, t43);
    t0 = t26;

LAB1:    return t0;
LAB3:    *((char **)t25) = t2;
    goto LAB2;

LAB5:    *((char **)t28) = t4;
    goto LAB4;

LAB6:    t38 = (t1 + 1408U);
    t39 = *((char **)t38);
    t40 = *((unsigned char *)t39);
    if (t40 == 0)
        goto LAB12;

LAB13:    t0 = (unsigned char)0;
    goto LAB1;

LAB9:    t31 = (unsigned char)1;
    goto LAB11;

LAB12:    t38 = (t1 + 5328);
    xsi_report(t38, 56U, (unsigned char)1);
    goto LAB13;

LAB14:    goto LAB7;

LAB15:;
}

unsigned char ieee_p_3039841270_sub_1962653185_2334307252(char *t1, int t2, char *t3, char *t4)
{
    char t5[128];
    char t6[24];
    char t10[8];
    char t25[16];
    unsigned char t0;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned char t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned char t19;
    char *t20;
    char *t21;
    unsigned char t22;
    int t24;

LAB0:    t7 = (t5 + 4U);
    t8 = ((STD_STANDARD) + 0);
    t9 = (t7 + 88U);
    *((char **)t9) = t8;
    t11 = (t7 + 56U);
    *((char **)t11) = t10;
    xsi_type_set_default_value(t8, t10, 0);
    t12 = (t7 + 80U);
    *((unsigned int *)t12) = 1U;
    t13 = (t6 + 4U);
    *((int *)t13) = t2;
    t14 = (t6 + 8U);
    t15 = (t3 != 0);
    if (t15 == 1)
        goto LAB3;

LAB2:    t16 = (t6 + 16U);
    *((char **)t16) = t4;
    t17 = (t4 + 12U);
    t18 = *((unsigned int *)t17);
    t19 = (t18 < 1);
    if (t19 != 0)
        goto LAB4;

LAB6:
LAB5:    t24 = ieee_p_3039841270_sub_3295552210_2334307252(t1, t2);
    t8 = (t4 + 12U);
    t18 = *((unsigned int *)t8);
    t15 = (t24 > t18);
    if (t15 != 0)
        goto LAB10;

LAB12:
LAB11:    t8 = (t4 + 12U);
    t18 = *((unsigned int *)t8);
    t9 = ieee_p_3039841270_sub_180853171_2334307252(t1, t25, t2, ((t18)));
    t15 = ieee_p_3039841270_sub_552804570_2334307252(t1, t9, t25, t3, t4);
    t0 = t15;

LAB1:    return t0;
LAB3:    *((char **)t14) = t3;
    goto LAB2;

LAB4:    t20 = (t1 + 1408U);
    t21 = *((char **)t20);
    t22 = *((unsigned char *)t21);
    if (t22 == 0)
        goto LAB7;

LAB8:    t0 = (unsigned char)0;
    goto LAB1;

LAB7:    t20 = (t1 + 5384);
    xsi_report(t20, 56U, (unsigned char)1);
    goto LAB8;

LAB9:    goto LAB5;

LAB10:    t19 = (t2 < 0);
    t0 = t19;
    goto LAB1;

LAB13:    goto LAB11;

LAB14:;
}

unsigned char ieee_p_3039841270_sub_2115062499_2334307252(char *t1, int t2, char *t3, char *t4)
{
    char t5[128];
    char t6[24];
    char t10[8];
    char t25[16];
    unsigned char t0;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned char t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned char t19;
    char *t20;
    char *t21;
    unsigned char t22;
    int t24;

LAB0:    t7 = (t5 + 4U);
    t8 = ((STD_STANDARD) + 0);
    t9 = (t7 + 88U);
    *((char **)t9) = t8;
    t11 = (t7 + 56U);
    *((char **)t11) = t10;
    xsi_type_set_default_value(t8, t10, 0);
    t12 = (t7 + 80U);
    *((unsigned int *)t12) = 1U;
    t13 = (t6 + 4U);
    *((int *)t13) = t2;
    t14 = (t6 + 8U);
    t15 = (t3 != 0);
    if (t15 == 1)
        goto LAB3;

LAB2:    t16 = (t6 + 16U);
    *((char **)t16) = t4;
    t17 = (t4 + 12U);
    t18 = *((unsigned int *)t17);
    t19 = (t18 < 1);
    if (t19 != 0)
        goto LAB4;

LAB6:
LAB5:    t24 = ieee_p_3039841270_sub_3824177444_2334307252(t1, t2);
    t8 = (t4 + 12U);
    t18 = *((unsigned int *)t8);
    t15 = (t24 > t18);
    if (t15 != 0)
        goto LAB10;

LAB12:
LAB11:    t8 = (t4 + 12U);
    t18 = *((unsigned int *)t8);
    t9 = ieee_p_3039841270_sub_2780269832_2334307252(t1, t25, t2, ((t18)));
    t15 = ieee_p_3039841270_sub_3185639251_2334307252(t1, t9, t25, t3, t4);
    t0 = t15;

LAB1:    return t0;
LAB3:    *((char **)t14) = t3;
    goto LAB2;

LAB4:    t20 = (t1 + 1408U);
    t21 = *((char **)t20);
    t22 = *((unsigned char *)t21);
    if (t22 == 0)
        goto LAB7;

LAB8:    t0 = (unsigned char)0;
    goto LAB1;

LAB7:    t20 = (t1 + 5440);
    xsi_report(t20, 56U, (unsigned char)1);
    goto LAB8;

LAB9:    goto LAB5;

LAB10:    t19 = (t2 < 0);
    t0 = t19;
    goto LAB1;

LAB13:    goto LAB11;

LAB14:;
}

unsigned char ieee_p_3039841270_sub_1803921370_2334307252(char *t1, char *t2, char *t3, int t4)
{
    char t5[128];
    char t6[24];
    char t10[8];
    char t25[16];
    unsigned char t0;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned char t19;
    char *t20;
    char *t21;
    unsigned char t22;
    int t24;

LAB0:    t7 = (t5 + 4U);
    t8 = ((STD_STANDARD) + 0);
    t9 = (t7 + 88U);
    *((char **)t9) = t8;
    t11 = (t7 + 56U);
    *((char **)t11) = t10;
    xsi_type_set_default_value(t8, t10, 0);
    t12 = (t7 + 80U);
    *((unsigned int *)t12) = 1U;
    t13 = (t6 + 4U);
    t14 = (t2 != 0);
    if (t14 == 1)
        goto LAB3;

LAB2:    t15 = (t6 + 12U);
    *((char **)t15) = t3;
    t16 = (t6 + 20U);
    *((int *)t16) = t4;
    t17 = (t3 + 12U);
    t18 = *((unsigned int *)t17);
    t19 = (t18 < 1);
    if (t19 != 0)
        goto LAB4;

LAB6:
LAB5:    t24 = ieee_p_3039841270_sub_3295552210_2334307252(t1, t4);
    t8 = (t3 + 12U);
    t18 = *((unsigned int *)t8);
    t14 = (t24 > t18);
    if (t14 != 0)
        goto LAB10;

LAB12:
LAB11:    t8 = (t3 + 12U);
    t18 = *((unsigned int *)t8);
    t9 = ieee_p_3039841270_sub_180853171_2334307252(t1, t25, t4, ((t18)));
    t14 = ieee_p_3039841270_sub_552804570_2334307252(t1, t2, t3, t9, t25);
    t0 = t14;

LAB1:    return t0;
LAB3:    *((char **)t13) = t2;
    goto LAB2;

LAB4:    t20 = (t1 + 1408U);
    t21 = *((char **)t20);
    t22 = *((unsigned char *)t21);
    if (t22 == 0)
        goto LAB7;

LAB8:    t0 = (unsigned char)0;
    goto LAB1;

LAB7:    t20 = (t1 + 5496);
    xsi_report(t20, 56U, (unsigned char)1);
    goto LAB8;

LAB9:    goto LAB5;

LAB10:    t19 = (0 < t4);
    t0 = t19;
    goto LAB1;

LAB13:    goto LAB11;

LAB14:;
}

unsigned char ieee_p_3039841270_sub_1881968763_2334307252(char *t1, char *t2, char *t3, int t4)
{
    char t5[128];
    char t6[24];
    char t10[8];
    char t25[16];
    unsigned char t0;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned char t19;
    char *t20;
    char *t21;
    unsigned char t22;
    int t24;

LAB0:    t7 = (t5 + 4U);
    t8 = ((STD_STANDARD) + 0);
    t9 = (t7 + 88U);
    *((char **)t9) = t8;
    t11 = (t7 + 56U);
    *((char **)t11) = t10;
    xsi_type_set_default_value(t8, t10, 0);
    t12 = (t7 + 80U);
    *((unsigned int *)t12) = 1U;
    t13 = (t6 + 4U);
    t14 = (t2 != 0);
    if (t14 == 1)
        goto LAB3;

LAB2:    t15 = (t6 + 12U);
    *((char **)t15) = t3;
    t16 = (t6 + 20U);
    *((int *)t16) = t4;
    t17 = (t3 + 12U);
    t18 = *((unsigned int *)t17);
    t19 = (t18 < 1);
    if (t19 != 0)
        goto LAB4;

LAB6:
LAB5:    t24 = ieee_p_3039841270_sub_3824177444_2334307252(t1, t4);
    t8 = (t3 + 12U);
    t18 = *((unsigned int *)t8);
    t14 = (t24 > t18);
    if (t14 != 0)
        goto LAB10;

LAB12:
LAB11:    t8 = (t3 + 12U);
    t18 = *((unsigned int *)t8);
    t9 = ieee_p_3039841270_sub_2780269832_2334307252(t1, t25, t4, ((t18)));
    t14 = ieee_p_3039841270_sub_3185639251_2334307252(t1, t2, t3, t9, t25);
    t0 = t14;

LAB1:    return t0;
LAB3:    *((char **)t13) = t2;
    goto LAB2;

LAB4:    t20 = (t1 + 1408U);
    t21 = *((char **)t20);
    t22 = *((unsigned char *)t21);
    if (t22 == 0)
        goto LAB7;

LAB8:    t0 = (unsigned char)0;
    goto LAB1;

LAB7:    t20 = (t1 + 5552);
    xsi_report(t20, 56U, (unsigned char)1);
    goto LAB8;

LAB9:    goto LAB5;

LAB10:    t19 = (0 < t4);
    t0 = t19;
    goto LAB1;

LAB13:    goto LAB11;

LAB14:;
}

unsigned char ieee_p_3039841270_sub_4077925643_2334307252(char *t1, char *t2, char *t3, char *t4, char *t5)
{
    char t6[248];
    char t7[40];
    char t16[8];
    char t22[8];
    char t42[16];
    char t43[16];
    unsigned char t0;
    char *t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    char *t25;
    unsigned char t26;
    char *t27;
    char *t28;
    unsigned char t29;
    char *t30;
    unsigned char t31;
    char *t32;
    unsigned int t33;
    unsigned char t34;
    char *t35;
    unsigned int t36;
    unsigned char t37;
    char *t38;
    char *t39;
    unsigned char t40;
    int t44;

LAB0:    t8 = (t3 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = (t5 + 12U);
    t11 = *((unsigned int *)t10);
    t12 = ieee_p_3039841270_sub_3160373586_2334307252(t1, ((t9)), ((t11)));
    t13 = (t6 + 4U);
    t14 = ((STD_STANDARD) + 832);
    t15 = (t13 + 88U);
    *((char **)t15) = t14;
    t17 = (t13 + 56U);
    *((char **)t17) = t16;
    *((int *)t16) = t12;
    t18 = (t13 + 80U);
    *((unsigned int *)t18) = 4U;
    t19 = (t6 + 124U);
    t20 = ((STD_STANDARD) + 0);
    t21 = (t19 + 88U);
    *((char **)t21) = t20;
    t23 = (t19 + 56U);
    *((char **)t23) = t22;
    xsi_type_set_default_value(t20, t22, 0);
    t24 = (t19 + 80U);
    *((unsigned int *)t24) = 1U;
    t25 = (t7 + 4U);
    t26 = (t2 != 0);
    if (t26 == 1)
        goto LAB3;

LAB2:    t27 = (t7 + 12U);
    *((char **)t27) = t3;
    t28 = (t7 + 20U);
    t29 = (t4 != 0);
    if (t29 == 1)
        goto LAB5;

LAB4:    t30 = (t7 + 28U);
    *((char **)t30) = t5;
    t32 = (t3 + 12U);
    t33 = *((unsigned int *)t32);
    t34 = (t33 < 1);
    if (t34 == 1)
        goto LAB9;

LAB10:    t35 = (t5 + 12U);
    t36 = *((unsigned int *)t35);
    t37 = (t36 < 1);
    t31 = t37;

LAB11:    if (t31 != 0)
        goto LAB6;

LAB8:
LAB7:    t8 = (t13 + 56U);
    t10 = *((char **)t8);
    t12 = *((int *)t10);
    t8 = ieee_p_3039841270_sub_2675122452_2334307252(t1, t42, t2, t3, t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t44 = *((int *)t15);
    t14 = ieee_p_3039841270_sub_2675122452_2334307252(t1, t43, t4, t5, t44);
    t26 = ieee_p_3039841270_sub_1229053073_2334307252(t1, t8, t42, t14, t43);
    t0 = t26;

LAB1:    return t0;
LAB3:    *((char **)t25) = t2;
    goto LAB2;

LAB5:    *((char **)t28) = t4;
    goto LAB4;

LAB6:    t38 = (t1 + 1408U);
    t39 = *((char **)t38);
    t40 = *((unsigned char *)t39);
    if (t40 == 0)
        goto LAB12;

LAB13:    t0 = (unsigned char)0;
    goto LAB1;

LAB9:    t31 = (unsigned char)1;
    goto LAB11;

LAB12:    t38 = (t1 + 5608);
    xsi_report(t38, 57U, (unsigned char)1);
    goto LAB13;

LAB14:    goto LAB7;

LAB15:;
}

unsigned char ieee_p_3039841270_sub_3363967306_2334307252(char *t1, char *t2, char *t3, char *t4, char *t5)
{
    char t6[248];
    char t7[40];
    char t16[8];
    char t22[8];
    char t42[16];
    char t43[16];
    unsigned char t0;
    char *t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    char *t25;
    unsigned char t26;
    char *t27;
    char *t28;
    unsigned char t29;
    char *t30;
    unsigned char t31;
    char *t32;
    unsigned int t33;
    unsigned char t34;
    char *t35;
    unsigned int t36;
    unsigned char t37;
    char *t38;
    char *t39;
    unsigned char t40;
    int t44;

LAB0:    t8 = (t3 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = (t5 + 12U);
    t11 = *((unsigned int *)t10);
    t12 = ieee_p_3039841270_sub_3160373586_2334307252(t1, ((t9)), ((t11)));
    t13 = (t6 + 4U);
    t14 = ((STD_STANDARD) + 832);
    t15 = (t13 + 88U);
    *((char **)t15) = t14;
    t17 = (t13 + 56U);
    *((char **)t17) = t16;
    *((int *)t16) = t12;
    t18 = (t13 + 80U);
    *((unsigned int *)t18) = 4U;
    t19 = (t6 + 124U);
    t20 = ((STD_STANDARD) + 0);
    t21 = (t19 + 88U);
    *((char **)t21) = t20;
    t23 = (t19 + 56U);
    *((char **)t23) = t22;
    xsi_type_set_default_value(t20, t22, 0);
    t24 = (t19 + 80U);
    *((unsigned int *)t24) = 1U;
    t25 = (t7 + 4U);
    t26 = (t2 != 0);
    if (t26 == 1)
        goto LAB3;

LAB2:    t27 = (t7 + 12U);
    *((char **)t27) = t3;
    t28 = (t7 + 20U);
    t29 = (t4 != 0);
    if (t29 == 1)
        goto LAB5;

LAB4:    t30 = (t7 + 28U);
    *((char **)t30) = t5;
    t32 = (t3 + 12U);
    t33 = *((unsigned int *)t32);
    t34 = (t33 < 1);
    if (t34 == 1)
        goto LAB9;

LAB10:    t35 = (t5 + 12U);
    t36 = *((unsigned int *)t35);
    t37 = (t36 < 1);
    t31 = t37;

LAB11:    if (t31 != 0)
        goto LAB6;

LAB8:
LAB7:    t8 = (t13 + 56U);
    t10 = *((char **)t8);
    t12 = *((int *)t10);
    t8 = ieee_p_3039841270_sub_3322286019_2334307252(t1, t42, t2, t3, t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t44 = *((int *)t15);
    t14 = ieee_p_3039841270_sub_3322286019_2334307252(t1, t43, t4, t5, t44);
    t26 = ieee_p_3039841270_sub_2208510890_2334307252(t1, t8, t42, t14, t43);
    t0 = t26;

LAB1:    return t0;
LAB3:    *((char **)t25) = t2;
    goto LAB2;

LAB5:    *((char **)t28) = t4;
    goto LAB4;

LAB6:    t38 = (t1 + 1408U);
    t39 = *((char **)t38);
    t40 = *((unsigned char *)t39);
    if (t40 == 0)
        goto LAB12;

LAB13:    t0 = (unsigned char)0;
    goto LAB1;

LAB9:    t31 = (unsigned char)1;
    goto LAB11;

LAB12:    t38 = (t1 + 5665);
    xsi_report(t38, 57U, (unsigned char)1);
    goto LAB13;

LAB14:    goto LAB7;

LAB15:;
}

unsigned char ieee_p_3039841270_sub_3322030462_2334307252(char *t1, int t2, char *t3, char *t4)
{
    char t5[128];
    char t6[24];
    char t10[8];
    char t25[16];
    unsigned char t0;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned char t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned char t19;
    char *t20;
    char *t21;
    unsigned char t22;
    int t24;

LAB0:    t7 = (t5 + 4U);
    t8 = ((STD_STANDARD) + 0);
    t9 = (t7 + 88U);
    *((char **)t9) = t8;
    t11 = (t7 + 56U);
    *((char **)t11) = t10;
    xsi_type_set_default_value(t8, t10, 0);
    t12 = (t7 + 80U);
    *((unsigned int *)t12) = 1U;
    t13 = (t6 + 4U);
    *((int *)t13) = t2;
    t14 = (t6 + 8U);
    t15 = (t3 != 0);
    if (t15 == 1)
        goto LAB3;

LAB2:    t16 = (t6 + 16U);
    *((char **)t16) = t4;
    t17 = (t4 + 12U);
    t18 = *((unsigned int *)t17);
    t19 = (t18 < 1);
    if (t19 != 0)
        goto LAB4;

LAB6:
LAB5:    t24 = ieee_p_3039841270_sub_3295552210_2334307252(t1, t2);
    t8 = (t4 + 12U);
    t18 = *((unsigned int *)t8);
    t15 = (t24 > t18);
    if (t15 != 0)
        goto LAB10;

LAB12:
LAB11:    t8 = (t4 + 12U);
    t18 = *((unsigned int *)t8);
    t9 = ieee_p_3039841270_sub_180853171_2334307252(t1, t25, t2, ((t18)));
    t15 = ieee_p_3039841270_sub_1229053073_2334307252(t1, t9, t25, t3, t4);
    t0 = t15;

LAB1:    return t0;
LAB3:    *((char **)t14) = t3;
    goto LAB2;

LAB4:    t20 = (t1 + 1408U);
    t21 = *((char **)t20);
    t22 = *((unsigned char *)t21);
    if (t22 == 0)
        goto LAB7;

LAB8:    t0 = (unsigned char)0;
    goto LAB1;

LAB7:    t20 = (t1 + 5722);
    xsi_report(t20, 57U, (unsigned char)1);
    goto LAB8;

LAB9:    goto LAB5;

LAB10:    t19 = (t2 < 0);
    t0 = t19;
    goto LAB1;

LAB13:    goto LAB11;

LAB14:;
}

unsigned char ieee_p_3039841270_sub_3474439776_2334307252(char *t1, int t2, char *t3, char *t4)
{
    char t5[128];
    char t6[24];
    char t10[8];
    char t25[16];
    unsigned char t0;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned char t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned char t19;
    char *t20;
    char *t21;
    unsigned char t22;
    int t24;

LAB0:    t7 = (t5 + 4U);
    t8 = ((STD_STANDARD) + 0);
    t9 = (t7 + 88U);
    *((char **)t9) = t8;
    t11 = (t7 + 56U);
    *((char **)t11) = t10;
    xsi_type_set_default_value(t8, t10, 0);
    t12 = (t7 + 80U);
    *((unsigned int *)t12) = 1U;
    t13 = (t6 + 4U);
    *((int *)t13) = t2;
    t14 = (t6 + 8U);
    t15 = (t3 != 0);
    if (t15 == 1)
        goto LAB3;

LAB2:    t16 = (t6 + 16U);
    *((char **)t16) = t4;
    t17 = (t4 + 12U);
    t18 = *((unsigned int *)t17);
    t19 = (t18 < 1);
    if (t19 != 0)
        goto LAB4;

LAB6:
LAB5:    t24 = ieee_p_3039841270_sub_3824177444_2334307252(t1, t2);
    t8 = (t4 + 12U);
    t18 = *((unsigned int *)t8);
    t15 = (t24 > t18);
    if (t15 != 0)
        goto LAB10;

LAB12:
LAB11:    t8 = (t4 + 12U);
    t18 = *((unsigned int *)t8);
    t9 = ieee_p_3039841270_sub_2780269832_2334307252(t1, t25, t2, ((t18)));
    t15 = ieee_p_3039841270_sub_2208510890_2334307252(t1, t9, t25, t3, t4);
    t0 = t15;

LAB1:    return t0;
LAB3:    *((char **)t14) = t3;
    goto LAB2;

LAB4:    t20 = (t1 + 1408U);
    t21 = *((char **)t20);
    t22 = *((unsigned char *)t21);
    if (t22 == 0)
        goto LAB7;

LAB8:    t0 = (unsigned char)0;
    goto LAB1;

LAB7:    t20 = (t1 + 5779);
    xsi_report(t20, 57U, (unsigned char)1);
    goto LAB8;

LAB9:    goto LAB5;

LAB10:    t19 = (t2 < 0);
    t0 = t19;
    goto LAB1;

LAB13:    goto LAB11;

LAB14:;
}

unsigned char ieee_p_3039841270_sub_3163298647_2334307252(char *t1, char *t2, char *t3, int t4)
{
    char t5[128];
    char t6[24];
    char t10[8];
    char t25[16];
    unsigned char t0;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned char t19;
    char *t20;
    char *t21;
    unsigned char t22;
    int t24;

LAB0:    t7 = (t5 + 4U);
    t8 = ((STD_STANDARD) + 0);
    t9 = (t7 + 88U);
    *((char **)t9) = t8;
    t11 = (t7 + 56U);
    *((char **)t11) = t10;
    xsi_type_set_default_value(t8, t10, 0);
    t12 = (t7 + 80U);
    *((unsigned int *)t12) = 1U;
    t13 = (t6 + 4U);
    t14 = (t2 != 0);
    if (t14 == 1)
        goto LAB3;

LAB2:    t15 = (t6 + 12U);
    *((char **)t15) = t3;
    t16 = (t6 + 20U);
    *((int *)t16) = t4;
    t17 = (t3 + 12U);
    t18 = *((unsigned int *)t17);
    t19 = (t18 < 1);
    if (t19 != 0)
        goto LAB4;

LAB6:
LAB5:    t24 = ieee_p_3039841270_sub_3295552210_2334307252(t1, t4);
    t8 = (t3 + 12U);
    t18 = *((unsigned int *)t8);
    t14 = (t24 > t18);
    if (t14 != 0)
        goto LAB10;

LAB12:
LAB11:    t8 = (t3 + 12U);
    t18 = *((unsigned int *)t8);
    t9 = ieee_p_3039841270_sub_180853171_2334307252(t1, t25, t4, ((t18)));
    t14 = ieee_p_3039841270_sub_1229053073_2334307252(t1, t2, t3, t9, t25);
    t0 = t14;

LAB1:    return t0;
LAB3:    *((char **)t13) = t2;
    goto LAB2;

LAB4:    t20 = (t1 + 1408U);
    t21 = *((char **)t20);
    t22 = *((unsigned char *)t21);
    if (t22 == 0)
        goto LAB7;

LAB8:    t0 = (unsigned char)0;
    goto LAB1;

LAB7:    t20 = (t1 + 5836);
    xsi_report(t20, 57U, (unsigned char)1);
    goto LAB8;

LAB9:    goto LAB5;

LAB10:    t19 = (0 < t4);
    t0 = t19;
    goto LAB1;

LAB13:    goto LAB11;

LAB14:;
}

unsigned char ieee_p_3039841270_sub_3241346040_2334307252(char *t1, char *t2, char *t3, int t4)
{
    char t5[128];
    char t6[24];
    char t10[8];
    char t25[16];
    unsigned char t0;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned char t19;
    char *t20;
    char *t21;
    unsigned char t22;
    int t24;

LAB0:    t7 = (t5 + 4U);
    t8 = ((STD_STANDARD) + 0);
    t9 = (t7 + 88U);
    *((char **)t9) = t8;
    t11 = (t7 + 56U);
    *((char **)t11) = t10;
    xsi_type_set_default_value(t8, t10, 0);
    t12 = (t7 + 80U);
    *((unsigned int *)t12) = 1U;
    t13 = (t6 + 4U);
    t14 = (t2 != 0);
    if (t14 == 1)
        goto LAB3;

LAB2:    t15 = (t6 + 12U);
    *((char **)t15) = t3;
    t16 = (t6 + 20U);
    *((int *)t16) = t4;
    t17 = (t3 + 12U);
    t18 = *((unsigned int *)t17);
    t19 = (t18 < 1);
    if (t19 != 0)
        goto LAB4;

LAB6:
LAB5:    t24 = ieee_p_3039841270_sub_3824177444_2334307252(t1, t4);
    t8 = (t3 + 12U);
    t18 = *((unsigned int *)t8);
    t14 = (t24 > t18);
    if (t14 != 0)
        goto LAB10;

LAB12:
LAB11:    t8 = (t3 + 12U);
    t18 = *((unsigned int *)t8);
    t9 = ieee_p_3039841270_sub_2780269832_2334307252(t1, t25, t4, ((t18)));
    t14 = ieee_p_3039841270_sub_2208510890_2334307252(t1, t2, t3, t9, t25);
    t0 = t14;

LAB1:    return t0;
LAB3:    *((char **)t13) = t2;
    goto LAB2;

LAB4:    t20 = (t1 + 1408U);
    t21 = *((char **)t20);
    t22 = *((unsigned char *)t21);
    if (t22 == 0)
        goto LAB7;

LAB8:    t0 = (unsigned char)0;
    goto LAB1;

LAB7:    t20 = (t1 + 5893);
    xsi_report(t20, 57U, (unsigned char)1);
    goto LAB8;

LAB9:    goto LAB5;

LAB10:    t19 = (0 < t4);
    t0 = t19;
    goto LAB1;

LAB13:    goto LAB11;

LAB14:;
}

unsigned char ieee_p_3039841270_sub_4080297485_2334307252(char *t1, char *t2, char *t3, char *t4, char *t5)
{
    char t6[248];
    char t7[40];
    char t16[8];
    char t22[8];
    char t42[16];
    char t43[16];
    unsigned char t0;
    char *t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    char *t25;
    unsigned char t26;
    char *t27;
    char *t28;
    unsigned char t29;
    char *t30;
    unsigned char t31;
    char *t32;
    unsigned int t33;
    unsigned char t34;
    char *t35;
    unsigned int t36;
    unsigned char t37;
    char *t38;
    char *t39;
    unsigned char t40;
    int t44;

LAB0:    t8 = (t3 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = (t5 + 12U);
    t11 = *((unsigned int *)t10);
    t12 = ieee_p_3039841270_sub_3160373586_2334307252(t1, ((t9)), ((t11)));
    t13 = (t6 + 4U);
    t14 = ((STD_STANDARD) + 832);
    t15 = (t13 + 88U);
    *((char **)t15) = t14;
    t17 = (t13 + 56U);
    *((char **)t17) = t16;
    *((int *)t16) = t12;
    t18 = (t13 + 80U);
    *((unsigned int *)t18) = 4U;
    t19 = (t6 + 124U);
    t20 = ((STD_STANDARD) + 0);
    t21 = (t19 + 88U);
    *((char **)t21) = t20;
    t23 = (t19 + 56U);
    *((char **)t23) = t22;
    xsi_type_set_default_value(t20, t22, 0);
    t24 = (t19 + 80U);
    *((unsigned int *)t24) = 1U;
    t25 = (t7 + 4U);
    t26 = (t2 != 0);
    if (t26 == 1)
        goto LAB3;

LAB2:    t27 = (t7 + 12U);
    *((char **)t27) = t3;
    t28 = (t7 + 20U);
    t29 = (t4 != 0);
    if (t29 == 1)
        goto LAB5;

LAB4:    t30 = (t7 + 28U);
    *((char **)t30) = t5;
    t32 = (t3 + 12U);
    t33 = *((unsigned int *)t32);
    t34 = (t33 < 1);
    if (t34 == 1)
        goto LAB9;

LAB10:    t35 = (t5 + 12U);
    t36 = *((unsigned int *)t35);
    t37 = (t36 < 1);
    t31 = t37;

LAB11:    if (t31 != 0)
        goto LAB6;

LAB8:
LAB7:    t8 = (t13 + 56U);
    t10 = *((char **)t8);
    t12 = *((int *)t10);
    t8 = ieee_p_3039841270_sub_2675122452_2334307252(t1, t42, t2, t3, t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t44 = *((int *)t15);
    t14 = ieee_p_3039841270_sub_2675122452_2334307252(t1, t43, t4, t5, t44);
    t26 = ieee_p_3039841270_sub_552804570_2334307252(t1, t8, t42, t14, t43);
    t29 = (!(t26));
    t0 = t29;

LAB1:    return t0;
LAB3:    *((char **)t25) = t2;
    goto LAB2;

LAB5:    *((char **)t28) = t4;
    goto LAB4;

LAB6:    t38 = (t1 + 1408U);
    t39 = *((char **)t38);
    t40 = *((unsigned char *)t39);
    if (t40 == 0)
        goto LAB12;

LAB13:    t0 = (unsigned char)0;
    goto LAB1;

LAB9:    t31 = (unsigned char)1;
    goto LAB11;

LAB12:    t38 = (t1 + 5950);
    xsi_report(t38, 57U, (unsigned char)1);
    goto LAB13;

LAB14:    goto LAB7;

LAB15:;
}

unsigned char ieee_p_3039841270_sub_3366339148_2334307252(char *t1, char *t2, char *t3, char *t4, char *t5)
{
    char t6[248];
    char t7[40];
    char t16[8];
    char t22[8];
    char t42[16];
    char t43[16];
    unsigned char t0;
    char *t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    char *t25;
    unsigned char t26;
    char *t27;
    char *t28;
    unsigned char t29;
    char *t30;
    unsigned char t31;
    char *t32;
    unsigned int t33;
    unsigned char t34;
    char *t35;
    unsigned int t36;
    unsigned char t37;
    char *t38;
    char *t39;
    unsigned char t40;
    int t44;

LAB0:    t8 = (t3 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = (t5 + 12U);
    t11 = *((unsigned int *)t10);
    t12 = ieee_p_3039841270_sub_3160373586_2334307252(t1, ((t9)), ((t11)));
    t13 = (t6 + 4U);
    t14 = ((STD_STANDARD) + 832);
    t15 = (t13 + 88U);
    *((char **)t15) = t14;
    t17 = (t13 + 56U);
    *((char **)t17) = t16;
    *((int *)t16) = t12;
    t18 = (t13 + 80U);
    *((unsigned int *)t18) = 4U;
    t19 = (t6 + 124U);
    t20 = ((STD_STANDARD) + 0);
    t21 = (t19 + 88U);
    *((char **)t21) = t20;
    t23 = (t19 + 56U);
    *((char **)t23) = t22;
    xsi_type_set_default_value(t20, t22, 0);
    t24 = (t19 + 80U);
    *((unsigned int *)t24) = 1U;
    t25 = (t7 + 4U);
    t26 = (t2 != 0);
    if (t26 == 1)
        goto LAB3;

LAB2:    t27 = (t7 + 12U);
    *((char **)t27) = t3;
    t28 = (t7 + 20U);
    t29 = (t4 != 0);
    if (t29 == 1)
        goto LAB5;

LAB4:    t30 = (t7 + 28U);
    *((char **)t30) = t5;
    t32 = (t3 + 12U);
    t33 = *((unsigned int *)t32);
    t34 = (t33 < 1);
    if (t34 == 1)
        goto LAB9;

LAB10:    t35 = (t5 + 12U);
    t36 = *((unsigned int *)t35);
    t37 = (t36 < 1);
    t31 = t37;

LAB11:    if (t31 != 0)
        goto LAB6;

LAB8:
LAB7:    t8 = (t13 + 56U);
    t10 = *((char **)t8);
    t12 = *((int *)t10);
    t8 = ieee_p_3039841270_sub_3322286019_2334307252(t1, t42, t2, t3, t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t44 = *((int *)t15);
    t14 = ieee_p_3039841270_sub_3322286019_2334307252(t1, t43, t4, t5, t44);
    t26 = ieee_p_3039841270_sub_3185639251_2334307252(t1, t8, t42, t14, t43);
    t29 = (!(t26));
    t0 = t29;

LAB1:    return t0;
LAB3:    *((char **)t25) = t2;
    goto LAB2;

LAB5:    *((char **)t28) = t4;
    goto LAB4;

LAB6:    t38 = (t1 + 1408U);
    t39 = *((char **)t38);
    t40 = *((unsigned char *)t39);
    if (t40 == 0)
        goto LAB12;

LAB13:    t0 = (unsigned char)0;
    goto LAB1;

LAB9:    t31 = (unsigned char)1;
    goto LAB11;

LAB12:    t38 = (t1 + 6007);
    xsi_report(t38, 57U, (unsigned char)1);
    goto LAB13;

LAB14:    goto LAB7;

LAB15:;
}

unsigned char ieee_p_3039841270_sub_3324402304_2334307252(char *t1, int t2, char *t3, char *t4)
{
    char t5[128];
    char t6[24];
    char t10[8];
    char t25[16];
    unsigned char t0;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned char t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned char t19;
    char *t20;
    char *t21;
    unsigned char t22;
    int t24;

LAB0:    t7 = (t5 + 4U);
    t8 = ((STD_STANDARD) + 0);
    t9 = (t7 + 88U);
    *((char **)t9) = t8;
    t11 = (t7 + 56U);
    *((char **)t11) = t10;
    xsi_type_set_default_value(t8, t10, 0);
    t12 = (t7 + 80U);
    *((unsigned int *)t12) = 1U;
    t13 = (t6 + 4U);
    *((int *)t13) = t2;
    t14 = (t6 + 8U);
    t15 = (t3 != 0);
    if (t15 == 1)
        goto LAB3;

LAB2:    t16 = (t6 + 16U);
    *((char **)t16) = t4;
    t17 = (t4 + 12U);
    t18 = *((unsigned int *)t17);
    t19 = (t18 < 1);
    if (t19 != 0)
        goto LAB4;

LAB6:
LAB5:    t24 = ieee_p_3039841270_sub_3295552210_2334307252(t1, t2);
    t8 = (t4 + 12U);
    t18 = *((unsigned int *)t8);
    t15 = (t24 > t18);
    if (t15 != 0)
        goto LAB10;

LAB12:
LAB11:    t8 = (t4 + 12U);
    t18 = *((unsigned int *)t8);
    t9 = ieee_p_3039841270_sub_180853171_2334307252(t1, t25, t2, ((t18)));
    t15 = ieee_p_3039841270_sub_552804570_2334307252(t1, t9, t25, t3, t4);
    t19 = (!(t15));
    t0 = t19;

LAB1:    return t0;
LAB3:    *((char **)t14) = t3;
    goto LAB2;

LAB4:    t20 = (t1 + 1408U);
    t21 = *((char **)t20);
    t22 = *((unsigned char *)t21);
    if (t22 == 0)
        goto LAB7;

LAB8:    t0 = (unsigned char)0;
    goto LAB1;

LAB7:    t20 = (t1 + 6064);
    xsi_report(t20, 57U, (unsigned char)1);
    goto LAB8;

LAB9:    goto LAB5;

LAB10:    t19 = (t2 > 0);
    t0 = t19;
    goto LAB1;

LAB13:    goto LAB11;

LAB14:;
}

unsigned char ieee_p_3039841270_sub_3476811618_2334307252(char *t1, int t2, char *t3, char *t4)
{
    char t5[128];
    char t6[24];
    char t10[8];
    char t25[16];
    unsigned char t0;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned char t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned char t19;
    char *t20;
    char *t21;
    unsigned char t22;
    int t24;

LAB0:    t7 = (t5 + 4U);
    t8 = ((STD_STANDARD) + 0);
    t9 = (t7 + 88U);
    *((char **)t9) = t8;
    t11 = (t7 + 56U);
    *((char **)t11) = t10;
    xsi_type_set_default_value(t8, t10, 0);
    t12 = (t7 + 80U);
    *((unsigned int *)t12) = 1U;
    t13 = (t6 + 4U);
    *((int *)t13) = t2;
    t14 = (t6 + 8U);
    t15 = (t3 != 0);
    if (t15 == 1)
        goto LAB3;

LAB2:    t16 = (t6 + 16U);
    *((char **)t16) = t4;
    t17 = (t4 + 12U);
    t18 = *((unsigned int *)t17);
    t19 = (t18 < 1);
    if (t19 != 0)
        goto LAB4;

LAB6:
LAB5:    t24 = ieee_p_3039841270_sub_3824177444_2334307252(t1, t2);
    t8 = (t4 + 12U);
    t18 = *((unsigned int *)t8);
    t15 = (t24 > t18);
    if (t15 != 0)
        goto LAB10;

LAB12:
LAB11:    t8 = (t4 + 12U);
    t18 = *((unsigned int *)t8);
    t9 = ieee_p_3039841270_sub_2780269832_2334307252(t1, t25, t2, ((t18)));
    t15 = ieee_p_3039841270_sub_3185639251_2334307252(t1, t9, t25, t3, t4);
    t19 = (!(t15));
    t0 = t19;

LAB1:    return t0;
LAB3:    *((char **)t14) = t3;
    goto LAB2;

LAB4:    t20 = (t1 + 1408U);
    t21 = *((char **)t20);
    t22 = *((unsigned char *)t21);
    if (t22 == 0)
        goto LAB7;

LAB8:    t0 = (unsigned char)0;
    goto LAB1;

LAB7:    t20 = (t1 + 6121);
    xsi_report(t20, 57U, (unsigned char)1);
    goto LAB8;

LAB9:    goto LAB5;

LAB10:    t19 = (t2 > 0);
    t0 = t19;
    goto LAB1;

LAB13:    goto LAB11;

LAB14:;
}

unsigned char ieee_p_3039841270_sub_3165670489_2334307252(char *t1, char *t2, char *t3, int t4)
{
    char t5[128];
    char t6[24];
    char t10[8];
    char t25[16];
    unsigned char t0;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned char t19;
    char *t20;
    char *t21;
    unsigned char t22;
    int t24;

LAB0:    t7 = (t5 + 4U);
    t8 = ((STD_STANDARD) + 0);
    t9 = (t7 + 88U);
    *((char **)t9) = t8;
    t11 = (t7 + 56U);
    *((char **)t11) = t10;
    xsi_type_set_default_value(t8, t10, 0);
    t12 = (t7 + 80U);
    *((unsigned int *)t12) = 1U;
    t13 = (t6 + 4U);
    t14 = (t2 != 0);
    if (t14 == 1)
        goto LAB3;

LAB2:    t15 = (t6 + 12U);
    *((char **)t15) = t3;
    t16 = (t6 + 20U);
    *((int *)t16) = t4;
    t17 = (t3 + 12U);
    t18 = *((unsigned int *)t17);
    t19 = (t18 < 1);
    if (t19 != 0)
        goto LAB4;

LAB6:
LAB5:    t24 = ieee_p_3039841270_sub_3295552210_2334307252(t1, t4);
    t8 = (t3 + 12U);
    t18 = *((unsigned int *)t8);
    t14 = (t24 > t18);
    if (t14 != 0)
        goto LAB10;

LAB12:
LAB11:    t8 = (t3 + 12U);
    t18 = *((unsigned int *)t8);
    t9 = ieee_p_3039841270_sub_180853171_2334307252(t1, t25, t4, ((t18)));
    t14 = ieee_p_3039841270_sub_552804570_2334307252(t1, t2, t3, t9, t25);
    t19 = (!(t14));
    t0 = t19;

LAB1:    return t0;
LAB3:    *((char **)t13) = t2;
    goto LAB2;

LAB4:    t20 = (t1 + 1408U);
    t21 = *((char **)t20);
    t22 = *((unsigned char *)t21);
    if (t22 == 0)
        goto LAB7;

LAB8:    t0 = (unsigned char)0;
    goto LAB1;

LAB7:    t20 = (t1 + 6178);
    xsi_report(t20, 57U, (unsigned char)1);
    goto LAB8;

LAB9:    goto LAB5;

LAB10:    t19 = (0 > t4);
    t0 = t19;
    goto LAB1;

LAB13:    goto LAB11;

LAB14:;
}

unsigned char ieee_p_3039841270_sub_3243717882_2334307252(char *t1, char *t2, char *t3, int t4)
{
    char t5[128];
    char t6[24];
    char t10[8];
    char t25[16];
    unsigned char t0;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned char t19;
    char *t20;
    char *t21;
    unsigned char t22;
    int t24;

LAB0:    t7 = (t5 + 4U);
    t8 = ((STD_STANDARD) + 0);
    t9 = (t7 + 88U);
    *((char **)t9) = t8;
    t11 = (t7 + 56U);
    *((char **)t11) = t10;
    xsi_type_set_default_value(t8, t10, 0);
    t12 = (t7 + 80U);
    *((unsigned int *)t12) = 1U;
    t13 = (t6 + 4U);
    t14 = (t2 != 0);
    if (t14 == 1)
        goto LAB3;

LAB2:    t15 = (t6 + 12U);
    *((char **)t15) = t3;
    t16 = (t6 + 20U);
    *((int *)t16) = t4;
    t17 = (t3 + 12U);
    t18 = *((unsigned int *)t17);
    t19 = (t18 < 1);
    if (t19 != 0)
        goto LAB4;

LAB6:
LAB5:    t24 = ieee_p_3039841270_sub_3824177444_2334307252(t1, t4);
    t8 = (t3 + 12U);
    t18 = *((unsigned int *)t8);
    t14 = (t24 > t18);
    if (t14 != 0)
        goto LAB10;

LAB12:
LAB11:    t8 = (t3 + 12U);
    t18 = *((unsigned int *)t8);
    t9 = ieee_p_3039841270_sub_2780269832_2334307252(t1, t25, t4, ((t18)));
    t14 = ieee_p_3039841270_sub_3185639251_2334307252(t1, t2, t3, t9, t25);
    t19 = (!(t14));
    t0 = t19;

LAB1:    return t0;
LAB3:    *((char **)t13) = t2;
    goto LAB2;

LAB4:    t20 = (t1 + 1408U);
    t21 = *((char **)t20);
    t22 = *((unsigned char *)t21);
    if (t22 == 0)
        goto LAB7;

LAB8:    t0 = (unsigned char)0;
    goto LAB1;

LAB7:    t20 = (t1 + 6235);
    xsi_report(t20, 57U, (unsigned char)1);
    goto LAB8;

LAB9:    goto LAB5;

LAB10:    t19 = (0 > t4);
    t0 = t19;
    goto LAB1;

LAB13:    goto LAB11;

LAB14:;
}

unsigned char ieee_p_3039841270_sub_2718584303_2334307252(char *t1, char *t2, char *t3, char *t4, char *t5)
{
    char t6[248];
    char t7[40];
    char t16[8];
    char t22[8];
    char t42[16];
    char t43[16];
    unsigned char t0;
    char *t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    char *t25;
    unsigned char t26;
    char *t27;
    char *t28;
    unsigned char t29;
    char *t30;
    unsigned char t31;
    char *t32;
    unsigned int t33;
    unsigned char t34;
    char *t35;
    unsigned int t36;
    unsigned char t37;
    char *t38;
    char *t39;
    unsigned char t40;
    int t44;

LAB0:    t8 = (t3 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = (t5 + 12U);
    t11 = *((unsigned int *)t10);
    t12 = ieee_p_3039841270_sub_3160373586_2334307252(t1, ((t9)), ((t11)));
    t13 = (t6 + 4U);
    t14 = ((STD_STANDARD) + 832);
    t15 = (t13 + 88U);
    *((char **)t15) = t14;
    t17 = (t13 + 56U);
    *((char **)t17) = t16;
    *((int *)t16) = t12;
    t18 = (t13 + 80U);
    *((unsigned int *)t18) = 4U;
    t19 = (t6 + 124U);
    t20 = ((STD_STANDARD) + 0);
    t21 = (t19 + 88U);
    *((char **)t21) = t20;
    t23 = (t19 + 56U);
    *((char **)t23) = t22;
    xsi_type_set_default_value(t20, t22, 0);
    t24 = (t19 + 80U);
    *((unsigned int *)t24) = 1U;
    t25 = (t7 + 4U);
    t26 = (t2 != 0);
    if (t26 == 1)
        goto LAB3;

LAB2:    t27 = (t7 + 12U);
    *((char **)t27) = t3;
    t28 = (t7 + 20U);
    t29 = (t4 != 0);
    if (t29 == 1)
        goto LAB5;

LAB4:    t30 = (t7 + 28U);
    *((char **)t30) = t5;
    t32 = (t3 + 12U);
    t33 = *((unsigned int *)t32);
    t34 = (t33 < 1);
    if (t34 == 1)
        goto LAB9;

LAB10:    t35 = (t5 + 12U);
    t36 = *((unsigned int *)t35);
    t37 = (t36 < 1);
    t31 = t37;

LAB11:    if (t31 != 0)
        goto LAB6;

LAB8:
LAB7:    t8 = (t13 + 56U);
    t10 = *((char **)t8);
    t12 = *((int *)t10);
    t8 = ieee_p_3039841270_sub_2675122452_2334307252(t1, t42, t2, t3, t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t44 = *((int *)t15);
    t14 = ieee_p_3039841270_sub_2675122452_2334307252(t1, t43, t4, t5, t44);
    t26 = ieee_p_3039841270_sub_1503053755_2334307252(t1, t8, t42, t14, t43);
    t0 = t26;

LAB1:    return t0;
LAB3:    *((char **)t25) = t2;
    goto LAB2;

LAB5:    *((char **)t28) = t4;
    goto LAB4;

LAB6:    t38 = (t1 + 1408U);
    t39 = *((char **)t38);
    t40 = *((unsigned char *)t39);
    if (t40 == 0)
        goto LAB12;

LAB13:    t0 = (unsigned char)0;
    goto LAB1;

LAB9:    t31 = (unsigned char)1;
    goto LAB11;

LAB12:    t38 = (t1 + 6292);
    xsi_report(t38, 56U, (unsigned char)1);
    goto LAB13;

LAB14:    goto LAB7;

LAB15:;
}

unsigned char ieee_p_3039841270_sub_2004625966_2334307252(char *t1, char *t2, char *t3, char *t4, char *t5)
{
    char t6[248];
    char t7[40];
    char t16[8];
    char t22[8];
    char t42[16];
    char t43[16];
    unsigned char t0;
    char *t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    char *t25;
    unsigned char t26;
    char *t27;
    char *t28;
    unsigned char t29;
    char *t30;
    unsigned char t31;
    char *t32;
    unsigned int t33;
    unsigned char t34;
    char *t35;
    unsigned int t36;
    unsigned char t37;
    char *t38;
    char *t39;
    unsigned char t40;
    int t44;

LAB0:    t8 = (t3 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = (t5 + 12U);
    t11 = *((unsigned int *)t10);
    t12 = ieee_p_3039841270_sub_3160373586_2334307252(t1, ((t9)), ((t11)));
    t13 = (t6 + 4U);
    t14 = ((STD_STANDARD) + 832);
    t15 = (t13 + 88U);
    *((char **)t15) = t14;
    t17 = (t13 + 56U);
    *((char **)t17) = t16;
    *((int *)t16) = t12;
    t18 = (t13 + 80U);
    *((unsigned int *)t18) = 4U;
    t19 = (t6 + 124U);
    t20 = ((STD_STANDARD) + 0);
    t21 = (t19 + 88U);
    *((char **)t21) = t20;
    t23 = (t19 + 56U);
    *((char **)t23) = t22;
    xsi_type_set_default_value(t20, t22, 0);
    t24 = (t19 + 80U);
    *((unsigned int *)t24) = 1U;
    t25 = (t7 + 4U);
    t26 = (t2 != 0);
    if (t26 == 1)
        goto LAB3;

LAB2:    t27 = (t7 + 12U);
    *((char **)t27) = t3;
    t28 = (t7 + 20U);
    t29 = (t4 != 0);
    if (t29 == 1)
        goto LAB5;

LAB4:    t30 = (t7 + 28U);
    *((char **)t30) = t5;
    t32 = (t3 + 12U);
    t33 = *((unsigned int *)t32);
    t34 = (t33 < 1);
    if (t34 == 1)
        goto LAB9;

LAB10:    t35 = (t5 + 12U);
    t36 = *((unsigned int *)t35);
    t37 = (t36 < 1);
    t31 = t37;

LAB11:    if (t31 != 0)
        goto LAB6;

LAB8:
LAB7:    t8 = (t13 + 56U);
    t10 = *((char **)t8);
    t12 = *((int *)t10);
    t8 = ieee_p_3039841270_sub_3322286019_2334307252(t1, t42, t2, t3, t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t44 = *((int *)t15);
    t14 = ieee_p_3039841270_sub_3322286019_2334307252(t1, t43, t4, t5, t44);
    t26 = ieee_p_3039841270_sub_3908047624_2334307252(t1, t8, t42, t14, t43);
    t0 = t26;

LAB1:    return t0;
LAB3:    *((char **)t25) = t2;
    goto LAB2;

LAB5:    *((char **)t28) = t4;
    goto LAB4;

LAB6:    t38 = (t1 + 1408U);
    t39 = *((char **)t38);
    t40 = *((unsigned char *)t39);
    if (t40 == 0)
        goto LAB12;

LAB13:    t0 = (unsigned char)0;
    goto LAB1;

LAB9:    t31 = (unsigned char)1;
    goto LAB11;

LAB12:    t38 = (t1 + 6348);
    xsi_report(t38, 56U, (unsigned char)1);
    goto LAB13;

LAB14:    goto LAB7;

LAB15:;
}

unsigned char ieee_p_3039841270_sub_1962689122_2334307252(char *t1, int t2, char *t3, char *t4)
{
    char t5[128];
    char t6[24];
    char t10[8];
    char t25[16];
    unsigned char t0;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned char t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned char t19;
    char *t20;
    char *t21;
    unsigned char t22;
    int t24;

LAB0:    t7 = (t5 + 4U);
    t8 = ((STD_STANDARD) + 0);
    t9 = (t7 + 88U);
    *((char **)t9) = t8;
    t11 = (t7 + 56U);
    *((char **)t11) = t10;
    xsi_type_set_default_value(t8, t10, 0);
    t12 = (t7 + 80U);
    *((unsigned int *)t12) = 1U;
    t13 = (t6 + 4U);
    *((int *)t13) = t2;
    t14 = (t6 + 8U);
    t15 = (t3 != 0);
    if (t15 == 1)
        goto LAB3;

LAB2:    t16 = (t6 + 16U);
    *((char **)t16) = t4;
    t17 = (t4 + 12U);
    t18 = *((unsigned int *)t17);
    t19 = (t18 < 1);
    if (t19 != 0)
        goto LAB4;

LAB6:
LAB5:    t24 = ieee_p_3039841270_sub_3295552210_2334307252(t1, t2);
    t8 = (t4 + 12U);
    t18 = *((unsigned int *)t8);
    t15 = (t24 > t18);
    if (t15 != 0)
        goto LAB10;

LAB12:
LAB11:    t8 = (t4 + 12U);
    t18 = *((unsigned int *)t8);
    t9 = ieee_p_3039841270_sub_180853171_2334307252(t1, t25, t2, ((t18)));
    t15 = ieee_p_3039841270_sub_1503053755_2334307252(t1, t9, t25, t3, t4);
    t0 = t15;

LAB1:    return t0;
LAB3:    *((char **)t14) = t3;
    goto LAB2;

LAB4:    t20 = (t1 + 1408U);
    t21 = *((char **)t20);
    t22 = *((unsigned char *)t21);
    if (t22 == 0)
        goto LAB7;

LAB8:    t0 = (unsigned char)0;
    goto LAB1;

LAB7:    t20 = (t1 + 6404);
    xsi_report(t20, 56U, (unsigned char)1);
    goto LAB8;

LAB9:    goto LAB5;

LAB10:    t0 = (unsigned char)0;
    goto LAB1;

LAB13:    goto LAB11;

LAB14:;
}

unsigned char ieee_p_3039841270_sub_2115098436_2334307252(char *t1, int t2, char *t3, char *t4)
{
    char t5[128];
    char t6[24];
    char t10[8];
    char t25[16];
    unsigned char t0;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned char t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned char t19;
    char *t20;
    char *t21;
    unsigned char t22;
    int t24;

LAB0:    t7 = (t5 + 4U);
    t8 = ((STD_STANDARD) + 0);
    t9 = (t7 + 88U);
    *((char **)t9) = t8;
    t11 = (t7 + 56U);
    *((char **)t11) = t10;
    xsi_type_set_default_value(t8, t10, 0);
    t12 = (t7 + 80U);
    *((unsigned int *)t12) = 1U;
    t13 = (t6 + 4U);
    *((int *)t13) = t2;
    t14 = (t6 + 8U);
    t15 = (t3 != 0);
    if (t15 == 1)
        goto LAB3;

LAB2:    t16 = (t6 + 16U);
    *((char **)t16) = t4;
    t17 = (t4 + 12U);
    t18 = *((unsigned int *)t17);
    t19 = (t18 < 1);
    if (t19 != 0)
        goto LAB4;

LAB6:
LAB5:    t24 = ieee_p_3039841270_sub_3824177444_2334307252(t1, t2);
    t8 = (t4 + 12U);
    t18 = *((unsigned int *)t8);
    t15 = (t24 > t18);
    if (t15 != 0)
        goto LAB10;

LAB12:
LAB11:    t8 = (t4 + 12U);
    t18 = *((unsigned int *)t8);
    t9 = ieee_p_3039841270_sub_2780269832_2334307252(t1, t25, t2, ((t18)));
    t15 = ieee_p_3039841270_sub_3908047624_2334307252(t1, t9, t25, t3, t4);
    t0 = t15;

LAB1:    return t0;
LAB3:    *((char **)t14) = t3;
    goto LAB2;

LAB4:    t20 = (t1 + 1408U);
    t21 = *((char **)t20);
    t22 = *((unsigned char *)t21);
    if (t22 == 0)
        goto LAB7;

LAB8:    t0 = (unsigned char)0;
    goto LAB1;

LAB7:    t20 = (t1 + 6460);
    xsi_report(t20, 56U, (unsigned char)1);
    goto LAB8;

LAB9:    goto LAB5;

LAB10:    t0 = (unsigned char)0;
    goto LAB1;

LAB13:    goto LAB11;

LAB14:;
}

unsigned char ieee_p_3039841270_sub_1803957307_2334307252(char *t1, char *t2, char *t3, int t4)
{
    char t5[128];
    char t6[24];
    char t10[8];
    char t25[16];
    unsigned char t0;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned char t19;
    char *t20;
    char *t21;
    unsigned char t22;
    int t24;

LAB0:    t7 = (t5 + 4U);
    t8 = ((STD_STANDARD) + 0);
    t9 = (t7 + 88U);
    *((char **)t9) = t8;
    t11 = (t7 + 56U);
    *((char **)t11) = t10;
    xsi_type_set_default_value(t8, t10, 0);
    t12 = (t7 + 80U);
    *((unsigned int *)t12) = 1U;
    t13 = (t6 + 4U);
    t14 = (t2 != 0);
    if (t14 == 1)
        goto LAB3;

LAB2:    t15 = (t6 + 12U);
    *((char **)t15) = t3;
    t16 = (t6 + 20U);
    *((int *)t16) = t4;
    t17 = (t3 + 12U);
    t18 = *((unsigned int *)t17);
    t19 = (t18 < 1);
    if (t19 != 0)
        goto LAB4;

LAB6:
LAB5:    t24 = ieee_p_3039841270_sub_3295552210_2334307252(t1, t4);
    t8 = (t3 + 12U);
    t18 = *((unsigned int *)t8);
    t14 = (t24 > t18);
    if (t14 != 0)
        goto LAB10;

LAB12:
LAB11:    t8 = (t3 + 12U);
    t18 = *((unsigned int *)t8);
    t9 = ieee_p_3039841270_sub_180853171_2334307252(t1, t25, t4, ((t18)));
    t14 = ieee_p_3039841270_sub_1503053755_2334307252(t1, t2, t3, t9, t25);
    t0 = t14;

LAB1:    return t0;
LAB3:    *((char **)t13) = t2;
    goto LAB2;

LAB4:    t20 = (t1 + 1408U);
    t21 = *((char **)t20);
    t22 = *((unsigned char *)t21);
    if (t22 == 0)
        goto LAB7;

LAB8:    t0 = (unsigned char)0;
    goto LAB1;

LAB7:    t20 = (t1 + 6516);
    xsi_report(t20, 56U, (unsigned char)1);
    goto LAB8;

LAB9:    goto LAB5;

LAB10:    t0 = (unsigned char)0;
    goto LAB1;

LAB13:    goto LAB11;

LAB14:;
}

unsigned char ieee_p_3039841270_sub_1882004700_2334307252(char *t1, char *t2, char *t3, int t4)
{
    char t5[128];
    char t6[24];
    char t10[8];
    char t25[16];
    unsigned char t0;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned char t19;
    char *t20;
    char *t21;
    unsigned char t22;
    int t24;

LAB0:    t7 = (t5 + 4U);
    t8 = ((STD_STANDARD) + 0);
    t9 = (t7 + 88U);
    *((char **)t9) = t8;
    t11 = (t7 + 56U);
    *((char **)t11) = t10;
    xsi_type_set_default_value(t8, t10, 0);
    t12 = (t7 + 80U);
    *((unsigned int *)t12) = 1U;
    t13 = (t6 + 4U);
    t14 = (t2 != 0);
    if (t14 == 1)
        goto LAB3;

LAB2:    t15 = (t6 + 12U);
    *((char **)t15) = t3;
    t16 = (t6 + 20U);
    *((int *)t16) = t4;
    t17 = (t3 + 12U);
    t18 = *((unsigned int *)t17);
    t19 = (t18 < 1);
    if (t19 != 0)
        goto LAB4;

LAB6:
LAB5:    t24 = ieee_p_3039841270_sub_3824177444_2334307252(t1, t4);
    t17 = (t3 + 12U);
    t18 = *((unsigned int *)t17);
    t19 = (t24 > t18);
    if (t19 != 0)
        goto LAB10;

LAB12:
LAB11:    t17 = (t3 + 12U);
    t18 = *((unsigned int *)t17);
    t20 = ieee_p_3039841270_sub_2780269832_2334307252(t1, t25, t4, ((t18)));
    t19 = ieee_p_3039841270_sub_3908047624_2334307252(t1, t2, t3, t20, t25);
    t0 = t19;

LAB1:    return t0;
LAB3:    *((char **)t13) = t2;
    goto LAB2;

LAB4:    t20 = (t1 + 1408U);
    t21 = *((char **)t20);
    t22 = *((unsigned char *)t21);
    if (t22 == 0)
        goto LAB7;

LAB8:    t0 = (unsigned char)0;
    goto LAB1;

LAB7:    t20 = (t1 + 6572);
    xsi_report(t20, 56U, (unsigned char)1);
    goto LAB8;

LAB9:    goto LAB5;

LAB10:    t0 = (unsigned char)0;
    goto LAB1;

LAB13:    goto LAB11;

LAB14:;
}

unsigned char ieee_p_3039841270_sub_4062508670_2334307252(char *t1, char *t2, char *t3, char *t4, char *t5)
{
    char t6[248];
    char t7[40];
    char t16[8];
    char t22[8];
    char t42[16];
    char t43[16];
    unsigned char t0;
    char *t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    char *t25;
    unsigned char t26;
    char *t27;
    char *t28;
    unsigned char t29;
    char *t30;
    unsigned char t31;
    char *t32;
    unsigned int t33;
    unsigned char t34;
    char *t35;
    unsigned int t36;
    unsigned char t37;
    char *t38;
    char *t39;
    unsigned char t40;
    int t44;

LAB0:    t8 = (t3 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = (t5 + 12U);
    t11 = *((unsigned int *)t10);
    t12 = ieee_p_3039841270_sub_3160373586_2334307252(t1, ((t9)), ((t11)));
    t13 = (t6 + 4U);
    t14 = ((STD_STANDARD) + 832);
    t15 = (t13 + 88U);
    *((char **)t15) = t14;
    t17 = (t13 + 56U);
    *((char **)t17) = t16;
    *((int *)t16) = t12;
    t18 = (t13 + 80U);
    *((unsigned int *)t18) = 4U;
    t19 = (t6 + 124U);
    t20 = ((STD_STANDARD) + 0);
    t21 = (t19 + 88U);
    *((char **)t21) = t20;
    t23 = (t19 + 56U);
    *((char **)t23) = t22;
    xsi_type_set_default_value(t20, t22, 0);
    t24 = (t19 + 80U);
    *((unsigned int *)t24) = 1U;
    t25 = (t7 + 4U);
    t26 = (t2 != 0);
    if (t26 == 1)
        goto LAB3;

LAB2:    t27 = (t7 + 12U);
    *((char **)t27) = t3;
    t28 = (t7 + 20U);
    t29 = (t4 != 0);
    if (t29 == 1)
        goto LAB5;

LAB4:    t30 = (t7 + 28U);
    *((char **)t30) = t5;
    t32 = (t3 + 12U);
    t33 = *((unsigned int *)t32);
    t34 = (t33 < 1);
    if (t34 == 1)
        goto LAB9;

LAB10:    t35 = (t5 + 12U);
    t36 = *((unsigned int *)t35);
    t37 = (t36 < 1);
    t31 = t37;

LAB11:    if (t31 != 0)
        goto LAB6;

LAB8:
LAB7:    t8 = (t13 + 56U);
    t10 = *((char **)t8);
    t12 = *((int *)t10);
    t8 = ieee_p_3039841270_sub_2675122452_2334307252(t1, t42, t2, t3, t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t44 = *((int *)t15);
    t14 = ieee_p_3039841270_sub_2675122452_2334307252(t1, t43, t4, t5, t44);
    t26 = ieee_p_3039841270_sub_1503053755_2334307252(t1, t8, t42, t14, t43);
    t29 = (!(t26));
    t0 = t29;

LAB1:    return t0;
LAB3:    *((char **)t25) = t2;
    goto LAB2;

LAB5:    *((char **)t28) = t4;
    goto LAB4;

LAB6:    t38 = (t1 + 1408U);
    t39 = *((char **)t38);
    t40 = *((unsigned char *)t39);
    if (t40 == 0)
        goto LAB12;

LAB13:    t0 = (unsigned char)1;
    goto LAB1;

LAB9:    t31 = (unsigned char)1;
    goto LAB11;

LAB12:    t38 = (t1 + 6628);
    xsi_report(t38, 56U, (unsigned char)1);
    goto LAB13;

LAB14:    goto LAB7;

LAB15:;
}

unsigned char ieee_p_3039841270_sub_3348550333_2334307252(char *t1, char *t2, char *t3, char *t4, char *t5)
{
    char t6[248];
    char t7[40];
    char t16[8];
    char t22[8];
    char t42[16];
    char t43[16];
    unsigned char t0;
    char *t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    char *t25;
    unsigned char t26;
    char *t27;
    char *t28;
    unsigned char t29;
    char *t30;
    unsigned char t31;
    char *t32;
    unsigned int t33;
    unsigned char t34;
    char *t35;
    unsigned int t36;
    unsigned char t37;
    char *t38;
    char *t39;
    unsigned char t40;
    int t44;

LAB0:    t8 = (t3 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = (t5 + 12U);
    t11 = *((unsigned int *)t10);
    t12 = ieee_p_3039841270_sub_3160373586_2334307252(t1, ((t9)), ((t11)));
    t13 = (t6 + 4U);
    t14 = ((STD_STANDARD) + 832);
    t15 = (t13 + 88U);
    *((char **)t15) = t14;
    t17 = (t13 + 56U);
    *((char **)t17) = t16;
    *((int *)t16) = t12;
    t18 = (t13 + 80U);
    *((unsigned int *)t18) = 4U;
    t19 = (t6 + 124U);
    t20 = ((STD_STANDARD) + 0);
    t21 = (t19 + 88U);
    *((char **)t21) = t20;
    t23 = (t19 + 56U);
    *((char **)t23) = t22;
    xsi_type_set_default_value(t20, t22, 0);
    t24 = (t19 + 80U);
    *((unsigned int *)t24) = 1U;
    t25 = (t7 + 4U);
    t26 = (t2 != 0);
    if (t26 == 1)
        goto LAB3;

LAB2:    t27 = (t7 + 12U);
    *((char **)t27) = t3;
    t28 = (t7 + 20U);
    t29 = (t4 != 0);
    if (t29 == 1)
        goto LAB5;

LAB4:    t30 = (t7 + 28U);
    *((char **)t30) = t5;
    t32 = (t3 + 12U);
    t33 = *((unsigned int *)t32);
    t34 = (t33 < 1);
    if (t34 == 1)
        goto LAB9;

LAB10:    t35 = (t5 + 12U);
    t36 = *((unsigned int *)t35);
    t37 = (t36 < 1);
    t31 = t37;

LAB11:    if (t31 != 0)
        goto LAB6;

LAB8:
LAB7:    t8 = (t13 + 56U);
    t10 = *((char **)t8);
    t12 = *((int *)t10);
    t8 = ieee_p_3039841270_sub_3322286019_2334307252(t1, t42, t2, t3, t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t44 = *((int *)t15);
    t14 = ieee_p_3039841270_sub_3322286019_2334307252(t1, t43, t4, t5, t44);
    t26 = ieee_p_3039841270_sub_3908047624_2334307252(t1, t8, t42, t14, t43);
    t29 = (!(t26));
    t0 = t29;

LAB1:    return t0;
LAB3:    *((char **)t25) = t2;
    goto LAB2;

LAB5:    *((char **)t28) = t4;
    goto LAB4;

LAB6:    t38 = (t1 + 1408U);
    t39 = *((char **)t38);
    t40 = *((unsigned char *)t39);
    if (t40 == 0)
        goto LAB12;

LAB13:    t0 = (unsigned char)1;
    goto LAB1;

LAB9:    t31 = (unsigned char)1;
    goto LAB11;

LAB12:    t38 = (t1 + 6684);
    xsi_report(t38, 56U, (unsigned char)1);
    goto LAB13;

LAB14:    goto LAB7;

LAB15:;
}

unsigned char ieee_p_3039841270_sub_3306613489_2334307252(char *t1, int t2, char *t3, char *t4)
{
    char t5[128];
    char t6[24];
    char t10[8];
    char t25[16];
    unsigned char t0;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned char t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned char t19;
    char *t20;
    char *t21;
    unsigned char t22;
    int t24;

LAB0:    t7 = (t5 + 4U);
    t8 = ((STD_STANDARD) + 0);
    t9 = (t7 + 88U);
    *((char **)t9) = t8;
    t11 = (t7 + 56U);
    *((char **)t11) = t10;
    xsi_type_set_default_value(t8, t10, 0);
    t12 = (t7 + 80U);
    *((unsigned int *)t12) = 1U;
    t13 = (t6 + 4U);
    *((int *)t13) = t2;
    t14 = (t6 + 8U);
    t15 = (t3 != 0);
    if (t15 == 1)
        goto LAB3;

LAB2:    t16 = (t6 + 16U);
    *((char **)t16) = t4;
    t17 = (t4 + 12U);
    t18 = *((unsigned int *)t17);
    t19 = (t18 < 1);
    if (t19 != 0)
        goto LAB4;

LAB6:
LAB5:    t24 = ieee_p_3039841270_sub_3295552210_2334307252(t1, t2);
    t8 = (t4 + 12U);
    t18 = *((unsigned int *)t8);
    t15 = (t24 > t18);
    if (t15 != 0)
        goto LAB10;

LAB12:
LAB11:    t8 = (t4 + 12U);
    t18 = *((unsigned int *)t8);
    t9 = ieee_p_3039841270_sub_180853171_2334307252(t1, t25, t2, ((t18)));
    t15 = ieee_p_3039841270_sub_1503053755_2334307252(t1, t9, t25, t3, t4);
    t19 = (!(t15));
    t0 = t19;

LAB1:    return t0;
LAB3:    *((char **)t14) = t3;
    goto LAB2;

LAB4:    t20 = (t1 + 1408U);
    t21 = *((char **)t20);
    t22 = *((unsigned char *)t21);
    if (t22 == 0)
        goto LAB7;

LAB8:    t0 = (unsigned char)1;
    goto LAB1;

LAB7:    t20 = (t1 + 6740);
    xsi_report(t20, 56U, (unsigned char)1);
    goto LAB8;

LAB9:    goto LAB5;

LAB10:    t0 = (unsigned char)1;
    goto LAB1;

LAB13:    goto LAB11;

LAB14:;
}

unsigned char ieee_p_3039841270_sub_3459022803_2334307252(char *t1, int t2, char *t3, char *t4)
{
    char t5[128];
    char t6[24];
    char t10[8];
    char t25[16];
    unsigned char t0;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned char t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned char t19;
    char *t20;
    char *t21;
    unsigned char t22;
    int t24;

LAB0:    t7 = (t5 + 4U);
    t8 = ((STD_STANDARD) + 0);
    t9 = (t7 + 88U);
    *((char **)t9) = t8;
    t11 = (t7 + 56U);
    *((char **)t11) = t10;
    xsi_type_set_default_value(t8, t10, 0);
    t12 = (t7 + 80U);
    *((unsigned int *)t12) = 1U;
    t13 = (t6 + 4U);
    *((int *)t13) = t2;
    t14 = (t6 + 8U);
    t15 = (t3 != 0);
    if (t15 == 1)
        goto LAB3;

LAB2:    t16 = (t6 + 16U);
    *((char **)t16) = t4;
    t17 = (t4 + 12U);
    t18 = *((unsigned int *)t17);
    t19 = (t18 < 1);
    if (t19 != 0)
        goto LAB4;

LAB6:
LAB5:    t24 = ieee_p_3039841270_sub_3824177444_2334307252(t1, t2);
    t8 = (t4 + 12U);
    t18 = *((unsigned int *)t8);
    t15 = (t24 > t18);
    if (t15 != 0)
        goto LAB10;

LAB12:
LAB11:    t8 = (t4 + 12U);
    t18 = *((unsigned int *)t8);
    t9 = ieee_p_3039841270_sub_2780269832_2334307252(t1, t25, t2, ((t18)));
    t15 = ieee_p_3039841270_sub_3908047624_2334307252(t1, t9, t25, t3, t4);
    t19 = (!(t15));
    t0 = t19;

LAB1:    return t0;
LAB3:    *((char **)t14) = t3;
    goto LAB2;

LAB4:    t20 = (t1 + 1408U);
    t21 = *((char **)t20);
    t22 = *((unsigned char *)t21);
    if (t22 == 0)
        goto LAB7;

LAB8:    t0 = (unsigned char)1;
    goto LAB1;

LAB7:    t20 = (t1 + 6796);
    xsi_report(t20, 56U, (unsigned char)1);
    goto LAB8;

LAB9:    goto LAB5;

LAB10:    t0 = (unsigned char)1;
    goto LAB1;

LAB13:    goto LAB11;

LAB14:;
}

unsigned char ieee_p_3039841270_sub_3147881674_2334307252(char *t1, char *t2, char *t3, int t4)
{
    char t5[128];
    char t6[24];
    char t10[8];
    char t25[16];
    unsigned char t0;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned char t19;
    char *t20;
    char *t21;
    unsigned char t22;
    int t24;

LAB0:    t7 = (t5 + 4U);
    t8 = ((STD_STANDARD) + 0);
    t9 = (t7 + 88U);
    *((char **)t9) = t8;
    t11 = (t7 + 56U);
    *((char **)t11) = t10;
    xsi_type_set_default_value(t8, t10, 0);
    t12 = (t7 + 80U);
    *((unsigned int *)t12) = 1U;
    t13 = (t6 + 4U);
    t14 = (t2 != 0);
    if (t14 == 1)
        goto LAB3;

LAB2:    t15 = (t6 + 12U);
    *((char **)t15) = t3;
    t16 = (t6 + 20U);
    *((int *)t16) = t4;
    t17 = (t3 + 12U);
    t18 = *((unsigned int *)t17);
    t19 = (t18 < 1);
    if (t19 != 0)
        goto LAB4;

LAB6:
LAB5:    t24 = ieee_p_3039841270_sub_3295552210_2334307252(t1, t4);
    t8 = (t3 + 12U);
    t18 = *((unsigned int *)t8);
    t14 = (t24 > t18);
    if (t14 != 0)
        goto LAB10;

LAB12:
LAB11:    t8 = (t3 + 12U);
    t18 = *((unsigned int *)t8);
    t9 = ieee_p_3039841270_sub_180853171_2334307252(t1, t25, t4, ((t18)));
    t14 = ieee_p_3039841270_sub_1503053755_2334307252(t1, t2, t3, t9, t25);
    t19 = (!(t14));
    t0 = t19;

LAB1:    return t0;
LAB3:    *((char **)t13) = t2;
    goto LAB2;

LAB4:    t20 = (t1 + 1408U);
    t21 = *((char **)t20);
    t22 = *((unsigned char *)t21);
    if (t22 == 0)
        goto LAB7;

LAB8:    t0 = (unsigned char)1;
    goto LAB1;

LAB7:    t20 = (t1 + 6852);
    xsi_report(t20, 56U, (unsigned char)1);
    goto LAB8;

LAB9:    goto LAB5;

LAB10:    t0 = (unsigned char)1;
    goto LAB1;

LAB13:    goto LAB11;

LAB14:;
}

unsigned char ieee_p_3039841270_sub_3225929067_2334307252(char *t1, char *t2, char *t3, int t4)
{
    char t5[128];
    char t6[24];
    char t10[8];
    char t25[16];
    unsigned char t0;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned char t19;
    char *t20;
    char *t21;
    unsigned char t22;
    int t24;

LAB0:    t7 = (t5 + 4U);
    t8 = ((STD_STANDARD) + 0);
    t9 = (t7 + 88U);
    *((char **)t9) = t8;
    t11 = (t7 + 56U);
    *((char **)t11) = t10;
    xsi_type_set_default_value(t8, t10, 0);
    t12 = (t7 + 80U);
    *((unsigned int *)t12) = 1U;
    t13 = (t6 + 4U);
    t14 = (t2 != 0);
    if (t14 == 1)
        goto LAB3;

LAB2:    t15 = (t6 + 12U);
    *((char **)t15) = t3;
    t16 = (t6 + 20U);
    *((int *)t16) = t4;
    t17 = (t3 + 12U);
    t18 = *((unsigned int *)t17);
    t19 = (t18 < 1);
    if (t19 != 0)
        goto LAB4;

LAB6:
LAB5:    t24 = ieee_p_3039841270_sub_3824177444_2334307252(t1, t4);
    t8 = (t3 + 12U);
    t18 = *((unsigned int *)t8);
    t14 = (t24 > t18);
    if (t14 != 0)
        goto LAB10;

LAB12:
LAB11:    t8 = (t3 + 12U);
    t18 = *((unsigned int *)t8);
    t9 = ieee_p_3039841270_sub_2780269832_2334307252(t1, t25, t4, ((t18)));
    t14 = ieee_p_3039841270_sub_3908047624_2334307252(t1, t2, t3, t9, t25);
    t19 = (!(t14));
    t0 = t19;

LAB1:    return t0;
LAB3:    *((char **)t13) = t2;
    goto LAB2;

LAB4:    t20 = (t1 + 1408U);
    t21 = *((char **)t20);
    t22 = *((unsigned char *)t21);
    if (t22 == 0)
        goto LAB7;

LAB8:    t0 = (unsigned char)1;
    goto LAB1;

LAB7:    t20 = (t1 + 6908);
    xsi_report(t20, 56U, (unsigned char)1);
    goto LAB8;

LAB9:    goto LAB5;

LAB10:    t0 = (unsigned char)1;
    goto LAB1;

LAB13:    goto LAB11;

LAB14:;
}

char *ieee_p_3039841270_sub_2926835514_2334307252(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t7[24];
    char t20[16];
    char *t0;
    char *t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    int t18;
    unsigned int t19;
    int t21;
    char *t22;
    int t23;
    char *t24;
    char *t25;
    int t26;

LAB0:    t8 = (t7 + 4U);
    t9 = (t3 != 0);
    if (t9 == 1)
        goto LAB3;

LAB2:    t10 = (t7 + 12U);
    *((char **)t10) = t4;
    t11 = (t7 + 20U);
    *((int *)t11) = t5;
    t12 = (t4 + 12U);
    t13 = *((unsigned int *)t12);
    t14 = (t13 < 1);
    if (t14 != 0)
        goto LAB4;

LAB6:
LAB5:    t12 = ieee_p_3039841270_sub_3362593643_2334307252(t1, t20, t3, t4, t5);
    t15 = (t20 + 12U);
    t13 = *((unsigned int *)t15);
    t13 = (t13 * 1U);
    t0 = xsi_get_transient_memory(t13);
    memcpy(t0, t12, t13);
    t16 = (t20 + 0U);
    t18 = *((int *)t16);
    t17 = (t20 + 4U);
    t21 = *((int *)t17);
    t22 = (t20 + 8U);
    t23 = *((int *)t22);
    t24 = (t2 + 0U);
    t25 = (t24 + 0U);
    *((int *)t25) = t18;
    t25 = (t24 + 4U);
    *((int *)t25) = t21;
    t25 = (t24 + 8U);
    *((int *)t25) = t23;
    t26 = (t21 - t18);
    t19 = (t26 * t23);
    t19 = (t19 + 1);
    t25 = (t24 + 12U);
    *((unsigned int *)t25) = t19;

LAB1:    return t0;
LAB3:    *((char **)t8) = t3;
    goto LAB2;

LAB4:    t15 = (t1 + 1168U);
    t16 = *((char **)t15);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t16, 0U);
    t15 = (t2 + 0U);
    t17 = (t15 + 0U);
    *((int *)t17) = 0;
    t17 = (t15 + 4U);
    *((int *)t17) = 1;
    t17 = (t15 + 8U);
    *((int *)t17) = -1;
    t18 = (1 - 0);
    t19 = (t18 * -1);
    t19 = (t19 + 1);
    t17 = (t15 + 12U);
    *((unsigned int *)t17) = t19;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:;
}

char *ieee_p_3039841270_sub_1986385229_2334307252(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t7[24];
    char t20[16];
    char *t0;
    char *t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    int t18;
    unsigned int t19;
    int t21;
    char *t22;
    int t23;
    char *t24;
    char *t25;
    int t26;

LAB0:    t8 = (t7 + 4U);
    t9 = (t3 != 0);
    if (t9 == 1)
        goto LAB3;

LAB2:    t10 = (t7 + 12U);
    *((char **)t10) = t4;
    t11 = (t7 + 20U);
    *((int *)t11) = t5;
    t12 = (t4 + 12U);
    t13 = *((unsigned int *)t12);
    t14 = (t13 < 1);
    if (t14 != 0)
        goto LAB4;

LAB6:
LAB5:    t12 = ieee_p_3039841270_sub_3362809265_2334307252(t1, t20, t3, t4, t5);
    t15 = (t20 + 12U);
    t13 = *((unsigned int *)t15);
    t13 = (t13 * 1U);
    t0 = xsi_get_transient_memory(t13);
    memcpy(t0, t12, t13);
    t16 = (t20 + 0U);
    t18 = *((int *)t16);
    t17 = (t20 + 4U);
    t21 = *((int *)t17);
    t22 = (t20 + 8U);
    t23 = *((int *)t22);
    t24 = (t2 + 0U);
    t25 = (t24 + 0U);
    *((int *)t25) = t18;
    t25 = (t24 + 4U);
    *((int *)t25) = t21;
    t25 = (t24 + 8U);
    *((int *)t25) = t23;
    t26 = (t21 - t18);
    t19 = (t26 * t23);
    t19 = (t19 + 1);
    t25 = (t24 + 12U);
    *((unsigned int *)t25) = t19;

LAB1:    return t0;
LAB3:    *((char **)t8) = t3;
    goto LAB2;

LAB4:    t15 = (t1 + 1168U);
    t16 = *((char **)t15);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t16, 0U);
    t15 = (t2 + 0U);
    t17 = (t15 + 0U);
    *((int *)t17) = 0;
    t17 = (t15 + 4U);
    *((int *)t17) = 1;
    t17 = (t15 + 8U);
    *((int *)t17) = -1;
    t18 = (1 - 0);
    t19 = (t18 * -1);
    t19 = (t19 + 1);
    t17 = (t15 + 12U);
    *((unsigned int *)t17) = t19;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:;
}

char *ieee_p_3039841270_sub_4208422723_2334307252(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t7[24];
    char t20[16];
    char *t0;
    char *t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    int t18;
    unsigned int t19;
    int t21;
    char *t22;
    int t23;
    char *t24;
    char *t25;
    int t26;

LAB0:    t8 = (t7 + 4U);
    t9 = (t3 != 0);
    if (t9 == 1)
        goto LAB3;

LAB2:    t10 = (t7 + 12U);
    *((char **)t10) = t4;
    t11 = (t7 + 20U);
    *((int *)t11) = t5;
    t12 = (t4 + 12U);
    t13 = *((unsigned int *)t12);
    t14 = (t13 < 1);
    if (t14 != 0)
        goto LAB4;

LAB6:
LAB5:    t12 = ieee_p_3039841270_sub_3362593643_2334307252(t1, t20, t3, t4, t5);
    t15 = (t20 + 12U);
    t13 = *((unsigned int *)t15);
    t13 = (t13 * 1U);
    t0 = xsi_get_transient_memory(t13);
    memcpy(t0, t12, t13);
    t16 = (t20 + 0U);
    t18 = *((int *)t16);
    t17 = (t20 + 4U);
    t21 = *((int *)t17);
    t22 = (t20 + 8U);
    t23 = *((int *)t22);
    t24 = (t2 + 0U);
    t25 = (t24 + 0U);
    *((int *)t25) = t18;
    t25 = (t24 + 4U);
    *((int *)t25) = t21;
    t25 = (t24 + 8U);
    *((int *)t25) = t23;
    t26 = (t21 - t18);
    t19 = (t26 * t23);
    t19 = (t19 + 1);
    t25 = (t24 + 12U);
    *((unsigned int *)t25) = t19;

LAB1:    return t0;
LAB3:    *((char **)t8) = t3;
    goto LAB2;

LAB4:    t15 = (t1 + 1288U);
    t16 = *((char **)t15);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t16, 0U);
    t15 = (t2 + 0U);
    t17 = (t15 + 0U);
    *((int *)t17) = 0;
    t17 = (t15 + 4U);
    *((int *)t17) = 1;
    t17 = (t15 + 8U);
    *((int *)t17) = -1;
    t18 = (1 - 0);
    t19 = (t18 * -1);
    t19 = (t19 + 1);
    t17 = (t15 + 12U);
    *((unsigned int *)t17) = t19;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:;
}

char *ieee_p_3039841270_sub_3267972438_2334307252(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t7[24];
    char t20[16];
    char *t0;
    char *t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    int t18;
    unsigned int t19;
    int t21;
    char *t22;
    int t23;
    char *t24;
    char *t25;
    int t26;

LAB0:    t8 = (t7 + 4U);
    t9 = (t3 != 0);
    if (t9 == 1)
        goto LAB3;

LAB2:    t10 = (t7 + 12U);
    *((char **)t10) = t4;
    t11 = (t7 + 20U);
    *((int *)t11) = t5;
    t12 = (t4 + 12U);
    t13 = *((unsigned int *)t12);
    t14 = (t13 < 1);
    if (t14 != 0)
        goto LAB4;

LAB6:
LAB5:    t12 = ieee_p_3039841270_sub_3384070474_2334307252(t1, t20, t3, t4, t5);
    t15 = (t20 + 12U);
    t13 = *((unsigned int *)t15);
    t13 = (t13 * 1U);
    t0 = xsi_get_transient_memory(t13);
    memcpy(t0, t12, t13);
    t16 = (t20 + 0U);
    t18 = *((int *)t16);
    t17 = (t20 + 4U);
    t21 = *((int *)t17);
    t22 = (t20 + 8U);
    t23 = *((int *)t22);
    t24 = (t2 + 0U);
    t25 = (t24 + 0U);
    *((int *)t25) = t18;
    t25 = (t24 + 4U);
    *((int *)t25) = t21;
    t25 = (t24 + 8U);
    *((int *)t25) = t23;
    t26 = (t21 - t18);
    t19 = (t26 * t23);
    t19 = (t19 + 1);
    t25 = (t24 + 12U);
    *((unsigned int *)t25) = t19;

LAB1:    return t0;
LAB3:    *((char **)t8) = t3;
    goto LAB2;

LAB4:    t15 = (t1 + 1288U);
    t16 = *((char **)t15);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t16, 0U);
    t15 = (t2 + 0U);
    t17 = (t15 + 0U);
    *((int *)t17) = 0;
    t17 = (t15 + 4U);
    *((int *)t17) = 1;
    t17 = (t15 + 8U);
    *((int *)t17) = -1;
    t18 = (1 - 0);
    t19 = (t18 * -1);
    t19 = (t19 + 1);
    t17 = (t15 + 12U);
    *((unsigned int *)t17) = t19;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:;
}

char *ieee_p_3039841270_sub_4266129579_2334307252(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t7[24];
    char t20[16];
    char *t0;
    char *t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    int t18;
    unsigned int t19;
    int t21;
    char *t22;
    int t23;
    char *t24;
    char *t25;
    int t26;

LAB0:    t8 = (t7 + 4U);
    t9 = (t3 != 0);
    if (t9 == 1)
        goto LAB3;

LAB2:    t10 = (t7 + 12U);
    *((char **)t10) = t4;
    t11 = (t7 + 20U);
    *((int *)t11) = t5;
    t12 = (t4 + 12U);
    t13 = *((unsigned int *)t12);
    t14 = (t13 < 1);
    if (t14 != 0)
        goto LAB4;

LAB6:
LAB5:    t12 = ieee_p_3039841270_sub_3493178686_2334307252(t1, t20, t3, t4, t5);
    t15 = (t20 + 12U);
    t13 = *((unsigned int *)t15);
    t13 = (t13 * 1U);
    t0 = xsi_get_transient_memory(t13);
    memcpy(t0, t12, t13);
    t16 = (t20 + 0U);
    t18 = *((int *)t16);
    t17 = (t20 + 4U);
    t21 = *((int *)t17);
    t22 = (t20 + 8U);
    t23 = *((int *)t22);
    t24 = (t2 + 0U);
    t25 = (t24 + 0U);
    *((int *)t25) = t18;
    t25 = (t24 + 4U);
    *((int *)t25) = t21;
    t25 = (t24 + 8U);
    *((int *)t25) = t23;
    t26 = (t21 - t18);
    t19 = (t26 * t23);
    t19 = (t19 + 1);
    t25 = (t24 + 12U);
    *((unsigned int *)t25) = t19;

LAB1:    return t0;
LAB3:    *((char **)t8) = t3;
    goto LAB2;

LAB4:    t15 = (t1 + 1168U);
    t16 = *((char **)t15);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t16, 0U);
    t15 = (t2 + 0U);
    t17 = (t15 + 0U);
    *((int *)t17) = 0;
    t17 = (t15 + 4U);
    *((int *)t17) = 1;
    t17 = (t15 + 8U);
    *((int *)t17) = -1;
    t18 = (1 - 0);
    t19 = (t18 * -1);
    t19 = (t19 + 1);
    t17 = (t15 + 12U);
    *((unsigned int *)t17) = t19;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:;
}

char *ieee_p_3039841270_sub_3233416414_2334307252(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t7[24];
    char t20[16];
    char *t0;
    char *t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    int t18;
    unsigned int t19;
    int t21;
    char *t22;
    int t23;
    char *t24;
    char *t25;
    int t26;

LAB0:    t8 = (t7 + 4U);
    t9 = (t3 != 0);
    if (t9 == 1)
        goto LAB3;

LAB2:    t10 = (t7 + 12U);
    *((char **)t10) = t4;
    t11 = (t7 + 20U);
    *((int *)t11) = t5;
    t12 = (t4 + 12U);
    t13 = *((unsigned int *)t12);
    t14 = (t13 < 1);
    if (t14 != 0)
        goto LAB4;

LAB6:
LAB5:    t12 = ieee_p_3039841270_sub_3493185220_2334307252(t1, t20, t3, t4, t5);
    t15 = (t20 + 12U);
    t13 = *((unsigned int *)t15);
    t13 = (t13 * 1U);
    t0 = xsi_get_transient_memory(t13);
    memcpy(t0, t12, t13);
    t16 = (t20 + 0U);
    t18 = *((int *)t16);
    t17 = (t20 + 4U);
    t21 = *((int *)t17);
    t22 = (t20 + 8U);
    t23 = *((int *)t22);
    t24 = (t2 + 0U);
    t25 = (t24 + 0U);
    *((int *)t25) = t18;
    t25 = (t24 + 4U);
    *((int *)t25) = t21;
    t25 = (t24 + 8U);
    *((int *)t25) = t23;
    t26 = (t21 - t18);
    t19 = (t26 * t23);
    t19 = (t19 + 1);
    t25 = (t24 + 12U);
    *((unsigned int *)t25) = t19;

LAB1:    return t0;
LAB3:    *((char **)t8) = t3;
    goto LAB2;

LAB4:    t15 = (t1 + 1168U);
    t16 = *((char **)t15);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t16, 0U);
    t15 = (t2 + 0U);
    t17 = (t15 + 0U);
    *((int *)t17) = 0;
    t17 = (t15 + 4U);
    *((int *)t17) = 1;
    t17 = (t15 + 8U);
    *((int *)t17) = -1;
    t18 = (1 - 0);
    t19 = (t18 * -1);
    t19 = (t19 + 1);
    t17 = (t15 + 12U);
    *((unsigned int *)t17) = t19;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:;
}

char *ieee_p_3039841270_sub_1252749492_2334307252(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t7[24];
    char t20[16];
    char *t0;
    char *t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    int t18;
    unsigned int t19;
    int t21;
    char *t22;
    int t23;
    char *t24;
    char *t25;
    int t26;

LAB0:    t8 = (t7 + 4U);
    t9 = (t3 != 0);
    if (t9 == 1)
        goto LAB3;

LAB2:    t10 = (t7 + 12U);
    *((char **)t10) = t4;
    t11 = (t7 + 20U);
    *((int *)t11) = t5;
    t12 = (t4 + 12U);
    t13 = *((unsigned int *)t12);
    t14 = (t13 < 1);
    if (t14 != 0)
        goto LAB4;

LAB6:
LAB5:    t12 = ieee_p_3039841270_sub_3493178686_2334307252(t1, t20, t3, t4, t5);
    t15 = (t20 + 12U);
    t13 = *((unsigned int *)t15);
    t13 = (t13 * 1U);
    t0 = xsi_get_transient_memory(t13);
    memcpy(t0, t12, t13);
    t16 = (t20 + 0U);
    t18 = *((int *)t16);
    t17 = (t20 + 4U);
    t21 = *((int *)t17);
    t22 = (t20 + 8U);
    t23 = *((int *)t22);
    t24 = (t2 + 0U);
    t25 = (t24 + 0U);
    *((int *)t25) = t18;
    t25 = (t24 + 4U);
    *((int *)t25) = t21;
    t25 = (t24 + 8U);
    *((int *)t25) = t23;
    t26 = (t21 - t18);
    t19 = (t26 * t23);
    t19 = (t19 + 1);
    t25 = (t24 + 12U);
    *((unsigned int *)t25) = t19;

LAB1:    return t0;
LAB3:    *((char **)t8) = t3;
    goto LAB2;

LAB4:    t15 = (t1 + 1288U);
    t16 = *((char **)t15);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t16, 0U);
    t15 = (t2 + 0U);
    t17 = (t15 + 0U);
    *((int *)t17) = 0;
    t17 = (t15 + 4U);
    *((int *)t17) = 1;
    t17 = (t15 + 8U);
    *((int *)t17) = -1;
    t18 = (1 - 0);
    t19 = (t18 * -1);
    t19 = (t19 + 1);
    t17 = (t15 + 12U);
    *((unsigned int *)t17) = t19;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:;
}

char *ieee_p_3039841270_sub_220036327_2334307252(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t7[24];
    char t20[16];
    char *t0;
    char *t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    int t18;
    unsigned int t19;
    int t21;
    char *t22;
    int t23;
    char *t24;
    char *t25;
    int t26;

LAB0:    t8 = (t7 + 4U);
    t9 = (t3 != 0);
    if (t9 == 1)
        goto LAB3;

LAB2:    t10 = (t7 + 12U);
    *((char **)t10) = t4;
    t11 = (t7 + 20U);
    *((int *)t11) = t5;
    t12 = (t4 + 12U);
    t13 = *((unsigned int *)t12);
    t14 = (t13 < 1);
    if (t14 != 0)
        goto LAB4;

LAB6:
LAB5:    t12 = ieee_p_3039841270_sub_3493185220_2334307252(t1, t20, t3, t4, t5);
    t15 = (t20 + 12U);
    t13 = *((unsigned int *)t15);
    t13 = (t13 * 1U);
    t0 = xsi_get_transient_memory(t13);
    memcpy(t0, t12, t13);
    t16 = (t20 + 0U);
    t18 = *((int *)t16);
    t17 = (t20 + 4U);
    t21 = *((int *)t17);
    t22 = (t20 + 8U);
    t23 = *((int *)t22);
    t24 = (t2 + 0U);
    t25 = (t24 + 0U);
    *((int *)t25) = t18;
    t25 = (t24 + 4U);
    *((int *)t25) = t21;
    t25 = (t24 + 8U);
    *((int *)t25) = t23;
    t26 = (t21 - t18);
    t19 = (t26 * t23);
    t19 = (t19 + 1);
    t25 = (t24 + 12U);
    *((unsigned int *)t25) = t19;

LAB1:    return t0;
LAB3:    *((char **)t8) = t3;
    goto LAB2;

LAB4:    t15 = (t1 + 1288U);
    t16 = *((char **)t15);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t16, 0U);
    t15 = (t2 + 0U);
    t17 = (t15 + 0U);
    *((int *)t17) = 0;
    t17 = (t15 + 4U);
    *((int *)t17) = 1;
    t17 = (t15 + 8U);
    *((int *)t17) = -1;
    t18 = (1 - 0);
    t19 = (t18 * -1);
    t19 = (t19 + 1);
    t17 = (t15 + 12U);
    *((unsigned int *)t17) = t19;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:;
}

char *ieee_p_3039841270_sub_3403178725_2334307252(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t6[128];
    char t7[24];
    char t13[16];
    char t32[16];
    char *t0;
    char *t8;
    unsigned int t9;
    int t10;
    int t11;
    unsigned int t12;
    char *t14;
    unsigned int t15;
    int t16;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned char t28;
    char *t29;
    char *t30;
    unsigned char t31;
    char *t33;
    char *t34;
    char *t35;
    int t36;
    char *t37;
    int t38;
    char *t39;
    int t40;
    char *t41;
    char *t42;
    int t43;
    unsigned int t44;

LAB0:    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = (t9 - 1);
    t11 = (0 - t10);
    t12 = (t11 * -1);
    t12 = (t12 + 1);
    t12 = (t12 * 1U);
    t14 = (t4 + 12U);
    t15 = *((unsigned int *)t14);
    t16 = (t15 - 1);
    t17 = (t13 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = t16;
    t18 = (t17 + 4U);
    *((int *)t18) = 0;
    t18 = (t17 + 8U);
    *((int *)t18) = -1;
    t19 = (0 - t16);
    t20 = (t19 * -1);
    t20 = (t20 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t20;
    t18 = (t6 + 4U);
    t21 = (t1 + 2880);
    t22 = (t18 + 88U);
    *((char **)t22) = t21;
    t23 = (char *)alloca(t12);
    t24 = (t18 + 56U);
    *((char **)t24) = t23;
    xsi_type_set_default_value(t21, t23, t13);
    t25 = (t18 + 64U);
    *((char **)t25) = t13;
    t26 = (t18 + 80U);
    *((unsigned int *)t26) = t12;
    t27 = (t7 + 4U);
    t28 = (t3 != 0);
    if (t28 == 1)
        goto LAB3;

LAB2:    t29 = (t7 + 12U);
    *((char **)t29) = t4;
    t30 = (t7 + 20U);
    *((int *)t30) = t5;
    t31 = (t5 >= 0);
    if (t31 != 0)
        goto LAB4;

LAB6:    t10 = (-(t5));
    t8 = ieee_p_3039841270_sub_1986385229_2334307252(t1, t32, t3, t4, t10);
    t14 = (t32 + 12U);
    t9 = *((unsigned int *)t14);
    t9 = (t9 * 1U);
    t0 = xsi_get_transient_memory(t9);
    memcpy(t0, t8, t9);
    t17 = (t32 + 0U);
    t11 = *((int *)t17);
    t21 = (t32 + 4U);
    t16 = *((int *)t21);
    t22 = (t32 + 8U);
    t19 = *((int *)t22);
    t24 = (t2 + 0U);
    t25 = (t24 + 0U);
    *((int *)t25) = t11;
    t25 = (t24 + 4U);
    *((int *)t25) = t16;
    t25 = (t24 + 8U);
    *((int *)t25) = t19;
    t36 = (t16 - t11);
    t12 = (t36 * t19);
    t12 = (t12 + 1);
    t25 = (t24 + 12U);
    *((unsigned int *)t25) = t12;

LAB1:    return t0;
LAB3:    *((char **)t27) = t3;
    goto LAB2;

LAB4:    t33 = ieee_p_3039841270_sub_2926835514_2334307252(t1, t32, t3, t4, t5);
    t34 = (t32 + 12U);
    t20 = *((unsigned int *)t34);
    t20 = (t20 * 1U);
    t0 = xsi_get_transient_memory(t20);
    memcpy(t0, t33, t20);
    t35 = (t32 + 0U);
    t36 = *((int *)t35);
    t37 = (t32 + 4U);
    t38 = *((int *)t37);
    t39 = (t32 + 8U);
    t40 = *((int *)t39);
    t41 = (t2 + 0U);
    t42 = (t41 + 0U);
    *((int *)t42) = t36;
    t42 = (t41 + 4U);
    *((int *)t42) = t38;
    t42 = (t41 + 8U);
    *((int *)t42) = t40;
    t43 = (t38 - t36);
    t44 = (t43 * t40);
    t44 = (t44 + 1);
    t42 = (t41 + 12U);
    *((unsigned int *)t42) = t44;
    goto LAB1;

LAB5:    xsi_error(ng3);
    t0 = 0;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:    goto LAB5;

}

char *ieee_p_3039841270_sub_206912958_2334307252(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t6[128];
    char t7[24];
    char t13[16];
    char t32[16];
    char *t0;
    char *t8;
    unsigned int t9;
    int t10;
    int t11;
    unsigned int t12;
    char *t14;
    unsigned int t15;
    int t16;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned char t28;
    char *t29;
    char *t30;
    unsigned char t31;
    char *t33;
    char *t34;
    char *t35;
    int t36;
    char *t37;
    int t38;
    char *t39;
    int t40;
    char *t41;
    char *t42;
    int t43;
    unsigned int t44;

LAB0:    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = (t9 - 1);
    t11 = (0 - t10);
    t12 = (t11 * -1);
    t12 = (t12 + 1);
    t12 = (t12 * 1U);
    t14 = (t4 + 12U);
    t15 = *((unsigned int *)t14);
    t16 = (t15 - 1);
    t17 = (t13 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = t16;
    t18 = (t17 + 4U);
    *((int *)t18) = 0;
    t18 = (t17 + 8U);
    *((int *)t18) = -1;
    t19 = (0 - t16);
    t20 = (t19 * -1);
    t20 = (t20 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t20;
    t18 = (t6 + 4U);
    t21 = (t1 + 2992);
    t22 = (t18 + 88U);
    *((char **)t22) = t21;
    t23 = (char *)alloca(t12);
    t24 = (t18 + 56U);
    *((char **)t24) = t23;
    xsi_type_set_default_value(t21, t23, t13);
    t25 = (t18 + 64U);
    *((char **)t25) = t13;
    t26 = (t18 + 80U);
    *((unsigned int *)t26) = t12;
    t27 = (t7 + 4U);
    t28 = (t3 != 0);
    if (t28 == 1)
        goto LAB3;

LAB2:    t29 = (t7 + 12U);
    *((char **)t29) = t4;
    t30 = (t7 + 20U);
    *((int *)t30) = t5;
    t31 = (t5 >= 0);
    if (t31 != 0)
        goto LAB4;

LAB6:    t10 = (-(t5));
    t8 = ieee_p_3039841270_sub_1986385229_2334307252(t1, t32, t3, t4, t10);
    t14 = (t32 + 12U);
    t9 = *((unsigned int *)t14);
    t9 = (t9 * 1U);
    t0 = xsi_get_transient_memory(t9);
    memcpy(t0, t8, t9);
    t17 = (t32 + 0U);
    t11 = *((int *)t17);
    t21 = (t32 + 4U);
    t16 = *((int *)t21);
    t22 = (t32 + 8U);
    t19 = *((int *)t22);
    t24 = (t2 + 0U);
    t25 = (t24 + 0U);
    *((int *)t25) = t11;
    t25 = (t24 + 4U);
    *((int *)t25) = t16;
    t25 = (t24 + 8U);
    *((int *)t25) = t19;
    t36 = (t16 - t11);
    t12 = (t36 * t19);
    t12 = (t12 + 1);
    t25 = (t24 + 12U);
    *((unsigned int *)t25) = t12;

LAB1:    return t0;
LAB3:    *((char **)t27) = t3;
    goto LAB2;

LAB4:    t33 = ieee_p_3039841270_sub_4208422723_2334307252(t1, t32, t3, t4, t5);
    t34 = (t32 + 12U);
    t20 = *((unsigned int *)t34);
    t20 = (t20 * 1U);
    t0 = xsi_get_transient_memory(t20);
    memcpy(t0, t33, t20);
    t35 = (t32 + 0U);
    t36 = *((int *)t35);
    t37 = (t32 + 4U);
    t38 = *((int *)t37);
    t39 = (t32 + 8U);
    t40 = *((int *)t39);
    t41 = (t2 + 0U);
    t42 = (t41 + 0U);
    *((int *)t42) = t36;
    t42 = (t41 + 4U);
    *((int *)t42) = t38;
    t42 = (t41 + 8U);
    *((int *)t42) = t40;
    t43 = (t38 - t36);
    t44 = (t43 * t40);
    t44 = (t44 + 1);
    t42 = (t41 + 12U);
    *((unsigned int *)t42) = t44;
    goto LAB1;

LAB5:    xsi_error(ng3);
    t0 = 0;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:    goto LAB5;

}

char *ieee_p_3039841270_sub_3410294251_2334307252(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t6[128];
    char t7[24];
    char t13[16];
    char t32[16];
    char *t0;
    char *t8;
    unsigned int t9;
    int t10;
    int t11;
    unsigned int t12;
    char *t14;
    unsigned int t15;
    int t16;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned char t28;
    char *t29;
    char *t30;
    unsigned char t31;
    char *t33;
    char *t34;
    char *t35;
    int t36;
    char *t37;
    int t38;
    char *t39;
    int t40;
    char *t41;
    char *t42;
    int t43;
    unsigned int t44;

LAB0:    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = (t9 - 1);
    t11 = (0 - t10);
    t12 = (t11 * -1);
    t12 = (t12 + 1);
    t12 = (t12 * 1U);
    t14 = (t4 + 12U);
    t15 = *((unsigned int *)t14);
    t16 = (t15 - 1);
    t17 = (t13 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = t16;
    t18 = (t17 + 4U);
    *((int *)t18) = 0;
    t18 = (t17 + 8U);
    *((int *)t18) = -1;
    t19 = (0 - t16);
    t20 = (t19 * -1);
    t20 = (t20 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t20;
    t18 = (t6 + 4U);
    t21 = (t1 + 2880);
    t22 = (t18 + 88U);
    *((char **)t22) = t21;
    t23 = (char *)alloca(t12);
    t24 = (t18 + 56U);
    *((char **)t24) = t23;
    xsi_type_set_default_value(t21, t23, t13);
    t25 = (t18 + 64U);
    *((char **)t25) = t13;
    t26 = (t18 + 80U);
    *((unsigned int *)t26) = t12;
    t27 = (t7 + 4U);
    t28 = (t3 != 0);
    if (t28 == 1)
        goto LAB3;

LAB2:    t29 = (t7 + 12U);
    *((char **)t29) = t4;
    t30 = (t7 + 20U);
    *((int *)t30) = t5;
    t31 = (t5 >= 0);
    if (t31 != 0)
        goto LAB4;

LAB6:    t10 = (-(t5));
    t8 = ieee_p_3039841270_sub_2926835514_2334307252(t1, t32, t3, t4, t10);
    t14 = (t32 + 12U);
    t9 = *((unsigned int *)t14);
    t9 = (t9 * 1U);
    t0 = xsi_get_transient_memory(t9);
    memcpy(t0, t8, t9);
    t17 = (t32 + 0U);
    t11 = *((int *)t17);
    t21 = (t32 + 4U);
    t16 = *((int *)t21);
    t22 = (t32 + 8U);
    t19 = *((int *)t22);
    t24 = (t2 + 0U);
    t25 = (t24 + 0U);
    *((int *)t25) = t11;
    t25 = (t24 + 4U);
    *((int *)t25) = t16;
    t25 = (t24 + 8U);
    *((int *)t25) = t19;
    t36 = (t16 - t11);
    t12 = (t36 * t19);
    t12 = (t12 + 1);
    t25 = (t24 + 12U);
    *((unsigned int *)t25) = t12;

LAB1:    return t0;
LAB3:    *((char **)t27) = t3;
    goto LAB2;

LAB4:    t33 = ieee_p_3039841270_sub_1986385229_2334307252(t1, t32, t3, t4, t5);
    t34 = (t32 + 12U);
    t20 = *((unsigned int *)t34);
    t20 = (t20 * 1U);
    t0 = xsi_get_transient_memory(t20);
    memcpy(t0, t33, t20);
    t35 = (t32 + 0U);
    t36 = *((int *)t35);
    t37 = (t32 + 4U);
    t38 = *((int *)t37);
    t39 = (t32 + 8U);
    t40 = *((int *)t39);
    t41 = (t2 + 0U);
    t42 = (t41 + 0U);
    *((int *)t42) = t36;
    t42 = (t41 + 4U);
    *((int *)t42) = t38;
    t42 = (t41 + 8U);
    *((int *)t42) = t40;
    t43 = (t38 - t36);
    t44 = (t43 * t40);
    t44 = (t44 + 1);
    t42 = (t41 + 12U);
    *((unsigned int *)t42) = t44;
    goto LAB1;

LAB5:    xsi_error(ng4);
    t0 = 0;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:    goto LAB5;

}

char *ieee_p_3039841270_sub_214028484_2334307252(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t6[128];
    char t7[24];
    char t13[16];
    char t32[16];
    char *t0;
    char *t8;
    unsigned int t9;
    int t10;
    int t11;
    unsigned int t12;
    char *t14;
    unsigned int t15;
    int t16;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned char t28;
    char *t29;
    char *t30;
    unsigned char t31;
    char *t33;
    char *t34;
    char *t35;
    int t36;
    char *t37;
    int t38;
    char *t39;
    int t40;
    char *t41;
    char *t42;
    int t43;
    unsigned int t44;

LAB0:    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = (t9 - 1);
    t11 = (0 - t10);
    t12 = (t11 * -1);
    t12 = (t12 + 1);
    t12 = (t12 * 1U);
    t14 = (t4 + 12U);
    t15 = *((unsigned int *)t14);
    t16 = (t15 - 1);
    t17 = (t13 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = t16;
    t18 = (t17 + 4U);
    *((int *)t18) = 0;
    t18 = (t17 + 8U);
    *((int *)t18) = -1;
    t19 = (0 - t16);
    t20 = (t19 * -1);
    t20 = (t20 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t20;
    t18 = (t6 + 4U);
    t21 = (t1 + 2992);
    t22 = (t18 + 88U);
    *((char **)t22) = t21;
    t23 = (char *)alloca(t12);
    t24 = (t18 + 56U);
    *((char **)t24) = t23;
    xsi_type_set_default_value(t21, t23, t13);
    t25 = (t18 + 64U);
    *((char **)t25) = t13;
    t26 = (t18 + 80U);
    *((unsigned int *)t26) = t12;
    t27 = (t7 + 4U);
    t28 = (t3 != 0);
    if (t28 == 1)
        goto LAB3;

LAB2:    t29 = (t7 + 12U);
    *((char **)t29) = t4;
    t30 = (t7 + 20U);
    *((int *)t30) = t5;
    t31 = (t5 >= 0);
    if (t31 != 0)
        goto LAB4;

LAB6:    t10 = (-(t5));
    t8 = ieee_p_3039841270_sub_4208422723_2334307252(t1, t32, t3, t4, t10);
    t14 = (t32 + 12U);
    t9 = *((unsigned int *)t14);
    t9 = (t9 * 1U);
    t0 = xsi_get_transient_memory(t9);
    memcpy(t0, t8, t9);
    t17 = (t32 + 0U);
    t11 = *((int *)t17);
    t21 = (t32 + 4U);
    t16 = *((int *)t21);
    t22 = (t32 + 8U);
    t19 = *((int *)t22);
    t24 = (t2 + 0U);
    t25 = (t24 + 0U);
    *((int *)t25) = t11;
    t25 = (t24 + 4U);
    *((int *)t25) = t16;
    t25 = (t24 + 8U);
    *((int *)t25) = t19;
    t36 = (t16 - t11);
    t12 = (t36 * t19);
    t12 = (t12 + 1);
    t25 = (t24 + 12U);
    *((unsigned int *)t25) = t12;

LAB1:    return t0;
LAB3:    *((char **)t27) = t3;
    goto LAB2;

LAB4:    t33 = ieee_p_3039841270_sub_1986385229_2334307252(t1, t32, t3, t4, t5);
    t34 = (t32 + 12U);
    t20 = *((unsigned int *)t34);
    t20 = (t20 * 1U);
    t0 = xsi_get_transient_memory(t20);
    memcpy(t0, t33, t20);
    t35 = (t32 + 0U);
    t36 = *((int *)t35);
    t37 = (t32 + 4U);
    t38 = *((int *)t37);
    t39 = (t32 + 8U);
    t40 = *((int *)t39);
    t41 = (t2 + 0U);
    t42 = (t41 + 0U);
    *((int *)t42) = t36;
    t42 = (t41 + 4U);
    *((int *)t42) = t38;
    t42 = (t41 + 8U);
    *((int *)t42) = t40;
    t43 = (t38 - t36);
    t44 = (t43 * t40);
    t44 = (t44 + 1);
    t42 = (t41 + 12U);
    *((unsigned int *)t42) = t44;
    goto LAB1;

LAB5:    xsi_error(ng4);
    t0 = 0;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:    goto LAB5;

}

char *ieee_p_3039841270_sub_3367601095_2334307252(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t6[128];
    char t7[24];
    char t13[16];
    char t32[16];
    char *t0;
    char *t8;
    unsigned int t9;
    int t10;
    int t11;
    unsigned int t12;
    char *t14;
    unsigned int t15;
    int t16;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned char t28;
    char *t29;
    char *t30;
    unsigned char t31;
    char *t33;
    char *t34;
    char *t35;
    int t36;
    char *t37;
    int t38;
    char *t39;
    int t40;
    char *t41;
    char *t42;
    int t43;
    unsigned int t44;

LAB0:    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = (t9 - 1);
    t11 = (0 - t10);
    t12 = (t11 * -1);
    t12 = (t12 + 1);
    t12 = (t12 * 1U);
    t14 = (t4 + 12U);
    t15 = *((unsigned int *)t14);
    t16 = (t15 - 1);
    t17 = (t13 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = t16;
    t18 = (t17 + 4U);
    *((int *)t18) = 0;
    t18 = (t17 + 8U);
    *((int *)t18) = -1;
    t19 = (0 - t16);
    t20 = (t19 * -1);
    t20 = (t20 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t20;
    t18 = (t6 + 4U);
    t21 = (t1 + 2880);
    t22 = (t18 + 88U);
    *((char **)t22) = t21;
    t23 = (char *)alloca(t12);
    t24 = (t18 + 56U);
    *((char **)t24) = t23;
    xsi_type_set_default_value(t21, t23, t13);
    t25 = (t18 + 64U);
    *((char **)t25) = t13;
    t26 = (t18 + 80U);
    *((unsigned int *)t26) = t12;
    t27 = (t7 + 4U);
    t28 = (t3 != 0);
    if (t28 == 1)
        goto LAB3;

LAB2:    t29 = (t7 + 12U);
    *((char **)t29) = t4;
    t30 = (t7 + 20U);
    *((int *)t30) = t5;
    t31 = (t5 >= 0);
    if (t31 != 0)
        goto LAB4;

LAB6:    t10 = (-(t5));
    t8 = ieee_p_3039841270_sub_3233416414_2334307252(t1, t32, t3, t4, t10);
    t14 = (t32 + 12U);
    t9 = *((unsigned int *)t14);
    t9 = (t9 * 1U);
    t0 = xsi_get_transient_memory(t9);
    memcpy(t0, t8, t9);
    t17 = (t32 + 0U);
    t11 = *((int *)t17);
    t21 = (t32 + 4U);
    t16 = *((int *)t21);
    t22 = (t32 + 8U);
    t19 = *((int *)t22);
    t24 = (t2 + 0U);
    t25 = (t24 + 0U);
    *((int *)t25) = t11;
    t25 = (t24 + 4U);
    *((int *)t25) = t16;
    t25 = (t24 + 8U);
    *((int *)t25) = t19;
    t36 = (t16 - t11);
    t12 = (t36 * t19);
    t12 = (t12 + 1);
    t25 = (t24 + 12U);
    *((unsigned int *)t25) = t12;

LAB1:    return t0;
LAB3:    *((char **)t27) = t3;
    goto LAB2;

LAB4:    t33 = ieee_p_3039841270_sub_4266129579_2334307252(t1, t32, t3, t4, t5);
    t34 = (t32 + 12U);
    t20 = *((unsigned int *)t34);
    t20 = (t20 * 1U);
    t0 = xsi_get_transient_memory(t20);
    memcpy(t0, t33, t20);
    t35 = (t32 + 0U);
    t36 = *((int *)t35);
    t37 = (t32 + 4U);
    t38 = *((int *)t37);
    t39 = (t32 + 8U);
    t40 = *((int *)t39);
    t41 = (t2 + 0U);
    t42 = (t41 + 0U);
    *((int *)t42) = t36;
    t42 = (t41 + 4U);
    *((int *)t42) = t38;
    t42 = (t41 + 8U);
    *((int *)t42) = t40;
    t43 = (t38 - t36);
    t44 = (t43 * t40);
    t44 = (t44 + 1);
    t42 = (t41 + 12U);
    *((unsigned int *)t42) = t44;
    goto LAB1;

LAB5:    xsi_error(ng5);
    t0 = 0;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:    goto LAB5;

}

char *ieee_p_3039841270_sub_171335328_2334307252(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t6[128];
    char t7[24];
    char t13[16];
    char t32[16];
    char *t0;
    char *t8;
    unsigned int t9;
    int t10;
    int t11;
    unsigned int t12;
    char *t14;
    unsigned int t15;
    int t16;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned char t28;
    char *t29;
    char *t30;
    unsigned char t31;
    char *t33;
    char *t34;
    char *t35;
    int t36;
    char *t37;
    int t38;
    char *t39;
    int t40;
    char *t41;
    char *t42;
    int t43;
    unsigned int t44;

LAB0:    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = (t9 - 1);
    t11 = (0 - t10);
    t12 = (t11 * -1);
    t12 = (t12 + 1);
    t12 = (t12 * 1U);
    t14 = (t4 + 12U);
    t15 = *((unsigned int *)t14);
    t16 = (t15 - 1);
    t17 = (t13 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = t16;
    t18 = (t17 + 4U);
    *((int *)t18) = 0;
    t18 = (t17 + 8U);
    *((int *)t18) = -1;
    t19 = (0 - t16);
    t20 = (t19 * -1);
    t20 = (t20 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t20;
    t18 = (t6 + 4U);
    t21 = (t1 + 2992);
    t22 = (t18 + 88U);
    *((char **)t22) = t21;
    t23 = (char *)alloca(t12);
    t24 = (t18 + 56U);
    *((char **)t24) = t23;
    xsi_type_set_default_value(t21, t23, t13);
    t25 = (t18 + 64U);
    *((char **)t25) = t13;
    t26 = (t18 + 80U);
    *((unsigned int *)t26) = t12;
    t27 = (t7 + 4U);
    t28 = (t3 != 0);
    if (t28 == 1)
        goto LAB3;

LAB2:    t29 = (t7 + 12U);
    *((char **)t29) = t4;
    t30 = (t7 + 20U);
    *((int *)t30) = t5;
    t31 = (t5 >= 0);
    if (t31 != 0)
        goto LAB4;

LAB6:    t10 = (-(t5));
    t8 = ieee_p_3039841270_sub_220036327_2334307252(t1, t32, t3, t4, t10);
    t14 = (t32 + 12U);
    t9 = *((unsigned int *)t14);
    t9 = (t9 * 1U);
    t0 = xsi_get_transient_memory(t9);
    memcpy(t0, t8, t9);
    t17 = (t32 + 0U);
    t11 = *((int *)t17);
    t21 = (t32 + 4U);
    t16 = *((int *)t21);
    t22 = (t32 + 8U);
    t19 = *((int *)t22);
    t24 = (t2 + 0U);
    t25 = (t24 + 0U);
    *((int *)t25) = t11;
    t25 = (t24 + 4U);
    *((int *)t25) = t16;
    t25 = (t24 + 8U);
    *((int *)t25) = t19;
    t36 = (t16 - t11);
    t12 = (t36 * t19);
    t12 = (t12 + 1);
    t25 = (t24 + 12U);
    *((unsigned int *)t25) = t12;

LAB1:    return t0;
LAB3:    *((char **)t27) = t3;
    goto LAB2;

LAB4:    t33 = ieee_p_3039841270_sub_1252749492_2334307252(t1, t32, t3, t4, t5);
    t34 = (t32 + 12U);
    t20 = *((unsigned int *)t34);
    t20 = (t20 * 1U);
    t0 = xsi_get_transient_memory(t20);
    memcpy(t0, t33, t20);
    t35 = (t32 + 0U);
    t36 = *((int *)t35);
    t37 = (t32 + 4U);
    t38 = *((int *)t37);
    t39 = (t32 + 8U);
    t40 = *((int *)t39);
    t41 = (t2 + 0U);
    t42 = (t41 + 0U);
    *((int *)t42) = t36;
    t42 = (t41 + 4U);
    *((int *)t42) = t38;
    t42 = (t41 + 8U);
    *((int *)t42) = t40;
    t43 = (t38 - t36);
    t44 = (t43 * t40);
    t44 = (t44 + 1);
    t42 = (t41 + 12U);
    *((unsigned int *)t42) = t44;
    goto LAB1;

LAB5:    xsi_error(ng5);
    t0 = 0;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:    goto LAB5;

}

char *ieee_p_3039841270_sub_3367816717_2334307252(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t6[128];
    char t7[24];
    char t13[16];
    char t32[16];
    char *t0;
    char *t8;
    unsigned int t9;
    int t10;
    int t11;
    unsigned int t12;
    char *t14;
    unsigned int t15;
    int t16;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned char t28;
    char *t29;
    char *t30;
    unsigned char t31;
    char *t33;
    char *t34;
    char *t35;
    int t36;
    char *t37;
    int t38;
    char *t39;
    int t40;
    char *t41;
    char *t42;
    int t43;
    unsigned int t44;

LAB0:    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = (t9 - 1);
    t11 = (0 - t10);
    t12 = (t11 * -1);
    t12 = (t12 + 1);
    t12 = (t12 * 1U);
    t14 = (t4 + 12U);
    t15 = *((unsigned int *)t14);
    t16 = (t15 - 1);
    t17 = (t13 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = t16;
    t18 = (t17 + 4U);
    *((int *)t18) = 0;
    t18 = (t17 + 8U);
    *((int *)t18) = -1;
    t19 = (0 - t16);
    t20 = (t19 * -1);
    t20 = (t20 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t20;
    t18 = (t6 + 4U);
    t21 = (t1 + 2880);
    t22 = (t18 + 88U);
    *((char **)t22) = t21;
    t23 = (char *)alloca(t12);
    t24 = (t18 + 56U);
    *((char **)t24) = t23;
    xsi_type_set_default_value(t21, t23, t13);
    t25 = (t18 + 64U);
    *((char **)t25) = t13;
    t26 = (t18 + 80U);
    *((unsigned int *)t26) = t12;
    t27 = (t7 + 4U);
    t28 = (t3 != 0);
    if (t28 == 1)
        goto LAB3;

LAB2:    t29 = (t7 + 12U);
    *((char **)t29) = t4;
    t30 = (t7 + 20U);
    *((int *)t30) = t5;
    t31 = (t5 >= 0);
    if (t31 != 0)
        goto LAB4;

LAB6:    t10 = (-(t5));
    t8 = ieee_p_3039841270_sub_4266129579_2334307252(t1, t32, t3, t4, t10);
    t14 = (t32 + 12U);
    t9 = *((unsigned int *)t14);
    t9 = (t9 * 1U);
    t0 = xsi_get_transient_memory(t9);
    memcpy(t0, t8, t9);
    t17 = (t32 + 0U);
    t11 = *((int *)t17);
    t21 = (t32 + 4U);
    t16 = *((int *)t21);
    t22 = (t32 + 8U);
    t19 = *((int *)t22);
    t24 = (t2 + 0U);
    t25 = (t24 + 0U);
    *((int *)t25) = t11;
    t25 = (t24 + 4U);
    *((int *)t25) = t16;
    t25 = (t24 + 8U);
    *((int *)t25) = t19;
    t36 = (t16 - t11);
    t12 = (t36 * t19);
    t12 = (t12 + 1);
    t25 = (t24 + 12U);
    *((unsigned int *)t25) = t12;

LAB1:    return t0;
LAB3:    *((char **)t27) = t3;
    goto LAB2;

LAB4:    t33 = ieee_p_3039841270_sub_3233416414_2334307252(t1, t32, t3, t4, t5);
    t34 = (t32 + 12U);
    t20 = *((unsigned int *)t34);
    t20 = (t20 * 1U);
    t0 = xsi_get_transient_memory(t20);
    memcpy(t0, t33, t20);
    t35 = (t32 + 0U);
    t36 = *((int *)t35);
    t37 = (t32 + 4U);
    t38 = *((int *)t37);
    t39 = (t32 + 8U);
    t40 = *((int *)t39);
    t41 = (t2 + 0U);
    t42 = (t41 + 0U);
    *((int *)t42) = t36;
    t42 = (t41 + 4U);
    *((int *)t42) = t38;
    t42 = (t41 + 8U);
    *((int *)t42) = t40;
    t43 = (t38 - t36);
    t44 = (t43 * t40);
    t44 = (t44 + 1);
    t42 = (t41 + 12U);
    *((unsigned int *)t42) = t44;
    goto LAB1;

LAB5:    xsi_error(ng6);
    t0 = 0;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:    goto LAB5;

}

char *ieee_p_3039841270_sub_171550950_2334307252(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t6[128];
    char t7[24];
    char t13[16];
    char t32[16];
    char *t0;
    char *t8;
    unsigned int t9;
    int t10;
    int t11;
    unsigned int t12;
    char *t14;
    unsigned int t15;
    int t16;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned char t28;
    char *t29;
    char *t30;
    unsigned char t31;
    char *t33;
    char *t34;
    char *t35;
    int t36;
    char *t37;
    int t38;
    char *t39;
    int t40;
    char *t41;
    char *t42;
    int t43;
    unsigned int t44;

LAB0:    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = (t9 - 1);
    t11 = (0 - t10);
    t12 = (t11 * -1);
    t12 = (t12 + 1);
    t12 = (t12 * 1U);
    t14 = (t4 + 12U);
    t15 = *((unsigned int *)t14);
    t16 = (t15 - 1);
    t17 = (t13 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = t16;
    t18 = (t17 + 4U);
    *((int *)t18) = 0;
    t18 = (t17 + 8U);
    *((int *)t18) = -1;
    t19 = (0 - t16);
    t20 = (t19 * -1);
    t20 = (t20 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t20;
    t18 = (t6 + 4U);
    t21 = (t1 + 2992);
    t22 = (t18 + 88U);
    *((char **)t22) = t21;
    t23 = (char *)alloca(t12);
    t24 = (t18 + 56U);
    *((char **)t24) = t23;
    xsi_type_set_default_value(t21, t23, t13);
    t25 = (t18 + 64U);
    *((char **)t25) = t13;
    t26 = (t18 + 80U);
    *((unsigned int *)t26) = t12;
    t27 = (t7 + 4U);
    t28 = (t3 != 0);
    if (t28 == 1)
        goto LAB3;

LAB2:    t29 = (t7 + 12U);
    *((char **)t29) = t4;
    t30 = (t7 + 20U);
    *((int *)t30) = t5;
    t31 = (t5 >= 0);
    if (t31 != 0)
        goto LAB4;

LAB6:    t10 = (-(t5));
    t8 = ieee_p_3039841270_sub_1252749492_2334307252(t1, t32, t3, t4, t10);
    t14 = (t32 + 12U);
    t9 = *((unsigned int *)t14);
    t9 = (t9 * 1U);
    t0 = xsi_get_transient_memory(t9);
    memcpy(t0, t8, t9);
    t17 = (t32 + 0U);
    t11 = *((int *)t17);
    t21 = (t32 + 4U);
    t16 = *((int *)t21);
    t22 = (t32 + 8U);
    t19 = *((int *)t22);
    t24 = (t2 + 0U);
    t25 = (t24 + 0U);
    *((int *)t25) = t11;
    t25 = (t24 + 4U);
    *((int *)t25) = t16;
    t25 = (t24 + 8U);
    *((int *)t25) = t19;
    t36 = (t16 - t11);
    t12 = (t36 * t19);
    t12 = (t12 + 1);
    t25 = (t24 + 12U);
    *((unsigned int *)t25) = t12;

LAB1:    return t0;
LAB3:    *((char **)t27) = t3;
    goto LAB2;

LAB4:    t33 = ieee_p_3039841270_sub_220036327_2334307252(t1, t32, t3, t4, t5);
    t34 = (t32 + 12U);
    t20 = *((unsigned int *)t34);
    t20 = (t20 * 1U);
    t0 = xsi_get_transient_memory(t20);
    memcpy(t0, t33, t20);
    t35 = (t32 + 0U);
    t36 = *((int *)t35);
    t37 = (t32 + 4U);
    t38 = *((int *)t37);
    t39 = (t32 + 8U);
    t40 = *((int *)t39);
    t41 = (t2 + 0U);
    t42 = (t41 + 0U);
    *((int *)t42) = t36;
    t42 = (t41 + 4U);
    *((int *)t42) = t38;
    t42 = (t41 + 8U);
    *((int *)t42) = t40;
    t43 = (t38 - t36);
    t44 = (t43 * t40);
    t44 = (t44 + 1);
    t42 = (t41 + 12U);
    *((unsigned int *)t42) = t44;
    goto LAB1;

LAB5:    xsi_error(ng6);
    t0 = 0;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:    goto LAB5;

}

int ieee_p_3039841270_sub_2023044182_2334307252(char *t1, char *t2, char *t3)
{
    char t4[248];
    char t5[24];
    char t12[8];
    char t15[16];
    char t24[8];
    int t0;
    char *t6;
    unsigned int t7;
    int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    int t18;
    char *t19;
    int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t25;
    char *t26;
    char *t27;
    unsigned char t28;
    char *t29;
    char *t30;
    unsigned char t31;
    char *t32;
    char *t33;
    unsigned char t34;
    int t36;
    int t37;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    unsigned int t43;

LAB0:    t6 = (t3 + 12U);
    t7 = *((unsigned int *)t6);
    t8 = (t7 - 1);
    t9 = (t4 + 4U);
    t10 = ((STD_STANDARD) + 384);
    t11 = (t9 + 88U);
    *((char **)t11) = t10;
    t13 = (t9 + 56U);
    *((char **)t13) = t12;
    *((int *)t12) = t8;
    t14 = (t9 + 80U);
    *((unsigned int *)t14) = 4U;
    t16 = (t9 + 56U);
    t17 = *((char **)t16);
    t18 = *((int *)t17);
    t16 = (t15 + 0U);
    t19 = (t16 + 0U);
    *((int *)t19) = t18;
    t19 = (t16 + 4U);
    *((int *)t19) = 0;
    t19 = (t16 + 8U);
    *((int *)t19) = -1;
    t20 = (0 - t18);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t19 = (t16 + 12U);
    *((unsigned int *)t19) = t21;
    t19 = (t4 + 124U);
    t22 = ((STD_STANDARD) + 832);
    t23 = (t19 + 88U);
    *((char **)t23) = t22;
    t25 = (t19 + 56U);
    *((char **)t25) = t24;
    *((int *)t24) = 0;
    t26 = (t19 + 80U);
    *((unsigned int *)t26) = 4U;
    t27 = (t5 + 4U);
    t28 = (t2 != 0);
    if (t28 == 1)
        goto LAB3;

LAB2:    t29 = (t5 + 12U);
    *((char **)t29) = t3;
    t30 = (t3 + 12U);
    t21 = *((unsigned int *)t30);
    t31 = (t21 < 1);
    if (t31 != 0)
        goto LAB4;

LAB6:
LAB5:    t6 = (t15 + 8U);
    t8 = *((int *)t6);
    t10 = (t15 + 4U);
    t18 = *((int *)t10);
    t11 = (t15 + 0U);
    t20 = *((int *)t11);
    t36 = t20;
    t37 = t18;

LAB10:    t38 = (t37 * t8);
    t39 = (t36 * t8);
    if (t39 <= t38)
        goto LAB11;

LAB13:    t6 = (t19 + 56U);
    t10 = *((char **)t6);
    t8 = *((int *)t10);
    t0 = t8;

LAB1:    return t0;
LAB3:    *((char **)t27) = t2;
    goto LAB2;

LAB4:    t32 = (t1 + 1408U);
    t33 = *((char **)t32);
    t34 = *((unsigned char *)t33);
    if (t34 == 0)
        goto LAB7;

LAB8:    t0 = 0;
    goto LAB1;

LAB7:    t32 = (t1 + 6964);
    xsi_report(t32, 50U, (unsigned char)1);
    goto LAB8;

LAB9:    goto LAB5;

LAB11:    t13 = (t19 + 56U);
    t14 = *((char **)t13);
    t40 = *((int *)t14);
    t13 = (t19 + 56U);
    t16 = *((char **)t13);
    t41 = *((int *)t16);
    t42 = (t40 + t41);
    t13 = (t19 + 56U);
    t17 = *((char **)t13);
    t13 = (t17 + 0);
    *((int *)t13) = t42;
    t6 = (t2 + 0);
    t10 = (t15 + 0U);
    t18 = *((int *)t10);
    t11 = (t15 + 8U);
    t20 = *((int *)t11);
    t38 = (t36 - t18);
    t7 = (t38 * t20);
    t21 = (1U * t7);
    t43 = (0 + t21);
    t13 = (t6 + t43);
    t28 = *((unsigned char *)t13);
    t31 = (t28 == (unsigned char)1);
    if (t31 != 0)
        goto LAB14;

LAB16:
LAB15:
LAB12:    if (t36 == t37)
        goto LAB13;

LAB17:    t18 = (t36 + t8);
    t36 = t18;
    goto LAB10;

LAB14:    t14 = (t19 + 56U);
    t16 = *((char **)t14);
    t39 = *((int *)t16);
    t40 = (t39 + 1);
    t14 = (t19 + 56U);
    t17 = *((char **)t14);
    t14 = (t17 + 0);
    *((int *)t14) = t40;
    goto LAB15;

LAB18:;
}

int ieee_p_3039841270_sub_3185572354_2334307252(char *t1, char *t2, char *t3)
{
    char t4[128];
    char t5[24];
    char t9[8];
    char t29[16];
    char t30[16];
    int t0;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    unsigned char t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned char t17;
    char *t18;
    char *t19;
    unsigned char t20;
    int t22;
    int t23;
    int t24;
    int t25;
    unsigned int t26;
    unsigned int t27;
    int t28;

LAB0:    t6 = (t4 + 4U);
    t7 = ((STD_STANDARD) + 384);
    t8 = (t6 + 88U);
    *((char **)t8) = t7;
    t10 = (t6 + 56U);
    *((char **)t10) = t9;
    xsi_type_set_default_value(t7, t9, 0);
    t11 = (t6 + 80U);
    *((unsigned int *)t11) = 4U;
    t12 = (t5 + 4U);
    t13 = (t2 != 0);
    if (t13 == 1)
        goto LAB3;

LAB2:    t14 = (t5 + 12U);
    *((char **)t14) = t3;
    t15 = (t3 + 12U);
    t16 = *((unsigned int *)t15);
    t17 = (t16 < 1);
    if (t17 != 0)
        goto LAB4;

LAB6:
LAB5:    t7 = (t3 + 0U);
    t22 = *((int *)t7);
    t8 = (t3 + 0U);
    t23 = *((int *)t8);
    t10 = (t3 + 8U);
    t24 = *((int *)t10);
    t25 = (t22 - t23);
    t16 = (t25 * t24);
    t26 = (1U * t16);
    t27 = (0 + t26);
    t11 = (t2 + t27);
    t13 = *((unsigned char *)t11);
    t17 = (t13 == (unsigned char)0);
    if (t17 != 0)
        goto LAB10;

LAB12:    t7 = ieee_p_3039841270_sub_3125426059_2334307252(t1, t30, t2, t3, 1);
    t8 = ieee_p_3039841270_sub_3118404406_2334307252(t1, t29, t7, t30);
    t22 = ieee_p_3039841270_sub_2023044182_2334307252(t1, t8, t29);
    t23 = (-(t22));
    t24 = (t23 - 1);
    t0 = t24;

LAB1:    return t0;
LAB3:    *((char **)t12) = t2;
    goto LAB2;

LAB4:    t18 = (t1 + 1408U);
    t19 = *((char **)t18);
    t20 = *((unsigned char *)t19);
    if (t20 == 0)
        goto LAB7;

LAB8:    t0 = 0;
    goto LAB1;

LAB7:    t18 = (t1 + 7014);
    xsi_report(t18, 50U, (unsigned char)1);
    goto LAB8;

LAB9:    goto LAB5;

LAB10:    t28 = ieee_p_3039841270_sub_2023044182_2334307252(t1, t2, t3);
    t0 = t28;
    goto LAB1;

LAB11:    xsi_error(ng7);
    t0 = 0;
    goto LAB1;

LAB13:    goto LAB11;

LAB14:    goto LAB11;

}

char *ieee_p_3039841270_sub_180853171_2334307252(char *t1, char *t2, int t3, int t4)
{
    char t5[248];
    char t6[16];
    char t10[16];
    char t25[8];
    char *t0;
    int t7;
    int t8;
    unsigned int t9;
    int t11;
    char *t12;
    char *t13;
    int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned char t30;
    char *t31;
    char *t32;
    char *t33;
    int t34;
    int t35;
    int t36;
    int t37;
    int t38;
    unsigned int t39;
    unsigned char t40;
    unsigned char t41;

LAB0:    t7 = (t4 - 1);
    t8 = (0 - t7);
    t9 = (t8 * -1);
    t9 = (t9 + 1);
    t9 = (t9 * 1U);
    t11 = (t4 - 1);
    t12 = (t10 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = t11;
    t13 = (t12 + 4U);
    *((int *)t13) = 0;
    t13 = (t12 + 8U);
    *((int *)t13) = -1;
    t14 = (0 - t11);
    t15 = (t14 * -1);
    t15 = (t15 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t15;
    t13 = (t5 + 4U);
    t16 = (t1 + 2880);
    t17 = (t13 + 88U);
    *((char **)t17) = t16;
    t18 = (char *)alloca(t9);
    t19 = (t13 + 56U);
    *((char **)t19) = t18;
    xsi_type_set_default_value(t16, t18, t10);
    t20 = (t13 + 64U);
    *((char **)t20) = t10;
    t21 = (t13 + 80U);
    *((unsigned int *)t21) = t9;
    t22 = (t5 + 124U);
    t23 = ((STD_STANDARD) + 832);
    t24 = (t22 + 88U);
    *((char **)t24) = t23;
    t26 = (t22 + 56U);
    *((char **)t26) = t25;
    *((int *)t25) = t3;
    t27 = (t22 + 80U);
    *((unsigned int *)t27) = 4U;
    t28 = (t6 + 4U);
    *((int *)t28) = t3;
    t29 = (t6 + 8U);
    *((int *)t29) = t4;
    t30 = (t4 < 1);
    if (t30 != 0)
        goto LAB2;

LAB4:
LAB3:    t12 = (t10 + 0U);
    t7 = *((int *)t12);
    t8 = 0;
    t11 = t7;

LAB6:    if (t8 <= t11)
        goto LAB7;

LAB9:    t12 = (t22 + 56U);
    t16 = *((char **)t12);
    t7 = *((int *)t16);
    t30 = (t7 == 0);
    t40 = (!(t30));
    if (t40 != 0)
        goto LAB14;

LAB16:
LAB15:    t12 = (t13 + 56U);
    t16 = *((char **)t12);
    t12 = (t10 + 12U);
    t9 = *((unsigned int *)t12);
    t9 = (t9 * 1U);
    t0 = xsi_get_transient_memory(t9);
    memcpy(t0, t16, t9);
    t17 = (t10 + 0U);
    t7 = *((int *)t17);
    t19 = (t10 + 4U);
    t8 = *((int *)t19);
    t20 = (t10 + 8U);
    t11 = *((int *)t20);
    t21 = (t2 + 0U);
    t23 = (t21 + 0U);
    *((int *)t23) = t7;
    t23 = (t21 + 4U);
    *((int *)t23) = t8;
    t23 = (t21 + 8U);
    *((int *)t23) = t11;
    t14 = (t8 - t7);
    t15 = (t14 * t11);
    t15 = (t15 + 1);
    t23 = (t21 + 12U);
    *((unsigned int *)t23) = t15;

LAB1:    return t0;
LAB2:    t31 = (t1 + 1168U);
    t32 = *((char **)t31);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t32, 0U);
    t31 = (t2 + 0U);
    t33 = (t31 + 0U);
    *((int *)t33) = 0;
    t33 = (t31 + 4U);
    *((int *)t33) = 1;
    t33 = (t31 + 8U);
    *((int *)t33) = -1;
    t34 = (1 - 0);
    t15 = (t34 * -1);
    t15 = (t15 + 1);
    t33 = (t31 + 12U);
    *((unsigned int *)t33) = t15;
    goto LAB1;

LAB5:    goto LAB3;

LAB7:    t16 = (t22 + 56U);
    t17 = *((char **)t16);
    t14 = *((int *)t17);
    t34 = xsi_vhdl_mod(t14, 2);
    t30 = (t34 == 0);
    if (t30 != 0)
        goto LAB10;

LAB12:    t12 = (t13 + 56U);
    t16 = *((char **)t12);
    t12 = (t10 + 0U);
    t7 = *((int *)t12);
    t17 = (t10 + 8U);
    t14 = *((int *)t17);
    t34 = (t8 - t7);
    t9 = (t34 * t14);
    t19 = (t10 + 4U);
    t35 = *((int *)t19);
    xsi_vhdl_check_range_of_index(t7, t35, t14, t8);
    t15 = (1U * t9);
    t39 = (0 + t15);
    t20 = (t16 + t39);
    *((unsigned char *)t20) = (unsigned char)1;

LAB11:    t12 = (t22 + 56U);
    t16 = *((char **)t12);
    t7 = *((int *)t16);
    t14 = (t7 / 2);
    t12 = (t22 + 56U);
    t17 = *((char **)t12);
    t12 = (t17 + 0);
    *((int *)t12) = t14;

LAB8:    if (t8 == t11)
        goto LAB9;

LAB13:    t7 = (t8 + 1);
    t8 = t7;
    goto LAB6;

LAB10:    t16 = (t13 + 56U);
    t19 = *((char **)t16);
    t16 = (t10 + 0U);
    t35 = *((int *)t16);
    t20 = (t10 + 8U);
    t36 = *((int *)t20);
    t37 = (t8 - t35);
    t9 = (t37 * t36);
    t21 = (t10 + 4U);
    t38 = *((int *)t21);
    xsi_vhdl_check_range_of_index(t35, t38, t36, t8);
    t15 = (1U * t9);
    t39 = (0 + t15);
    t23 = (t19 + t39);
    *((unsigned char *)t23) = (unsigned char)0;
    goto LAB11;

LAB14:    t12 = (t1 + 1408U);
    t17 = *((char **)t12);
    t41 = *((unsigned char *)t17);
    if (t41 == 0)
        goto LAB17;

LAB18:    goto LAB15;

LAB17:    t12 = (t1 + 7064);
    xsi_report(t12, 41U, (unsigned char)1);
    goto LAB18;

LAB19:;
}

char *ieee_p_3039841270_sub_2780269832_2334307252(char *t1, char *t2, int t3, int t4)
{
    char t5[368];
    char t6[16];
    char t10[16];
    char t25[8];
    char t31[8];
    char *t0;
    int t7;
    int t8;
    unsigned int t9;
    int t11;
    char *t12;
    char *t13;
    int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned char t36;
    char *t37;
    char *t38;
    char *t39;
    int t40;
    unsigned char t41;
    int t42;
    int t43;
    int t44;
    int t45;
    unsigned int t46;
    unsigned char t47;
    unsigned char t48;
    unsigned char t49;
    unsigned char t50;

LAB0:    t7 = (t4 - 1);
    t8 = (0 - t7);
    t9 = (t8 * -1);
    t9 = (t9 + 1);
    t9 = (t9 * 1U);
    t11 = (t4 - 1);
    t12 = (t10 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = t11;
    t13 = (t12 + 4U);
    *((int *)t13) = 0;
    t13 = (t12 + 8U);
    *((int *)t13) = -1;
    t14 = (0 - t11);
    t15 = (t14 * -1);
    t15 = (t15 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t15;
    t13 = (t5 + 4U);
    t16 = (t1 + 2992);
    t17 = (t13 + 88U);
    *((char **)t17) = t16;
    t18 = (char *)alloca(t9);
    t19 = (t13 + 56U);
    *((char **)t19) = t18;
    xsi_type_set_default_value(t16, t18, t10);
    t20 = (t13 + 64U);
    *((char **)t20) = t10;
    t21 = (t13 + 80U);
    *((unsigned int *)t21) = t9;
    t22 = (t5 + 124U);
    t23 = ((STD_STANDARD) + 96);
    t24 = (t22 + 88U);
    *((char **)t24) = t23;
    t26 = (t22 + 56U);
    *((char **)t26) = t25;
    *((unsigned char *)t25) = (unsigned char)0;
    t27 = (t22 + 80U);
    *((unsigned int *)t27) = 1U;
    t28 = (t5 + 244U);
    t29 = ((STD_STANDARD) + 384);
    t30 = (t28 + 88U);
    *((char **)t30) = t29;
    t32 = (t28 + 56U);
    *((char **)t32) = t31;
    *((int *)t31) = t3;
    t33 = (t28 + 80U);
    *((unsigned int *)t33) = 4U;
    t34 = (t6 + 4U);
    *((int *)t34) = t3;
    t35 = (t6 + 8U);
    *((int *)t35) = t4;
    t36 = (t4 < 1);
    if (t36 != 0)
        goto LAB2;

LAB4:
LAB3:    t36 = (t3 < 0);
    if (t36 != 0)
        goto LAB6;

LAB8:
LAB7:    t12 = (t10 + 0U);
    t7 = *((int *)t12);
    t8 = 0;
    t11 = t7;

LAB9:    if (t8 <= t11)
        goto LAB10;

LAB12:    t12 = (t28 + 56U);
    t16 = *((char **)t12);
    t7 = *((int *)t16);
    t41 = (t7 != 0);
    if (t41 == 1)
        goto LAB20;

LAB21:    t12 = (t22 + 56U);
    t17 = *((char **)t12);
    t47 = *((unsigned char *)t17);
    t12 = (t13 + 56U);
    t19 = *((char **)t12);
    t12 = (t10 + 0U);
    t8 = *((int *)t12);
    t20 = (t10 + 0U);
    t11 = *((int *)t20);
    t21 = (t10 + 8U);
    t14 = *((int *)t21);
    t40 = (t8 - t11);
    t9 = (t40 * t14);
    t15 = (1U * t9);
    t46 = (0 + t15);
    t23 = (t19 + t46);
    t48 = *((unsigned char *)t23);
    t49 = (t47 != t48);
    t36 = t49;

LAB22:    if (t36 != 0)
        goto LAB17;

LAB19:
LAB18:    t12 = (t13 + 56U);
    t16 = *((char **)t12);
    t12 = (t10 + 12U);
    t9 = *((unsigned int *)t12);
    t9 = (t9 * 1U);
    t0 = xsi_get_transient_memory(t9);
    memcpy(t0, t16, t9);
    t17 = (t10 + 0U);
    t7 = *((int *)t17);
    t19 = (t10 + 4U);
    t8 = *((int *)t19);
    t20 = (t10 + 8U);
    t11 = *((int *)t20);
    t21 = (t2 + 0U);
    t23 = (t21 + 0U);
    *((int *)t23) = t7;
    t23 = (t21 + 4U);
    *((int *)t23) = t8;
    t23 = (t21 + 8U);
    *((int *)t23) = t11;
    t14 = (t8 - t7);
    t15 = (t14 * t11);
    t15 = (t15 + 1);
    t23 = (t21 + 12U);
    *((unsigned int *)t23) = t15;

LAB1:    return t0;
LAB2:    t37 = (t1 + 1288U);
    t38 = *((char **)t37);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t38, 0U);
    t37 = (t2 + 0U);
    t39 = (t37 + 0U);
    *((int *)t39) = 0;
    t39 = (t37 + 4U);
    *((int *)t39) = 1;
    t39 = (t37 + 8U);
    *((int *)t39) = -1;
    t40 = (1 - 0);
    t15 = (t40 * -1);
    t15 = (t15 + 1);
    t39 = (t37 + 12U);
    *((unsigned int *)t39) = t15;
    goto LAB1;

LAB5:    goto LAB3;

LAB6:    t12 = (t22 + 56U);
    t16 = *((char **)t12);
    t12 = (t16 + 0);
    *((unsigned char *)t12) = (unsigned char)1;
    t7 = (t3 + 1);
    t8 = (-(t7));
    t12 = (t28 + 56U);
    t16 = *((char **)t12);
    t12 = (t16 + 0);
    *((int *)t12) = t8;
    goto LAB7;

LAB10:    t16 = (t28 + 56U);
    t17 = *((char **)t16);
    t14 = *((int *)t17);
    t40 = xsi_vhdl_mod(t14, 2);
    t36 = (t40 == 0);
    if (t36 != 0)
        goto LAB13;

LAB15:    t12 = (t22 + 56U);
    t16 = *((char **)t12);
    t36 = *((unsigned char *)t16);
    t41 = (!(t36));
    t12 = (t13 + 56U);
    t17 = *((char **)t12);
    t12 = (t10 + 0U);
    t7 = *((int *)t12);
    t19 = (t10 + 8U);
    t14 = *((int *)t19);
    t40 = (t8 - t7);
    t9 = (t40 * t14);
    t20 = (t10 + 4U);
    t42 = *((int *)t20);
    xsi_vhdl_check_range_of_index(t7, t42, t14, t8);
    t15 = (1U * t9);
    t46 = (0 + t15);
    t21 = (t17 + t46);
    *((unsigned char *)t21) = t41;

LAB14:    t12 = (t28 + 56U);
    t16 = *((char **)t12);
    t7 = *((int *)t16);
    t14 = (t7 / 2);
    t12 = (t28 + 56U);
    t17 = *((char **)t12);
    t12 = (t17 + 0);
    *((int *)t12) = t14;

LAB11:    if (t8 == t11)
        goto LAB12;

LAB16:    t7 = (t8 + 1);
    t8 = t7;
    goto LAB9;

LAB13:    t16 = (t22 + 56U);
    t19 = *((char **)t16);
    t41 = *((unsigned char *)t19);
    t16 = (t13 + 56U);
    t20 = *((char **)t16);
    t16 = (t10 + 0U);
    t42 = *((int *)t16);
    t21 = (t10 + 8U);
    t43 = *((int *)t21);
    t44 = (t8 - t42);
    t9 = (t44 * t43);
    t23 = (t10 + 4U);
    t45 = *((int *)t23);
    xsi_vhdl_check_range_of_index(t42, t45, t43, t8);
    t15 = (1U * t9);
    t46 = (0 + t15);
    t24 = (t20 + t46);
    *((unsigned char *)t24) = t41;
    goto LAB14;

LAB17:    t24 = (t1 + 1408U);
    t26 = *((char **)t24);
    t50 = *((unsigned char *)t26);
    if (t50 == 0)
        goto LAB23;

LAB24:    goto LAB18;

LAB20:    t36 = (unsigned char)1;
    goto LAB22;

LAB23:    t24 = (t1 + 7105);
    xsi_report(t24, 39U, (unsigned char)1);
    goto LAB24;

LAB25:;
}

char *ieee_p_3039841270_sub_3322286019_2334307252(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t6[248];
    char t7[24];
    char t8[16];
    char t22[16];
    char t42[8];
    char *t0;
    char *t9;
    unsigned int t10;
    int t11;
    char *t12;
    char *t13;
    int t14;
    unsigned int t15;
    int t16;
    int t17;
    char *t18;
    int t19;
    int t20;
    unsigned int t21;
    int t23;
    char *t24;
    char *t25;
    int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    int t37;
    int t38;
    char *t39;
    char *t40;
    char *t41;
    char *t43;
    char *t44;
    char *t45;
    unsigned char t46;
    char *t47;
    char *t48;
    unsigned char t49;
    char *t50;
    char *t51;
    char *t52;
    int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;

LAB0:    t9 = (t4 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = (t10 - 1);
    t12 = (t8 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = t11;
    t13 = (t12 + 4U);
    *((int *)t13) = 0;
    t13 = (t12 + 8U);
    *((int *)t13) = -1;
    t14 = (0 - t11);
    t15 = (t14 * -1);
    t15 = (t15 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t15;
    t16 = (t5 - 1);
    t17 = (0 - t16);
    t15 = (t17 * -1);
    t15 = (t15 + 1);
    t15 = (t15 * 1U);
    t13 = xsi_get_transient_memory(t15);
    memset(t13, 0, t15);
    t18 = t13;
    memset(t18, (unsigned char)0, t15);
    t19 = (t5 - 1);
    t20 = (0 - t19);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t21 = (t21 * 1U);
    t23 = (t5 - 1);
    t24 = (t22 + 0U);
    t25 = (t24 + 0U);
    *((int *)t25) = t23;
    t25 = (t24 + 4U);
    *((int *)t25) = 0;
    t25 = (t24 + 8U);
    *((int *)t25) = -1;
    t26 = (0 - t23);
    t27 = (t26 * -1);
    t27 = (t27 + 1);
    t25 = (t24 + 12U);
    *((unsigned int *)t25) = t27;
    t25 = (t6 + 4U);
    t28 = (t1 + 2992);
    t29 = (t25 + 88U);
    *((char **)t29) = t28;
    t30 = (char *)alloca(t21);
    t31 = (t25 + 56U);
    *((char **)t31) = t30;
    memcpy(t30, t13, t21);
    t32 = (t25 + 64U);
    *((char **)t32) = t22;
    t33 = (t25 + 80U);
    *((unsigned int *)t33) = t21;
    t34 = (t4 + 12U);
    t27 = *((unsigned int *)t34);
    t35 = (t22 + 12U);
    t36 = *((unsigned int *)t35);
    t37 = ieee_p_3039841270_sub_3160650192_2334307252(t1, ((t27)), ((t36)));
    t38 = (t37 - 2);
    t39 = (t6 + 124U);
    t40 = ((STD_STANDARD) + 384);
    t41 = (t39 + 88U);
    *((char **)t41) = t40;
    t43 = (t39 + 56U);
    *((char **)t43) = t42;
    *((int *)t42) = t38;
    t44 = (t39 + 80U);
    *((unsigned int *)t44) = 4U;
    t45 = (t7 + 4U);
    t46 = (t3 != 0);
    if (t46 == 1)
        goto LAB3;

LAB2:    t47 = (t7 + 12U);
    *((char **)t47) = t4;
    t48 = (t7 + 20U);
    *((int *)t48) = t5;
    t49 = (t5 < 1);
    if (t49 != 0)
        goto LAB4;

LAB6:
LAB5:    t9 = (t4 + 12U);
    t10 = *((unsigned int *)t9);
    t46 = (t10 == 0);
    if (t46 != 0)
        goto LAB8;

LAB10:
LAB9:    t9 = (t22 + 12U);
    t10 = *((unsigned int *)t9);
    t10 = (t10 * 1U);
    t12 = xsi_get_transient_memory(t10);
    memset(t12, 0, t10);
    t13 = t12;
    t18 = (t4 + 0U);
    t11 = *((int *)t18);
    t24 = (t4 + 0U);
    t14 = *((int *)t24);
    t28 = (t4 + 8U);
    t16 = *((int *)t28);
    t17 = (t11 - t14);
    t15 = (t17 * t16);
    t21 = (1U * t15);
    t27 = (0 + t21);
    t29 = (t3 + t27);
    t46 = *((unsigned char *)t29);
    memset(t13, t46, t10);
    t31 = (t25 + 56U);
    t32 = *((char **)t31);
    t31 = (t32 + 0);
    t33 = (t22 + 12U);
    t36 = *((unsigned int *)t33);
    t36 = (t36 * 1U);
    memcpy(t31, t12, t36);
    t9 = (t39 + 56U);
    t12 = *((char **)t9);
    t11 = *((int *)t12);
    t46 = (t11 >= 0);
    if (t46 != 0)
        goto LAB12;

LAB14:
LAB13:    t9 = (t25 + 56U);
    t12 = *((char **)t9);
    t9 = (t22 + 12U);
    t10 = *((unsigned int *)t9);
    t10 = (t10 * 1U);
    t0 = xsi_get_transient_memory(t10);
    memcpy(t0, t12, t10);
    t13 = (t22 + 0U);
    t11 = *((int *)t13);
    t18 = (t22 + 4U);
    t14 = *((int *)t18);
    t24 = (t22 + 8U);
    t16 = *((int *)t24);
    t28 = (t2 + 0U);
    t29 = (t28 + 0U);
    *((int *)t29) = t11;
    t29 = (t28 + 4U);
    *((int *)t29) = t14;
    t29 = (t28 + 8U);
    *((int *)t29) = t16;
    t17 = (t14 - t11);
    t15 = (t17 * t16);
    t15 = (t15 + 1);
    t29 = (t28 + 12U);
    *((unsigned int *)t29) = t15;

LAB1:    return t0;
LAB3:    *((char **)t45) = t3;
    goto LAB2;

LAB4:    t50 = (t1 + 1288U);
    t51 = *((char **)t50);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t51, 0U);
    t50 = (t2 + 0U);
    t52 = (t50 + 0U);
    *((int *)t52) = 0;
    t52 = (t50 + 4U);
    *((int *)t52) = 1;
    t52 = (t50 + 8U);
    *((int *)t52) = -1;
    t53 = (1 - 0);
    t54 = (t53 * -1);
    t54 = (t54 + 1);
    t52 = (t50 + 12U);
    *((unsigned int *)t52) = t54;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:    t12 = (t25 + 56U);
    t13 = *((char **)t12);
    t12 = (t22 + 12U);
    t15 = *((unsigned int *)t12);
    t15 = (t15 * 1U);
    t0 = xsi_get_transient_memory(t15);
    memcpy(t0, t13, t15);
    t18 = (t22 + 0U);
    t11 = *((int *)t18);
    t24 = (t22 + 4U);
    t14 = *((int *)t24);
    t28 = (t22 + 8U);
    t16 = *((int *)t28);
    t29 = (t2 + 0U);
    t31 = (t29 + 0U);
    *((int *)t31) = t11;
    t31 = (t29 + 4U);
    *((int *)t31) = t14;
    t31 = (t29 + 8U);
    *((int *)t31) = t16;
    t17 = (t14 - t11);
    t21 = (t17 * t16);
    t21 = (t21 + 1);
    t31 = (t29 + 12U);
    *((unsigned int *)t31) = t21;
    goto LAB1;

LAB11:    goto LAB9;

LAB12:    t9 = (t3 + 0);
    t13 = (t8 + 0U);
    t14 = *((int *)t13);
    t18 = (t39 + 56U);
    t24 = *((char **)t18);
    t16 = *((int *)t24);
    t10 = (t14 - t16);
    t18 = (t8 + 4U);
    t17 = *((int *)t18);
    t28 = (t8 + 8U);
    t19 = *((int *)t28);
    xsi_vhdl_check_range_of_slice(t14, t17, t19, t16, 0, -1);
    t15 = (t10 * 1U);
    t21 = (0 + t15);
    t29 = (t9 + t21);
    t31 = (t25 + 56U);
    t32 = *((char **)t31);
    t31 = (t22 + 0U);
    t20 = *((int *)t31);
    t33 = (t39 + 56U);
    t34 = *((char **)t33);
    t23 = *((int *)t34);
    t27 = (t20 - t23);
    t33 = (t22 + 4U);
    t26 = *((int *)t33);
    t35 = (t22 + 8U);
    t37 = *((int *)t35);
    xsi_vhdl_check_range_of_slice(t20, t26, t37, t23, 0, -1);
    t36 = (t27 * 1U);
    t54 = (0 + t36);
    t40 = (t32 + t54);
    t41 = (t39 + 56U);
    t43 = *((char **)t41);
    t38 = *((int *)t43);
    t53 = (0 - t38);
    t55 = (t53 * -1);
    t55 = (t55 + 1);
    t56 = (1U * t55);
    memcpy(t40, t29, t56);
    goto LAB13;

LAB15:;
}

char *ieee_p_3039841270_sub_2675122452_2334307252(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t6[248];
    char t7[24];
    char t14[8];
    char t17[16];
    char t30[16];
    char *t0;
    char *t8;
    unsigned int t9;
    int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    int t20;
    char *t21;
    int t22;
    unsigned int t23;
    int t24;
    int t25;
    char *t26;
    int t27;
    int t28;
    unsigned int t29;
    int t31;
    char *t32;
    char *t33;
    int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    unsigned char t43;
    char *t44;
    char *t45;
    unsigned char t46;
    char *t47;
    char *t48;
    char *t49;
    int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    int t57;
    int t58;
    int t59;
    int t60;

LAB0:    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = (t9 - 1);
    t11 = (t6 + 4U);
    t12 = ((STD_STANDARD) + 384);
    t13 = (t11 + 88U);
    *((char **)t13) = t12;
    t15 = (t11 + 56U);
    *((char **)t15) = t14;
    *((int *)t14) = t10;
    t16 = (t11 + 80U);
    *((unsigned int *)t16) = 4U;
    t18 = (t11 + 56U);
    t19 = *((char **)t18);
    t20 = *((int *)t19);
    t18 = (t17 + 0U);
    t21 = (t18 + 0U);
    *((int *)t21) = t20;
    t21 = (t18 + 4U);
    *((int *)t21) = 0;
    t21 = (t18 + 8U);
    *((int *)t21) = -1;
    t22 = (0 - t20);
    t23 = (t22 * -1);
    t23 = (t23 + 1);
    t21 = (t18 + 12U);
    *((unsigned int *)t21) = t23;
    t24 = (t5 - 1);
    t25 = (0 - t24);
    t23 = (t25 * -1);
    t23 = (t23 + 1);
    t23 = (t23 * 1U);
    t21 = xsi_get_transient_memory(t23);
    memset(t21, 0, t23);
    t26 = t21;
    memset(t26, (unsigned char)0, t23);
    t27 = (t5 - 1);
    t28 = (0 - t27);
    t29 = (t28 * -1);
    t29 = (t29 + 1);
    t29 = (t29 * 1U);
    t31 = (t5 - 1);
    t32 = (t30 + 0U);
    t33 = (t32 + 0U);
    *((int *)t33) = t31;
    t33 = (t32 + 4U);
    *((int *)t33) = 0;
    t33 = (t32 + 8U);
    *((int *)t33) = -1;
    t34 = (0 - t31);
    t35 = (t34 * -1);
    t35 = (t35 + 1);
    t33 = (t32 + 12U);
    *((unsigned int *)t33) = t35;
    t33 = (t6 + 124U);
    t36 = (t1 + 2880);
    t37 = (t33 + 88U);
    *((char **)t37) = t36;
    t38 = (char *)alloca(t29);
    t39 = (t33 + 56U);
    *((char **)t39) = t38;
    memcpy(t38, t21, t29);
    t40 = (t33 + 64U);
    *((char **)t40) = t30;
    t41 = (t33 + 80U);
    *((unsigned int *)t41) = t29;
    t42 = (t7 + 4U);
    t43 = (t3 != 0);
    if (t43 == 1)
        goto LAB3;

LAB2:    t44 = (t7 + 12U);
    *((char **)t44) = t4;
    t45 = (t7 + 20U);
    *((int *)t45) = t5;
    t46 = (t5 < 1);
    if (t46 != 0)
        goto LAB4;

LAB6:
LAB5:    t8 = (t17 + 12U);
    t9 = *((unsigned int *)t8);
    t43 = (t9 == 0);
    if (t43 != 0)
        goto LAB8;

LAB10:
LAB9:    t8 = (t30 + 12U);
    t9 = *((unsigned int *)t8);
    t12 = (t4 + 12U);
    t23 = *((unsigned int *)t12);
    t43 = (t9 < t23);
    if (t43 != 0)
        goto LAB12;

LAB14:    t8 = (t30 + 0U);
    t10 = *((int *)t8);
    t12 = (t17 + 0U);
    t20 = *((int *)t12);
    t22 = (t20 + 1);
    t24 = (t22 - t10);
    t9 = (t24 * -1);
    t9 = (t9 + 1);
    t23 = (1U * t9);
    t13 = xsi_get_transient_memory(t23);
    memset(t13, 0, t23);
    t15 = t13;
    memset(t15, (unsigned char)0, t23);
    t16 = (t33 + 56U);
    t18 = *((char **)t16);
    t16 = (t30 + 0U);
    t25 = *((int *)t16);
    t19 = (t30 + 0U);
    t27 = *((int *)t19);
    t29 = (t25 - t27);
    t21 = (t17 + 0U);
    t28 = *((int *)t21);
    t31 = (t28 + 1);
    t26 = (t30 + 4U);
    t34 = *((int *)t26);
    t32 = (t30 + 8U);
    t50 = *((int *)t32);
    xsi_vhdl_check_range_of_slice(t25, t34, t50, t27, t31, -1);
    t35 = (t29 * 1U);
    t51 = (0 + t35);
    t36 = (t18 + t51);
    t37 = (t30 + 0U);
    t57 = *((int *)t37);
    t39 = (t17 + 0U);
    t58 = *((int *)t39);
    t59 = (t58 + 1);
    t60 = (t59 - t57);
    t52 = (t60 * -1);
    t52 = (t52 + 1);
    t53 = (1U * t52);
    memcpy(t36, t13, t53);
    t8 = (t3 + 0);
    t12 = (t33 + 56U);
    t13 = *((char **)t12);
    t12 = (t30 + 0U);
    t10 = *((int *)t12);
    t15 = (t17 + 0U);
    t20 = *((int *)t15);
    t9 = (t10 - t20);
    t16 = (t30 + 4U);
    t22 = *((int *)t16);
    t18 = (t30 + 8U);
    t24 = *((int *)t18);
    xsi_vhdl_check_range_of_slice(t10, t22, t24, t20, 0, -1);
    t23 = (t9 * 1U);
    t29 = (0 + t23);
    t19 = (t13 + t29);
    t21 = (t17 + 12U);
    t35 = *((unsigned int *)t21);
    t35 = (t35 * 1U);
    memcpy(t19, t8, t35);

LAB13:    t8 = (t33 + 56U);
    t12 = *((char **)t8);
    t8 = (t30 + 12U);
    t9 = *((unsigned int *)t8);
    t9 = (t9 * 1U);
    t0 = xsi_get_transient_memory(t9);
    memcpy(t0, t12, t9);
    t13 = (t30 + 0U);
    t10 = *((int *)t13);
    t15 = (t30 + 4U);
    t20 = *((int *)t15);
    t16 = (t30 + 8U);
    t22 = *((int *)t16);
    t18 = (t2 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = t10;
    t19 = (t18 + 4U);
    *((int *)t19) = t20;
    t19 = (t18 + 8U);
    *((int *)t19) = t22;
    t24 = (t20 - t10);
    t23 = (t24 * t22);
    t23 = (t23 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t23;

LAB1:    return t0;
LAB3:    *((char **)t42) = t3;
    goto LAB2;

LAB4:    t47 = (t1 + 1168U);
    t48 = *((char **)t47);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t48, 0U);
    t47 = (t2 + 0U);
    t49 = (t47 + 0U);
    *((int *)t49) = 0;
    t49 = (t47 + 4U);
    *((int *)t49) = 1;
    t49 = (t47 + 8U);
    *((int *)t49) = -1;
    t50 = (1 - 0);
    t35 = (t50 * -1);
    t35 = (t35 + 1);
    t49 = (t47 + 12U);
    *((unsigned int *)t49) = t35;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:    t12 = (t33 + 56U);
    t13 = *((char **)t12);
    t12 = (t30 + 12U);
    t23 = *((unsigned int *)t12);
    t23 = (t23 * 1U);
    t0 = xsi_get_transient_memory(t23);
    memcpy(t0, t13, t23);
    t15 = (t30 + 0U);
    t10 = *((int *)t15);
    t16 = (t30 + 4U);
    t20 = *((int *)t16);
    t18 = (t30 + 8U);
    t22 = *((int *)t18);
    t19 = (t2 + 0U);
    t21 = (t19 + 0U);
    *((int *)t21) = t10;
    t21 = (t19 + 4U);
    *((int *)t21) = t20;
    t21 = (t19 + 8U);
    *((int *)t21) = t22;
    t24 = (t20 - t10);
    t29 = (t24 * t22);
    t29 = (t29 + 1);
    t21 = (t19 + 12U);
    *((unsigned int *)t21) = t29;
    goto LAB1;

LAB11:    goto LAB9;

LAB12:    t13 = (t3 + 0);
    t15 = (t17 + 0U);
    t10 = *((int *)t15);
    t16 = (t30 + 0U);
    t20 = *((int *)t16);
    t29 = (t10 - t20);
    t18 = (t17 + 4U);
    t22 = *((int *)t18);
    t19 = (t17 + 8U);
    t24 = *((int *)t19);
    xsi_vhdl_check_range_of_slice(t10, t22, t24, t20, 0, -1);
    t35 = (t29 * 1U);
    t51 = (0 + t35);
    t21 = (t13 + t51);
    t26 = (t33 + 56U);
    t32 = *((char **)t26);
    t26 = (t30 + 0U);
    t25 = *((int *)t26);
    t36 = (t30 + 0U);
    t27 = *((int *)t36);
    t52 = (t25 - t27);
    t37 = (t30 + 4U);
    t28 = *((int *)t37);
    t39 = (t30 + 8U);
    t31 = *((int *)t39);
    xsi_vhdl_check_range_of_slice(t25, t28, t31, t27, 0, -1);
    t53 = (t52 * 1U);
    t54 = (0 + t53);
    t40 = (t32 + t54);
    t41 = (t30 + 0U);
    t34 = *((int *)t41);
    t50 = (0 - t34);
    t55 = (t50 * -1);
    t55 = (t55 + 1);
    t56 = (1U * t55);
    memcpy(t40, t21, t56);
    goto LAB13;

LAB15:;
}

char *ieee_p_3039841270_sub_3038752187_2334307252(char *t1, char *t2, char *t3, char *t4)
{
    char t5[128];
    char t6[24];
    char t12[16];
    char *t0;
    char *t7;
    unsigned int t8;
    int t9;
    int t10;
    unsigned int t11;
    char *t13;
    unsigned int t14;
    int t15;
    char *t16;
    char *t17;
    int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned char t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;

LAB0:    t7 = (t4 + 12U);
    t8 = *((unsigned int *)t7);
    t9 = (t8 - 1);
    t10 = (0 - t9);
    t11 = (t10 * -1);
    t11 = (t11 + 1);
    t11 = (t11 * 1U);
    t13 = (t4 + 12U);
    t14 = *((unsigned int *)t13);
    t15 = (t14 - 1);
    t16 = (t12 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = t15;
    t17 = (t16 + 4U);
    *((int *)t17) = 0;
    t17 = (t16 + 8U);
    *((int *)t17) = -1;
    t18 = (0 - t15);
    t19 = (t18 * -1);
    t19 = (t19 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t19;
    t17 = (t5 + 4U);
    t20 = (t1 + 2880);
    t21 = (t17 + 88U);
    *((char **)t21) = t20;
    t22 = (char *)alloca(t11);
    t23 = (t17 + 56U);
    *((char **)t23) = t22;
    xsi_type_set_default_value(t20, t22, t12);
    t24 = (t17 + 64U);
    *((char **)t24) = t12;
    t25 = (t17 + 80U);
    *((unsigned int *)t25) = t11;
    t26 = (t6 + 4U);
    t27 = (t3 != 0);
    if (t27 == 1)
        goto LAB3;

LAB2:    t28 = (t6 + 12U);
    *((char **)t28) = t4;
    t29 = (t4 + 12U);
    t19 = *((unsigned int *)t29);
    t19 = (t19 * 1U);
    t30 = xsi_vhdl_bitvec_not(t30, t3, t19);
    t31 = (t17 + 56U);
    t32 = *((char **)t31);
    t31 = (t32 + 0);
    t33 = (t4 + 12U);
    t34 = *((unsigned int *)t33);
    t34 = (t34 * 1U);
    memcpy(t31, t30, t34);
    t7 = (t17 + 56U);
    t13 = *((char **)t7);
    t7 = (t12 + 12U);
    t8 = *((unsigned int *)t7);
    t8 = (t8 * 1U);
    t0 = xsi_get_transient_memory(t8);
    memcpy(t0, t13, t8);
    t16 = (t12 + 0U);
    t9 = *((int *)t16);
    t20 = (t12 + 4U);
    t10 = *((int *)t20);
    t21 = (t12 + 8U);
    t15 = *((int *)t21);
    t23 = (t2 + 0U);
    t24 = (t23 + 0U);
    *((int *)t24) = t9;
    t24 = (t23 + 4U);
    *((int *)t24) = t10;
    t24 = (t23 + 8U);
    *((int *)t24) = t15;
    t18 = (t10 - t9);
    t11 = (t18 * t15);
    t11 = (t11 + 1);
    t24 = (t23 + 12U);
    *((unsigned int *)t24) = t11;

LAB1:    return t0;
LAB3:    *((char **)t26) = t3;
    goto LAB2;

LAB4:;
}

char *ieee_p_3039841270_sub_2169391554_2334307252(char *t1, char *t2, char *t3, char *t4, char *t5, char *t6)
{
    char t7[128];
    char t8[40];
    char t14[16];
    char *t0;
    char *t9;
    unsigned int t10;
    int t11;
    int t12;
    unsigned int t13;
    char *t15;
    unsigned int t16;
    int t17;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned char t29;
    char *t30;
    char *t31;
    unsigned char t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;

LAB0:    t9 = (t4 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = (t10 - 1);
    t12 = (0 - t11);
    t13 = (t12 * -1);
    t13 = (t13 + 1);
    t13 = (t13 * 1U);
    t15 = (t4 + 12U);
    t16 = *((unsigned int *)t15);
    t17 = (t16 - 1);
    t18 = (t14 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = t17;
    t19 = (t18 + 4U);
    *((int *)t19) = 0;
    t19 = (t18 + 8U);
    *((int *)t19) = -1;
    t20 = (0 - t17);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    t19 = (t7 + 4U);
    t22 = (t1 + 2880);
    t23 = (t19 + 88U);
    *((char **)t23) = t22;
    t24 = (char *)alloca(t13);
    t25 = (t19 + 56U);
    *((char **)t25) = t24;
    xsi_type_set_default_value(t22, t24, t14);
    t26 = (t19 + 64U);
    *((char **)t26) = t14;
    t27 = (t19 + 80U);
    *((unsigned int *)t27) = t13;
    t28 = (t8 + 4U);
    t29 = (t3 != 0);
    if (t29 == 1)
        goto LAB3;

LAB2:    t30 = (t8 + 12U);
    *((char **)t30) = t4;
    t31 = (t8 + 20U);
    t32 = (t5 != 0);
    if (t32 == 1)
        goto LAB5;

LAB4:    t33 = (t8 + 28U);
    *((char **)t33) = t6;
    t34 = (t4 + 12U);
    t21 = *((unsigned int *)t34);
    t21 = (t21 * 1U);
    t35 = (t6 + 12U);
    t36 = *((unsigned int *)t35);
    t36 = (t36 * 1U);
    t37 = xsi_vhdl_bitvec_and(t37, t3, t21, t5, t36);
    t38 = (t19 + 56U);
    t39 = *((char **)t38);
    t38 = (t39 + 0);
    t40 = (t4 + 12U);
    t41 = *((unsigned int *)t40);
    t41 = (t41 * 1U);
    memcpy(t38, t37, t41);
    t9 = (t19 + 56U);
    t15 = *((char **)t9);
    t9 = (t14 + 12U);
    t10 = *((unsigned int *)t9);
    t10 = (t10 * 1U);
    t0 = xsi_get_transient_memory(t10);
    memcpy(t0, t15, t10);
    t18 = (t14 + 0U);
    t11 = *((int *)t18);
    t22 = (t14 + 4U);
    t12 = *((int *)t22);
    t23 = (t14 + 8U);
    t17 = *((int *)t23);
    t25 = (t2 + 0U);
    t26 = (t25 + 0U);
    *((int *)t26) = t11;
    t26 = (t25 + 4U);
    *((int *)t26) = t12;
    t26 = (t25 + 8U);
    *((int *)t26) = t17;
    t20 = (t12 - t11);
    t13 = (t20 * t17);
    t13 = (t13 + 1);
    t26 = (t25 + 12U);
    *((unsigned int *)t26) = t13;

LAB1:    return t0;
LAB3:    *((char **)t28) = t3;
    goto LAB2;

LAB5:    *((char **)t31) = t5;
    goto LAB4;

LAB6:;
}

char *ieee_p_3039841270_sub_3109447088_2334307252(char *t1, char *t2, char *t3, char *t4, char *t5, char *t6)
{
    char t7[128];
    char t8[40];
    char t14[16];
    char *t0;
    char *t9;
    unsigned int t10;
    int t11;
    int t12;
    unsigned int t13;
    char *t15;
    unsigned int t16;
    int t17;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned char t29;
    char *t30;
    char *t31;
    unsigned char t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;

LAB0:    t9 = (t4 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = (t10 - 1);
    t12 = (0 - t11);
    t13 = (t12 * -1);
    t13 = (t13 + 1);
    t13 = (t13 * 1U);
    t15 = (t4 + 12U);
    t16 = *((unsigned int *)t15);
    t17 = (t16 - 1);
    t18 = (t14 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = t17;
    t19 = (t18 + 4U);
    *((int *)t19) = 0;
    t19 = (t18 + 8U);
    *((int *)t19) = -1;
    t20 = (0 - t17);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    t19 = (t7 + 4U);
    t22 = (t1 + 2880);
    t23 = (t19 + 88U);
    *((char **)t23) = t22;
    t24 = (char *)alloca(t13);
    t25 = (t19 + 56U);
    *((char **)t25) = t24;
    xsi_type_set_default_value(t22, t24, t14);
    t26 = (t19 + 64U);
    *((char **)t26) = t14;
    t27 = (t19 + 80U);
    *((unsigned int *)t27) = t13;
    t28 = (t8 + 4U);
    t29 = (t3 != 0);
    if (t29 == 1)
        goto LAB3;

LAB2:    t30 = (t8 + 12U);
    *((char **)t30) = t4;
    t31 = (t8 + 20U);
    t32 = (t5 != 0);
    if (t32 == 1)
        goto LAB5;

LAB4:    t33 = (t8 + 28U);
    *((char **)t33) = t6;
    t34 = (t4 + 12U);
    t21 = *((unsigned int *)t34);
    t21 = (t21 * 1U);
    t35 = (t6 + 12U);
    t36 = *((unsigned int *)t35);
    t36 = (t36 * 1U);
    t37 = xsi_vhdl_bitvec_or(t37, t3, t21, t5, t36);
    t38 = (t19 + 56U);
    t39 = *((char **)t38);
    t38 = (t39 + 0);
    t40 = (t4 + 12U);
    t41 = *((unsigned int *)t40);
    t41 = (t41 * 1U);
    memcpy(t38, t37, t41);
    t9 = (t19 + 56U);
    t15 = *((char **)t9);
    t9 = (t14 + 12U);
    t10 = *((unsigned int *)t9);
    t10 = (t10 * 1U);
    t0 = xsi_get_transient_memory(t10);
    memcpy(t0, t15, t10);
    t18 = (t14 + 0U);
    t11 = *((int *)t18);
    t22 = (t14 + 4U);
    t12 = *((int *)t22);
    t23 = (t14 + 8U);
    t17 = *((int *)t23);
    t25 = (t2 + 0U);
    t26 = (t25 + 0U);
    *((int *)t26) = t11;
    t26 = (t25 + 4U);
    *((int *)t26) = t12;
    t26 = (t25 + 8U);
    *((int *)t26) = t17;
    t20 = (t12 - t11);
    t13 = (t20 * t17);
    t13 = (t13 + 1);
    t26 = (t25 + 12U);
    *((unsigned int *)t26) = t13;

LAB1:    return t0;
LAB3:    *((char **)t28) = t3;
    goto LAB2;

LAB5:    *((char **)t31) = t5;
    goto LAB4;

LAB6:;
}

char *ieee_p_3039841270_sub_877282704_2334307252(char *t1, char *t2, char *t3, char *t4, char *t5, char *t6)
{
    char t7[128];
    char t8[40];
    char t14[16];
    char *t0;
    char *t9;
    unsigned int t10;
    int t11;
    int t12;
    unsigned int t13;
    char *t15;
    unsigned int t16;
    int t17;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned char t29;
    char *t30;
    char *t31;
    unsigned char t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;

LAB0:    t9 = (t4 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = (t10 - 1);
    t12 = (0 - t11);
    t13 = (t12 * -1);
    t13 = (t13 + 1);
    t13 = (t13 * 1U);
    t15 = (t4 + 12U);
    t16 = *((unsigned int *)t15);
    t17 = (t16 - 1);
    t18 = (t14 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = t17;
    t19 = (t18 + 4U);
    *((int *)t19) = 0;
    t19 = (t18 + 8U);
    *((int *)t19) = -1;
    t20 = (0 - t17);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    t19 = (t7 + 4U);
    t22 = (t1 + 2880);
    t23 = (t19 + 88U);
    *((char **)t23) = t22;
    t24 = (char *)alloca(t13);
    t25 = (t19 + 56U);
    *((char **)t25) = t24;
    xsi_type_set_default_value(t22, t24, t14);
    t26 = (t19 + 64U);
    *((char **)t26) = t14;
    t27 = (t19 + 80U);
    *((unsigned int *)t27) = t13;
    t28 = (t8 + 4U);
    t29 = (t3 != 0);
    if (t29 == 1)
        goto LAB3;

LAB2:    t30 = (t8 + 12U);
    *((char **)t30) = t4;
    t31 = (t8 + 20U);
    t32 = (t5 != 0);
    if (t32 == 1)
        goto LAB5;

LAB4:    t33 = (t8 + 28U);
    *((char **)t33) = t6;
    t34 = (t4 + 12U);
    t21 = *((unsigned int *)t34);
    t21 = (t21 * 1U);
    t35 = (t6 + 12U);
    t36 = *((unsigned int *)t35);
    t36 = (t36 * 1U);
    t37 = xsi_vhdl_bitvec_nand(t37, t3, t21, t5, t36);
    t38 = (t19 + 56U);
    t39 = *((char **)t38);
    t38 = (t39 + 0);
    t40 = (t4 + 12U);
    t41 = *((unsigned int *)t40);
    t41 = (t41 * 1U);
    memcpy(t38, t37, t41);
    t9 = (t19 + 56U);
    t15 = *((char **)t9);
    t9 = (t14 + 12U);
    t10 = *((unsigned int *)t9);
    t10 = (t10 * 1U);
    t0 = xsi_get_transient_memory(t10);
    memcpy(t0, t15, t10);
    t18 = (t14 + 0U);
    t11 = *((int *)t18);
    t22 = (t14 + 4U);
    t12 = *((int *)t22);
    t23 = (t14 + 8U);
    t17 = *((int *)t23);
    t25 = (t2 + 0U);
    t26 = (t25 + 0U);
    *((int *)t26) = t11;
    t26 = (t25 + 4U);
    *((int *)t26) = t12;
    t26 = (t25 + 8U);
    *((int *)t26) = t17;
    t20 = (t12 - t11);
    t13 = (t20 * t17);
    t13 = (t13 + 1);
    t26 = (t25 + 12U);
    *((unsigned int *)t26) = t13;

LAB1:    return t0;
LAB3:    *((char **)t28) = t3;
    goto LAB2;

LAB5:    *((char **)t31) = t5;
    goto LAB4;

LAB6:;
}

char *ieee_p_3039841270_sub_2679840702_2334307252(char *t1, char *t2, char *t3, char *t4, char *t5, char *t6)
{
    char t7[128];
    char t8[40];
    char t14[16];
    char *t0;
    char *t9;
    unsigned int t10;
    int t11;
    int t12;
    unsigned int t13;
    char *t15;
    unsigned int t16;
    int t17;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned char t29;
    char *t30;
    char *t31;
    unsigned char t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;

LAB0:    t9 = (t4 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = (t10 - 1);
    t12 = (0 - t11);
    t13 = (t12 * -1);
    t13 = (t13 + 1);
    t13 = (t13 * 1U);
    t15 = (t4 + 12U);
    t16 = *((unsigned int *)t15);
    t17 = (t16 - 1);
    t18 = (t14 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = t17;
    t19 = (t18 + 4U);
    *((int *)t19) = 0;
    t19 = (t18 + 8U);
    *((int *)t19) = -1;
    t20 = (0 - t17);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    t19 = (t7 + 4U);
    t22 = (t1 + 2880);
    t23 = (t19 + 88U);
    *((char **)t23) = t22;
    t24 = (char *)alloca(t13);
    t25 = (t19 + 56U);
    *((char **)t25) = t24;
    xsi_type_set_default_value(t22, t24, t14);
    t26 = (t19 + 64U);
    *((char **)t26) = t14;
    t27 = (t19 + 80U);
    *((unsigned int *)t27) = t13;
    t28 = (t8 + 4U);
    t29 = (t3 != 0);
    if (t29 == 1)
        goto LAB3;

LAB2:    t30 = (t8 + 12U);
    *((char **)t30) = t4;
    t31 = (t8 + 20U);
    t32 = (t5 != 0);
    if (t32 == 1)
        goto LAB5;

LAB4:    t33 = (t8 + 28U);
    *((char **)t33) = t6;
    t34 = (t4 + 12U);
    t21 = *((unsigned int *)t34);
    t21 = (t21 * 1U);
    t35 = (t6 + 12U);
    t36 = *((unsigned int *)t35);
    t36 = (t36 * 1U);
    t37 = xsi_vhdl_bitvec_nor(t37, t3, t21, t5, t36);
    t38 = (t19 + 56U);
    t39 = *((char **)t38);
    t38 = (t39 + 0);
    t40 = (t4 + 12U);
    t41 = *((unsigned int *)t40);
    t41 = (t41 * 1U);
    memcpy(t38, t37, t41);
    t9 = (t19 + 56U);
    t15 = *((char **)t9);
    t9 = (t14 + 12U);
    t10 = *((unsigned int *)t9);
    t10 = (t10 * 1U);
    t0 = xsi_get_transient_memory(t10);
    memcpy(t0, t15, t10);
    t18 = (t14 + 0U);
    t11 = *((int *)t18);
    t22 = (t14 + 4U);
    t12 = *((int *)t22);
    t23 = (t14 + 8U);
    t17 = *((int *)t23);
    t25 = (t2 + 0U);
    t26 = (t25 + 0U);
    *((int *)t26) = t11;
    t26 = (t25 + 4U);
    *((int *)t26) = t12;
    t26 = (t25 + 8U);
    *((int *)t26) = t17;
    t20 = (t12 - t11);
    t13 = (t20 * t17);
    t13 = (t13 + 1);
    t26 = (t25 + 12U);
    *((unsigned int *)t26) = t13;

LAB1:    return t0;
LAB3:    *((char **)t28) = t3;
    goto LAB2;

LAB5:    *((char **)t31) = t5;
    goto LAB4;

LAB6:;
}

char *ieee_p_3039841270_sub_3071194632_2334307252(char *t1, char *t2, char *t3, char *t4, char *t5, char *t6)
{
    char t7[128];
    char t8[40];
    char t14[16];
    char *t0;
    char *t9;
    unsigned int t10;
    int t11;
    int t12;
    unsigned int t13;
    char *t15;
    unsigned int t16;
    int t17;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned char t29;
    char *t30;
    char *t31;
    unsigned char t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;

LAB0:    t9 = (t4 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = (t10 - 1);
    t12 = (0 - t11);
    t13 = (t12 * -1);
    t13 = (t13 + 1);
    t13 = (t13 * 1U);
    t15 = (t4 + 12U);
    t16 = *((unsigned int *)t15);
    t17 = (t16 - 1);
    t18 = (t14 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = t17;
    t19 = (t18 + 4U);
    *((int *)t19) = 0;
    t19 = (t18 + 8U);
    *((int *)t19) = -1;
    t20 = (0 - t17);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    t19 = (t7 + 4U);
    t22 = (t1 + 2880);
    t23 = (t19 + 88U);
    *((char **)t23) = t22;
    t24 = (char *)alloca(t13);
    t25 = (t19 + 56U);
    *((char **)t25) = t24;
    xsi_type_set_default_value(t22, t24, t14);
    t26 = (t19 + 64U);
    *((char **)t26) = t14;
    t27 = (t19 + 80U);
    *((unsigned int *)t27) = t13;
    t28 = (t8 + 4U);
    t29 = (t3 != 0);
    if (t29 == 1)
        goto LAB3;

LAB2:    t30 = (t8 + 12U);
    *((char **)t30) = t4;
    t31 = (t8 + 20U);
    t32 = (t5 != 0);
    if (t32 == 1)
        goto LAB5;

LAB4:    t33 = (t8 + 28U);
    *((char **)t33) = t6;
    t34 = (t4 + 12U);
    t21 = *((unsigned int *)t34);
    t21 = (t21 * 1U);
    t35 = (t6 + 12U);
    t36 = *((unsigned int *)t35);
    t36 = (t36 * 1U);
    t37 = xsi_vhdl_bitvec_xor(t37, t3, t21, t5, t36);
    t38 = (t19 + 56U);
    t39 = *((char **)t38);
    t38 = (t39 + 0);
    t40 = (t4 + 12U);
    t41 = *((unsigned int *)t40);
    t41 = (t41 * 1U);
    memcpy(t38, t37, t41);
    t9 = (t19 + 56U);
    t15 = *((char **)t9);
    t9 = (t14 + 12U);
    t10 = *((unsigned int *)t9);
    t10 = (t10 * 1U);
    t0 = xsi_get_transient_memory(t10);
    memcpy(t0, t15, t10);
    t18 = (t14 + 0U);
    t11 = *((int *)t18);
    t22 = (t14 + 4U);
    t12 = *((int *)t22);
    t23 = (t14 + 8U);
    t17 = *((int *)t23);
    t25 = (t2 + 0U);
    t26 = (t25 + 0U);
    *((int *)t26) = t11;
    t26 = (t25 + 4U);
    *((int *)t26) = t12;
    t26 = (t25 + 8U);
    *((int *)t26) = t17;
    t20 = (t12 - t11);
    t13 = (t20 * t17);
    t13 = (t13 + 1);
    t26 = (t25 + 12U);
    *((unsigned int *)t26) = t13;

LAB1:    return t0;
LAB3:    *((char **)t28) = t3;
    goto LAB2;

LAB5:    *((char **)t31) = t5;
    goto LAB4;

LAB6:;
}

char *ieee_p_3039841270_sub_1417509654_2334307252(char *t1, char *t2, char *t3, char *t4, char *t5, char *t6)
{
    char t7[128];
    char t8[40];
    char t14[16];
    char *t0;
    char *t9;
    unsigned int t10;
    int t11;
    int t12;
    unsigned int t13;
    char *t15;
    unsigned int t16;
    int t17;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned char t29;
    char *t30;
    char *t31;
    unsigned char t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;

LAB0:    t9 = (t4 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = (t10 - 1);
    t12 = (0 - t11);
    t13 = (t12 * -1);
    t13 = (t13 + 1);
    t13 = (t13 * 1U);
    t15 = (t4 + 12U);
    t16 = *((unsigned int *)t15);
    t17 = (t16 - 1);
    t18 = (t14 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = t17;
    t19 = (t18 + 4U);
    *((int *)t19) = 0;
    t19 = (t18 + 8U);
    *((int *)t19) = -1;
    t20 = (0 - t17);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    t19 = (t7 + 4U);
    t22 = (t1 + 2880);
    t23 = (t19 + 88U);
    *((char **)t23) = t22;
    t24 = (char *)alloca(t13);
    t25 = (t19 + 56U);
    *((char **)t25) = t24;
    xsi_type_set_default_value(t22, t24, t14);
    t26 = (t19 + 64U);
    *((char **)t26) = t14;
    t27 = (t19 + 80U);
    *((unsigned int *)t27) = t13;
    t28 = (t8 + 4U);
    t29 = (t3 != 0);
    if (t29 == 1)
        goto LAB3;

LAB2:    t30 = (t8 + 12U);
    *((char **)t30) = t4;
    t31 = (t8 + 20U);
    t32 = (t5 != 0);
    if (t32 == 1)
        goto LAB5;

LAB4:    t33 = (t8 + 28U);
    *((char **)t33) = t6;
    t34 = (t4 + 12U);
    t21 = *((unsigned int *)t34);
    t21 = (t21 * 1U);
    t35 = (t6 + 12U);
    t36 = *((unsigned int *)t35);
    t36 = (t36 * 1U);
    t37 = xsi_vhdl_bitvec_xnor(t37, t3, t21, t5, t36);
    t38 = (t19 + 56U);
    t39 = *((char **)t38);
    t38 = (t39 + 0);
    t40 = (t4 + 12U);
    t41 = *((unsigned int *)t40);
    t41 = (t41 * 1U);
    memcpy(t38, t37, t41);
    t9 = (t19 + 56U);
    t15 = *((char **)t9);
    t9 = (t14 + 12U);
    t10 = *((unsigned int *)t9);
    t10 = (t10 * 1U);
    t0 = xsi_get_transient_memory(t10);
    memcpy(t0, t15, t10);
    t18 = (t14 + 0U);
    t11 = *((int *)t18);
    t22 = (t14 + 4U);
    t12 = *((int *)t22);
    t23 = (t14 + 8U);
    t17 = *((int *)t23);
    t25 = (t2 + 0U);
    t26 = (t25 + 0U);
    *((int *)t26) = t11;
    t26 = (t25 + 4U);
    *((int *)t26) = t12;
    t26 = (t25 + 8U);
    *((int *)t26) = t17;
    t20 = (t12 - t11);
    t13 = (t20 * t17);
    t13 = (t13 + 1);
    t26 = (t25 + 12U);
    *((unsigned int *)t26) = t13;

LAB1:    return t0;
LAB3:    *((char **)t28) = t3;
    goto LAB2;

LAB5:    *((char **)t31) = t5;
    goto LAB4;

LAB6:;
}

char *ieee_p_3039841270_sub_4184611595_2334307252(char *t1, char *t2, char *t3, char *t4)
{
    char t5[128];
    char t6[24];
    char t12[16];
    char *t0;
    char *t7;
    unsigned int t8;
    int t9;
    int t10;
    unsigned int t11;
    char *t13;
    unsigned int t14;
    int t15;
    char *t16;
    char *t17;
    int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned char t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;

LAB0:    t7 = (t4 + 12U);
    t8 = *((unsigned int *)t7);
    t9 = (t8 - 1);
    t10 = (0 - t9);
    t11 = (t10 * -1);
    t11 = (t11 + 1);
    t11 = (t11 * 1U);
    t13 = (t4 + 12U);
    t14 = *((unsigned int *)t13);
    t15 = (t14 - 1);
    t16 = (t12 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = t15;
    t17 = (t16 + 4U);
    *((int *)t17) = 0;
    t17 = (t16 + 8U);
    *((int *)t17) = -1;
    t18 = (0 - t15);
    t19 = (t18 * -1);
    t19 = (t19 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t19;
    t17 = (t5 + 4U);
    t20 = (t1 + 2992);
    t21 = (t17 + 88U);
    *((char **)t21) = t20;
    t22 = (char *)alloca(t11);
    t23 = (t17 + 56U);
    *((char **)t23) = t22;
    xsi_type_set_default_value(t20, t22, t12);
    t24 = (t17 + 64U);
    *((char **)t24) = t12;
    t25 = (t17 + 80U);
    *((unsigned int *)t25) = t11;
    t26 = (t6 + 4U);
    t27 = (t3 != 0);
    if (t27 == 1)
        goto LAB3;

LAB2:    t28 = (t6 + 12U);
    *((char **)t28) = t4;
    t29 = (t4 + 12U);
    t19 = *((unsigned int *)t29);
    t19 = (t19 * 1U);
    t30 = xsi_vhdl_bitvec_not(t30, t3, t19);
    t31 = (t17 + 56U);
    t32 = *((char **)t31);
    t31 = (t32 + 0);
    t33 = (t4 + 12U);
    t34 = *((unsigned int *)t33);
    t34 = (t34 * 1U);
    memcpy(t31, t30, t34);
    t7 = (t17 + 56U);
    t13 = *((char **)t7);
    t7 = (t12 + 12U);
    t8 = *((unsigned int *)t7);
    t8 = (t8 * 1U);
    t0 = xsi_get_transient_memory(t8);
    memcpy(t0, t13, t8);
    t16 = (t12 + 0U);
    t9 = *((int *)t16);
    t20 = (t12 + 4U);
    t10 = *((int *)t20);
    t21 = (t12 + 8U);
    t15 = *((int *)t21);
    t23 = (t2 + 0U);
    t24 = (t23 + 0U);
    *((int *)t24) = t9;
    t24 = (t23 + 4U);
    *((int *)t24) = t10;
    t24 = (t23 + 8U);
    *((int *)t24) = t15;
    t18 = (t10 - t9);
    t11 = (t18 * t15);
    t11 = (t11 + 1);
    t24 = (t23 + 12U);
    *((unsigned int *)t24) = t11;

LAB1:    return t0;
LAB3:    *((char **)t26) = t3;
    goto LAB2;

LAB4:;
}

char *ieee_p_3039841270_sub_3199510262_2334307252(char *t1, char *t2, char *t3, char *t4, char *t5, char *t6)
{
    char t7[128];
    char t8[40];
    char t14[16];
    char *t0;
    char *t9;
    unsigned int t10;
    int t11;
    int t12;
    unsigned int t13;
    char *t15;
    unsigned int t16;
    int t17;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned char t29;
    char *t30;
    char *t31;
    unsigned char t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;

LAB0:    t9 = (t4 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = (t10 - 1);
    t12 = (0 - t11);
    t13 = (t12 * -1);
    t13 = (t13 + 1);
    t13 = (t13 * 1U);
    t15 = (t4 + 12U);
    t16 = *((unsigned int *)t15);
    t17 = (t16 - 1);
    t18 = (t14 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = t17;
    t19 = (t18 + 4U);
    *((int *)t19) = 0;
    t19 = (t18 + 8U);
    *((int *)t19) = -1;
    t20 = (0 - t17);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    t19 = (t7 + 4U);
    t22 = (t1 + 2992);
    t23 = (t19 + 88U);
    *((char **)t23) = t22;
    t24 = (char *)alloca(t13);
    t25 = (t19 + 56U);
    *((char **)t25) = t24;
    xsi_type_set_default_value(t22, t24, t14);
    t26 = (t19 + 64U);
    *((char **)t26) = t14;
    t27 = (t19 + 80U);
    *((unsigned int *)t27) = t13;
    t28 = (t8 + 4U);
    t29 = (t3 != 0);
    if (t29 == 1)
        goto LAB3;

LAB2:    t30 = (t8 + 12U);
    *((char **)t30) = t4;
    t31 = (t8 + 20U);
    t32 = (t5 != 0);
    if (t32 == 1)
        goto LAB5;

LAB4:    t33 = (t8 + 28U);
    *((char **)t33) = t6;
    t34 = (t4 + 12U);
    t21 = *((unsigned int *)t34);
    t21 = (t21 * 1U);
    t35 = (t6 + 12U);
    t36 = *((unsigned int *)t35);
    t36 = (t36 * 1U);
    t37 = xsi_vhdl_bitvec_and(t37, t3, t21, t5, t36);
    t38 = (t19 + 56U);
    t39 = *((char **)t38);
    t38 = (t39 + 0);
    t40 = (t4 + 12U);
    t41 = *((unsigned int *)t40);
    t41 = (t41 * 1U);
    memcpy(t38, t37, t41);
    t9 = (t19 + 56U);
    t15 = *((char **)t9);
    t9 = (t14 + 12U);
    t10 = *((unsigned int *)t9);
    t10 = (t10 * 1U);
    t0 = xsi_get_transient_memory(t10);
    memcpy(t0, t15, t10);
    t18 = (t14 + 0U);
    t11 = *((int *)t18);
    t22 = (t14 + 4U);
    t12 = *((int *)t22);
    t23 = (t14 + 8U);
    t17 = *((int *)t23);
    t25 = (t2 + 0U);
    t26 = (t25 + 0U);
    *((int *)t26) = t11;
    t26 = (t25 + 4U);
    *((int *)t26) = t12;
    t26 = (t25 + 8U);
    *((int *)t26) = t17;
    t20 = (t12 - t11);
    t13 = (t20 * t17);
    t13 = (t13 + 1);
    t26 = (t25 + 12U);
    *((unsigned int *)t26) = t13;

LAB1:    return t0;
LAB3:    *((char **)t28) = t3;
    goto LAB2;

LAB5:    *((char **)t31) = t5;
    goto LAB4;

LAB6:;
}

char *ieee_p_3039841270_sub_4139565796_2334307252(char *t1, char *t2, char *t3, char *t4, char *t5, char *t6)
{
    char t7[128];
    char t8[40];
    char t14[16];
    char *t0;
    char *t9;
    unsigned int t10;
    int t11;
    int t12;
    unsigned int t13;
    char *t15;
    unsigned int t16;
    int t17;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned char t29;
    char *t30;
    char *t31;
    unsigned char t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;

LAB0:    t9 = (t4 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = (t10 - 1);
    t12 = (0 - t11);
    t13 = (t12 * -1);
    t13 = (t13 + 1);
    t13 = (t13 * 1U);
    t15 = (t4 + 12U);
    t16 = *((unsigned int *)t15);
    t17 = (t16 - 1);
    t18 = (t14 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = t17;
    t19 = (t18 + 4U);
    *((int *)t19) = 0;
    t19 = (t18 + 8U);
    *((int *)t19) = -1;
    t20 = (0 - t17);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    t19 = (t7 + 4U);
    t22 = (t1 + 2992);
    t23 = (t19 + 88U);
    *((char **)t23) = t22;
    t24 = (char *)alloca(t13);
    t25 = (t19 + 56U);
    *((char **)t25) = t24;
    xsi_type_set_default_value(t22, t24, t14);
    t26 = (t19 + 64U);
    *((char **)t26) = t14;
    t27 = (t19 + 80U);
    *((unsigned int *)t27) = t13;
    t28 = (t8 + 4U);
    t29 = (t3 != 0);
    if (t29 == 1)
        goto LAB3;

LAB2:    t30 = (t8 + 12U);
    *((char **)t30) = t4;
    t31 = (t8 + 20U);
    t32 = (t5 != 0);
    if (t32 == 1)
        goto LAB5;

LAB4:    t33 = (t8 + 28U);
    *((char **)t33) = t6;
    t34 = (t4 + 12U);
    t21 = *((unsigned int *)t34);
    t21 = (t21 * 1U);
    t35 = (t6 + 12U);
    t36 = *((unsigned int *)t35);
    t36 = (t36 * 1U);
    t37 = xsi_vhdl_bitvec_or(t37, t3, t21, t5, t36);
    t38 = (t19 + 56U);
    t39 = *((char **)t38);
    t38 = (t39 + 0);
    t40 = (t4 + 12U);
    t41 = *((unsigned int *)t40);
    t41 = (t41 * 1U);
    memcpy(t38, t37, t41);
    t9 = (t19 + 56U);
    t15 = *((char **)t9);
    t9 = (t14 + 12U);
    t10 = *((unsigned int *)t9);
    t10 = (t10 * 1U);
    t0 = xsi_get_transient_memory(t10);
    memcpy(t0, t15, t10);
    t18 = (t14 + 0U);
    t11 = *((int *)t18);
    t22 = (t14 + 4U);
    t12 = *((int *)t22);
    t23 = (t14 + 8U);
    t17 = *((int *)t23);
    t25 = (t2 + 0U);
    t26 = (t25 + 0U);
    *((int *)t26) = t11;
    t26 = (t25 + 4U);
    *((int *)t26) = t12;
    t26 = (t25 + 8U);
    *((int *)t26) = t17;
    t20 = (t12 - t11);
    t13 = (t20 * t17);
    t13 = (t13 + 1);
    t26 = (t25 + 12U);
    *((unsigned int *)t26) = t13;

LAB1:    return t0;
LAB3:    *((char **)t28) = t3;
    goto LAB2;

LAB5:    *((char **)t31) = t5;
    goto LAB4;

LAB6:;
}

char *ieee_p_3039841270_sub_1907401412_2334307252(char *t1, char *t2, char *t3, char *t4, char *t5, char *t6)
{
    char t7[128];
    char t8[40];
    char t14[16];
    char *t0;
    char *t9;
    unsigned int t10;
    int t11;
    int t12;
    unsigned int t13;
    char *t15;
    unsigned int t16;
    int t17;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned char t29;
    char *t30;
    char *t31;
    unsigned char t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;

LAB0:    t9 = (t4 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = (t10 - 1);
    t12 = (0 - t11);
    t13 = (t12 * -1);
    t13 = (t13 + 1);
    t13 = (t13 * 1U);
    t15 = (t4 + 12U);
    t16 = *((unsigned int *)t15);
    t17 = (t16 - 1);
    t18 = (t14 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = t17;
    t19 = (t18 + 4U);
    *((int *)t19) = 0;
    t19 = (t18 + 8U);
    *((int *)t19) = -1;
    t20 = (0 - t17);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    t19 = (t7 + 4U);
    t22 = (t1 + 2992);
    t23 = (t19 + 88U);
    *((char **)t23) = t22;
    t24 = (char *)alloca(t13);
    t25 = (t19 + 56U);
    *((char **)t25) = t24;
    xsi_type_set_default_value(t22, t24, t14);
    t26 = (t19 + 64U);
    *((char **)t26) = t14;
    t27 = (t19 + 80U);
    *((unsigned int *)t27) = t13;
    t28 = (t8 + 4U);
    t29 = (t3 != 0);
    if (t29 == 1)
        goto LAB3;

LAB2:    t30 = (t8 + 12U);
    *((char **)t30) = t4;
    t31 = (t8 + 20U);
    t32 = (t5 != 0);
    if (t32 == 1)
        goto LAB5;

LAB4:    t33 = (t8 + 28U);
    *((char **)t33) = t6;
    t34 = (t4 + 12U);
    t21 = *((unsigned int *)t34);
    t21 = (t21 * 1U);
    t35 = (t6 + 12U);
    t36 = *((unsigned int *)t35);
    t36 = (t36 * 1U);
    t37 = xsi_vhdl_bitvec_nand(t37, t3, t21, t5, t36);
    t38 = (t19 + 56U);
    t39 = *((char **)t38);
    t38 = (t39 + 0);
    t40 = (t4 + 12U);
    t41 = *((unsigned int *)t40);
    t41 = (t41 * 1U);
    memcpy(t38, t37, t41);
    t9 = (t19 + 56U);
    t15 = *((char **)t9);
    t9 = (t14 + 12U);
    t10 = *((unsigned int *)t9);
    t10 = (t10 * 1U);
    t0 = xsi_get_transient_memory(t10);
    memcpy(t0, t15, t10);
    t18 = (t14 + 0U);
    t11 = *((int *)t18);
    t22 = (t14 + 4U);
    t12 = *((int *)t22);
    t23 = (t14 + 8U);
    t17 = *((int *)t23);
    t25 = (t2 + 0U);
    t26 = (t25 + 0U);
    *((int *)t26) = t11;
    t26 = (t25 + 4U);
    *((int *)t26) = t12;
    t26 = (t25 + 8U);
    *((int *)t26) = t17;
    t20 = (t12 - t11);
    t13 = (t20 * t17);
    t13 = (t13 + 1);
    t26 = (t25 + 12U);
    *((unsigned int *)t26) = t13;

LAB1:    return t0;
LAB3:    *((char **)t28) = t3;
    goto LAB2;

LAB5:    *((char **)t31) = t5;
    goto LAB4;

LAB6:;
}

char *ieee_p_3039841270_sub_3709959410_2334307252(char *t1, char *t2, char *t3, char *t4, char *t5, char *t6)
{
    char t7[128];
    char t8[40];
    char t14[16];
    char *t0;
    char *t9;
    unsigned int t10;
    int t11;
    int t12;
    unsigned int t13;
    char *t15;
    unsigned int t16;
    int t17;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned char t29;
    char *t30;
    char *t31;
    unsigned char t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;

LAB0:    t9 = (t4 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = (t10 - 1);
    t12 = (0 - t11);
    t13 = (t12 * -1);
    t13 = (t13 + 1);
    t13 = (t13 * 1U);
    t15 = (t4 + 12U);
    t16 = *((unsigned int *)t15);
    t17 = (t16 - 1);
    t18 = (t14 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = t17;
    t19 = (t18 + 4U);
    *((int *)t19) = 0;
    t19 = (t18 + 8U);
    *((int *)t19) = -1;
    t20 = (0 - t17);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    t19 = (t7 + 4U);
    t22 = (t1 + 2992);
    t23 = (t19 + 88U);
    *((char **)t23) = t22;
    t24 = (char *)alloca(t13);
    t25 = (t19 + 56U);
    *((char **)t25) = t24;
    xsi_type_set_default_value(t22, t24, t14);
    t26 = (t19 + 64U);
    *((char **)t26) = t14;
    t27 = (t19 + 80U);
    *((unsigned int *)t27) = t13;
    t28 = (t8 + 4U);
    t29 = (t3 != 0);
    if (t29 == 1)
        goto LAB3;

LAB2:    t30 = (t8 + 12U);
    *((char **)t30) = t4;
    t31 = (t8 + 20U);
    t32 = (t5 != 0);
    if (t32 == 1)
        goto LAB5;

LAB4:    t33 = (t8 + 28U);
    *((char **)t33) = t6;
    t34 = (t4 + 12U);
    t21 = *((unsigned int *)t34);
    t21 = (t21 * 1U);
    t35 = (t6 + 12U);
    t36 = *((unsigned int *)t35);
    t36 = (t36 * 1U);
    t37 = xsi_vhdl_bitvec_nor(t37, t3, t21, t5, t36);
    t38 = (t19 + 56U);
    t39 = *((char **)t38);
    t38 = (t39 + 0);
    t40 = (t4 + 12U);
    t41 = *((unsigned int *)t40);
    t41 = (t41 * 1U);
    memcpy(t38, t37, t41);
    t9 = (t19 + 56U);
    t15 = *((char **)t9);
    t9 = (t14 + 12U);
    t10 = *((unsigned int *)t9);
    t10 = (t10 * 1U);
    t0 = xsi_get_transient_memory(t10);
    memcpy(t0, t15, t10);
    t18 = (t14 + 0U);
    t11 = *((int *)t18);
    t22 = (t14 + 4U);
    t12 = *((int *)t22);
    t23 = (t14 + 8U);
    t17 = *((int *)t23);
    t25 = (t2 + 0U);
    t26 = (t25 + 0U);
    *((int *)t26) = t11;
    t26 = (t25 + 4U);
    *((int *)t26) = t12;
    t26 = (t25 + 8U);
    *((int *)t26) = t17;
    t20 = (t12 - t11);
    t13 = (t20 * t17);
    t13 = (t13 + 1);
    t26 = (t25 + 12U);
    *((unsigned int *)t26) = t13;

LAB1:    return t0;
LAB3:    *((char **)t28) = t3;
    goto LAB2;

LAB5:    *((char **)t31) = t5;
    goto LAB4;

LAB6:;
}

char *ieee_p_3039841270_sub_4101313340_2334307252(char *t1, char *t2, char *t3, char *t4, char *t5, char *t6)
{
    char t7[128];
    char t8[40];
    char t14[16];
    char *t0;
    char *t9;
    unsigned int t10;
    int t11;
    int t12;
    unsigned int t13;
    char *t15;
    unsigned int t16;
    int t17;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned char t29;
    char *t30;
    char *t31;
    unsigned char t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;

LAB0:    t9 = (t4 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = (t10 - 1);
    t12 = (0 - t11);
    t13 = (t12 * -1);
    t13 = (t13 + 1);
    t13 = (t13 * 1U);
    t15 = (t4 + 12U);
    t16 = *((unsigned int *)t15);
    t17 = (t16 - 1);
    t18 = (t14 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = t17;
    t19 = (t18 + 4U);
    *((int *)t19) = 0;
    t19 = (t18 + 8U);
    *((int *)t19) = -1;
    t20 = (0 - t17);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    t19 = (t7 + 4U);
    t22 = (t1 + 2992);
    t23 = (t19 + 88U);
    *((char **)t23) = t22;
    t24 = (char *)alloca(t13);
    t25 = (t19 + 56U);
    *((char **)t25) = t24;
    xsi_type_set_default_value(t22, t24, t14);
    t26 = (t19 + 64U);
    *((char **)t26) = t14;
    t27 = (t19 + 80U);
    *((unsigned int *)t27) = t13;
    t28 = (t8 + 4U);
    t29 = (t3 != 0);
    if (t29 == 1)
        goto LAB3;

LAB2:    t30 = (t8 + 12U);
    *((char **)t30) = t4;
    t31 = (t8 + 20U);
    t32 = (t5 != 0);
    if (t32 == 1)
        goto LAB5;

LAB4:    t33 = (t8 + 28U);
    *((char **)t33) = t6;
    t34 = (t4 + 12U);
    t21 = *((unsigned int *)t34);
    t21 = (t21 * 1U);
    t35 = (t6 + 12U);
    t36 = *((unsigned int *)t35);
    t36 = (t36 * 1U);
    t37 = xsi_vhdl_bitvec_xor(t37, t3, t21, t5, t36);
    t38 = (t19 + 56U);
    t39 = *((char **)t38);
    t38 = (t39 + 0);
    t40 = (t4 + 12U);
    t41 = *((unsigned int *)t40);
    t41 = (t41 * 1U);
    memcpy(t38, t37, t41);
    t9 = (t19 + 56U);
    t15 = *((char **)t9);
    t9 = (t14 + 12U);
    t10 = *((unsigned int *)t9);
    t10 = (t10 * 1U);
    t0 = xsi_get_transient_memory(t10);
    memcpy(t0, t15, t10);
    t18 = (t14 + 0U);
    t11 = *((int *)t18);
    t22 = (t14 + 4U);
    t12 = *((int *)t22);
    t23 = (t14 + 8U);
    t17 = *((int *)t23);
    t25 = (t2 + 0U);
    t26 = (t25 + 0U);
    *((int *)t26) = t11;
    t26 = (t25 + 4U);
    *((int *)t26) = t12;
    t26 = (t25 + 8U);
    *((int *)t26) = t17;
    t20 = (t12 - t11);
    t13 = (t20 * t17);
    t13 = (t13 + 1);
    t26 = (t25 + 12U);
    *((unsigned int *)t26) = t13;

LAB1:    return t0;
LAB3:    *((char **)t28) = t3;
    goto LAB2;

LAB5:    *((char **)t31) = t5;
    goto LAB4;

LAB6:;
}

char *ieee_p_3039841270_sub_2447628362_2334307252(char *t1, char *t2, char *t3, char *t4, char *t5, char *t6)
{
    char t7[128];
    char t8[40];
    char t14[16];
    char *t0;
    char *t9;
    unsigned int t10;
    int t11;
    int t12;
    unsigned int t13;
    char *t15;
    unsigned int t16;
    int t17;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned char t29;
    char *t30;
    char *t31;
    unsigned char t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;

LAB0:    t9 = (t4 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = (t10 - 1);
    t12 = (0 - t11);
    t13 = (t12 * -1);
    t13 = (t13 + 1);
    t13 = (t13 * 1U);
    t15 = (t4 + 12U);
    t16 = *((unsigned int *)t15);
    t17 = (t16 - 1);
    t18 = (t14 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = t17;
    t19 = (t18 + 4U);
    *((int *)t19) = 0;
    t19 = (t18 + 8U);
    *((int *)t19) = -1;
    t20 = (0 - t17);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    t19 = (t7 + 4U);
    t22 = (t1 + 2992);
    t23 = (t19 + 88U);
    *((char **)t23) = t22;
    t24 = (char *)alloca(t13);
    t25 = (t19 + 56U);
    *((char **)t25) = t24;
    xsi_type_set_default_value(t22, t24, t14);
    t26 = (t19 + 64U);
    *((char **)t26) = t14;
    t27 = (t19 + 80U);
    *((unsigned int *)t27) = t13;
    t28 = (t8 + 4U);
    t29 = (t3 != 0);
    if (t29 == 1)
        goto LAB3;

LAB2:    t30 = (t8 + 12U);
    *((char **)t30) = t4;
    t31 = (t8 + 20U);
    t32 = (t5 != 0);
    if (t32 == 1)
        goto LAB5;

LAB4:    t33 = (t8 + 28U);
    *((char **)t33) = t6;
    t34 = (t4 + 12U);
    t21 = *((unsigned int *)t34);
    t21 = (t21 * 1U);
    t35 = (t6 + 12U);
    t36 = *((unsigned int *)t35);
    t36 = (t36 * 1U);
    t37 = xsi_vhdl_bitvec_xnor(t37, t3, t21, t5, t36);
    t38 = (t19 + 56U);
    t39 = *((char **)t38);
    t38 = (t39 + 0);
    t40 = (t4 + 12U);
    t41 = *((unsigned int *)t40);
    t41 = (t41 * 1U);
    memcpy(t38, t37, t41);
    t9 = (t19 + 56U);
    t15 = *((char **)t9);
    t9 = (t14 + 12U);
    t10 = *((unsigned int *)t9);
    t10 = (t10 * 1U);
    t0 = xsi_get_transient_memory(t10);
    memcpy(t0, t15, t10);
    t18 = (t14 + 0U);
    t11 = *((int *)t18);
    t22 = (t14 + 4U);
    t12 = *((int *)t22);
    t23 = (t14 + 8U);
    t17 = *((int *)t23);
    t25 = (t2 + 0U);
    t26 = (t25 + 0U);
    *((int *)t26) = t11;
    t26 = (t25 + 4U);
    *((int *)t26) = t12;
    t26 = (t25 + 8U);
    *((int *)t26) = t17;
    t20 = (t12 - t11);
    t13 = (t20 * t17);
    t13 = (t13 + 1);
    t26 = (t25 + 12U);
    *((unsigned int *)t26) = t13;

LAB1:    return t0;
LAB3:    *((char **)t28) = t3;
    goto LAB2;

LAB5:    *((char **)t31) = t5;
    goto LAB4;

LAB6:;
}

unsigned char ieee_p_3039841270_sub_1901947604_2334307252(char *t1, char *t2, unsigned int t3, unsigned int t4)
{
    unsigned char t0;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;

LAB0:    t8 = xsi_signal_has_event(t2);
    if (t8 == 1)
        goto LAB2;

LAB3:    t7 = (unsigned char)0;

LAB4:    t0 = t7;

LAB1:    return t0;
LAB2:    t9 = (t2 + 40U);
    t10 = *((char **)t9);
    t9 = (t10 + t4);
    t11 = *((unsigned char *)t9);
    t12 = (t11 == (unsigned char)1);
    t7 = t12;
    goto LAB4;

LAB5:;
}

unsigned char ieee_p_3039841270_sub_1415612261_2334307252(char *t1, char *t2, unsigned int t3, unsigned int t4)
{
    unsigned char t0;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;

LAB0:    t8 = xsi_signal_has_event(t2);
    if (t8 == 1)
        goto LAB2;

LAB3:    t7 = (unsigned char)0;

LAB4:    t0 = t7;

LAB1:    return t0;
LAB2:    t9 = (t2 + 40U);
    t10 = *((char **)t9);
    t9 = (t10 + t4);
    t11 = *((unsigned char *)t9);
    t12 = (t11 == (unsigned char)0);
    t7 = t12;
    goto LAB4;

LAB5:;
}


extern void ieee_p_3039841270_init()
{
	static char *se[] = {(void *)ieee_p_3039841270_sub_3160373586_2334307252,(void *)ieee_p_3039841270_sub_3160650192_2334307252,(void *)ieee_p_3039841270_sub_3824177444_2334307252,(void *)ieee_p_3039841270_sub_3295552210_2334307252,(void *)ieee_p_3039841270_sub_451878023_2334307252,(void *)ieee_p_3039841270_sub_941415796_2334307252,(void *)ieee_p_3039841270_sub_3828635824_2334307252,(void *)ieee_p_3039841270_sub_3362593643_2334307252,(void *)ieee_p_3039841270_sub_3362809265_2334307252,(void *)ieee_p_3039841270_sub_3384070474_2334307252,(void *)ieee_p_3039841270_sub_3493178686_2334307252,(void *)ieee_p_3039841270_sub_3493185220_2334307252,(void *)ieee_p_3039841270_sub_1503053755_2334307252,(void *)ieee_p_3039841270_sub_3908047624_2334307252,(void *)ieee_p_3039841270_sub_552804570_2334307252,(void *)ieee_p_3039841270_sub_3185639251_2334307252,(void *)ieee_p_3039841270_sub_1229053073_2334307252,(void *)ieee_p_3039841270_sub_2208510890_2334307252,(void *)ieee_p_3039841270_sub_3217339969_2334307252,(void *)ieee_p_3039841270_sub_3118404406_2334307252,(void *)ieee_p_3039841270_sub_1717157770_2334307252,(void *)ieee_p_3039841270_sub_3088487591_2334307252,(void *)ieee_p_3039841270_sub_2065729909_2334307252,(void *)ieee_p_3039841270_sub_1777701285_2334307252,(void *)ieee_p_3039841270_sub_3125426059_2334307252,(void *)ieee_p_3039841270_sub_3620553971_2334307252,(void *)ieee_p_3039841270_sub_1717229644_2334307252,(void *)ieee_p_3039841270_sub_3088559465_2334307252,(void *)ieee_p_3039841270_sub_2065801783_2334307252,(void *)ieee_p_3039841270_sub_1777773159_2334307252,(void *)ieee_p_3039841270_sub_3125497933_2334307252,(void *)ieee_p_3039841270_sub_3620625845_2334307252,(void *)ieee_p_3039841270_sub_2382883967_2334307252,(void *)ieee_p_3039841270_sub_3337867729_2334307252,(void *)ieee_p_3039841270_sub_2065693972_2334307252,(void *)ieee_p_3039841270_sub_1777665348_2334307252,(void *)ieee_p_3039841270_sub_3125390122_2334307252,(void *)ieee_p_3039841270_sub_3620518034_2334307252,(void *)ieee_p_3039841270_sub_1666942187_2334307252,(void *)ieee_p_3039841270_sub_3599636057_2334307252,(void *)ieee_p_3039841270_sub_1918719512_2334307252,(void *)ieee_p_3039841270_sub_1477432179_2334307252,(void *)ieee_p_3039841270_sub_3493444518_2334307252,(void *)ieee_p_3039841270_sub_2853085545_2334307252,(void *)ieee_p_3039841270_sub_2804069568_2334307252,(void *)ieee_p_3039841270_sub_441870262_2334307252,(void *)ieee_p_3039841270_sub_3072723324_2334307252,(void *)ieee_p_3039841270_sub_2631435991_2334307252,(void *)ieee_p_3039841270_sub_352481042_2334307252,(void *)ieee_p_3039841270_sub_4007089365_2334307252,(void *)ieee_p_3039841270_sub_2619928380_2334307252,(void *)ieee_p_3039841270_sub_257729074_2334307252,(void *)ieee_p_3039841270_sub_2888582136_2334307252,(void *)ieee_p_3039841270_sub_2447294803_2334307252,(void *)ieee_p_3039841270_sub_168339854_2334307252,(void *)ieee_p_3039841270_sub_3822948177_2334307252,(void *)ieee_p_3039841270_sub_2718620240_2334307252,(void *)ieee_p_3039841270_sub_2004661903_2334307252,(void *)ieee_p_3039841270_sub_1962725059_2334307252,(void *)ieee_p_3039841270_sub_2115134373_2334307252,(void *)ieee_p_3039841270_sub_1803993244_2334307252,(void *)ieee_p_3039841270_sub_1882040637_2334307252,(void *)ieee_p_3039841270_sub_2718548366_2334307252,(void *)ieee_p_3039841270_sub_2004590029_2334307252,(void *)ieee_p_3039841270_sub_1962653185_2334307252,(void *)ieee_p_3039841270_sub_2115062499_2334307252,(void *)ieee_p_3039841270_sub_1803921370_2334307252,(void *)ieee_p_3039841270_sub_1881968763_2334307252,(void *)ieee_p_3039841270_sub_4077925643_2334307252,(void *)ieee_p_3039841270_sub_3363967306_2334307252,(void *)ieee_p_3039841270_sub_3322030462_2334307252,(void *)ieee_p_3039841270_sub_3474439776_2334307252,(void *)ieee_p_3039841270_sub_3163298647_2334307252,(void *)ieee_p_3039841270_sub_3241346040_2334307252,(void *)ieee_p_3039841270_sub_4080297485_2334307252,(void *)ieee_p_3039841270_sub_3366339148_2334307252,(void *)ieee_p_3039841270_sub_3324402304_2334307252,(void *)ieee_p_3039841270_sub_3476811618_2334307252,(void *)ieee_p_3039841270_sub_3165670489_2334307252,(void *)ieee_p_3039841270_sub_3243717882_2334307252,(void *)ieee_p_3039841270_sub_2718584303_2334307252,(void *)ieee_p_3039841270_sub_2004625966_2334307252,(void *)ieee_p_3039841270_sub_1962689122_2334307252,(void *)ieee_p_3039841270_sub_2115098436_2334307252,(void *)ieee_p_3039841270_sub_1803957307_2334307252,(void *)ieee_p_3039841270_sub_1882004700_2334307252,(void *)ieee_p_3039841270_sub_4062508670_2334307252,(void *)ieee_p_3039841270_sub_3348550333_2334307252,(void *)ieee_p_3039841270_sub_3306613489_2334307252,(void *)ieee_p_3039841270_sub_3459022803_2334307252,(void *)ieee_p_3039841270_sub_3147881674_2334307252,(void *)ieee_p_3039841270_sub_3225929067_2334307252,(void *)ieee_p_3039841270_sub_2926835514_2334307252,(void *)ieee_p_3039841270_sub_1986385229_2334307252,(void *)ieee_p_3039841270_sub_4208422723_2334307252,(void *)ieee_p_3039841270_sub_3267972438_2334307252,(void *)ieee_p_3039841270_sub_4266129579_2334307252,(void *)ieee_p_3039841270_sub_3233416414_2334307252,(void *)ieee_p_3039841270_sub_1252749492_2334307252,(void *)ieee_p_3039841270_sub_220036327_2334307252,(void *)ieee_p_3039841270_sub_3403178725_2334307252,(void *)ieee_p_3039841270_sub_206912958_2334307252,(void *)ieee_p_3039841270_sub_3410294251_2334307252,(void *)ieee_p_3039841270_sub_214028484_2334307252,(void *)ieee_p_3039841270_sub_3367601095_2334307252,(void *)ieee_p_3039841270_sub_171335328_2334307252,(void *)ieee_p_3039841270_sub_3367816717_2334307252,(void *)ieee_p_3039841270_sub_171550950_2334307252,(void *)ieee_p_3039841270_sub_2023044182_2334307252,(void *)ieee_p_3039841270_sub_3185572354_2334307252,(void *)ieee_p_3039841270_sub_180853171_2334307252,(void *)ieee_p_3039841270_sub_2780269832_2334307252,(void *)ieee_p_3039841270_sub_3322286019_2334307252,(void *)ieee_p_3039841270_sub_2675122452_2334307252,(void *)ieee_p_3039841270_sub_3038752187_2334307252,(void *)ieee_p_3039841270_sub_2169391554_2334307252,(void *)ieee_p_3039841270_sub_3109447088_2334307252,(void *)ieee_p_3039841270_sub_877282704_2334307252,(void *)ieee_p_3039841270_sub_2679840702_2334307252,(void *)ieee_p_3039841270_sub_3071194632_2334307252,(void *)ieee_p_3039841270_sub_1417509654_2334307252,(void *)ieee_p_3039841270_sub_4184611595_2334307252,(void *)ieee_p_3039841270_sub_3199510262_2334307252,(void *)ieee_p_3039841270_sub_4139565796_2334307252,(void *)ieee_p_3039841270_sub_1907401412_2334307252,(void *)ieee_p_3039841270_sub_3709959410_2334307252,(void *)ieee_p_3039841270_sub_4101313340_2334307252,(void *)ieee_p_3039841270_sub_2447628362_2334307252,(void *)ieee_p_3039841270_sub_1901947604_2334307252,(void *)ieee_p_3039841270_sub_1415612261_2334307252};
	xsi_register_didat("ieee_p_3039841270", "isim/precompiled.exe.sim/ieee/p_3039841270.didat");
	xsi_register_subprogram_executes(se);
}
