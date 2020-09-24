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
static const char *ng0 = "D:/FPGA/EEE458_TurhanCanKargin_Question5/twelve_bit_general_purpose_register.vhd";
extern char *IEEE_P_3620187407;

unsigned char ieee_p_3620187407_sub_4058165771_3965413181(char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );


static void work_a_3693670690_3212880686_p_0(char *t0)
{
    char t19[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    int t20;
    char *t21;

LAB0:    xsi_set_current_line(53, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 2112U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 4592);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(54, ng0);
    t1 = (t0 + 7875);
    t6 = (t0 + 4672);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(55, ng0);
    t1 = (t0 + 7883);
    t5 = (t0 + 4736);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(56, ng0);
    t1 = (t0 + 7887);
    t5 = (t0 + 4800);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 12U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(57, ng0);
    t1 = (t0 + 4864);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1512U);
    t6 = *((char **)t2);
    t13 = *((unsigned char *)t6);
    t14 = (t13 == (unsigned char)3);
    if (t14 != 0)
        goto LAB10;

LAB12:    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB13;

LAB14:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB15;

LAB16:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 7764U);
    t5 = (t0 + 7899);
    t7 = (t19 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 11;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t20 = (11 - 0);
    t16 = (t20 * 1);
    t16 = (t16 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t16;
    t3 = ieee_p_3620187407_sub_4058165771_3965413181(IEEE_P_3620187407, t2, t1, t5, t19);
    if (t3 != 0)
        goto LAB17;

LAB18:
LAB11:    xsi_set_current_line(69, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB19;

LAB21:
LAB20:    goto LAB3;

LAB7:    t2 = (t0 + 2152U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB9;

LAB10:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1032U);
    t7 = *((char **)t2);
    t2 = (t0 + 4672);
    t8 = (t2 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t15 = *((char **)t10);
    memcpy(t15, t7, 8U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB11;

LAB13:    xsi_set_current_line(62, ng0);
    t1 = (t0 + 1192U);
    t5 = *((char **)t1);
    t16 = (11 - 11);
    t17 = (t16 * 1U);
    t18 = (0 + t17);
    t1 = (t5 + t18);
    t6 = (t0 + 4736);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_delta(t6, 0U, 4U, 0LL);
    goto LAB11;

LAB15:    xsi_set_current_line(64, ng0);
    t1 = (t0 + 1352U);
    t5 = *((char **)t1);
    t1 = (t0 + 4800);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 12U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB11;

LAB17:    xsi_set_current_line(66, ng0);
    t8 = (t0 + 4864);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t15 = (t10 + 56U);
    t21 = *((char **)t15);
    *((unsigned char *)t21) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t8);
    goto LAB11;

LAB19:    xsi_set_current_line(70, ng0);
    t1 = (t0 + 2632U);
    t5 = *((char **)t1);
    t1 = (t0 + 7796U);
    t6 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t19, t5, t1, 1);
    t7 = (t19 + 12U);
    t16 = *((unsigned int *)t7);
    t17 = (1U * t16);
    t11 = (4U != t17);
    if (t11 == 1)
        goto LAB22;

LAB23:    t8 = (t0 + 4736);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t15 = (t10 + 56U);
    t21 = *((char **)t15);
    memcpy(t21, t6, 4U);
    xsi_driver_first_trans_fast_port(t8);
    xsi_set_current_line(71, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t1 = (t0 + 7812U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t19, t2, t1, 1);
    t6 = (t19 + 12U);
    t16 = *((unsigned int *)t6);
    t17 = (1U * t16);
    t3 = (12U != t17);
    if (t3 == 1)
        goto LAB24;

LAB25:    t7 = (t0 + 4800);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t15 = *((char **)t10);
    memcpy(t15, t5, 12U);
    xsi_driver_first_trans_fast_port(t7);
    goto LAB20;

LAB22:    xsi_size_not_matching(4U, t17, 0);
    goto LAB23;

LAB24:    xsi_size_not_matching(12U, t17, 0);
    goto LAB25;

}


extern void work_a_3693670690_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3693670690_3212880686_p_0};
	xsi_register_didat("work_a_3693670690_3212880686", "isim/question5_test_bench_isim_beh.exe.sim/work/a_3693670690_3212880686.didat");
	xsi_register_executes(pe);
}
