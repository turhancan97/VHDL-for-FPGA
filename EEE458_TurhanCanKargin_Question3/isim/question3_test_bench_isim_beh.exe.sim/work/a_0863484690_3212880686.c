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
static const char *ng0 = "D:/FPGA/EEE458_TurhanCanKargin_Question3/twelve_bit_memory.vhd";
extern char *IEEE_P_3620187407;

char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );
int ieee_p_3620187407_sub_514432868_3965413181(char *, char *, char *);


static void work_a_0863484690_3212880686_p_0(char *t0)
{
    char t11[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned char t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    int t23;
    int t24;
    unsigned int t25;

LAB0:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1312U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 3592);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(52, ng0);
    t4 = (t0 + 1672U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB13;

LAB14:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1352U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(53, ng0);
    t4 = (t0 + 1192U);
    t12 = *((char **)t4);
    t4 = (t0 + 6400U);
    t13 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t11, t12, t4, 1);
    t14 = (t11 + 12U);
    t15 = *((unsigned int *)t14);
    t16 = (1U * t15);
    t17 = (8U != t16);
    if (t17 == 1)
        goto LAB11;

LAB12:    t18 = (t0 + 3672);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t13, 8U);
    xsi_driver_first_trans_fast_port(t18);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1192U);
    t4 = *((char **)t2);
    t2 = (t0 + 6400U);
    t23 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t4, t2);
    t5 = (t0 + 2288U);
    t8 = *((char **)t5);
    t5 = (t8 + 0);
    *((int *)t5) = t23;
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1992U);
    t4 = *((char **)t2);
    t2 = (t0 + 2288U);
    t5 = *((char **)t2);
    t23 = *((int *)t5);
    t24 = (t23 - 0);
    t15 = (t24 * 1);
    xsi_vhdl_check_range_of_index(0, 255, 1, t23);
    t16 = (12U * t15);
    t25 = (0 + t16);
    t2 = (t4 + t25);
    t8 = (t0 + 3736);
    t12 = (t8 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t18 = *((char **)t14);
    memcpy(t18, t2, 12U);
    xsi_driver_first_trans_fast_port(t8);
    goto LAB9;

LAB11:    xsi_size_not_matching(8U, t16, 0);
    goto LAB12;

LAB13:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1192U);
    t5 = *((char **)t2);
    t2 = (t0 + 6400U);
    t23 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t5, t2);
    t8 = (t0 + 2288U);
    t12 = *((char **)t8);
    t8 = (t12 + 0);
    *((int *)t8) = t23;
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1992U);
    t4 = *((char **)t2);
    t2 = (t0 + 2288U);
    t5 = *((char **)t2);
    t23 = *((int *)t5);
    t24 = (t23 - 0);
    t15 = (t24 * 1);
    xsi_vhdl_check_range_of_index(0, 255, 1, t23);
    t16 = (12U * t15);
    t25 = (0 + t16);
    t2 = (t4 + t25);
    t8 = (t0 + 3800);
    t12 = (t8 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t18 = *((char **)t14);
    memcpy(t18, t2, 12U);
    xsi_driver_first_trans_fast_port(t8);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1192U);
    t4 = *((char **)t2);
    t2 = (t0 + 6400U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t11, t4, t2, 1);
    t8 = (t11 + 12U);
    t15 = *((unsigned int *)t8);
    t16 = (1U * t15);
    t1 = (8U != t16);
    if (t1 == 1)
        goto LAB15;

LAB16:    t12 = (t0 + 3672);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t18 = (t14 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t5, 8U);
    xsi_driver_first_trans_fast_port(t12);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1192U);
    t4 = *((char **)t2);
    t2 = (t0 + 6400U);
    t23 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t4, t2);
    t5 = (t0 + 2288U);
    t8 = *((char **)t5);
    t5 = (t8 + 0);
    *((int *)t5) = t23;
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t2 = (t0 + 2288U);
    t5 = *((char **)t2);
    t23 = *((int *)t5);
    t24 = (t23 - 0);
    t15 = (t24 * 1);
    t16 = (12U * t15);
    t25 = (0U + t16);
    t2 = (t0 + 3864);
    t8 = (t2 + 56U);
    t12 = *((char **)t8);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t4, 12U);
    xsi_driver_first_trans_delta(t2, t25, 12U, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1992U);
    t4 = *((char **)t2);
    t2 = (t0 + 2288U);
    t5 = *((char **)t2);
    t23 = *((int *)t5);
    t24 = (t23 - 0);
    t15 = (t24 * 1);
    xsi_vhdl_check_range_of_index(0, 255, 1, t23);
    t16 = (12U * t15);
    t25 = (0 + t16);
    t2 = (t4 + t25);
    t8 = (t0 + 3736);
    t12 = (t8 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t18 = *((char **)t14);
    memcpy(t18, t2, 12U);
    xsi_driver_first_trans_fast_port(t8);
    goto LAB9;

LAB15:    xsi_size_not_matching(8U, t16, 0);
    goto LAB16;

}


extern void work_a_0863484690_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0863484690_3212880686_p_0};
	xsi_register_didat("work_a_0863484690_3212880686", "isim/question3_test_bench_isim_beh.exe.sim/work/a_0863484690_3212880686.didat");
	xsi_register_executes(pe);
}
