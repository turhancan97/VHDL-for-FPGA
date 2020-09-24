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
extern char *IEEE_P_3972351953;
extern char *STD_STANDARD;

double ieee_p_3972351953_sub_1311584390_2984157535(char *, double , double );
double ieee_p_3972351953_sub_1341592424_2984157535(char *, double , double );
double ieee_p_3972351953_sub_1485185913_2984157535(char *, double );
double ieee_p_3972351953_sub_1543758017_2984157535(char *, double );
double ieee_p_3972351953_sub_160431096_2984157535(char *, double );
double ieee_p_3972351953_sub_1722501855_2984157535(char *, double );
double ieee_p_3972351953_sub_1792801001_2984157535(char *, double );
double ieee_p_3972351953_sub_773523744_2984157535(char *, double );
double ieee_p_3972351953_sub_785569749_2984157535(char *, double );


unsigned char ieee_p_4165608084_sub_2154887899_2178808227(char *t1, char *t2, char *t3)
{
    char t5[24];
    unsigned char t0;
    char *t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned int t10;
    char *t11;
    double t12;
    char *t13;
    char *t14;
    double t15;
    double t16;
    unsigned char t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    double t22;

LAB0:    t6 = (t5 + 4U);
    t7 = (t2 != 0);
    if (t7 == 1)
        goto LAB3;

LAB2:    t8 = (t5 + 12U);
    t9 = (t3 != 0);
    if (t9 == 1)
        goto LAB5;

LAB4:    t10 = (0 + 8U);
    t11 = (t2 + t10);
    t12 = *((double *)t11);
    t13 = ((IEEE_P_3972351953) + 1408U);
    t14 = *((char **)t13);
    t15 = *((double *)t14);
    t16 = (-(t15));
    t17 = (t12 == t16);
    if (t17 != 0)
        goto LAB6;

LAB8:
LAB7:    t10 = (0 + 8U);
    t11 = (t3 + t10);
    t12 = *((double *)t11);
    t13 = ((IEEE_P_3972351953) + 1408U);
    t14 = *((char **)t13);
    t15 = *((double *)t14);
    t16 = (-(t15));
    t7 = (t12 == t16);
    if (t7 != 0)
        goto LAB12;

LAB14:
LAB13:    t10 = (0 + 0U);
    t11 = (t2 + t10);
    t12 = *((double *)t11);
    t9 = (t12 == 0.00000000000000000);
    if (t9 == 1)
        goto LAB21;

LAB22:    t7 = (unsigned char)0;

LAB23:    if (t7 != 0)
        goto LAB18;

LAB20:
LAB19:    t10 = (0 + 0U);
    t11 = (t2 + t10);
    t12 = *((double *)t11);
    t19 = (0 + 0U);
    t13 = (t3 + t19);
    t15 = *((double *)t13);
    t9 = (t12 == t15);
    if (t9 == 1)
        goto LAB28;

LAB29:    t7 = (unsigned char)0;

LAB30:    if (t7 != 0)
        goto LAB25;

LAB27:
LAB26:    t0 = (unsigned char)0;

LAB1:    return t0;
LAB3:    *((char **)t6) = t2;
    goto LAB2;

LAB5:    *((char **)t8) = t3;
    goto LAB4;

LAB6:    if ((unsigned char)0 == 0)
        goto LAB9;

LAB10:    t0 = (unsigned char)0;
    goto LAB1;

LAB9:    t13 = (t1 + 4948);
    xsi_report(t13, 26U, (unsigned char)2);
    goto LAB10;

LAB11:    goto LAB7;

LAB12:    if ((unsigned char)0 == 0)
        goto LAB15;

LAB16:    t0 = (unsigned char)0;
    goto LAB1;

LAB15:    t13 = (t1 + 4974);
    xsi_report(t13, 26U, (unsigned char)2);
    goto LAB16;

LAB17:    goto LAB13;

LAB18:    t0 = (unsigned char)1;
    goto LAB1;

LAB21:    t19 = (0 + 0U);
    t13 = (t3 + t19);
    t15 = *((double *)t13);
    t17 = (t15 == 0.00000000000000000);
    t7 = t17;
    goto LAB23;

LAB24:    goto LAB19;

LAB25:    t0 = (unsigned char)1;
    goto LAB1;

LAB28:    t20 = (0 + 8U);
    t14 = (t2 + t20);
    t16 = *((double *)t14);
    t21 = (0 + 8U);
    t18 = (t3 + t21);
    t22 = *((double *)t18);
    t17 = (t16 == t22);
    t7 = t17;
    goto LAB30;

LAB31:    goto LAB26;

LAB32:;
}

unsigned char ieee_p_4165608084_sub_3498812266_2178808227(char *t1, char *t2, char *t3)
{
    char t5[24];
    unsigned char t0;
    char *t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned int t10;
    char *t11;
    double t12;
    char *t13;
    char *t14;
    double t15;
    double t16;
    unsigned char t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    double t22;

LAB0:    t6 = (t5 + 4U);
    t7 = (t2 != 0);
    if (t7 == 1)
        goto LAB3;

LAB2:    t8 = (t5 + 12U);
    t9 = (t3 != 0);
    if (t9 == 1)
        goto LAB5;

LAB4:    t10 = (0 + 8U);
    t11 = (t2 + t10);
    t12 = *((double *)t11);
    t13 = ((IEEE_P_3972351953) + 1408U);
    t14 = *((char **)t13);
    t15 = *((double *)t14);
    t16 = (-(t15));
    t17 = (t12 == t16);
    if (t17 != 0)
        goto LAB6;

LAB8:
LAB7:    t10 = (0 + 8U);
    t11 = (t3 + t10);
    t12 = *((double *)t11);
    t13 = ((IEEE_P_3972351953) + 1408U);
    t14 = *((char **)t13);
    t15 = *((double *)t14);
    t16 = (-(t15));
    t7 = (t12 == t16);
    if (t7 != 0)
        goto LAB12;

LAB14:
LAB13:    t10 = (0 + 0U);
    t11 = (t2 + t10);
    t12 = *((double *)t11);
    t9 = (t12 == 0.00000000000000000);
    if (t9 == 1)
        goto LAB21;

LAB22:    t7 = (unsigned char)0;

LAB23:    if (t7 != 0)
        goto LAB18;

LAB20:
LAB19:    t10 = (0 + 0U);
    t11 = (t2 + t10);
    t12 = *((double *)t11);
    t19 = (0 + 0U);
    t13 = (t3 + t19);
    t15 = *((double *)t13);
    t9 = (t12 == t15);
    if (t9 == 1)
        goto LAB28;

LAB29:    t7 = (unsigned char)0;

LAB30:    if (t7 != 0)
        goto LAB25;

LAB27:
LAB26:    t0 = (unsigned char)1;

LAB1:    return t0;
LAB3:    *((char **)t6) = t2;
    goto LAB2;

LAB5:    *((char **)t8) = t3;
    goto LAB4;

LAB6:    if ((unsigned char)0 == 0)
        goto LAB9;

LAB10:    t0 = (unsigned char)0;
    goto LAB1;

LAB9:    t13 = (t1 + 5000);
    xsi_report(t13, 27U, (unsigned char)2);
    goto LAB10;

LAB11:    goto LAB7;

LAB12:    if ((unsigned char)0 == 0)
        goto LAB15;

LAB16:    t0 = (unsigned char)0;
    goto LAB1;

LAB15:    t13 = (t1 + 5027);
    xsi_report(t13, 27U, (unsigned char)2);
    goto LAB16;

LAB17:    goto LAB13;

LAB18:    t0 = (unsigned char)0;
    goto LAB1;

LAB21:    t19 = (0 + 0U);
    t13 = (t3 + t19);
    t15 = *((double *)t13);
    t17 = (t15 == 0.00000000000000000);
    t7 = t17;
    goto LAB23;

LAB24:    goto LAB19;

LAB25:    t0 = (unsigned char)0;
    goto LAB1;

LAB28:    t20 = (0 + 8U);
    t14 = (t2 + t20);
    t16 = *((double *)t14);
    t21 = (0 + 8U);
    t18 = (t3 + t21);
    t22 = *((double *)t18);
    t17 = (t16 == t22);
    t7 = t17;
    goto LAB30;

LAB31:    goto LAB26;

LAB32:;
}

char *ieee_p_4165608084_sub_1083378268_2178808227(char *t1, double t2, double t3)
{
    char t5[24];
    char *t0;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t6 = (t5 + 4U);
    *((double *)t6) = t2;
    t7 = (t5 + 12U);
    *((double *)t7) = t3;
    t8 = xsi_get_transient_memory(16U);
    memset(t8, 0, 16U);
    t9 = t8;
    *((double *)t9) = t2;
    t10 = (t8 + 8U);
    *((double *)t10) = t3;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t8, 16U);

LAB1:    return t0;
LAB2:;
}

double ieee_p_4165608084_sub_1224055613_2178808227(char *t1, double t2)
{
    char t3[128];
    char t4[16];
    char t8[8];
    double t0;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    unsigned char t12;
    char *t13;
    char *t14;
    double t15;
    double t16;
    unsigned char t17;
    char *t18;
    double t19;
    unsigned char t20;
    double t21;
    double t22;
    double t23;

LAB0:    t5 = (t3 + 4U);
    t6 = ((STD_STANDARD) + 472);
    t7 = (t5 + 88U);
    *((char **)t7) = t6;
    t9 = (t5 + 56U);
    *((char **)t9) = t8;
    xsi_type_set_default_value(t6, t8, 0);
    t10 = (t5 + 80U);
    *((unsigned int *)t10) = 8U;
    t11 = (t4 + 4U);
    *((double *)t11) = t2;
    t13 = ((IEEE_P_3972351953) + 1408U);
    t14 = *((char **)t13);
    t15 = *((double *)t14);
    t16 = (-(t15));
    t17 = (t2 > t16);
    if (t17 == 1)
        goto LAB5;

LAB6:    t12 = (unsigned char)0;

LAB7:    if (t12 != 0)
        goto LAB2;

LAB4:
LAB3:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((double *)t6) = t2;

LAB9:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t15 = *((double *)t7);
    t6 = ((IEEE_P_3972351953) + 1408U);
    t9 = *((char **)t6);
    t16 = *((double *)t9);
    t19 = (-(t16));
    t12 = (t15 <= t19);
    if (t12 != 0)
        goto LAB10;

LAB12:
LAB13:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t15 = *((double *)t7);
    t6 = ((IEEE_P_3972351953) + 1408U);
    t9 = *((char **)t6);
    t16 = *((double *)t9);
    t12 = (t15 > t16);
    if (t12 != 0)
        goto LAB14;

LAB16:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t15 = *((double *)t7);
    t0 = t15;

LAB1:    return t0;
LAB2:    t0 = t2;
    goto LAB1;

LAB5:    t13 = ((IEEE_P_3972351953) + 1408U);
    t18 = *((char **)t13);
    t19 = *((double *)t18);
    t20 = (t2 <= t19);
    t12 = t20;
    goto LAB7;

LAB8:    goto LAB3;

LAB10:    t6 = (t5 + 56U);
    t10 = *((char **)t6);
    t21 = *((double *)t10);
    t6 = ((IEEE_P_3972351953) + 1528U);
    t13 = *((char **)t6);
    t22 = *((double *)t13);
    t23 = (t21 + t22);
    t6 = (t5 + 56U);
    t14 = *((char **)t6);
    t6 = (t14 + 0);
    *((double *)t6) = t23;
    goto LAB9;

LAB11:;
LAB14:    t6 = (t5 + 56U);
    t10 = *((char **)t6);
    t19 = *((double *)t10);
    t6 = ((IEEE_P_3972351953) + 1528U);
    t13 = *((char **)t6);
    t21 = *((double *)t13);
    t22 = (t19 - t21);
    t6 = (t5 + 56U);
    t14 = *((char **)t6);
    t6 = (t14 + 0);
    *((double *)t6) = t22;
    goto LAB13;

LAB15:;
LAB17:;
}

char *ieee_p_4165608084_sub_4232924143_2178808227(char *t1, char *t2)
{
    char t3[128];
    char t4[16];
    char t8[8];
    char *t0;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    unsigned char t12;
    unsigned int t13;
    char *t14;
    double t15;
    unsigned char t16;
    unsigned int t17;
    char *t18;
    double t19;
    unsigned char t20;
    char *t21;
    char *t22;
    char *t23;
    double t24;
    double t25;
    unsigned int t26;
    unsigned int t27;
    double t28;
    double t29;
    double t30;
    double t31;
    double t32;
    double t33;

LAB0:    t5 = (t3 + 4U);
    t6 = ((STD_STANDARD) + 472);
    t7 = (t5 + 88U);
    *((char **)t7) = t6;
    t9 = (t5 + 56U);
    *((char **)t9) = t8;
    xsi_type_set_default_value(t6, t8, 0);
    t10 = (t5 + 80U);
    *((unsigned int *)t10) = 8U;
    t11 = (t4 + 4U);
    t12 = (t2 != 0);
    if (t12 == 1)
        goto LAB3;

LAB2:    t13 = (0 + 0U);
    t14 = (t2 + t13);
    t15 = *((double *)t14);
    t16 = (t15 == 0.00000000000000000);
    if (t16 != 0)
        goto LAB4;

LAB6:
LAB5:    t13 = (0 + 8U);
    t6 = (t2 + t13);
    t15 = *((double *)t6);
    t12 = (t15 == 0.00000000000000000);
    if (t12 != 0)
        goto LAB15;

LAB17:
LAB16:    t13 = (0 + 8U);
    t6 = (t2 + t13);
    t15 = *((double *)t6);
    t17 = (0 + 0U);
    t7 = (t2 + t17);
    t19 = *((double *)t7);
    t24 = ieee_p_3972351953_sub_1311584390_2984157535(IEEE_P_3972351953, t15, t19);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    t9 = (t10 + 0);
    *((double *)t9) = t24;
    t6 = xsi_get_transient_memory(16U);
    memset(t6, 0, 16U);
    t7 = t6;
    t13 = (0 + 0U);
    t9 = (t2 + t13);
    t15 = *((double *)t9);
    t17 = (0 + 0U);
    t10 = (t2 + t17);
    t19 = *((double *)t10);
    t24 = (t15 * t19);
    t26 = (0 + 8U);
    t14 = (t2 + t26);
    t25 = *((double *)t14);
    t27 = (0 + 8U);
    t18 = (t2 + t27);
    t28 = *((double *)t18);
    t29 = (t25 * t28);
    t30 = (t24 + t29);
    t31 = ieee_p_3972351953_sub_1722501855_2984157535(IEEE_P_3972351953, t30);
    *((double *)t7) = t31;
    t21 = (t6 + 8U);
    t22 = (t5 + 56U);
    t23 = *((char **)t22);
    t32 = *((double *)t23);
    t33 = ieee_p_4165608084_sub_1224055613_2178808227(t1, t32);
    *((double *)t21) = t33;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t6, 16U);

LAB1:    return t0;
LAB3:    *((char **)t11) = t2;
    goto LAB2;

LAB4:    t17 = (0 + 8U);
    t18 = (t2 + t17);
    t19 = *((double *)t18);
    t20 = (t19 == 0.00000000000000000);
    if (t20 != 0)
        goto LAB7;

LAB9:    t13 = (0 + 8U);
    t6 = (t2 + t13);
    t15 = *((double *)t6);
    t12 = (t15 > 0.00000000000000000);
    if (t12 != 0)
        goto LAB11;

LAB12:    t6 = xsi_get_transient_memory(16U);
    memset(t6, 0, 16U);
    t7 = t6;
    t13 = (0 + 8U);
    t9 = (t2 + t13);
    t15 = *((double *)t9);
    t19 = (-(t15));
    *((double *)t7) = t19;
    t10 = (t6 + 8U);
    t14 = ((IEEE_P_3972351953) + 1768U);
    t18 = *((char **)t14);
    t24 = *((double *)t18);
    t25 = (-(t24));
    *((double *)t10) = t25;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t6, 16U);
    goto LAB1;

LAB7:    t21 = xsi_get_transient_memory(16U);
    memset(t21, 0, 16U);
    t22 = t21;
    *((double *)t22) = 0.00000000000000000;
    t23 = (t21 + 8U);
    *((double *)t23) = 0.00000000000000000;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t21, 16U);
    goto LAB1;

LAB8:    goto LAB5;

LAB10:    goto LAB8;

LAB11:    t7 = xsi_get_transient_memory(16U);
    memset(t7, 0, 16U);
    t9 = t7;
    t17 = (0 + 8U);
    t10 = (t2 + t17);
    t19 = *((double *)t10);
    *((double *)t9) = t19;
    t14 = (t7 + 8U);
    t18 = ((IEEE_P_3972351953) + 1768U);
    t21 = *((char **)t18);
    t24 = *((double *)t21);
    *((double *)t14) = t24;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t7, 16U);
    goto LAB1;

LAB13:    goto LAB8;

LAB14:    goto LAB8;

LAB15:    t17 = (0 + 0U);
    t7 = (t2 + t17);
    t19 = *((double *)t7);
    t16 = (t19 == 0.00000000000000000);
    if (t16 != 0)
        goto LAB18;

LAB20:    t13 = (0 + 0U);
    t6 = (t2 + t13);
    t15 = *((double *)t6);
    t12 = (t15 > 0.00000000000000000);
    if (t12 != 0)
        goto LAB22;

LAB23:    t6 = xsi_get_transient_memory(16U);
    memset(t6, 0, 16U);
    t7 = t6;
    t13 = (0 + 0U);
    t9 = (t2 + t13);
    t15 = *((double *)t9);
    t19 = (-(t15));
    *((double *)t7) = t19;
    t10 = (t6 + 8U);
    t14 = ((IEEE_P_3972351953) + 1408U);
    t18 = *((char **)t14);
    t24 = *((double *)t18);
    *((double *)t10) = t24;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t6, 16U);
    goto LAB1;

LAB18:    t9 = xsi_get_transient_memory(16U);
    memset(t9, 0, 16U);
    t10 = t9;
    *((double *)t10) = 0.00000000000000000;
    t14 = (t9 + 8U);
    *((double *)t14) = 0.00000000000000000;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t9, 16U);
    goto LAB1;

LAB19:    goto LAB16;

LAB21:    goto LAB19;

LAB22:    t7 = xsi_get_transient_memory(16U);
    memset(t7, 0, 16U);
    t9 = t7;
    t17 = (0 + 0U);
    t10 = (t2 + t17);
    t19 = *((double *)t10);
    *((double *)t9) = t19;
    t14 = (t7 + 8U);
    *((double *)t14) = 0.00000000000000000;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t7, 16U);
    goto LAB1;

LAB24:    goto LAB19;

LAB25:    goto LAB19;

LAB26:;
}

char *ieee_p_4165608084_sub_693027240_2178808227(char *t1, char *t2)
{
    char t4[16];
    char *t0;
    char *t5;
    unsigned char t6;
    unsigned int t7;
    char *t8;
    double t9;
    char *t10;
    char *t11;
    double t12;
    double t13;
    unsigned char t14;
    char *t15;
    unsigned int t16;
    double t17;
    char *t18;
    unsigned int t19;
    char *t20;
    double t21;
    unsigned int t22;
    char *t23;
    double t24;
    double t25;
    double t26;

LAB0:    t5 = (t4 + 4U);
    t6 = (t2 != 0);
    if (t6 == 1)
        goto LAB3;

LAB2:    t7 = (0 + 8U);
    t8 = (t2 + t7);
    t9 = *((double *)t8);
    t10 = ((IEEE_P_3972351953) + 1408U);
    t11 = *((char **)t10);
    t12 = *((double *)t11);
    t13 = (-(t12));
    t14 = (t9 == t13);
    if (t14 != 0)
        goto LAB4;

LAB6:
LAB5:    t8 = xsi_get_transient_memory(16U);
    memset(t8, 0, 16U);
    t10 = t8;
    t7 = (0 + 0U);
    t11 = (t2 + t7);
    t9 = *((double *)t11);
    t16 = (0 + 8U);
    t15 = (t2 + t16);
    t12 = *((double *)t15);
    t13 = ieee_p_3972351953_sub_773523744_2984157535(IEEE_P_3972351953, t12);
    t17 = (t9 * t13);
    *((double *)t10) = t17;
    t18 = (t8 + 8U);
    t19 = (0 + 0U);
    t20 = (t2 + t19);
    t21 = *((double *)t20);
    t22 = (0 + 8U);
    t23 = (t2 + t22);
    t24 = *((double *)t23);
    t25 = ieee_p_3972351953_sub_1485185913_2984157535(IEEE_P_3972351953, t24);
    t26 = (t21 * t25);
    *((double *)t18) = t26;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t8, 16U);

LAB1:    return t0;
LAB3:    *((char **)t5) = t2;
    goto LAB2;

LAB4:    if ((unsigned char)0 == 0)
        goto LAB7;

LAB8:    t8 = (t1 + 1408U);
    t10 = *((char **)t8);
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t10, 16U);
    goto LAB1;

LAB7:    t10 = (t1 + 5054);
    xsi_report(t10, 39U, (unsigned char)2);
    goto LAB8;

LAB9:    goto LAB5;

LAB10:;
}

double ieee_p_4165608084_sub_119379431_2178808227(char *t1, char *t2)
{
    char t4[16];
    double t0;
    char *t5;
    unsigned char t6;
    unsigned int t7;
    char *t8;
    double t9;
    unsigned int t10;
    char *t11;
    double t12;
    double t13;
    unsigned int t14;
    char *t15;
    double t16;
    unsigned int t17;
    char *t18;
    double t19;
    double t20;
    double t21;
    double t22;

LAB0:    t5 = (t4 + 4U);
    t6 = (t2 != 0);
    if (t6 == 1)
        goto LAB3;

LAB2:    t7 = (0 + 0U);
    t8 = (t2 + t7);
    t9 = *((double *)t8);
    t10 = (0 + 0U);
    t11 = (t2 + t10);
    t12 = *((double *)t11);
    t13 = (t9 * t12);
    t14 = (0 + 8U);
    t15 = (t2 + t14);
    t16 = *((double *)t15);
    t17 = (0 + 8U);
    t18 = (t2 + t17);
    t19 = *((double *)t18);
    t20 = (t16 * t19);
    t21 = (t13 + t20);
    t22 = ieee_p_3972351953_sub_1722501855_2984157535(IEEE_P_3972351953, t21);
    t0 = t22;

LAB1:    return t0;
LAB3:    *((char **)t5) = t2;
    goto LAB2;

LAB4:;
}

double ieee_p_4165608084_sub_127638857_2178808227(char *t1, char *t2)
{
    char t4[16];
    double t0;
    char *t5;
    unsigned char t6;
    unsigned int t7;
    char *t8;
    double t9;
    char *t10;
    char *t11;
    double t12;
    double t13;
    unsigned char t14;

LAB0:    t5 = (t4 + 4U);
    t6 = (t2 != 0);
    if (t6 == 1)
        goto LAB3;

LAB2:    t7 = (0 + 8U);
    t8 = (t2 + t7);
    t9 = *((double *)t8);
    t10 = ((IEEE_P_3972351953) + 1408U);
    t11 = *((char **)t10);
    t12 = *((double *)t11);
    t13 = (-(t12));
    t14 = (t9 == t13);
    if (t14 != 0)
        goto LAB4;

LAB6:
LAB5:    t7 = (0 + 0U);
    t8 = (t2 + t7);
    t9 = *((double *)t8);
    t0 = t9;

LAB1:    return t0;
LAB3:    *((char **)t5) = t2;
    goto LAB2;

LAB4:    if ((unsigned char)0 == 0)
        goto LAB7;

LAB8:    t0 = 0.00000000000000000;
    goto LAB1;

LAB7:    t10 = (t1 + 5093);
    xsi_report(t10, 26U, (unsigned char)2);
    goto LAB8;

LAB9:    goto LAB5;

LAB10:;
}

double ieee_p_4165608084_sub_1253342372_2178808227(char *t1, char *t2)
{
    char t3[128];
    char t4[16];
    char t8[16];
    double t0;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    double t17;

LAB0:    t5 = (t3 + 4U);
    t6 = (t1 + 3104);
    t7 = (t5 + 88U);
    *((char **)t7) = t6;
    t9 = (t5 + 56U);
    *((char **)t9) = t8;
    xsi_type_set_default_value(t6, t8, 0);
    t10 = (t5 + 80U);
    *((unsigned int *)t10) = 16U;
    t11 = (t4 + 4U);
    t12 = (t2 != 0);
    if (t12 == 1)
        goto LAB3;

LAB2:    t13 = ieee_p_4165608084_sub_4232924143_2178808227(t1, t2);
    t14 = (t5 + 56U);
    t15 = *((char **)t14);
    t14 = (t15 + 0);
    memcpy(t14, t13, 16U);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t16 = (0 + 8U);
    t6 = (t7 + t16);
    t17 = *((double *)t6);
    t0 = t17;

LAB1:    return t0;
LAB3:    *((char **)t11) = t2;
    goto LAB2;

LAB4:;
}

double ieee_p_4165608084_sub_694236561_2178808227(char *t1, char *t2)
{
    char t4[16];
    double t0;
    char *t5;
    unsigned char t6;
    unsigned int t7;
    char *t8;
    double t9;
    char *t10;
    char *t11;
    double t12;
    double t13;
    unsigned char t14;

LAB0:    t5 = (t4 + 4U);
    t6 = (t2 != 0);
    if (t6 == 1)
        goto LAB3;

LAB2:    t7 = (0 + 8U);
    t8 = (t2 + t7);
    t9 = *((double *)t8);
    t10 = ((IEEE_P_3972351953) + 1408U);
    t11 = *((char **)t10);
    t12 = *((double *)t11);
    t13 = (-(t12));
    t14 = (t9 == t13);
    if (t14 != 0)
        goto LAB4;

LAB6:
LAB5:    t7 = (0 + 8U);
    t8 = (t2 + t7);
    t9 = *((double *)t8);
    t0 = t9;

LAB1:    return t0;
LAB3:    *((char **)t5) = t2;
    goto LAB2;

LAB4:    if ((unsigned char)0 == 0)
        goto LAB7;

LAB8:    t0 = 0.00000000000000000;
    goto LAB1;

LAB7:    t10 = (t1 + 5119);
    xsi_report(t10, 26U, (unsigned char)2);
    goto LAB8;

LAB9:    goto LAB5;

LAB10:;
}

char *ieee_p_4165608084_sub_1366103904_2178808227(char *t1, char *t2)
{
    char t4[16];
    char *t0;
    char *t5;
    unsigned char t6;
    char *t7;
    char *t8;
    unsigned int t9;
    char *t10;
    double t11;
    double t12;
    char *t13;
    unsigned int t14;
    char *t15;
    double t16;
    double t17;

LAB0:    t5 = (t4 + 4U);
    t6 = (t2 != 0);
    if (t6 == 1)
        goto LAB3;

LAB2:    t7 = xsi_get_transient_memory(16U);
    memset(t7, 0, 16U);
    t8 = t7;
    t9 = (0 + 0U);
    t10 = (t2 + t9);
    t11 = *((double *)t10);
    t12 = (-(t11));
    *((double *)t8) = t12;
    t13 = (t7 + 8U);
    t14 = (0 + 8U);
    t15 = (t2 + t14);
    t16 = *((double *)t15);
    t17 = (-(t16));
    *((double *)t13) = t17;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t7, 16U);

LAB1:    return t0;
LAB3:    *((char **)t5) = t2;
    goto LAB2;

LAB4:;
}

char *ieee_p_4165608084_sub_3707476771_2178808227(char *t1, char *t2)
{
    char t3[128];
    char t4[16];
    char t8[8];
    char *t0;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    unsigned char t12;
    unsigned int t13;
    char *t14;
    double t15;
    char *t16;
    char *t17;
    double t18;
    double t19;
    unsigned char t20;

LAB0:    t5 = (t3 + 4U);
    t6 = ((STD_STANDARD) + 472);
    t7 = (t5 + 88U);
    *((char **)t7) = t6;
    t9 = (t5 + 56U);
    *((char **)t9) = t8;
    xsi_type_set_default_value(t6, t8, 0);
    t10 = (t5 + 80U);
    *((unsigned int *)t10) = 8U;
    t11 = (t4 + 4U);
    t12 = (t2 != 0);
    if (t12 == 1)
        goto LAB3;

LAB2:    t13 = (0 + 8U);
    t14 = (t2 + t13);
    t15 = *((double *)t14);
    t16 = ((IEEE_P_3972351953) + 1408U);
    t17 = *((char **)t16);
    t18 = *((double *)t17);
    t19 = (-(t18));
    t20 = (t15 == t19);
    if (t20 != 0)
        goto LAB4;

LAB6:
LAB5:    t13 = (0 + 8U);
    t6 = (t2 + t13);
    t15 = *((double *)t6);
    t7 = ((IEEE_P_3972351953) + 1408U);
    t9 = *((char **)t7);
    t18 = *((double *)t9);
    t19 = (t15 + t18);
    t7 = (t5 + 56U);
    t10 = *((char **)t7);
    t7 = (t10 + 0);
    *((double *)t7) = t19;
    t6 = xsi_get_transient_memory(16U);
    memset(t6, 0, 16U);
    t7 = t6;
    t13 = (0 + 0U);
    t9 = (t2 + t13);
    t15 = *((double *)t9);
    *((double *)t7) = t15;
    t10 = (t6 + 8U);
    t14 = (t5 + 56U);
    t16 = *((char **)t14);
    t18 = *((double *)t16);
    t19 = ieee_p_4165608084_sub_1224055613_2178808227(t1, t18);
    *((double *)t10) = t19;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t6, 16U);

LAB1:    return t0;
LAB3:    *((char **)t11) = t2;
    goto LAB2;

LAB4:    if ((unsigned char)0 == 0)
        goto LAB7;

LAB8:    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t2, 16U);
    goto LAB1;

LAB7:    t16 = (t1 + 5145);
    xsi_report(t16, 24U, (unsigned char)2);
    goto LAB8;

LAB9:    goto LAB5;

LAB10:;
}

char *ieee_p_4165608084_sub_1037174777_2178808227(char *t1, char *t2)
{
    char t4[16];
    char *t0;
    char *t5;
    unsigned char t6;
    char *t7;
    char *t8;
    unsigned int t9;
    char *t10;
    double t11;
    char *t12;
    unsigned int t13;
    char *t14;
    double t15;
    double t16;

LAB0:    t5 = (t4 + 4U);
    t6 = (t2 != 0);
    if (t6 == 1)
        goto LAB3;

LAB2:    t7 = xsi_get_transient_memory(16U);
    memset(t7, 0, 16U);
    t8 = t7;
    t9 = (0 + 0U);
    t10 = (t2 + t9);
    t11 = *((double *)t10);
    *((double *)t8) = t11;
    t12 = (t7 + 8U);
    t13 = (0 + 8U);
    t14 = (t2 + t13);
    t15 = *((double *)t14);
    t16 = (-(t15));
    *((double *)t12) = t16;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t7, 16U);

LAB1:    return t0;
LAB3:    *((char **)t5) = t2;
    goto LAB2;

LAB4:;
}

char *ieee_p_4165608084_sub_3272884627_2178808227(char *t1, char *t2)
{
    char t3[128];
    char t4[16];
    char t8[8];
    char *t0;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    unsigned char t12;
    unsigned int t13;
    char *t14;
    double t15;
    char *t16;
    char *t17;
    double t18;
    double t19;
    unsigned char t20;
    unsigned int t22;
    unsigned char t23;
    unsigned int t24;
    double t25;

LAB0:    t5 = (t3 + 4U);
    t6 = (t1 + 3512);
    t7 = (t5 + 88U);
    *((char **)t7) = t6;
    t9 = (t5 + 56U);
    *((char **)t9) = t8;
    xsi_type_set_default_value(t6, t8, 0);
    t10 = (t5 + 80U);
    *((unsigned int *)t10) = 8U;
    t11 = (t4 + 4U);
    t12 = (t2 != 0);
    if (t12 == 1)
        goto LAB3;

LAB2:    t13 = (0 + 8U);
    t14 = (t2 + t13);
    t15 = *((double *)t14);
    t16 = ((IEEE_P_3972351953) + 1408U);
    t17 = *((char **)t16);
    t18 = *((double *)t17);
    t19 = (-(t18));
    t20 = (t15 == t19);
    if (t20 != 0)
        goto LAB4;

LAB6:
LAB5:    t13 = (0 + 8U);
    t6 = (t2 + t13);
    t15 = *((double *)t6);
    t7 = ((IEEE_P_3972351953) + 1408U);
    t9 = *((char **)t7);
    t18 = *((double *)t9);
    t20 = (t15 == t18);
    if (t20 == 1)
        goto LAB13;

LAB14:    t22 = (0 + 8U);
    t7 = (t2 + t22);
    t19 = *((double *)t7);
    t23 = (t19 == 0.00000000000000000);
    t12 = t23;

LAB15:    if (t12 != 0)
        goto LAB10;

LAB12:    t13 = (0 + 8U);
    t6 = (t2 + t13);
    t15 = *((double *)t6);
    t18 = (-(t15));
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    t7 = (t9 + 0);
    *((double *)t7) = t18;

LAB11:    t6 = xsi_get_transient_memory(16U);
    memset(t6, 0, 16U);
    t7 = t6;
    t13 = (0 + 0U);
    t9 = (t2 + t13);
    t15 = *((double *)t9);
    *((double *)t7) = t15;
    t10 = (t6 + 8U);
    t14 = (t5 + 56U);
    t16 = *((char **)t14);
    t18 = *((double *)t16);
    *((double *)t10) = t18;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t6, 16U);

LAB1:    return t0;
LAB3:    *((char **)t11) = t2;
    goto LAB2;

LAB4:    if ((unsigned char)0 == 0)
        goto LAB7;

LAB8:    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t2, 16U);
    goto LAB1;

LAB7:    t16 = (t1 + 5169);
    xsi_report(t16, 27U, (unsigned char)2);
    goto LAB8;

LAB9:    goto LAB5;

LAB10:    t24 = (0 + 8U);
    t10 = (t2 + t24);
    t25 = *((double *)t10);
    t14 = (t5 + 56U);
    t16 = *((char **)t14);
    t14 = (t16 + 0);
    *((double *)t14) = t25;
    goto LAB11;

LAB13:    t12 = (unsigned char)1;
    goto LAB15;

LAB16:;
}

char *ieee_p_4165608084_sub_1820902636_2178808227(char *t1, char *t2)
{
    char t3[488];
    char t4[16];
    char t8[16];
    char t14[16];
    char t20[8];
    char t26[8];
    char *t0;
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
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    char *t29;
    unsigned char t30;
    char *t31;
    char *t32;
    unsigned char t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;
    double t38;
    double t39;
    double t40;
    double t41;
    double t42;
    double t43;
    double t44;
    double t45;

LAB0:    t5 = (t3 + 4U);
    t6 = (t1 + 3104);
    t7 = (t5 + 88U);
    *((char **)t7) = t6;
    t9 = (t5 + 56U);
    *((char **)t9) = t8;
    xsi_type_set_default_value(t6, t8, 0);
    t10 = (t5 + 80U);
    *((unsigned int *)t10) = 16U;
    t11 = (t3 + 124U);
    t12 = (t1 + 2992);
    t13 = (t11 + 88U);
    *((char **)t13) = t12;
    t15 = (t11 + 56U);
    *((char **)t15) = t14;
    xsi_type_set_default_value(t12, t14, 0);
    t16 = (t11 + 80U);
    *((unsigned int *)t16) = 16U;
    t17 = (t3 + 244U);
    t18 = ((STD_STANDARD) + 472);
    t19 = (t17 + 88U);
    *((char **)t19) = t18;
    t21 = (t17 + 56U);
    *((char **)t21) = t20;
    xsi_type_set_default_value(t18, t20, 0);
    t22 = (t17 + 80U);
    *((unsigned int *)t22) = 8U;
    t23 = (t3 + 364U);
    t24 = ((STD_STANDARD) + 472);
    t25 = (t23 + 88U);
    *((char **)t25) = t24;
    t27 = (t23 + 56U);
    *((char **)t27) = t26;
    xsi_type_set_default_value(t24, t26, 0);
    t28 = (t23 + 80U);
    *((unsigned int *)t28) = 8U;
    t29 = (t4 + 4U);
    t30 = (t2 != 0);
    if (t30 == 1)
        goto LAB3;

LAB2:    t31 = (t1 + 1408U);
    t32 = *((char **)t31);
    t33 = 1;
    if (16U == 16U)
        goto LAB7;

LAB8:    t33 = 0;

LAB9:    if (t33 != 0)
        goto LAB4;

LAB6:
LAB5:    t6 = ieee_p_4165608084_sub_4232924143_2178808227(t1, t2);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    t7 = (t9 + 0);
    memcpy(t7, t6, 16U);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t34 = (0 + 0U);
    t6 = (t7 + t34);
    t38 = *((double *)t6);
    t39 = ieee_p_3972351953_sub_1722501855_2984157535(IEEE_P_3972351953, t38);
    t9 = (t17 + 56U);
    t10 = *((char **)t9);
    t9 = (t10 + 0);
    *((double *)t9) = t39;
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t34 = (0 + 8U);
    t6 = (t7 + t34);
    t38 = *((double *)t6);
    t39 = (0.50000000000000000 * t38);
    t9 = (t23 + 56U);
    t10 = *((char **)t9);
    t9 = (t10 + 0);
    *((double *)t9) = t39;
    t6 = (t23 + 56U);
    t7 = *((char **)t6);
    t38 = *((double *)t7);
    t39 = ieee_p_3972351953_sub_773523744_2984157535(IEEE_P_3972351953, t38);
    t30 = (t39 > 0.00000000000000000);
    if (t30 != 0)
        goto LAB14;

LAB16:
LAB15:    t6 = (t23 + 56U);
    t7 = *((char **)t6);
    t38 = *((double *)t7);
    t39 = ieee_p_3972351953_sub_773523744_2984157535(IEEE_P_3972351953, t38);
    t30 = (t39 < 0.00000000000000000);
    if (t30 != 0)
        goto LAB18;

LAB20:
LAB19:    t6 = (t23 + 56U);
    t7 = *((char **)t6);
    t38 = *((double *)t7);
    t39 = ieee_p_3972351953_sub_1485185913_2984157535(IEEE_P_3972351953, t38);
    t30 = (t39 > 0.00000000000000000);
    if (t30 != 0)
        goto LAB22;

LAB24:
LAB23:    t6 = (t11 + 56U);
    t7 = *((char **)t6);
    t34 = (0 + 0U);
    t6 = (t7 + t34);
    *((double *)t6) = 0.00000000000000000;
    t6 = (t17 + 56U);
    t7 = *((char **)t6);
    t38 = *((double *)t7);
    t6 = (t23 + 56U);
    t9 = *((char **)t6);
    t39 = *((double *)t9);
    t6 = ((IEEE_P_3972351953) + 1408U);
    t10 = *((char **)t6);
    t40 = *((double *)t10);
    t41 = (t39 + t40);
    t42 = ieee_p_3972351953_sub_1485185913_2984157535(IEEE_P_3972351953, t41);
    t43 = (t38 * t42);
    t6 = (t11 + 56U);
    t12 = *((char **)t6);
    t34 = (0 + 8U);
    t6 = (t12 + t34);
    *((double *)t6) = t43;
    t6 = (t11 + 56U);
    t7 = *((char **)t6);
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t7, 16U);

LAB1:    return t0;
LAB3:    *((char **)t29) = t2;
    goto LAB2;

LAB4:    t36 = (t1 + 1408U);
    t37 = *((char **)t36);
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t37, 16U);
    goto LAB1;

LAB7:    t34 = 0;

LAB10:    if (t34 < 16U)
        goto LAB11;
    else
        goto LAB9;

LAB11:    t31 = (t2 + t34);
    t35 = (t32 + t34);
    if (*((unsigned char *)t31) != *((unsigned char *)t35))
        goto LAB8;

LAB12:    t34 = (t34 + 1);
    goto LAB10;

LAB13:    goto LAB5;

LAB14:    t6 = (t17 + 56U);
    t9 = *((char **)t6);
    t40 = *((double *)t9);
    t6 = (t23 + 56U);
    t10 = *((char **)t6);
    t41 = *((double *)t10);
    t42 = ieee_p_3972351953_sub_773523744_2984157535(IEEE_P_3972351953, t41);
    t43 = (t40 * t42);
    t6 = (t11 + 56U);
    t12 = *((char **)t6);
    t34 = (0 + 0U);
    t6 = (t12 + t34);
    *((double *)t6) = t43;
    t6 = (t17 + 56U);
    t7 = *((char **)t6);
    t38 = *((double *)t7);
    t6 = (t23 + 56U);
    t9 = *((char **)t6);
    t39 = *((double *)t9);
    t40 = ieee_p_3972351953_sub_1485185913_2984157535(IEEE_P_3972351953, t39);
    t41 = (t38 * t40);
    t6 = (t11 + 56U);
    t10 = *((char **)t6);
    t34 = (0 + 8U);
    t6 = (t10 + t34);
    *((double *)t6) = t41;
    t6 = (t11 + 56U);
    t7 = *((char **)t6);
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t7, 16U);
    goto LAB1;

LAB17:    goto LAB15;

LAB18:    t6 = (t17 + 56U);
    t9 = *((char **)t6);
    t40 = *((double *)t9);
    t6 = (t23 + 56U);
    t10 = *((char **)t6);
    t41 = *((double *)t10);
    t6 = ((IEEE_P_3972351953) + 1408U);
    t12 = *((char **)t6);
    t42 = *((double *)t12);
    t43 = (t41 + t42);
    t44 = ieee_p_3972351953_sub_773523744_2984157535(IEEE_P_3972351953, t43);
    t45 = (t40 * t44);
    t6 = (t11 + 56U);
    t13 = *((char **)t6);
    t34 = (0 + 0U);
    t6 = (t13 + t34);
    *((double *)t6) = t45;
    t6 = (t17 + 56U);
    t7 = *((char **)t6);
    t38 = *((double *)t7);
    t6 = (t23 + 56U);
    t9 = *((char **)t6);
    t39 = *((double *)t9);
    t6 = ((IEEE_P_3972351953) + 1408U);
    t10 = *((char **)t6);
    t40 = *((double *)t10);
    t41 = (t39 + t40);
    t42 = ieee_p_3972351953_sub_1485185913_2984157535(IEEE_P_3972351953, t41);
    t43 = (t38 * t42);
    t6 = (t11 + 56U);
    t12 = *((char **)t6);
    t34 = (0 + 8U);
    t6 = (t12 + t34);
    *((double *)t6) = t43;
    t6 = (t11 + 56U);
    t7 = *((char **)t6);
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t7, 16U);
    goto LAB1;

LAB21:    goto LAB19;

LAB22:    t6 = (t11 + 56U);
    t9 = *((char **)t6);
    t34 = (0 + 0U);
    t6 = (t9 + t34);
    *((double *)t6) = 0.00000000000000000;
    t6 = (t17 + 56U);
    t7 = *((char **)t6);
    t38 = *((double *)t7);
    t6 = (t23 + 56U);
    t9 = *((char **)t6);
    t39 = *((double *)t9);
    t40 = ieee_p_3972351953_sub_1485185913_2984157535(IEEE_P_3972351953, t39);
    t41 = (t38 * t40);
    t6 = (t11 + 56U);
    t10 = *((char **)t6);
    t34 = (0 + 8U);
    t6 = (t10 + t34);
    *((double *)t6) = t41;
    t6 = (t11 + 56U);
    t7 = *((char **)t6);
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t7, 16U);
    goto LAB1;

LAB25:    goto LAB23;

LAB26:;
}

char *ieee_p_4165608084_sub_3423396204_2178808227(char *t1, char *t2)
{
    char t3[368];
    char t4[16];
    char t8[16];
    char t14[8];
    char t20[8];
    char *t0;
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
    char *t21;
    char *t22;
    char *t23;
    unsigned char t24;
    unsigned int t25;
    char *t26;
    double t27;
    char *t28;
    char *t29;
    double t30;
    double t31;
    unsigned char t32;
    unsigned int t34;
    unsigned char t35;
    double t36;
    double t37;
    double t38;
    double t39;

LAB0:    t5 = (t3 + 4U);
    t6 = (t1 + 3104);
    t7 = (t5 + 88U);
    *((char **)t7) = t6;
    t9 = (t5 + 56U);
    *((char **)t9) = t8;
    xsi_type_set_default_value(t6, t8, 0);
    t10 = (t5 + 80U);
    *((unsigned int *)t10) = 16U;
    t11 = (t3 + 124U);
    t12 = ((STD_STANDARD) + 472);
    t13 = (t11 + 88U);
    *((char **)t13) = t12;
    t15 = (t11 + 56U);
    *((char **)t15) = t14;
    xsi_type_set_default_value(t12, t14, 0);
    t16 = (t11 + 80U);
    *((unsigned int *)t16) = 8U;
    t17 = (t3 + 244U);
    t18 = ((STD_STANDARD) + 472);
    t19 = (t17 + 88U);
    *((char **)t19) = t18;
    t21 = (t17 + 56U);
    *((char **)t21) = t20;
    xsi_type_set_default_value(t18, t20, 0);
    t22 = (t17 + 80U);
    *((unsigned int *)t22) = 8U;
    t23 = (t4 + 4U);
    t24 = (t2 != 0);
    if (t24 == 1)
        goto LAB3;

LAB2:    t25 = (0 + 8U);
    t26 = (t2 + t25);
    t27 = *((double *)t26);
    t28 = ((IEEE_P_3972351953) + 1408U);
    t29 = *((char **)t28);
    t30 = *((double *)t29);
    t31 = (-(t30));
    t32 = (t27 == t31);
    if (t32 != 0)
        goto LAB4;

LAB6:
LAB5:    t25 = (0 + 0U);
    t6 = (t2 + t25);
    t27 = *((double *)t6);
    t32 = (t27 == 0.00000000000000000);
    if (t32 == 1)
        goto LAB13;

LAB14:    t24 = (unsigned char)0;

LAB15:    if (t24 != 0)
        goto LAB10;

LAB12:
LAB11:    t25 = (0 + 0U);
    t6 = (t2 + t25);
    t27 = *((double *)t6);
    t30 = ieee_p_3972351953_sub_1722501855_2984157535(IEEE_P_3972351953, t27);
    t7 = (t11 + 56U);
    t9 = *((char **)t7);
    t7 = (t9 + 0);
    *((double *)t7) = t30;
    t25 = (0 + 8U);
    t6 = (t2 + t25);
    t27 = *((double *)t6);
    t30 = (0.50000000000000000 * t27);
    t7 = (t17 + 56U);
    t9 = *((char **)t7);
    t7 = (t9 + 0);
    *((double *)t7) = t30;
    t6 = (t11 + 56U);
    t7 = *((char **)t6);
    t27 = *((double *)t7);
    t6 = (t5 + 56U);
    t9 = *((char **)t6);
    t25 = (0 + 0U);
    t6 = (t9 + t25);
    *((double *)t6) = t27;
    t6 = (t17 + 56U);
    t7 = *((char **)t6);
    t27 = *((double *)t7);
    t30 = ieee_p_3972351953_sub_773523744_2984157535(IEEE_P_3972351953, t27);
    t24 = (t30 < 0.00000000000000000);
    if (t24 != 0)
        goto LAB17;

LAB19:
LAB18:    t6 = (t17 + 56U);
    t7 = *((char **)t6);
    t27 = *((double *)t7);
    t30 = ieee_p_3972351953_sub_773523744_2984157535(IEEE_P_3972351953, t27);
    t32 = (t30 == 0.00000000000000000);
    if (t32 == 1)
        goto LAB23;

LAB24:    t24 = (unsigned char)0;

LAB25:    if (t24 != 0)
        goto LAB20;

LAB22:
LAB21:    t6 = (t17 + 56U);
    t7 = *((char **)t6);
    t27 = *((double *)t7);
    t30 = ieee_p_4165608084_sub_1224055613_2178808227(t1, t27);
    t6 = (t5 + 56U);
    t9 = *((char **)t6);
    t25 = (0 + 8U);
    t6 = (t9 + t25);
    *((double *)t6) = t30;
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t7, 16U);

LAB1:    return t0;
LAB3:    *((char **)t23) = t2;
    goto LAB2;

LAB4:    if ((unsigned char)0 == 0)
        goto LAB7;

LAB8:    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t2, 16U);
    goto LAB1;

LAB7:    t28 = (t1 + 5196);
    xsi_report(t28, 27U, (unsigned char)2);
    goto LAB8;

LAB9:    goto LAB5;

LAB10:    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t2, 16U);
    goto LAB1;

LAB13:    t34 = (0 + 8U);
    t7 = (t2 + t34);
    t30 = *((double *)t7);
    t35 = (t30 == 0.00000000000000000);
    t24 = t35;
    goto LAB15;

LAB16:    goto LAB11;

LAB17:    t6 = (t17 + 56U);
    t9 = *((char **)t6);
    t31 = *((double *)t9);
    t6 = ((IEEE_P_3972351953) + 1408U);
    t10 = *((char **)t6);
    t36 = *((double *)t10);
    t37 = (t31 + t36);
    t6 = (t17 + 56U);
    t12 = *((char **)t6);
    t6 = (t12 + 0);
    *((double *)t6) = t37;
    goto LAB18;

LAB20:    t6 = (t17 + 56U);
    t10 = *((char **)t6);
    t37 = *((double *)t10);
    t6 = ((IEEE_P_3972351953) + 1408U);
    t12 = *((char **)t6);
    t38 = *((double *)t12);
    t39 = (t37 + t38);
    t6 = (t17 + 56U);
    t13 = *((char **)t6);
    t6 = (t13 + 0);
    *((double *)t6) = t39;
    goto LAB21;

LAB23:    t6 = (t17 + 56U);
    t9 = *((char **)t6);
    t31 = *((double *)t9);
    t36 = ieee_p_3972351953_sub_1485185913_2984157535(IEEE_P_3972351953, t31);
    t35 = (t36 < 0.00000000000000000);
    t24 = t35;
    goto LAB25;

LAB26:;
}

char *ieee_p_4165608084_sub_2054786440_2178808227(char *t1, char *t2)
{
    char t3[128];
    char t4[16];
    char t8[8];
    char *t0;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    unsigned char t12;
    char *t13;
    char *t14;
    unsigned char t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    double t20;
    unsigned int t21;
    double t22;
    double t23;
    unsigned char t24;
    unsigned int t25;
    double t26;
    double t27;
    double t28;
    unsigned char t29;
    double t30;
    double t31;

LAB0:    t5 = (t3 + 4U);
    t6 = ((STD_STANDARD) + 472);
    t7 = (t5 + 88U);
    *((char **)t7) = t6;
    t9 = (t5 + 56U);
    *((char **)t9) = t8;
    xsi_type_set_default_value(t6, t8, 0);
    t10 = (t5 + 80U);
    *((unsigned int *)t10) = 8U;
    t11 = (t4 + 4U);
    t12 = (t2 != 0);
    if (t12 == 1)
        goto LAB3;

LAB2:    t13 = (t1 + 1408U);
    t14 = *((char **)t13);
    t15 = 1;
    if (16U == 16U)
        goto LAB7;

LAB8:    t15 = 0;

LAB9:    if (t15 != 0)
        goto LAB4;

LAB6:
LAB5:    t16 = (0 + 0U);
    t6 = (t2 + t16);
    t20 = *((double *)t6);
    t12 = (t20 == 0.00000000000000000);
    if (t12 != 0)
        goto LAB14;

LAB16:
LAB15:    t16 = (0 + 0U);
    t6 = (t2 + t16);
    t20 = *((double *)t6);
    t22 = ieee_p_3972351953_sub_785569749_2984157535(IEEE_P_3972351953, t20);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    t7 = (t9 + 0);
    *((double *)t7) = t22;
    t6 = xsi_get_transient_memory(16U);
    memset(t6, 0, 16U);
    t7 = t6;
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    t20 = *((double *)t10);
    t16 = (0 + 8U);
    t9 = (t2 + t16);
    t22 = *((double *)t9);
    t23 = ieee_p_3972351953_sub_773523744_2984157535(IEEE_P_3972351953, t22);
    t26 = (t20 * t23);
    *((double *)t7) = t26;
    t13 = (t6 + 8U);
    t14 = (t5 + 56U);
    t17 = *((char **)t14);
    t27 = *((double *)t17);
    t21 = (0 + 8U);
    t14 = (t2 + t21);
    t28 = *((double *)t14);
    t30 = ieee_p_3972351953_sub_1485185913_2984157535(IEEE_P_3972351953, t28);
    t31 = (t27 * t30);
    *((double *)t13) = t31;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t6, 16U);

LAB1:    return t0;
LAB3:    *((char **)t11) = t2;
    goto LAB2;

LAB4:    t18 = (t1 + 1168U);
    t19 = *((char **)t18);
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t19, 16U);
    goto LAB1;

LAB7:    t16 = 0;

LAB10:    if (t16 < 16U)
        goto LAB11;
    else
        goto LAB9;

LAB11:    t13 = (t2 + t16);
    t17 = (t14 + t16);
    if (*((unsigned char *)t13) != *((unsigned char *)t17))
        goto LAB8;

LAB12:    t16 = (t16 + 1);
    goto LAB10;

LAB13:    goto LAB5;

LAB14:    t21 = (0 + 8U);
    t7 = (t2 + t21);
    t22 = *((double *)t7);
    t9 = ((IEEE_P_3972351953) + 1408U);
    t10 = *((char **)t9);
    t23 = *((double *)t10);
    t24 = (t22 == t23);
    if (t24 == 1)
        goto LAB20;

LAB21:    t25 = (0 + 8U);
    t9 = (t2 + t25);
    t26 = *((double *)t9);
    t13 = ((IEEE_P_3972351953) + 1408U);
    t14 = *((char **)t13);
    t27 = *((double *)t14);
    t28 = (-(t27));
    t29 = (t26 == t28);
    t15 = t29;

LAB22:    if (t15 != 0)
        goto LAB17;

LAB19:
LAB18:    t16 = (0 + 8U);
    t6 = (t2 + t16);
    t20 = *((double *)t6);
    t7 = ((IEEE_P_3972351953) + 1768U);
    t9 = *((char **)t7);
    t22 = *((double *)t9);
    t12 = (t20 == t22);
    if (t12 != 0)
        goto LAB24;

LAB26:
LAB25:    t16 = (0 + 8U);
    t6 = (t2 + t16);
    t20 = *((double *)t6);
    t7 = ((IEEE_P_3972351953) + 1768U);
    t9 = *((char **)t7);
    t22 = *((double *)t9);
    t23 = (-(t22));
    t12 = (t20 == t23);
    if (t12 != 0)
        goto LAB28;

LAB30:
LAB29:    goto LAB15;

LAB17:    t13 = xsi_get_transient_memory(16U);
    memset(t13, 0, 16U);
    t17 = t13;
    t30 = (-(1.0000000000000000));
    *((double *)t17) = t30;
    t18 = (t13 + 8U);
    *((double *)t18) = 0.00000000000000000;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t13, 16U);
    goto LAB1;

LAB20:    t15 = (unsigned char)1;
    goto LAB22;

LAB23:    goto LAB18;

LAB24:    t7 = (t1 + 1288U);
    t10 = *((char **)t7);
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t10, 16U);
    goto LAB1;

LAB27:    goto LAB25;

LAB28:    t7 = xsi_get_transient_memory(16U);
    memset(t7, 0, 16U);
    t10 = t7;
    *((double *)t10) = 0.00000000000000000;
    t13 = (t7 + 8U);
    t26 = (-(1.0000000000000000));
    *((double *)t13) = t26;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t7, 16U);
    goto LAB1;

LAB31:    goto LAB29;

LAB32:;
}

char *ieee_p_4165608084_sub_2848661371_2178808227(char *t1, char *t2)
{
    char t3[368];
    char t4[16];
    char t8[16];
    char t14[8];
    char t20[16];
    char *t0;
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
    char *t21;
    char *t22;
    char *t23;
    unsigned char t24;
    unsigned int t25;
    char *t26;
    double t27;
    char *t28;
    char *t29;
    double t30;
    double t31;
    unsigned char t32;
    unsigned int t34;
    unsigned char t35;
    double t36;
    unsigned char t37;
    unsigned int t38;
    double t39;
    double t40;
    double t41;
    unsigned char t42;
    double t43;

LAB0:    t5 = (t3 + 4U);
    t6 = (t1 + 2992);
    t7 = (t5 + 88U);
    *((char **)t7) = t6;
    t9 = (t5 + 56U);
    *((char **)t9) = t8;
    xsi_type_set_default_value(t6, t8, 0);
    t10 = (t5 + 80U);
    *((unsigned int *)t10) = 16U;
    t11 = (t3 + 124U);
    t12 = ((STD_STANDARD) + 472);
    t13 = (t11 + 88U);
    *((char **)t13) = t12;
    t15 = (t11 + 56U);
    *((char **)t15) = t14;
    xsi_type_set_default_value(t12, t14, 0);
    t16 = (t11 + 80U);
    *((unsigned int *)t16) = 8U;
    t17 = (t3 + 244U);
    t18 = (t1 + 3104);
    t19 = (t17 + 88U);
    *((char **)t19) = t18;
    t21 = (t17 + 56U);
    *((char **)t21) = t20;
    xsi_type_set_default_value(t18, t20, 0);
    t22 = (t17 + 80U);
    *((unsigned int *)t22) = 16U;
    t23 = (t4 + 4U);
    t24 = (t2 != 0);
    if (t24 == 1)
        goto LAB3;

LAB2:    t25 = (0 + 8U);
    t26 = (t2 + t25);
    t27 = *((double *)t26);
    t28 = ((IEEE_P_3972351953) + 1408U);
    t29 = *((char **)t28);
    t30 = *((double *)t29);
    t31 = (-(t30));
    t32 = (t27 == t31);
    if (t32 != 0)
        goto LAB4;

LAB6:
LAB5:    t25 = (0 + 0U);
    t6 = (t2 + t25);
    t27 = *((double *)t6);
    t32 = (t27 == 0.00000000000000000);
    if (t32 == 1)
        goto LAB13;

LAB14:    t24 = (unsigned char)0;

LAB15:    if (t24 != 0)
        goto LAB10;

LAB12:
LAB11:    t25 = (0 + 0U);
    t6 = (t2 + t25);
    t27 = *((double *)t6);
    t7 = ((IEEE_P_3972351953) + 1408U);
    t9 = *((char **)t7);
    t30 = *((double *)t9);
    t32 = (t27 == t30);
    if (t32 == 1)
        goto LAB20;

LAB21:    t24 = (unsigned char)0;

LAB22:    if (t24 != 0)
        goto LAB17;

LAB19:
LAB18:    t25 = (0 + 0U);
    t6 = (t2 + t25);
    t27 = *((double *)t6);
    t7 = ((IEEE_P_3972351953) + 1768U);
    t9 = *((char **)t7);
    t30 = *((double *)t9);
    t24 = (t27 == t30);
    if (t24 != 0)
        goto LAB27;

LAB29:
LAB28:    t6 = ieee_p_4165608084_sub_693027240_2178808227(t1, t2);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    t7 = (t9 + 0);
    memcpy(t7, t6, 16U);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t25 = (0 + 0U);
    t6 = (t7 + t25);
    t27 = *((double *)t6);
    t30 = ieee_p_3972351953_sub_785569749_2984157535(IEEE_P_3972351953, t27);
    t9 = (t17 + 56U);
    t10 = *((char **)t9);
    t34 = (0 + 0U);
    t9 = (t10 + t34);
    *((double *)t9) = t30;
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t25 = (0 + 8U);
    t6 = (t7 + t25);
    t27 = *((double *)t6);
    t30 = ieee_p_4165608084_sub_1224055613_2178808227(t1, t27);
    t9 = (t17 + 56U);
    t10 = *((char **)t9);
    t34 = (0 + 8U);
    t9 = (t10 + t34);
    *((double *)t9) = t30;
    t6 = (t17 + 56U);
    t7 = *((char **)t6);
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t7, 16U);

LAB1:    return t0;
LAB3:    *((char **)t23) = t2;
    goto LAB2;

LAB4:    if ((unsigned char)0 == 0)
        goto LAB7;

LAB8:    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t2, 16U);
    goto LAB1;

LAB7:    t28 = (t1 + 5223);
    xsi_report(t28, 26U, (unsigned char)2);
    goto LAB8;

LAB9:    goto LAB5;

LAB10:    t9 = xsi_get_transient_memory(16U);
    memset(t9, 0, 16U);
    t10 = t9;
    *((double *)t10) = 1.0000000000000000;
    t12 = (t9 + 8U);
    *((double *)t12) = 0.00000000000000000;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t9, 16U);
    goto LAB1;

LAB13:    t34 = (0 + 8U);
    t7 = (t2 + t34);
    t30 = *((double *)t7);
    t35 = (t30 == 0.00000000000000000);
    t24 = t35;
    goto LAB15;

LAB16:    goto LAB11;

LAB17:    t13 = xsi_get_transient_memory(16U);
    memset(t13, 0, 16U);
    t16 = t13;
    *((double *)t16) = 1.0000000000000000;
    t18 = (t13 + 8U);
    t19 = ((IEEE_P_3972351953) + 1408U);
    t21 = *((char **)t19);
    t43 = *((double *)t21);
    *((double *)t18) = t43;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t13, 16U);
    goto LAB1;

LAB20:    t34 = (0 + 8U);
    t7 = (t2 + t34);
    t31 = *((double *)t7);
    t10 = ((IEEE_P_3972351953) + 1768U);
    t12 = *((char **)t10);
    t36 = *((double *)t12);
    t37 = (t31 == t36);
    if (t37 == 1)
        goto LAB23;

LAB24:    t38 = (0 + 8U);
    t10 = (t2 + t38);
    t39 = *((double *)t10);
    t13 = ((IEEE_P_3972351953) + 1768U);
    t15 = *((char **)t13);
    t40 = *((double *)t15);
    t41 = (-(t40));
    t42 = (t39 == t41);
    t35 = t42;

LAB25:    t24 = t35;
    goto LAB22;

LAB23:    t35 = (unsigned char)1;
    goto LAB25;

LAB26:    goto LAB18;

LAB27:    t34 = (0 + 8U);
    t7 = (t2 + t34);
    t31 = *((double *)t7);
    t10 = ((IEEE_P_3972351953) + 1768U);
    t12 = *((char **)t10);
    t36 = *((double *)t12);
    t32 = (t31 == t36);
    if (t32 != 0)
        goto LAB30;

LAB32:
LAB31:    t25 = (0 + 8U);
    t6 = (t2 + t25);
    t27 = *((double *)t6);
    t7 = ((IEEE_P_3972351953) + 1768U);
    t9 = *((char **)t7);
    t30 = *((double *)t9);
    t31 = (-(t30));
    t24 = (t27 == t31);
    if (t24 != 0)
        goto LAB34;

LAB36:
LAB35:    goto LAB28;

LAB30:    t10 = xsi_get_transient_memory(16U);
    memset(t10, 0, 16U);
    t13 = t10;
    *((double *)t13) = 1.0000000000000000;
    t15 = (t10 + 8U);
    t16 = ((IEEE_P_3972351953) + 1768U);
    t18 = *((char **)t16);
    t39 = *((double *)t18);
    *((double *)t15) = t39;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t10, 16U);
    goto LAB1;

LAB33:    goto LAB31;

LAB34:    t7 = xsi_get_transient_memory(16U);
    memset(t7, 0, 16U);
    t10 = t7;
    *((double *)t10) = 1.0000000000000000;
    t12 = (t7 + 8U);
    t13 = ((IEEE_P_3972351953) + 1768U);
    t15 = *((char **)t13);
    t36 = *((double *)t15);
    t39 = (-(t36));
    *((double *)t12) = t39;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t7, 16U);
    goto LAB1;

LAB37:    goto LAB35;

LAB38:;
}

char *ieee_p_4165608084_sub_1458454634_2178808227(char *t1, char *t2)
{
    char t3[248];
    char t4[16];
    char t8[16];
    char t14[8];
    char *t0;
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
    unsigned char t19;
    unsigned int t20;
    char *t21;
    double t22;
    unsigned char t23;
    unsigned int t24;
    char *t25;
    double t26;
    unsigned char t27;
    char *t28;
    double t30;
    double t31;

LAB0:    t5 = (t3 + 4U);
    t6 = (t1 + 3104);
    t7 = (t5 + 88U);
    *((char **)t7) = t6;
    t9 = (t5 + 56U);
    *((char **)t9) = t8;
    xsi_type_set_default_value(t6, t8, 0);
    t10 = (t5 + 80U);
    *((unsigned int *)t10) = 16U;
    t11 = (t3 + 124U);
    t12 = ((STD_STANDARD) + 472);
    t13 = (t11 + 88U);
    *((char **)t13) = t12;
    t15 = (t11 + 56U);
    *((char **)t15) = t14;
    xsi_type_set_default_value(t12, t14, 0);
    t16 = (t11 + 80U);
    *((unsigned int *)t16) = 8U;
    t17 = (t4 + 4U);
    t18 = (t2 != 0);
    if (t18 == 1)
        goto LAB3;

LAB2:    t20 = (0 + 0U);
    t21 = (t2 + t20);
    t22 = *((double *)t21);
    t23 = (t22 == 0.00000000000000000);
    if (t23 == 1)
        goto LAB7;

LAB8:    t19 = (unsigned char)0;

LAB9:    if (t19 != 0)
        goto LAB4;

LAB6:
LAB5:    t20 = (0 + 8U);
    t6 = (t2 + t20);
    t22 = *((double *)t6);
    t18 = (t22 == 0.00000000000000000);
    if (t18 != 0)
        goto LAB20;

LAB22:
LAB21:    t20 = (0 + 0U);
    t6 = (t2 + t20);
    t22 = *((double *)t6);
    t18 = (t22 == 0.00000000000000000);
    if (t18 != 0)
        goto LAB35;

LAB37:
LAB36:    t6 = ieee_p_4165608084_sub_4232924143_2178808227(t1, t2);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    t7 = (t9 + 0);
    memcpy(t7, t6, 16U);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t20 = (0 + 0U);
    t6 = (t7 + t20);
    t22 = *((double *)t6);
    t26 = ieee_p_3972351953_sub_1543758017_2984157535(IEEE_P_3972351953, t22);
    t9 = (t11 + 56U);
    t10 = *((char **)t9);
    t9 = (t10 + 0);
    *((double *)t9) = t26;
    t6 = xsi_get_transient_memory(16U);
    memset(t6, 0, 16U);
    t7 = t6;
    t9 = (t11 + 56U);
    t10 = *((char **)t9);
    t22 = *((double *)t10);
    *((double *)t7) = t22;
    t9 = (t6 + 8U);
    t12 = (t5 + 56U);
    t13 = *((char **)t12);
    t20 = (0 + 8U);
    t12 = (t13 + t20);
    t26 = *((double *)t12);
    *((double *)t9) = t26;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t6, 16U);

LAB1:    return t0;
LAB3:    *((char **)t17) = t2;
    goto LAB2;

LAB4:    if ((unsigned char)0 == 0)
        goto LAB10;

LAB11:    t6 = xsi_get_transient_memory(16U);
    memset(t6, 0, 16U);
    t7 = t6;
    if (-1.7014111000000000E+308 > 1.7014111000000000E+308)
        goto LAB12;

LAB13:    if (1 == -1)
        goto LAB17;

LAB18:    t22 = -1.7014111000000000E+308;

LAB14:    *((double *)t7) = t22;
    t9 = (t6 + 8U);
    *((double *)t9) = 0.00000000000000000;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t6, 16U);
    goto LAB1;

LAB7:    t24 = (0 + 8U);
    t25 = (t2 + t24);
    t26 = *((double *)t25);
    t27 = (t26 == 0.00000000000000000);
    t19 = t27;
    goto LAB9;

LAB10:    t28 = (t1 + 5249);
    xsi_report(t28, 35U, (unsigned char)2);
    goto LAB11;

LAB12:    if (1 == 1)
        goto LAB15;

LAB16:    t22 = 1.7014111000000000E+308;
    goto LAB14;

LAB15:    t22 = -1.7014111000000000E+308;
    goto LAB14;

LAB17:    t22 = 1.7014111000000000E+308;
    goto LAB14;

LAB19:    goto LAB5;

LAB20:    t24 = (0 + 0U);
    t7 = (t2 + t24);
    t26 = *((double *)t7);
    t30 = (-(1.0000000000000000));
    t19 = (t26 == t30);
    if (t19 != 0)
        goto LAB23;

LAB25:
LAB24:    t20 = (0 + 0U);
    t6 = (t2 + t20);
    t22 = *((double *)t6);
    t7 = ((IEEE_P_3972351953) + 1168U);
    t9 = *((char **)t7);
    t26 = *((double *)t9);
    t18 = (t22 == t26);
    if (t18 != 0)
        goto LAB27;

LAB29:
LAB28:    t20 = (0 + 0U);
    t6 = (t2 + t20);
    t22 = *((double *)t6);
    t18 = (t22 == 1.0000000000000000);
    if (t18 != 0)
        goto LAB31;

LAB33:
LAB32:    goto LAB21;

LAB23:    t9 = xsi_get_transient_memory(16U);
    memset(t9, 0, 16U);
    t10 = t9;
    *((double *)t10) = 0.00000000000000000;
    t12 = (t9 + 8U);
    t13 = ((IEEE_P_3972351953) + 1408U);
    t15 = *((char **)t13);
    t31 = *((double *)t15);
    *((double *)t12) = t31;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t9, 16U);
    goto LAB1;

LAB26:    goto LAB24;

LAB27:    t7 = (t1 + 1168U);
    t10 = *((char **)t7);
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t10, 16U);
    goto LAB1;

LAB30:    goto LAB28;

LAB31:    t7 = (t1 + 1408U);
    t9 = *((char **)t7);
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t9, 16U);
    goto LAB1;

LAB34:    goto LAB32;

LAB35:    t24 = (0 + 8U);
    t7 = (t2 + t24);
    t26 = *((double *)t7);
    t19 = (t26 == 1.0000000000000000);
    if (t19 != 0)
        goto LAB38;

LAB40:
LAB39:    t20 = (0 + 8U);
    t6 = (t2 + t20);
    t22 = *((double *)t6);
    t26 = (-(1.0000000000000000));
    t18 = (t22 == t26);
    if (t18 != 0)
        goto LAB42;

LAB44:
LAB43:    goto LAB36;

LAB38:    t9 = xsi_get_transient_memory(16U);
    memset(t9, 0, 16U);
    t10 = t9;
    *((double *)t10) = 0.00000000000000000;
    t12 = (t9 + 8U);
    t13 = ((IEEE_P_3972351953) + 1768U);
    t15 = *((char **)t13);
    t30 = *((double *)t15);
    *((double *)t12) = t30;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t9, 16U);
    goto LAB1;

LAB41:    goto LAB39;

LAB42:    t7 = xsi_get_transient_memory(16U);
    memset(t7, 0, 16U);
    t9 = t7;
    *((double *)t9) = 0.00000000000000000;
    t10 = (t7 + 8U);
    t12 = ((IEEE_P_3972351953) + 1768U);
    t13 = *((char **)t12);
    t30 = *((double *)t13);
    t31 = (-(t30));
    *((double *)t10) = t31;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t7, 16U);
    goto LAB1;

LAB45:    goto LAB43;

LAB46:;
}

char *ieee_p_4165608084_sub_1391226364_2178808227(char *t1, char *t2)
{
    char t3[248];
    char t4[16];
    char t8[16];
    char t14[8];
    char *t0;
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
    unsigned char t19;
    unsigned int t20;
    char *t21;
    double t22;
    unsigned char t23;
    unsigned int t24;
    char *t25;
    double t26;
    unsigned char t27;
    char *t28;
    double t30;
    double t31;

LAB0:    t5 = (t3 + 4U);
    t6 = (t1 + 3104);
    t7 = (t5 + 88U);
    *((char **)t7) = t6;
    t9 = (t5 + 56U);
    *((char **)t9) = t8;
    xsi_type_set_default_value(t6, t8, 0);
    t10 = (t5 + 80U);
    *((unsigned int *)t10) = 16U;
    t11 = (t3 + 124U);
    t12 = ((STD_STANDARD) + 472);
    t13 = (t11 + 88U);
    *((char **)t13) = t12;
    t15 = (t11 + 56U);
    *((char **)t15) = t14;
    xsi_type_set_default_value(t12, t14, 0);
    t16 = (t11 + 80U);
    *((unsigned int *)t16) = 8U;
    t17 = (t4 + 4U);
    t18 = (t2 != 0);
    if (t18 == 1)
        goto LAB3;

LAB2:    t20 = (0 + 0U);
    t21 = (t2 + t20);
    t22 = *((double *)t21);
    t23 = (t22 == 0.00000000000000000);
    if (t23 == 1)
        goto LAB7;

LAB8:    t19 = (unsigned char)0;

LAB9:    if (t19 != 0)
        goto LAB4;

LAB6:
LAB5:    t20 = (0 + 8U);
    t6 = (t2 + t20);
    t22 = *((double *)t6);
    t18 = (t22 == 0.00000000000000000);
    if (t18 != 0)
        goto LAB20;

LAB22:
LAB21:    t6 = ieee_p_4165608084_sub_4232924143_2178808227(t1, t2);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    t7 = (t9 + 0);
    memcpy(t7, t6, 16U);
    t6 = ((IEEE_P_3972351953) + 2488U);
    t7 = *((char **)t6);
    t22 = *((double *)t7);
    t6 = (t5 + 56U);
    t9 = *((char **)t6);
    t20 = (0 + 0U);
    t6 = (t9 + t20);
    t26 = *((double *)t6);
    t30 = ieee_p_3972351953_sub_1543758017_2984157535(IEEE_P_3972351953, t26);
    t31 = (t22 * t30);
    t10 = (t11 + 56U);
    t12 = *((char **)t10);
    t10 = (t12 + 0);
    *((double *)t10) = t31;
    t6 = xsi_get_transient_memory(16U);
    memset(t6, 0, 16U);
    t7 = t6;
    t9 = (t11 + 56U);
    t10 = *((char **)t9);
    t22 = *((double *)t10);
    *((double *)t7) = t22;
    t9 = (t6 + 8U);
    t12 = ((IEEE_P_3972351953) + 2488U);
    t13 = *((char **)t12);
    t26 = *((double *)t13);
    t12 = (t5 + 56U);
    t15 = *((char **)t12);
    t20 = (0 + 8U);
    t12 = (t15 + t20);
    t30 = *((double *)t12);
    t31 = (t26 * t30);
    *((double *)t9) = t31;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t6, 16U);

LAB1:    return t0;
LAB3:    *((char **)t17) = t2;
    goto LAB2;

LAB4:    if ((unsigned char)0 == 0)
        goto LAB10;

LAB11:    t6 = xsi_get_transient_memory(16U);
    memset(t6, 0, 16U);
    t7 = t6;
    if (-1.7014111000000000E+308 > 1.7014111000000000E+308)
        goto LAB12;

LAB13:    if (1 == -1)
        goto LAB17;

LAB18:    t22 = -1.7014111000000000E+308;

LAB14:    *((double *)t7) = t22;
    t9 = (t6 + 8U);
    *((double *)t9) = 0.00000000000000000;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t6, 16U);
    goto LAB1;

LAB7:    t24 = (0 + 8U);
    t25 = (t2 + t24);
    t26 = *((double *)t25);
    t27 = (t26 == 0.00000000000000000);
    t19 = t27;
    goto LAB9;

LAB10:    t28 = (t1 + 5284);
    xsi_report(t28, 36U, (unsigned char)2);
    goto LAB11;

LAB12:    if (1 == 1)
        goto LAB15;

LAB16:    t22 = 1.7014111000000000E+308;
    goto LAB14;

LAB15:    t22 = -1.7014111000000000E+308;
    goto LAB14;

LAB17:    t22 = 1.7014111000000000E+308;
    goto LAB14;

LAB19:    goto LAB5;

LAB20:    t24 = (0 + 0U);
    t7 = (t2 + t24);
    t26 = *((double *)t7);
    t19 = (t26 == 2.0000000000000000);
    if (t19 != 0)
        goto LAB23;

LAB25:
LAB24:    t20 = (0 + 0U);
    t6 = (t2 + t20);
    t22 = *((double *)t6);
    t18 = (t22 == 1.0000000000000000);
    if (t18 != 0)
        goto LAB27;

LAB29:
LAB28:    goto LAB21;

LAB23:    t9 = (t1 + 1168U);
    t10 = *((char **)t9);
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t10, 16U);
    goto LAB1;

LAB26:    goto LAB24;

LAB27:    t7 = (t1 + 1408U);
    t9 = *((char **)t7);
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t9, 16U);
    goto LAB1;

LAB30:    goto LAB28;

LAB31:;
}

char *ieee_p_4165608084_sub_3467622635_2178808227(char *t1, char *t2)
{
    char t3[248];
    char t4[16];
    char t8[16];
    char t14[8];
    char *t0;
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
    unsigned char t19;
    unsigned int t20;
    char *t21;
    double t22;
    unsigned char t23;
    unsigned int t24;
    char *t25;
    double t26;
    unsigned char t27;
    char *t28;
    double t30;
    double t31;

LAB0:    t5 = (t3 + 4U);
    t6 = (t1 + 3104);
    t7 = (t5 + 88U);
    *((char **)t7) = t6;
    t9 = (t5 + 56U);
    *((char **)t9) = t8;
    xsi_type_set_default_value(t6, t8, 0);
    t10 = (t5 + 80U);
    *((unsigned int *)t10) = 16U;
    t11 = (t3 + 124U);
    t12 = ((STD_STANDARD) + 472);
    t13 = (t11 + 88U);
    *((char **)t13) = t12;
    t15 = (t11 + 56U);
    *((char **)t15) = t14;
    xsi_type_set_default_value(t12, t14, 0);
    t16 = (t11 + 80U);
    *((unsigned int *)t16) = 8U;
    t17 = (t4 + 4U);
    t18 = (t2 != 0);
    if (t18 == 1)
        goto LAB3;

LAB2:    t20 = (0 + 0U);
    t21 = (t2 + t20);
    t22 = *((double *)t21);
    t23 = (t22 == 0.00000000000000000);
    if (t23 == 1)
        goto LAB7;

LAB8:    t19 = (unsigned char)0;

LAB9:    if (t19 != 0)
        goto LAB4;

LAB6:
LAB5:    t20 = (0 + 8U);
    t6 = (t2 + t20);
    t22 = *((double *)t6);
    t18 = (t22 == 0.00000000000000000);
    if (t18 != 0)
        goto LAB20;

LAB22:
LAB21:    t6 = ieee_p_4165608084_sub_4232924143_2178808227(t1, t2);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    t7 = (t9 + 0);
    memcpy(t7, t6, 16U);
    t6 = ((IEEE_P_3972351953) + 2608U);
    t7 = *((char **)t6);
    t22 = *((double *)t7);
    t6 = (t5 + 56U);
    t9 = *((char **)t6);
    t20 = (0 + 0U);
    t6 = (t9 + t20);
    t26 = *((double *)t6);
    t30 = ieee_p_3972351953_sub_1543758017_2984157535(IEEE_P_3972351953, t26);
    t31 = (t22 * t30);
    t10 = (t11 + 56U);
    t12 = *((char **)t10);
    t10 = (t12 + 0);
    *((double *)t10) = t31;
    t6 = xsi_get_transient_memory(16U);
    memset(t6, 0, 16U);
    t7 = t6;
    t9 = (t11 + 56U);
    t10 = *((char **)t9);
    t22 = *((double *)t10);
    *((double *)t7) = t22;
    t9 = (t6 + 8U);
    t12 = ((IEEE_P_3972351953) + 2608U);
    t13 = *((char **)t12);
    t26 = *((double *)t13);
    t12 = (t5 + 56U);
    t15 = *((char **)t12);
    t20 = (0 + 8U);
    t12 = (t15 + t20);
    t30 = *((double *)t12);
    t31 = (t26 * t30);
    *((double *)t9) = t31;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t6, 16U);

LAB1:    return t0;
LAB3:    *((char **)t17) = t2;
    goto LAB2;

LAB4:    if ((unsigned char)0 == 0)
        goto LAB10;

LAB11:    t6 = xsi_get_transient_memory(16U);
    memset(t6, 0, 16U);
    t7 = t6;
    if (-1.7014111000000000E+308 > 1.7014111000000000E+308)
        goto LAB12;

LAB13:    if (1 == -1)
        goto LAB17;

LAB18:    t22 = -1.7014111000000000E+308;

LAB14:    *((double *)t7) = t22;
    t9 = (t6 + 8U);
    *((double *)t9) = 0.00000000000000000;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t6, 16U);
    goto LAB1;

LAB7:    t24 = (0 + 8U);
    t25 = (t2 + t24);
    t26 = *((double *)t25);
    t27 = (t26 == 0.00000000000000000);
    t19 = t27;
    goto LAB9;

LAB10:    t28 = (t1 + 5320);
    xsi_report(t28, 37U, (unsigned char)2);
    goto LAB11;

LAB12:    if (1 == 1)
        goto LAB15;

LAB16:    t22 = 1.7014111000000000E+308;
    goto LAB14;

LAB15:    t22 = -1.7014111000000000E+308;
    goto LAB14;

LAB17:    t22 = 1.7014111000000000E+308;
    goto LAB14;

LAB19:    goto LAB5;

LAB20:    t24 = (0 + 0U);
    t7 = (t2 + t24);
    t26 = *((double *)t7);
    t19 = (t26 == 10.000000000000000);
    if (t19 != 0)
        goto LAB23;

LAB25:
LAB24:    t20 = (0 + 0U);
    t6 = (t2 + t20);
    t22 = *((double *)t6);
    t18 = (t22 == 1.0000000000000000);
    if (t18 != 0)
        goto LAB27;

LAB29:
LAB28:    goto LAB21;

LAB23:    t9 = (t1 + 1168U);
    t10 = *((char **)t9);
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t10, 16U);
    goto LAB1;

LAB26:    goto LAB24;

LAB27:    t7 = (t1 + 1408U);
    t9 = *((char **)t7);
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t9, 16U);
    goto LAB1;

LAB30:    goto LAB28;

LAB31:;
}

char *ieee_p_4165608084_sub_2897113988_2178808227(char *t1, char *t2)
{
    char t3[248];
    char t4[16];
    char t8[16];
    char t14[16];
    char *t0;
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
    unsigned int t19;
    char *t20;
    double t21;
    unsigned char t22;
    char *t23;
    double t25;
    double t26;
    unsigned int t27;
    double t28;
    double t29;
    double t30;
    unsigned char t31;

LAB0:    t5 = (t3 + 4U);
    t6 = (t1 + 2992);
    t7 = (t5 + 88U);
    *((char **)t7) = t6;
    t9 = (t5 + 56U);
    *((char **)t9) = t8;
    xsi_type_set_default_value(t6, t8, 0);
    t10 = (t5 + 80U);
    *((unsigned int *)t10) = 16U;
    t11 = (t3 + 124U);
    t12 = (t1 + 3104);
    t13 = (t11 + 88U);
    *((char **)t13) = t12;
    t15 = (t11 + 56U);
    *((char **)t15) = t14;
    xsi_type_set_default_value(t12, t14, 0);
    t16 = (t11 + 80U);
    *((unsigned int *)t16) = 16U;
    t17 = (t4 + 4U);
    t18 = (t2 != 0);
    if (t18 == 1)
        goto LAB3;

LAB2:    t19 = (0 + 0U);
    t20 = (t2 + t19);
    t21 = *((double *)t20);
    t22 = (t21 <= 0.00000000000000000);
    if (t22 != 0)
        goto LAB4;

LAB6:
LAB5:    t19 = (0 + 8U);
    t6 = (t2 + t19);
    t21 = *((double *)t6);
    t7 = ((IEEE_P_3972351953) + 1408U);
    t9 = *((char **)t7);
    t25 = *((double *)t9);
    t26 = (-(t25));
    t18 = (t21 == t26);
    if (t18 != 0)
        goto LAB17;

LAB19:
LAB18:    t19 = (0 + 0U);
    t6 = (t2 + t19);
    t21 = *((double *)t6);
    t18 = (t21 == 1.0000000000000000);
    if (t18 != 0)
        goto LAB30;

LAB32:
LAB31:    t19 = (0 + 0U);
    t6 = (t2 + t19);
    t21 = *((double *)t6);
    t7 = ((IEEE_P_3972351953) + 1168U);
    t9 = *((char **)t7);
    t25 = *((double *)t9);
    t22 = (t21 == t25);
    if (t22 == 1)
        goto LAB52;

LAB53:    t18 = (unsigned char)0;

LAB54:    if (t18 != 0)
        goto LAB49;

LAB51:
LAB50:    t19 = (0 + 0U);
    t6 = (t2 + t19);
    t21 = *((double *)t6);
    t25 = ieee_p_3972351953_sub_1543758017_2984157535(IEEE_P_3972351953, t21);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    t27 = (0 + 0U);
    t7 = (t9 + t27);
    *((double *)t7) = t25;
    t19 = (0 + 8U);
    t6 = (t2 + t19);
    t21 = *((double *)t6);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    t27 = (0 + 8U);
    t7 = (t9 + t27);
    *((double *)t7) = t21;
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = ieee_p_4165608084_sub_4232924143_2178808227(t1, t7);
    t9 = (t11 + 56U);
    t10 = *((char **)t9);
    t9 = (t10 + 0);
    memcpy(t9, t6, 16U);
    t6 = (t11 + 56U);
    t7 = *((char **)t6);
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t7, 16U);

LAB1:    return t0;
LAB3:    *((char **)t17) = t2;
    goto LAB2;

LAB4:    if ((unsigned char)0 == 0)
        goto LAB7;

LAB8:    t6 = xsi_get_transient_memory(16U);
    memset(t6, 0, 16U);
    t7 = t6;
    if (-1.7014111000000000E+308 > 1.7014111000000000E+308)
        goto LAB9;

LAB10:    if (1 == -1)
        goto LAB14;

LAB15:    t21 = 1.7014111000000000E+308;

LAB11:    *((double *)t7) = t21;
    t9 = (t6 + 8U);
    t10 = ((IEEE_P_3972351953) + 1408U);
    t12 = *((char **)t10);
    t25 = *((double *)t12);
    *((double *)t9) = t25;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t6, 16U);
    goto LAB1;

LAB7:    t23 = (t1 + 5357);
    xsi_report(t23, 22U, (unsigned char)2);
    goto LAB8;

LAB9:    if (1 == 1)
        goto LAB12;

LAB13:    t21 = -1.7014111000000000E+308;
    goto LAB11;

LAB12:    t21 = 1.7014111000000000E+308;
    goto LAB11;

LAB14:    t21 = -1.7014111000000000E+308;
    goto LAB11;

LAB16:    goto LAB5;

LAB17:    if ((unsigned char)0 == 0)
        goto LAB20;

LAB21:    t6 = xsi_get_transient_memory(16U);
    memset(t6, 0, 16U);
    t7 = t6;
    if (-1.7014111000000000E+308 > 1.7014111000000000E+308)
        goto LAB22;

LAB23:    if (1 == -1)
        goto LAB27;

LAB28:    t21 = 1.7014111000000000E+308;

LAB24:    *((double *)t7) = t21;
    t9 = (t6 + 8U);
    t10 = ((IEEE_P_3972351953) + 1408U);
    t12 = *((char **)t10);
    t25 = *((double *)t12);
    *((double *)t9) = t25;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t6, 16U);
    goto LAB1;

LAB20:    t7 = (t1 + 5379);
    xsi_report(t7, 26U, (unsigned char)2);
    goto LAB21;

LAB22:    if (1 == 1)
        goto LAB25;

LAB26:    t21 = -1.7014111000000000E+308;
    goto LAB24;

LAB25:    t21 = 1.7014111000000000E+308;
    goto LAB24;

LAB27:    t21 = -1.7014111000000000E+308;
    goto LAB24;

LAB29:    goto LAB18;

LAB30:    t27 = (0 + 8U);
    t7 = (t2 + t27);
    t25 = *((double *)t7);
    t22 = (t25 == 0.00000000000000000);
    if (t22 != 0)
        goto LAB33;

LAB35:
LAB34:    t19 = (0 + 8U);
    t6 = (t2 + t19);
    t21 = *((double *)t6);
    t7 = ((IEEE_P_3972351953) + 1408U);
    t9 = *((char **)t7);
    t25 = *((double *)t9);
    t18 = (t21 == t25);
    if (t18 != 0)
        goto LAB37;

LAB39:
LAB38:    t19 = (0 + 8U);
    t6 = (t2 + t19);
    t21 = *((double *)t6);
    t7 = ((IEEE_P_3972351953) + 1768U);
    t9 = *((char **)t7);
    t25 = *((double *)t9);
    t18 = (t21 == t25);
    if (t18 != 0)
        goto LAB41;

LAB43:
LAB42:    t19 = (0 + 8U);
    t6 = (t2 + t19);
    t21 = *((double *)t6);
    t7 = ((IEEE_P_3972351953) + 1768U);
    t9 = *((char **)t7);
    t25 = *((double *)t9);
    t26 = (-(t25));
    t18 = (t21 == t26);
    if (t18 != 0)
        goto LAB45;

LAB47:
LAB46:    goto LAB31;

LAB33:    t9 = xsi_get_transient_memory(16U);
    memset(t9, 0, 16U);
    t10 = t9;
    *((double *)t10) = 0.00000000000000000;
    t12 = (t9 + 8U);
    *((double *)t12) = 0.00000000000000000;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t9, 16U);
    goto LAB1;

LAB36:    goto LAB34;

LAB37:    t7 = xsi_get_transient_memory(16U);
    memset(t7, 0, 16U);
    t10 = t7;
    t12 = ((IEEE_P_3972351953) + 1408U);
    t13 = *((char **)t12);
    t26 = *((double *)t13);
    *((double *)t10) = t26;
    t12 = (t7 + 8U);
    t15 = ((IEEE_P_3972351953) + 1768U);
    t16 = *((char **)t15);
    t28 = *((double *)t16);
    *((double *)t12) = t28;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t7, 16U);
    goto LAB1;

LAB40:    goto LAB38;

LAB41:    t7 = xsi_get_transient_memory(16U);
    memset(t7, 0, 16U);
    t10 = t7;
    t12 = ((IEEE_P_3972351953) + 1768U);
    t13 = *((char **)t12);
    t26 = *((double *)t13);
    *((double *)t10) = t26;
    t12 = (t7 + 8U);
    t15 = ((IEEE_P_3972351953) + 1768U);
    t16 = *((char **)t15);
    t28 = *((double *)t16);
    *((double *)t12) = t28;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t7, 16U);
    goto LAB1;

LAB44:    goto LAB42;

LAB45:    t7 = xsi_get_transient_memory(16U);
    memset(t7, 0, 16U);
    t10 = t7;
    t12 = ((IEEE_P_3972351953) + 1768U);
    t13 = *((char **)t12);
    t28 = *((double *)t13);
    *((double *)t10) = t28;
    t12 = (t7 + 8U);
    t15 = ((IEEE_P_3972351953) + 1768U);
    t16 = *((char **)t15);
    t29 = *((double *)t16);
    t30 = (-(t29));
    *((double *)t12) = t30;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t7, 16U);
    goto LAB1;

LAB48:    goto LAB46;

LAB49:    t10 = xsi_get_transient_memory(16U);
    memset(t10, 0, 16U);
    t12 = t10;
    *((double *)t12) = 1.0000000000000000;
    t13 = (t10 + 8U);
    *((double *)t13) = 0.00000000000000000;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t10, 16U);
    goto LAB1;

LAB52:    t27 = (0 + 8U);
    t7 = (t2 + t27);
    t26 = *((double *)t7);
    t31 = (t26 == 0.00000000000000000);
    t18 = t31;
    goto LAB54;

LAB55:    goto LAB50;

LAB56:;
}

char *ieee_p_4165608084_sub_2829885718_2178808227(char *t1, char *t2)
{
    char t3[248];
    char t4[16];
    char t8[16];
    char t14[16];
    char *t0;
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
    unsigned int t19;
    char *t20;
    double t21;
    unsigned char t22;
    char *t23;
    double t25;
    double t26;
    unsigned int t27;
    unsigned char t28;
    double t29;

LAB0:    t5 = (t3 + 4U);
    t6 = (t1 + 2992);
    t7 = (t5 + 88U);
    *((char **)t7) = t6;
    t9 = (t5 + 56U);
    *((char **)t9) = t8;
    xsi_type_set_default_value(t6, t8, 0);
    t10 = (t5 + 80U);
    *((unsigned int *)t10) = 16U;
    t11 = (t3 + 124U);
    t12 = (t1 + 3104);
    t13 = (t11 + 88U);
    *((char **)t13) = t12;
    t15 = (t11 + 56U);
    *((char **)t15) = t14;
    xsi_type_set_default_value(t12, t14, 0);
    t16 = (t11 + 80U);
    *((unsigned int *)t16) = 16U;
    t17 = (t4 + 4U);
    t18 = (t2 != 0);
    if (t18 == 1)
        goto LAB3;

LAB2:    t19 = (0 + 0U);
    t20 = (t2 + t19);
    t21 = *((double *)t20);
    t22 = (t21 <= 0.00000000000000000);
    if (t22 != 0)
        goto LAB4;

LAB6:
LAB5:    t19 = (0 + 8U);
    t6 = (t2 + t19);
    t21 = *((double *)t6);
    t7 = ((IEEE_P_3972351953) + 1408U);
    t9 = *((char **)t7);
    t25 = *((double *)t9);
    t26 = (-(t25));
    t18 = (t21 == t26);
    if (t18 != 0)
        goto LAB17;

LAB19:
LAB18:    t19 = (0 + 0U);
    t6 = (t2 + t19);
    t21 = *((double *)t6);
    t22 = (t21 == 1.0000000000000000);
    if (t22 == 1)
        goto LAB33;

LAB34:    t18 = (unsigned char)0;

LAB35:    if (t18 != 0)
        goto LAB30;

LAB32:
LAB31:    t19 = (0 + 0U);
    t6 = (t2 + t19);
    t21 = *((double *)t6);
    t22 = (t21 == 2.0000000000000000);
    if (t22 == 1)
        goto LAB40;

LAB41:    t18 = (unsigned char)0;

LAB42:    if (t18 != 0)
        goto LAB37;

LAB39:
LAB38:    t6 = ((IEEE_P_3972351953) + 2488U);
    t7 = *((char **)t6);
    t21 = *((double *)t7);
    t19 = (0 + 0U);
    t6 = (t2 + t19);
    t25 = *((double *)t6);
    t26 = ieee_p_3972351953_sub_1543758017_2984157535(IEEE_P_3972351953, t25);
    t29 = (t21 * t26);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    t27 = (0 + 0U);
    t9 = (t10 + t27);
    *((double *)t9) = t29;
    t6 = ((IEEE_P_3972351953) + 2488U);
    t7 = *((char **)t6);
    t21 = *((double *)t7);
    t19 = (0 + 8U);
    t6 = (t2 + t19);
    t25 = *((double *)t6);
    t26 = (t21 * t25);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    t27 = (0 + 8U);
    t9 = (t10 + t27);
    *((double *)t9) = t26;
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = ieee_p_4165608084_sub_4232924143_2178808227(t1, t7);
    t9 = (t11 + 56U);
    t10 = *((char **)t9);
    t9 = (t10 + 0);
    memcpy(t9, t6, 16U);
    t6 = (t11 + 56U);
    t7 = *((char **)t6);
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t7, 16U);

LAB1:    return t0;
LAB3:    *((char **)t17) = t2;
    goto LAB2;

LAB4:    if ((unsigned char)0 == 0)
        goto LAB7;

LAB8:    t6 = xsi_get_transient_memory(16U);
    memset(t6, 0, 16U);
    t7 = t6;
    if (-1.7014111000000000E+308 > 1.7014111000000000E+308)
        goto LAB9;

LAB10:    if (1 == -1)
        goto LAB14;

LAB15:    t21 = 1.7014111000000000E+308;

LAB11:    *((double *)t7) = t21;
    t9 = (t6 + 8U);
    t10 = ((IEEE_P_3972351953) + 1408U);
    t12 = *((char **)t10);
    t25 = *((double *)t12);
    *((double *)t9) = t25;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t6, 16U);
    goto LAB1;

LAB7:    t23 = (t1 + 5405);
    xsi_report(t23, 23U, (unsigned char)2);
    goto LAB8;

LAB9:    if (1 == 1)
        goto LAB12;

LAB13:    t21 = -1.7014111000000000E+308;
    goto LAB11;

LAB12:    t21 = 1.7014111000000000E+308;
    goto LAB11;

LAB14:    t21 = -1.7014111000000000E+308;
    goto LAB11;

LAB16:    goto LAB5;

LAB17:    if ((unsigned char)0 == 0)
        goto LAB20;

LAB21:    t6 = xsi_get_transient_memory(16U);
    memset(t6, 0, 16U);
    t7 = t6;
    if (-1.7014111000000000E+308 > 1.7014111000000000E+308)
        goto LAB22;

LAB23:    if (1 == -1)
        goto LAB27;

LAB28:    t21 = 1.7014111000000000E+308;

LAB24:    *((double *)t7) = t21;
    t9 = (t6 + 8U);
    t10 = ((IEEE_P_3972351953) + 1408U);
    t12 = *((char **)t10);
    t25 = *((double *)t12);
    *((double *)t9) = t25;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t6, 16U);
    goto LAB1;

LAB20:    t7 = (t1 + 5428);
    xsi_report(t7, 27U, (unsigned char)2);
    goto LAB21;

LAB22:    if (1 == 1)
        goto LAB25;

LAB26:    t21 = -1.7014111000000000E+308;
    goto LAB24;

LAB25:    t21 = 1.7014111000000000E+308;
    goto LAB24;

LAB27:    t21 = -1.7014111000000000E+308;
    goto LAB24;

LAB29:    goto LAB18;

LAB30:    t9 = xsi_get_transient_memory(16U);
    memset(t9, 0, 16U);
    t10 = t9;
    *((double *)t10) = 0.00000000000000000;
    t12 = (t9 + 8U);
    *((double *)t12) = 0.00000000000000000;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t9, 16U);
    goto LAB1;

LAB33:    t27 = (0 + 8U);
    t7 = (t2 + t27);
    t25 = *((double *)t7);
    t28 = (t25 == 0.00000000000000000);
    t18 = t28;
    goto LAB35;

LAB36:    goto LAB31;

LAB37:    t9 = xsi_get_transient_memory(16U);
    memset(t9, 0, 16U);
    t10 = t9;
    *((double *)t10) = 1.0000000000000000;
    t12 = (t9 + 8U);
    *((double *)t12) = 0.00000000000000000;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t9, 16U);
    goto LAB1;

LAB40:    t27 = (0 + 8U);
    t7 = (t2 + t27);
    t25 = *((double *)t7);
    t28 = (t25 == 0.00000000000000000);
    t18 = t28;
    goto LAB42;

LAB43:    goto LAB38;

LAB44:;
}

char *ieee_p_4165608084_sub_611314693_2178808227(char *t1, char *t2)
{
    char t3[248];
    char t4[16];
    char t8[16];
    char t14[16];
    char *t0;
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
    unsigned int t19;
    char *t20;
    double t21;
    unsigned char t22;
    char *t23;
    double t25;
    double t26;
    unsigned int t27;
    unsigned char t28;
    double t29;

LAB0:    t5 = (t3 + 4U);
    t6 = (t1 + 2992);
    t7 = (t5 + 88U);
    *((char **)t7) = t6;
    t9 = (t5 + 56U);
    *((char **)t9) = t8;
    xsi_type_set_default_value(t6, t8, 0);
    t10 = (t5 + 80U);
    *((unsigned int *)t10) = 16U;
    t11 = (t3 + 124U);
    t12 = (t1 + 3104);
    t13 = (t11 + 88U);
    *((char **)t13) = t12;
    t15 = (t11 + 56U);
    *((char **)t15) = t14;
    xsi_type_set_default_value(t12, t14, 0);
    t16 = (t11 + 80U);
    *((unsigned int *)t16) = 16U;
    t17 = (t4 + 4U);
    t18 = (t2 != 0);
    if (t18 == 1)
        goto LAB3;

LAB2:    t19 = (0 + 0U);
    t20 = (t2 + t19);
    t21 = *((double *)t20);
    t22 = (t21 <= 0.00000000000000000);
    if (t22 != 0)
        goto LAB4;

LAB6:
LAB5:    t19 = (0 + 8U);
    t6 = (t2 + t19);
    t21 = *((double *)t6);
    t7 = ((IEEE_P_3972351953) + 1408U);
    t9 = *((char **)t7);
    t25 = *((double *)t9);
    t26 = (-(t25));
    t18 = (t21 == t26);
    if (t18 != 0)
        goto LAB17;

LAB19:
LAB18:    t19 = (0 + 0U);
    t6 = (t2 + t19);
    t21 = *((double *)t6);
    t22 = (t21 == 1.0000000000000000);
    if (t22 == 1)
        goto LAB33;

LAB34:    t18 = (unsigned char)0;

LAB35:    if (t18 != 0)
        goto LAB30;

LAB32:
LAB31:    t19 = (0 + 0U);
    t6 = (t2 + t19);
    t21 = *((double *)t6);
    t22 = (t21 == 10.000000000000000);
    if (t22 == 1)
        goto LAB40;

LAB41:    t18 = (unsigned char)0;

LAB42:    if (t18 != 0)
        goto LAB37;

LAB39:
LAB38:    t6 = ((IEEE_P_3972351953) + 2608U);
    t7 = *((char **)t6);
    t21 = *((double *)t7);
    t19 = (0 + 0U);
    t6 = (t2 + t19);
    t25 = *((double *)t6);
    t26 = ieee_p_3972351953_sub_1543758017_2984157535(IEEE_P_3972351953, t25);
    t29 = (t21 * t26);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    t27 = (0 + 0U);
    t9 = (t10 + t27);
    *((double *)t9) = t29;
    t6 = ((IEEE_P_3972351953) + 2608U);
    t7 = *((char **)t6);
    t21 = *((double *)t7);
    t19 = (0 + 8U);
    t6 = (t2 + t19);
    t25 = *((double *)t6);
    t26 = (t21 * t25);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    t27 = (0 + 8U);
    t9 = (t10 + t27);
    *((double *)t9) = t26;
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = ieee_p_4165608084_sub_4232924143_2178808227(t1, t7);
    t9 = (t11 + 56U);
    t10 = *((char **)t9);
    t9 = (t10 + 0);
    memcpy(t9, t6, 16U);
    t6 = (t11 + 56U);
    t7 = *((char **)t6);
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t7, 16U);

LAB1:    return t0;
LAB3:    *((char **)t17) = t2;
    goto LAB2;

LAB4:    if ((unsigned char)0 == 0)
        goto LAB7;

LAB8:    t6 = xsi_get_transient_memory(16U);
    memset(t6, 0, 16U);
    t7 = t6;
    if (-1.7014111000000000E+308 > 1.7014111000000000E+308)
        goto LAB9;

LAB10:    if (1 == -1)
        goto LAB14;

LAB15:    t21 = 1.7014111000000000E+308;

LAB11:    *((double *)t7) = t21;
    t9 = (t6 + 8U);
    t10 = ((IEEE_P_3972351953) + 1408U);
    t12 = *((char **)t10);
    t25 = *((double *)t12);
    *((double *)t9) = t25;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t6, 16U);
    goto LAB1;

LAB7:    t23 = (t1 + 5455);
    xsi_report(t23, 24U, (unsigned char)2);
    goto LAB8;

LAB9:    if (1 == 1)
        goto LAB12;

LAB13:    t21 = -1.7014111000000000E+308;
    goto LAB11;

LAB12:    t21 = 1.7014111000000000E+308;
    goto LAB11;

LAB14:    t21 = -1.7014111000000000E+308;
    goto LAB11;

LAB16:    goto LAB5;

LAB17:    if ((unsigned char)0 == 0)
        goto LAB20;

LAB21:    t6 = xsi_get_transient_memory(16U);
    memset(t6, 0, 16U);
    t7 = t6;
    if (-1.7014111000000000E+308 > 1.7014111000000000E+308)
        goto LAB22;

LAB23:    if (1 == -1)
        goto LAB27;

LAB28:    t21 = 1.7014111000000000E+308;

LAB24:    *((double *)t7) = t21;
    t9 = (t6 + 8U);
    t10 = ((IEEE_P_3972351953) + 1408U);
    t12 = *((char **)t10);
    t25 = *((double *)t12);
    *((double *)t9) = t25;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t6, 16U);
    goto LAB1;

LAB20:    t7 = (t1 + 5479);
    xsi_report(t7, 28U, (unsigned char)2);
    goto LAB21;

LAB22:    if (1 == 1)
        goto LAB25;

LAB26:    t21 = -1.7014111000000000E+308;
    goto LAB24;

LAB25:    t21 = 1.7014111000000000E+308;
    goto LAB24;

LAB27:    t21 = -1.7014111000000000E+308;
    goto LAB24;

LAB29:    goto LAB18;

LAB30:    t9 = xsi_get_transient_memory(16U);
    memset(t9, 0, 16U);
    t10 = t9;
    *((double *)t10) = 0.00000000000000000;
    t12 = (t9 + 8U);
    *((double *)t12) = 0.00000000000000000;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t9, 16U);
    goto LAB1;

LAB33:    t27 = (0 + 8U);
    t7 = (t2 + t27);
    t25 = *((double *)t7);
    t28 = (t25 == 0.00000000000000000);
    t18 = t28;
    goto LAB35;

LAB36:    goto LAB31;

LAB37:    t9 = xsi_get_transient_memory(16U);
    memset(t9, 0, 16U);
    t10 = t9;
    *((double *)t10) = 1.0000000000000000;
    t12 = (t9 + 8U);
    *((double *)t12) = 0.00000000000000000;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t9, 16U);
    goto LAB1;

LAB40:    t27 = (0 + 8U);
    t7 = (t2 + t27);
    t25 = *((double *)t7);
    t28 = (t25 == 0.00000000000000000);
    t18 = t28;
    goto LAB42;

LAB43:    goto LAB38;

LAB44:;
}

char *ieee_p_4165608084_sub_1996961037_2178808227(char *t1, char *t2, double t3)
{
    char t4[368];
    char t5[24];
    char t9[16];
    char t15[8];
    char t21[8];
    char *t0;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t24;
    unsigned char t25;
    char *t26;
    unsigned char t27;
    unsigned int t28;
    char *t29;
    double t30;
    unsigned char t31;
    unsigned int t32;
    char *t33;
    double t34;
    unsigned char t35;
    char *t36;
    double t38;

LAB0:    t6 = (t4 + 4U);
    t7 = (t1 + 3104);
    t8 = (t6 + 88U);
    *((char **)t8) = t7;
    t10 = (t6 + 56U);
    *((char **)t10) = t9;
    xsi_type_set_default_value(t7, t9, 0);
    t11 = (t6 + 80U);
    *((unsigned int *)t11) = 16U;
    t12 = (t4 + 124U);
    t13 = ((STD_STANDARD) + 472);
    t14 = (t12 + 88U);
    *((char **)t14) = t13;
    t16 = (t12 + 56U);
    *((char **)t16) = t15;
    xsi_type_set_default_value(t13, t15, 0);
    t17 = (t12 + 80U);
    *((unsigned int *)t17) = 8U;
    t18 = (t4 + 244U);
    t19 = ((STD_STANDARD) + 472);
    t20 = (t18 + 88U);
    *((char **)t20) = t19;
    t22 = (t18 + 56U);
    *((char **)t22) = t21;
    xsi_type_set_default_value(t19, t21, 0);
    t23 = (t18 + 80U);
    *((unsigned int *)t23) = 8U;
    t24 = (t5 + 4U);
    t25 = (t2 != 0);
    if (t25 == 1)
        goto LAB3;

LAB2:    t26 = (t5 + 12U);
    *((double *)t26) = t3;
    t28 = (0 + 0U);
    t29 = (t2 + t28);
    t30 = *((double *)t29);
    t31 = (t30 == 0.00000000000000000);
    if (t31 == 1)
        goto LAB7;

LAB8:    t27 = (unsigned char)0;

LAB9:    if (t27 != 0)
        goto LAB4;

LAB6:
LAB5:    t27 = (t3 <= 0.00000000000000000);
    if (t27 == 1)
        goto LAB23;

LAB24:    t31 = (t3 == 1.0000000000000000);
    t25 = t31;

LAB25:    if (t25 != 0)
        goto LAB20;

LAB22:
LAB21:    t28 = (0 + 8U);
    t7 = (t2 + t28);
    t30 = *((double *)t7);
    t25 = (t30 == 0.00000000000000000);
    if (t25 != 0)
        goto LAB36;

LAB38:
LAB37:    t7 = ieee_p_4165608084_sub_4232924143_2178808227(t1, t2);
    t8 = (t6 + 56U);
    t10 = *((char **)t8);
    t8 = (t10 + 0);
    memcpy(t8, t7, 16U);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t28 = (0 + 0U);
    t7 = (t8 + t28);
    t30 = *((double *)t7);
    t34 = ieee_p_3972351953_sub_1341592424_2984157535(IEEE_P_3972351953, t30, t3);
    t10 = (t12 + 56U);
    t11 = *((char **)t10);
    t10 = (t11 + 0);
    *((double *)t10) = t34;
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t28 = (0 + 8U);
    t7 = (t8 + t28);
    t30 = *((double *)t7);
    t34 = ieee_p_3972351953_sub_1543758017_2984157535(IEEE_P_3972351953, t3);
    t38 = (t30 / t34);
    t10 = (t18 + 56U);
    t11 = *((char **)t10);
    t10 = (t11 + 0);
    *((double *)t10) = t38;
    t7 = xsi_get_transient_memory(16U);
    memset(t7, 0, 16U);
    t8 = t7;
    t10 = (t12 + 56U);
    t11 = *((char **)t10);
    t30 = *((double *)t11);
    *((double *)t8) = t30;
    t10 = (t7 + 8U);
    t13 = (t18 + 56U);
    t14 = *((char **)t13);
    t34 = *((double *)t14);
    *((double *)t10) = t34;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t7, 16U);

LAB1:    return t0;
LAB3:    *((char **)t24) = t2;
    goto LAB2;

LAB4:    if ((unsigned char)0 == 0)
        goto LAB10;

LAB11:    t7 = xsi_get_transient_memory(16U);
    memset(t7, 0, 16U);
    t8 = t7;
    if (-1.7014111000000000E+308 > 1.7014111000000000E+308)
        goto LAB12;

LAB13:    if (1 == -1)
        goto LAB17;

LAB18:    t30 = -1.7014111000000000E+308;

LAB14:    *((double *)t8) = t30;
    t10 = (t7 + 8U);
    *((double *)t10) = 0.00000000000000000;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t7, 16U);
    goto LAB1;

LAB7:    t32 = (0 + 8U);
    t33 = (t2 + t32);
    t34 = *((double *)t33);
    t35 = (t34 == 0.00000000000000000);
    t27 = t35;
    goto LAB9;

LAB10:    t36 = (t1 + 5507);
    xsi_report(t36, 40U, (unsigned char)2);
    goto LAB11;

LAB12:    if (1 == 1)
        goto LAB15;

LAB16:    t30 = 1.7014111000000000E+308;
    goto LAB14;

LAB15:    t30 = -1.7014111000000000E+308;
    goto LAB14;

LAB17:    t30 = 1.7014111000000000E+308;
    goto LAB14;

LAB19:    goto LAB5;

LAB20:    if ((unsigned char)0 == 0)
        goto LAB26;

LAB27:    t7 = xsi_get_transient_memory(16U);
    memset(t7, 0, 16U);
    t8 = t7;
    if (-1.7014111000000000E+308 > 1.7014111000000000E+308)
        goto LAB28;

LAB29:    if (1 == -1)
        goto LAB33;

LAB34:    t30 = -1.7014111000000000E+308;

LAB30:    *((double *)t8) = t30;
    t10 = (t7 + 8U);
    *((double *)t10) = 0.00000000000000000;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t7, 16U);
    goto LAB1;

LAB23:    t25 = (unsigned char)1;
    goto LAB25;

LAB26:    t7 = (t1 + 5547);
    xsi_report(t7, 40U, (unsigned char)2);
    goto LAB27;

LAB28:    if (1 == 1)
        goto LAB31;

LAB32:    t30 = 1.7014111000000000E+308;
    goto LAB30;

LAB31:    t30 = -1.7014111000000000E+308;
    goto LAB30;

LAB33:    t30 = 1.7014111000000000E+308;
    goto LAB30;

LAB35:    goto LAB21;

LAB36:    t32 = (0 + 0U);
    t8 = (t2 + t32);
    t34 = *((double *)t8);
    t27 = (t34 == t3);
    if (t27 != 0)
        goto LAB39;

LAB41:
LAB40:    t28 = (0 + 0U);
    t7 = (t2 + t28);
    t30 = *((double *)t7);
    t25 = (t30 == 1.0000000000000000);
    if (t25 != 0)
        goto LAB43;

LAB45:
LAB44:    goto LAB37;

LAB39:    t10 = (t1 + 1168U);
    t11 = *((char **)t10);
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t11, 16U);
    goto LAB1;

LAB42:    goto LAB40;

LAB43:    t8 = (t1 + 1408U);
    t10 = *((char **)t8);
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t10, 16U);
    goto LAB1;

LAB46:    goto LAB44;

LAB47:;
}

char *ieee_p_4165608084_sub_3730672360_2178808227(char *t1, char *t2, double t3)
{
    char t4[248];
    char t5[24];
    char t9[16];
    char t15[16];
    char *t0;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    unsigned char t19;
    char *t20;
    unsigned int t21;
    char *t22;
    double t23;
    unsigned char t24;
    char *t25;
    double t27;
    unsigned char t28;
    double t29;
    unsigned int t30;

LAB0:    t6 = (t4 + 4U);
    t7 = (t1 + 2992);
    t8 = (t6 + 88U);
    *((char **)t8) = t7;
    t10 = (t6 + 56U);
    *((char **)t10) = t9;
    xsi_type_set_default_value(t7, t9, 0);
    t11 = (t6 + 80U);
    *((unsigned int *)t11) = 16U;
    t12 = (t4 + 124U);
    t13 = (t1 + 3104);
    t14 = (t12 + 88U);
    *((char **)t14) = t13;
    t16 = (t12 + 56U);
    *((char **)t16) = t15;
    xsi_type_set_default_value(t13, t15, 0);
    t17 = (t12 + 80U);
    *((unsigned int *)t17) = 16U;
    t18 = (t5 + 4U);
    t19 = (t2 != 0);
    if (t19 == 1)
        goto LAB3;

LAB2:    t20 = (t5 + 12U);
    *((double *)t20) = t3;
    t21 = (0 + 0U);
    t22 = (t2 + t21);
    t23 = *((double *)t22);
    t24 = (t23 <= 0.00000000000000000);
    if (t24 != 0)
        goto LAB4;

LAB6:
LAB5:    t24 = (t3 <= 0.00000000000000000);
    if (t24 == 1)
        goto LAB20;

LAB21:    t28 = (t3 == 1.0000000000000000);
    t19 = t28;

LAB22:    if (t19 != 0)
        goto LAB17;

LAB19:
LAB18:    t21 = (0 + 8U);
    t7 = (t2 + t21);
    t23 = *((double *)t7);
    t8 = ((IEEE_P_3972351953) + 1408U);
    t10 = *((char **)t8);
    t27 = *((double *)t10);
    t29 = (-(t27));
    t19 = (t23 == t29);
    if (t19 != 0)
        goto LAB33;

LAB35:
LAB34:    t21 = (0 + 0U);
    t7 = (t2 + t21);
    t23 = *((double *)t7);
    t24 = (t23 == 1.0000000000000000);
    if (t24 == 1)
        goto LAB49;

LAB50:    t19 = (unsigned char)0;

LAB51:    if (t19 != 0)
        goto LAB46;

LAB48:
LAB47:    t21 = (0 + 0U);
    t7 = (t2 + t21);
    t23 = *((double *)t7);
    t24 = (t23 == t3);
    if (t24 == 1)
        goto LAB56;

LAB57:    t19 = (unsigned char)0;

LAB58:    if (t19 != 0)
        goto LAB53;

LAB55:
LAB54:    t21 = (0 + 0U);
    t7 = (t2 + t21);
    t23 = *((double *)t7);
    t27 = ieee_p_3972351953_sub_1341592424_2984157535(IEEE_P_3972351953, t23, t3);
    t8 = (t6 + 56U);
    t10 = *((char **)t8);
    t30 = (0 + 0U);
    t8 = (t10 + t30);
    *((double *)t8) = t27;
    t21 = (0 + 8U);
    t7 = (t2 + t21);
    t23 = *((double *)t7);
    t27 = ieee_p_3972351953_sub_1543758017_2984157535(IEEE_P_3972351953, t3);
    t29 = (t23 / t27);
    t8 = (t6 + 56U);
    t10 = *((char **)t8);
    t30 = (0 + 8U);
    t8 = (t10 + t30);
    *((double *)t8) = t29;
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t7 = ieee_p_4165608084_sub_4232924143_2178808227(t1, t8);
    t10 = (t12 + 56U);
    t11 = *((char **)t10);
    t10 = (t11 + 0);
    memcpy(t10, t7, 16U);
    t7 = (t12 + 56U);
    t8 = *((char **)t7);
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t8, 16U);

LAB1:    return t0;
LAB3:    *((char **)t18) = t2;
    goto LAB2;

LAB4:    if ((unsigned char)0 == 0)
        goto LAB7;

LAB8:    t7 = xsi_get_transient_memory(16U);
    memset(t7, 0, 16U);
    t8 = t7;
    if (-1.7014111000000000E+308 > 1.7014111000000000E+308)
        goto LAB9;

LAB10:    if (1 == -1)
        goto LAB14;

LAB15:    t23 = 1.7014111000000000E+308;

LAB11:    *((double *)t8) = t23;
    t10 = (t7 + 8U);
    t11 = ((IEEE_P_3972351953) + 1408U);
    t13 = *((char **)t11);
    t27 = *((double *)t13);
    *((double *)t10) = t27;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t7, 16U);
    goto LAB1;

LAB7:    t25 = (t1 + 5587);
    xsi_report(t25, 27U, (unsigned char)2);
    goto LAB8;

LAB9:    if (1 == 1)
        goto LAB12;

LAB13:    t23 = -1.7014111000000000E+308;
    goto LAB11;

LAB12:    t23 = 1.7014111000000000E+308;
    goto LAB11;

LAB14:    t23 = -1.7014111000000000E+308;
    goto LAB11;

LAB16:    goto LAB5;

LAB17:    if ((unsigned char)0 == 0)
        goto LAB23;

LAB24:    t7 = xsi_get_transient_memory(16U);
    memset(t7, 0, 16U);
    t8 = t7;
    if (-1.7014111000000000E+308 > 1.7014111000000000E+308)
        goto LAB25;

LAB26:    if (1 == -1)
        goto LAB30;

LAB31:    t23 = 1.7014111000000000E+308;

LAB27:    *((double *)t8) = t23;
    t10 = (t7 + 8U);
    t11 = ((IEEE_P_3972351953) + 1408U);
    t13 = *((char **)t11);
    t27 = *((double *)t13);
    *((double *)t10) = t27;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t7, 16U);
    goto LAB1;

LAB20:    t19 = (unsigned char)1;
    goto LAB22;

LAB23:    t7 = (t1 + 5614);
    xsi_report(t7, 40U, (unsigned char)2);
    goto LAB24;

LAB25:    if (1 == 1)
        goto LAB28;

LAB29:    t23 = -1.7014111000000000E+308;
    goto LAB27;

LAB28:    t23 = 1.7014111000000000E+308;
    goto LAB27;

LAB30:    t23 = -1.7014111000000000E+308;
    goto LAB27;

LAB32:    goto LAB18;

LAB33:    if ((unsigned char)0 == 0)
        goto LAB36;

LAB37:    t7 = xsi_get_transient_memory(16U);
    memset(t7, 0, 16U);
    t8 = t7;
    if (-1.7014111000000000E+308 > 1.7014111000000000E+308)
        goto LAB38;

LAB39:    if (1 == -1)
        goto LAB43;

LAB44:    t23 = 1.7014111000000000E+308;

LAB40:    *((double *)t8) = t23;
    t10 = (t7 + 8U);
    t11 = ((IEEE_P_3972351953) + 1408U);
    t13 = *((char **)t11);
    t27 = *((double *)t13);
    *((double *)t10) = t27;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t7, 16U);
    goto LAB1;

LAB36:    t8 = (t1 + 5654);
    xsi_report(t8, 31U, (unsigned char)2);
    goto LAB37;

LAB38:    if (1 == 1)
        goto LAB41;

LAB42:    t23 = -1.7014111000000000E+308;
    goto LAB40;

LAB41:    t23 = 1.7014111000000000E+308;
    goto LAB40;

LAB43:    t23 = -1.7014111000000000E+308;
    goto LAB40;

LAB45:    goto LAB34;

LAB46:    t10 = xsi_get_transient_memory(16U);
    memset(t10, 0, 16U);
    t11 = t10;
    *((double *)t11) = 0.00000000000000000;
    t13 = (t10 + 8U);
    *((double *)t13) = 0.00000000000000000;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t10, 16U);
    goto LAB1;

LAB49:    t30 = (0 + 8U);
    t8 = (t2 + t30);
    t27 = *((double *)t8);
    t28 = (t27 == 0.00000000000000000);
    t19 = t28;
    goto LAB51;

LAB52:    goto LAB47;

LAB53:    t10 = xsi_get_transient_memory(16U);
    memset(t10, 0, 16U);
    t11 = t10;
    *((double *)t11) = 1.0000000000000000;
    t13 = (t10 + 8U);
    *((double *)t13) = 0.00000000000000000;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t10, 16U);
    goto LAB1;

LAB56:    t30 = (0 + 8U);
    t8 = (t2 + t30);
    t27 = *((double *)t8);
    t28 = (t27 == 0.00000000000000000);
    t19 = t28;
    goto LAB58;

LAB59:    goto LAB54;

LAB60:;
}

char *ieee_p_4165608084_sub_1464402489_2178808227(char *t1, char *t2)
{
    char t4[16];
    char *t0;
    char *t5;
    unsigned char t6;
    unsigned int t7;
    char *t8;
    double t9;
    unsigned char t10;
    unsigned char t11;
    unsigned int t12;
    char *t13;
    double t14;
    unsigned char t15;
    unsigned int t16;
    char *t17;
    double t18;
    char *t19;
    char *t20;
    double t21;
    unsigned char t22;
    char *t23;
    double t24;
    double t25;
    double t26;
    unsigned int t27;
    char *t28;
    double t29;
    double t30;
    double t31;

LAB0:    t5 = (t4 + 4U);
    t6 = (t2 != 0);
    if (t6 == 1)
        goto LAB3;

LAB2:    t7 = (0 + 8U);
    t8 = (t2 + t7);
    t9 = *((double *)t8);
    t10 = (t9 == 0.00000000000000000);
    if (t10 != 0)
        goto LAB4;

LAB6:
LAB5:    t8 = xsi_get_transient_memory(16U);
    memset(t8, 0, 16U);
    t13 = t8;
    t7 = (0 + 0U);
    t17 = (t2 + t7);
    t9 = *((double *)t17);
    t14 = ieee_p_3972351953_sub_1485185913_2984157535(IEEE_P_3972351953, t9);
    t12 = (0 + 8U);
    t19 = (t2 + t12);
    t18 = *((double *)t19);
    t21 = ieee_p_3972351953_sub_160431096_2984157535(IEEE_P_3972351953, t18);
    t24 = (t14 * t21);
    *((double *)t13) = t24;
    t20 = (t8 + 8U);
    t16 = (0 + 0U);
    t23 = (t2 + t16);
    t25 = *((double *)t23);
    t26 = ieee_p_3972351953_sub_773523744_2984157535(IEEE_P_3972351953, t25);
    t27 = (0 + 8U);
    t28 = (t2 + t27);
    t29 = *((double *)t28);
    t30 = ieee_p_3972351953_sub_1792801001_2984157535(IEEE_P_3972351953, t29);
    t31 = (t26 * t30);
    *((double *)t20) = t31;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t8, 16U);

LAB1:    return t0;
LAB3:    *((char **)t5) = t2;
    goto LAB2;

LAB4:    t12 = (0 + 0U);
    t13 = (t2 + t12);
    t14 = *((double *)t13);
    t15 = (t14 == 0.00000000000000000);
    if (t15 == 1)
        goto LAB10;

LAB11:    t16 = (0 + 0U);
    t17 = (t2 + t16);
    t18 = *((double *)t17);
    t19 = ((IEEE_P_3972351953) + 1408U);
    t20 = *((char **)t19);
    t21 = *((double *)t20);
    t22 = (t18 == t21);
    t11 = t22;

LAB12:    if (t11 != 0)
        goto LAB7;

LAB9:
LAB8:    goto LAB5;

LAB7:    t19 = (t1 + 1408U);
    t23 = *((char **)t19);
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t23, 16U);
    goto LAB1;

LAB10:    t11 = (unsigned char)1;
    goto LAB12;

LAB13:    goto LAB8;

LAB14:;
}

char *ieee_p_4165608084_sub_3325369240_2178808227(char *t1, char *t2)
{
    char t3[368];
    char t4[16];
    char t8[16];
    char t14[16];
    char t20[16];
    char *t0;
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
    char *t21;
    char *t22;
    char *t23;
    unsigned char t24;
    unsigned int t25;
    char *t26;
    double t27;
    char *t28;
    char *t29;
    double t30;
    double t31;
    unsigned char t32;
    unsigned int t34;
    unsigned char t35;
    double t36;
    double t37;
    unsigned int t38;
    double t39;
    double t40;
    unsigned int t41;
    double t42;
    double t43;
    double t44;

LAB0:    t5 = (t3 + 4U);
    t6 = (t1 + 2992);
    t7 = (t5 + 88U);
    *((char **)t7) = t6;
    t9 = (t5 + 56U);
    *((char **)t9) = t8;
    xsi_type_set_default_value(t6, t8, 0);
    t10 = (t5 + 80U);
    *((unsigned int *)t10) = 16U;
    t11 = (t3 + 124U);
    t12 = (t1 + 2992);
    t13 = (t11 + 88U);
    *((char **)t13) = t12;
    t15 = (t11 + 56U);
    *((char **)t15) = t14;
    xsi_type_set_default_value(t12, t14, 0);
    t16 = (t11 + 80U);
    *((unsigned int *)t16) = 16U;
    t17 = (t3 + 244U);
    t18 = (t1 + 3104);
    t19 = (t17 + 88U);
    *((char **)t19) = t18;
    t21 = (t17 + 56U);
    *((char **)t21) = t20;
    xsi_type_set_default_value(t18, t20, 0);
    t22 = (t17 + 80U);
    *((unsigned int *)t22) = 16U;
    t23 = (t4 + 4U);
    t24 = (t2 != 0);
    if (t24 == 1)
        goto LAB3;

LAB2:    t25 = (0 + 8U);
    t26 = (t2 + t25);
    t27 = *((double *)t26);
    t28 = ((IEEE_P_3972351953) + 1408U);
    t29 = *((char **)t28);
    t30 = *((double *)t29);
    t31 = (-(t30));
    t32 = (t27 == t31);
    if (t32 != 0)
        goto LAB4;

LAB6:
LAB5:    t25 = (0 + 0U);
    t6 = (t2 + t25);
    t27 = *((double *)t6);
    t32 = (t27 == 0.00000000000000000);
    if (t32 == 1)
        goto LAB13;

LAB14:    t24 = (unsigned char)0;

LAB15:    if (t24 != 0)
        goto LAB10;

LAB12:
LAB11:    t25 = (0 + 0U);
    t6 = (t2 + t25);
    t27 = *((double *)t6);
    t7 = ((IEEE_P_3972351953) + 1408U);
    t9 = *((char **)t7);
    t30 = *((double *)t9);
    t32 = (t27 == t30);
    if (t32 == 1)
        goto LAB20;

LAB21:    t24 = (unsigned char)0;

LAB22:    if (t24 != 0)
        goto LAB17;

LAB19:
LAB18:    t6 = ieee_p_4165608084_sub_693027240_2178808227(t1, t2);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    t7 = (t9 + 0);
    memcpy(t7, t6, 16U);
    t6 = xsi_get_transient_memory(16U);
    memset(t6, 0, 16U);
    t7 = t6;
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    t25 = (0 + 0U);
    t9 = (t10 + t25);
    t27 = *((double *)t9);
    t30 = ieee_p_3972351953_sub_1485185913_2984157535(IEEE_P_3972351953, t27);
    t12 = (t5 + 56U);
    t13 = *((char **)t12);
    t34 = (0 + 8U);
    t12 = (t13 + t34);
    t31 = *((double *)t12);
    t36 = ieee_p_3972351953_sub_160431096_2984157535(IEEE_P_3972351953, t31);
    t37 = (t30 * t36);
    *((double *)t7) = t37;
    t15 = (t6 + 8U);
    t16 = (t5 + 56U);
    t18 = *((char **)t16);
    t38 = (0 + 0U);
    t16 = (t18 + t38);
    t39 = *((double *)t16);
    t40 = ieee_p_3972351953_sub_773523744_2984157535(IEEE_P_3972351953, t39);
    t19 = (t5 + 56U);
    t21 = *((char **)t19);
    t41 = (0 + 8U);
    t19 = (t21 + t41);
    t42 = *((double *)t19);
    t43 = ieee_p_3972351953_sub_1792801001_2984157535(IEEE_P_3972351953, t42);
    t44 = (t40 * t43);
    *((double *)t15) = t44;
    t22 = (t11 + 56U);
    t26 = *((char **)t22);
    t22 = (t26 + 0);
    memcpy(t22, t6, 16U);
    t6 = (t11 + 56U);
    t7 = *((char **)t6);
    t6 = ieee_p_4165608084_sub_4232924143_2178808227(t1, t7);
    t9 = (t17 + 56U);
    t10 = *((char **)t9);
    t9 = (t10 + 0);
    memcpy(t9, t6, 16U);
    t6 = (t17 + 56U);
    t7 = *((char **)t6);
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t7, 16U);

LAB1:    return t0;
LAB3:    *((char **)t23) = t2;
    goto LAB2;

LAB4:    if ((unsigned char)0 == 0)
        goto LAB7;

LAB8:    t6 = xsi_get_transient_memory(16U);
    memset(t6, 0, 16U);
    t7 = t6;
    *((double *)t7) = 0.00000000000000000;
    t9 = (t6 + 8U);
    *((double *)t9) = 0.00000000000000000;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t6, 16U);
    goto LAB1;

LAB7:    t28 = (t1 + 5685);
    xsi_report(t28, 26U, (unsigned char)2);
    goto LAB8;

LAB9:    goto LAB5;

LAB10:    t9 = xsi_get_transient_memory(16U);
    memset(t9, 0, 16U);
    t10 = t9;
    *((double *)t10) = 0.00000000000000000;
    t12 = (t9 + 8U);
    *((double *)t12) = 0.00000000000000000;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t9, 16U);
    goto LAB1;

LAB13:    t34 = (0 + 8U);
    t7 = (t2 + t34);
    t30 = *((double *)t7);
    t35 = (t30 == 0.00000000000000000);
    t24 = t35;
    goto LAB15;

LAB16:    goto LAB11;

LAB17:    t10 = xsi_get_transient_memory(16U);
    memset(t10, 0, 16U);
    t12 = t10;
    *((double *)t12) = 0.00000000000000000;
    t13 = (t10 + 8U);
    *((double *)t13) = 0.00000000000000000;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t10, 16U);
    goto LAB1;

LAB20:    t34 = (0 + 8U);
    t7 = (t2 + t34);
    t31 = *((double *)t7);
    t35 = (t31 == 0.00000000000000000);
    t24 = t35;
    goto LAB22;

LAB23:    goto LAB18;

LAB24:;
}

char *ieee_p_4165608084_sub_1445648820_2178808227(char *t1, char *t2)
{
    char t4[16];
    char *t0;
    char *t5;
    unsigned char t6;
    unsigned int t7;
    char *t8;
    double t9;
    unsigned char t10;
    unsigned char t11;
    unsigned int t12;
    char *t13;
    double t14;
    char *t15;
    char *t16;
    double t17;
    unsigned char t18;
    unsigned int t19;
    double t20;
    char *t21;
    char *t22;
    double t23;
    double t24;
    unsigned char t25;
    char *t26;
    double t27;
    unsigned int t28;
    double t29;
    double t30;
    double t31;
    double t32;

LAB0:    t5 = (t4 + 4U);
    t6 = (t2 != 0);
    if (t6 == 1)
        goto LAB3;

LAB2:    t7 = (0 + 8U);
    t8 = (t2 + t7);
    t9 = *((double *)t8);
    t10 = (t9 == 0.00000000000000000);
    if (t10 != 0)
        goto LAB4;

LAB6:
LAB5:    t8 = xsi_get_transient_memory(16U);
    memset(t8, 0, 16U);
    t13 = t8;
    t7 = (0 + 0U);
    t15 = (t2 + t7);
    t9 = *((double *)t15);
    t14 = ieee_p_3972351953_sub_773523744_2984157535(IEEE_P_3972351953, t9);
    t12 = (0 + 8U);
    t16 = (t2 + t12);
    t17 = *((double *)t16);
    t20 = ieee_p_3972351953_sub_160431096_2984157535(IEEE_P_3972351953, t17);
    t23 = (t14 * t20);
    *((double *)t13) = t23;
    t21 = (t8 + 8U);
    t19 = (0 + 0U);
    t22 = (t2 + t19);
    t24 = *((double *)t22);
    t27 = ieee_p_3972351953_sub_1485185913_2984157535(IEEE_P_3972351953, t24);
    t28 = (0 + 8U);
    t26 = (t2 + t28);
    t29 = *((double *)t26);
    t30 = ieee_p_3972351953_sub_1792801001_2984157535(IEEE_P_3972351953, t29);
    t31 = (t27 * t30);
    t32 = (-(t31));
    *((double *)t21) = t32;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t8, 16U);

LAB1:    return t0;
LAB3:    *((char **)t5) = t2;
    goto LAB2;

LAB4:    t12 = (0 + 0U);
    t13 = (t2 + t12);
    t14 = *((double *)t13);
    t15 = ((IEEE_P_3972351953) + 1768U);
    t16 = *((char **)t15);
    t17 = *((double *)t16);
    t18 = (t14 == t17);
    if (t18 == 1)
        goto LAB10;

LAB11:    t19 = (0 + 0U);
    t15 = (t2 + t19);
    t20 = *((double *)t15);
    t21 = ((IEEE_P_3972351953) + 1768U);
    t22 = *((char **)t21);
    t23 = *((double *)t22);
    t24 = (-(t23));
    t25 = (t20 == t24);
    t11 = t25;

LAB12:    if (t11 != 0)
        goto LAB7;

LAB9:
LAB8:    goto LAB5;

LAB7:    t21 = (t1 + 1408U);
    t26 = *((char **)t21);
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t26, 16U);
    goto LAB1;

LAB10:    t11 = (unsigned char)1;
    goto LAB12;

LAB13:    goto LAB8;

LAB14:;
}

char *ieee_p_4165608084_sub_3306615571_2178808227(char *t1, char *t2)
{
    char t3[368];
    char t4[16];
    char t8[16];
    char t14[16];
    char t20[16];
    char *t0;
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
    char *t21;
    char *t22;
    char *t23;
    unsigned char t24;
    unsigned int t25;
    char *t26;
    double t27;
    char *t28;
    char *t29;
    double t30;
    double t31;
    unsigned char t32;
    unsigned int t34;
    unsigned char t35;
    double t36;
    double t37;
    unsigned int t38;
    double t39;
    double t40;
    unsigned int t41;
    double t42;
    double t43;
    double t44;
    double t45;

LAB0:    t5 = (t3 + 4U);
    t6 = (t1 + 2992);
    t7 = (t5 + 88U);
    *((char **)t7) = t6;
    t9 = (t5 + 56U);
    *((char **)t9) = t8;
    xsi_type_set_default_value(t6, t8, 0);
    t10 = (t5 + 80U);
    *((unsigned int *)t10) = 16U;
    t11 = (t3 + 124U);
    t12 = (t1 + 2992);
    t13 = (t11 + 88U);
    *((char **)t13) = t12;
    t15 = (t11 + 56U);
    *((char **)t15) = t14;
    xsi_type_set_default_value(t12, t14, 0);
    t16 = (t11 + 80U);
    *((unsigned int *)t16) = 16U;
    t17 = (t3 + 244U);
    t18 = (t1 + 3104);
    t19 = (t17 + 88U);
    *((char **)t19) = t18;
    t21 = (t17 + 56U);
    *((char **)t21) = t20;
    xsi_type_set_default_value(t18, t20, 0);
    t22 = (t17 + 80U);
    *((unsigned int *)t22) = 16U;
    t23 = (t4 + 4U);
    t24 = (t2 != 0);
    if (t24 == 1)
        goto LAB3;

LAB2:    t25 = (0 + 8U);
    t26 = (t2 + t25);
    t27 = *((double *)t26);
    t28 = ((IEEE_P_3972351953) + 1408U);
    t29 = *((char **)t28);
    t30 = *((double *)t29);
    t31 = (-(t30));
    t32 = (t27 == t31);
    if (t32 != 0)
        goto LAB4;

LAB6:
LAB5:    t25 = (0 + 0U);
    t6 = (t2 + t25);
    t27 = *((double *)t6);
    t7 = ((IEEE_P_3972351953) + 1768U);
    t9 = *((char **)t7);
    t30 = *((double *)t9);
    t32 = (t27 == t30);
    if (t32 == 1)
        goto LAB13;

LAB14:    t24 = (unsigned char)0;

LAB15:    if (t24 != 0)
        goto LAB10;

LAB12:
LAB11:    t25 = (0 + 0U);
    t6 = (t2 + t25);
    t27 = *((double *)t6);
    t7 = ((IEEE_P_3972351953) + 1768U);
    t9 = *((char **)t7);
    t30 = *((double *)t9);
    t32 = (t27 == t30);
    if (t32 == 1)
        goto LAB20;

LAB21:    t24 = (unsigned char)0;

LAB22:    if (t24 != 0)
        goto LAB17;

LAB19:
LAB18:    t6 = ieee_p_4165608084_sub_693027240_2178808227(t1, t2);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    t7 = (t9 + 0);
    memcpy(t7, t6, 16U);
    t6 = xsi_get_transient_memory(16U);
    memset(t6, 0, 16U);
    t7 = t6;
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    t25 = (0 + 0U);
    t9 = (t10 + t25);
    t27 = *((double *)t9);
    t30 = ieee_p_3972351953_sub_773523744_2984157535(IEEE_P_3972351953, t27);
    t12 = (t5 + 56U);
    t13 = *((char **)t12);
    t34 = (0 + 8U);
    t12 = (t13 + t34);
    t31 = *((double *)t12);
    t36 = ieee_p_3972351953_sub_160431096_2984157535(IEEE_P_3972351953, t31);
    t37 = (t30 * t36);
    *((double *)t7) = t37;
    t15 = (t6 + 8U);
    t16 = (t5 + 56U);
    t18 = *((char **)t16);
    t38 = (0 + 0U);
    t16 = (t18 + t38);
    t39 = *((double *)t16);
    t40 = ieee_p_3972351953_sub_1485185913_2984157535(IEEE_P_3972351953, t39);
    t19 = (t5 + 56U);
    t21 = *((char **)t19);
    t41 = (0 + 8U);
    t19 = (t21 + t41);
    t42 = *((double *)t19);
    t43 = ieee_p_3972351953_sub_1792801001_2984157535(IEEE_P_3972351953, t42);
    t44 = (t40 * t43);
    t45 = (-(t44));
    *((double *)t15) = t45;
    t22 = (t11 + 56U);
    t26 = *((char **)t22);
    t22 = (t26 + 0);
    memcpy(t22, t6, 16U);
    t6 = (t11 + 56U);
    t7 = *((char **)t6);
    t6 = ieee_p_4165608084_sub_4232924143_2178808227(t1, t7);
    t9 = (t17 + 56U);
    t10 = *((char **)t9);
    t9 = (t10 + 0);
    memcpy(t9, t6, 16U);
    t6 = (t17 + 56U);
    t7 = *((char **)t6);
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t7, 16U);

LAB1:    return t0;
LAB3:    *((char **)t23) = t2;
    goto LAB2;

LAB4:    if ((unsigned char)0 == 0)
        goto LAB7;

LAB8:    t6 = xsi_get_transient_memory(16U);
    memset(t6, 0, 16U);
    t7 = t6;
    *((double *)t7) = 0.00000000000000000;
    t9 = (t6 + 8U);
    *((double *)t9) = 0.00000000000000000;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t6, 16U);
    goto LAB1;

LAB7:    t28 = (t1 + 5711);
    xsi_report(t28, 26U, (unsigned char)2);
    goto LAB8;

LAB9:    goto LAB5;

LAB10:    t10 = xsi_get_transient_memory(16U);
    memset(t10, 0, 16U);
    t12 = t10;
    *((double *)t12) = 0.00000000000000000;
    t13 = (t10 + 8U);
    *((double *)t13) = 0.00000000000000000;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t10, 16U);
    goto LAB1;

LAB13:    t34 = (0 + 8U);
    t7 = (t2 + t34);
    t31 = *((double *)t7);
    t35 = (t31 == 0.00000000000000000);
    t24 = t35;
    goto LAB15;

LAB16:    goto LAB11;

LAB17:    t10 = xsi_get_transient_memory(16U);
    memset(t10, 0, 16U);
    t13 = t10;
    *((double *)t13) = 0.00000000000000000;
    t15 = (t10 + 8U);
    *((double *)t15) = 0.00000000000000000;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t10, 16U);
    goto LAB1;

LAB20:    t34 = (0 + 8U);
    t7 = (t2 + t34);
    t31 = *((double *)t7);
    t10 = ((IEEE_P_3972351953) + 1408U);
    t12 = *((char **)t10);
    t36 = *((double *)t12);
    t35 = (t31 == t36);
    t24 = t35;
    goto LAB22;

LAB23:    goto LAB18;

LAB24:;
}

char *ieee_p_4165608084_sub_1656223361_2178808227(char *t1, char *t2)
{
    char t4[16];
    char *t0;
    char *t5;
    unsigned char t6;
    unsigned int t7;
    char *t8;
    double t9;
    unsigned char t10;
    unsigned char t11;
    unsigned int t12;
    char *t13;
    double t14;
    unsigned char t15;
    unsigned int t16;
    char *t17;
    double t18;
    char *t19;
    char *t20;
    double t21;
    unsigned char t22;
    char *t23;
    double t24;
    double t25;
    double t26;
    unsigned int t27;
    char *t28;
    double t29;
    double t30;
    double t31;

LAB0:    t5 = (t4 + 4U);
    t6 = (t2 != 0);
    if (t6 == 1)
        goto LAB3;

LAB2:    t7 = (0 + 0U);
    t8 = (t2 + t7);
    t9 = *((double *)t8);
    t10 = (t9 == 0.00000000000000000);
    if (t10 != 0)
        goto LAB4;

LAB6:
LAB5:    t8 = xsi_get_transient_memory(16U);
    memset(t8, 0, 16U);
    t13 = t8;
    t7 = (0 + 0U);
    t17 = (t2 + t7);
    t9 = *((double *)t17);
    t14 = ieee_p_3972351953_sub_1792801001_2984157535(IEEE_P_3972351953, t9);
    t12 = (0 + 8U);
    t19 = (t2 + t12);
    t18 = *((double *)t19);
    t21 = ieee_p_3972351953_sub_773523744_2984157535(IEEE_P_3972351953, t18);
    t24 = (t14 * t21);
    *((double *)t13) = t24;
    t20 = (t8 + 8U);
    t16 = (0 + 0U);
    t23 = (t2 + t16);
    t25 = *((double *)t23);
    t26 = ieee_p_3972351953_sub_160431096_2984157535(IEEE_P_3972351953, t25);
    t27 = (0 + 8U);
    t28 = (t2 + t27);
    t29 = *((double *)t28);
    t30 = ieee_p_3972351953_sub_1485185913_2984157535(IEEE_P_3972351953, t29);
    t31 = (t26 * t30);
    *((double *)t20) = t31;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t8, 16U);

LAB1:    return t0;
LAB3:    *((char **)t5) = t2;
    goto LAB2;

LAB4:    t12 = (0 + 8U);
    t13 = (t2 + t12);
    t14 = *((double *)t13);
    t15 = (t14 == 0.00000000000000000);
    if (t15 == 1)
        goto LAB10;

LAB11:    t16 = (0 + 8U);
    t17 = (t2 + t16);
    t18 = *((double *)t17);
    t19 = ((IEEE_P_3972351953) + 1408U);
    t20 = *((char **)t19);
    t21 = *((double *)t20);
    t22 = (t18 == t21);
    t11 = t22;

LAB12:    if (t11 != 0)
        goto LAB7;

LAB9:
LAB8:    t7 = (0 + 8U);
    t8 = (t2 + t7);
    t9 = *((double *)t8);
    t13 = ((IEEE_P_3972351953) + 1768U);
    t17 = *((char **)t13);
    t14 = *((double *)t17);
    t6 = (t9 == t14);
    if (t6 != 0)
        goto LAB14;

LAB16:
LAB15:    t7 = (0 + 8U);
    t8 = (t2 + t7);
    t9 = *((double *)t8);
    t13 = ((IEEE_P_3972351953) + 1768U);
    t17 = *((char **)t13);
    t14 = *((double *)t17);
    t18 = (-(t14));
    t6 = (t9 == t18);
    if (t6 != 0)
        goto LAB18;

LAB20:
LAB19:    goto LAB5;

LAB7:    t19 = (t1 + 1408U);
    t23 = *((char **)t19);
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t23, 16U);
    goto LAB1;

LAB10:    t11 = (unsigned char)1;
    goto LAB12;

LAB13:    goto LAB8;

LAB14:    t13 = (t1 + 1288U);
    t19 = *((char **)t13);
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t19, 16U);
    goto LAB1;

LAB17:    goto LAB15;

LAB18:    t13 = (t1 + 1288U);
    t19 = *((char **)t13);
    t13 = ieee_p_4165608084_sub_1366103904_2178808227(t1, t19);
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t13, 16U);
    goto LAB1;

LAB21:    goto LAB19;

LAB22:;
}

char *ieee_p_4165608084_sub_3517190112_2178808227(char *t1, char *t2)
{
    char t3[368];
    char t4[16];
    char t8[16];
    char t14[16];
    char t20[16];
    char *t0;
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
    char *t21;
    char *t22;
    char *t23;
    unsigned char t24;
    unsigned int t25;
    char *t26;
    double t27;
    char *t28;
    char *t29;
    double t30;
    double t31;
    unsigned char t32;
    unsigned int t34;
    unsigned char t35;
    double t36;
    double t37;
    double t38;
    double t39;
    unsigned int t40;
    unsigned int t41;
    double t42;
    double t43;
    double t44;

LAB0:    t5 = (t3 + 4U);
    t6 = (t1 + 2992);
    t7 = (t5 + 88U);
    *((char **)t7) = t6;
    t9 = (t5 + 56U);
    *((char **)t9) = t8;
    xsi_type_set_default_value(t6, t8, 0);
    t10 = (t5 + 80U);
    *((unsigned int *)t10) = 16U;
    t11 = (t3 + 124U);
    t12 = (t1 + 2992);
    t13 = (t11 + 88U);
    *((char **)t13) = t12;
    t15 = (t11 + 56U);
    *((char **)t15) = t14;
    xsi_type_set_default_value(t12, t14, 0);
    t16 = (t11 + 80U);
    *((unsigned int *)t16) = 16U;
    t17 = (t3 + 244U);
    t18 = (t1 + 3104);
    t19 = (t17 + 88U);
    *((char **)t19) = t18;
    t21 = (t17 + 56U);
    *((char **)t21) = t20;
    xsi_type_set_default_value(t18, t20, 0);
    t22 = (t17 + 80U);
    *((unsigned int *)t22) = 16U;
    t23 = (t4 + 4U);
    t24 = (t2 != 0);
    if (t24 == 1)
        goto LAB3;

LAB2:    t25 = (0 + 8U);
    t26 = (t2 + t25);
    t27 = *((double *)t26);
    t28 = ((IEEE_P_3972351953) + 1408U);
    t29 = *((char **)t28);
    t30 = *((double *)t29);
    t31 = (-(t30));
    t32 = (t27 == t31);
    if (t32 != 0)
        goto LAB4;

LAB6:
LAB5:    t25 = (0 + 0U);
    t6 = (t2 + t25);
    t27 = *((double *)t6);
    t32 = (t27 == 0.00000000000000000);
    if (t32 == 1)
        goto LAB13;

LAB14:    t24 = (unsigned char)0;

LAB15:    if (t24 != 0)
        goto LAB10;

LAB12:
LAB11:    t25 = (0 + 0U);
    t6 = (t2 + t25);
    t27 = *((double *)t6);
    t7 = ((IEEE_P_3972351953) + 1408U);
    t9 = *((char **)t7);
    t30 = *((double *)t9);
    t32 = (t27 == t30);
    if (t32 == 1)
        goto LAB20;

LAB21:    t24 = (unsigned char)0;

LAB22:    if (t24 != 0)
        goto LAB17;

LAB19:
LAB18:    t25 = (0 + 0U);
    t6 = (t2 + t25);
    t27 = *((double *)t6);
    t7 = ((IEEE_P_3972351953) + 1768U);
    t9 = *((char **)t7);
    t30 = *((double *)t9);
    t32 = (t27 == t30);
    if (t32 == 1)
        goto LAB27;

LAB28:    t24 = (unsigned char)0;

LAB29:    if (t24 != 0)
        goto LAB24;

LAB26:
LAB25:    t25 = (0 + 0U);
    t6 = (t2 + t25);
    t27 = *((double *)t6);
    t7 = ((IEEE_P_3972351953) + 1768U);
    t9 = *((char **)t7);
    t30 = *((double *)t9);
    t32 = (t27 == t30);
    if (t32 == 1)
        goto LAB34;

LAB35:    t24 = (unsigned char)0;

LAB36:    if (t24 != 0)
        goto LAB31;

LAB33:
LAB32:    t6 = ieee_p_4165608084_sub_693027240_2178808227(t1, t2);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    t7 = (t9 + 0);
    memcpy(t7, t6, 16U);
    t6 = xsi_get_transient_memory(16U);
    memset(t6, 0, 16U);
    t7 = t6;
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    t25 = (0 + 0U);
    t9 = (t10 + t25);
    t27 = *((double *)t9);
    t30 = ieee_p_3972351953_sub_1792801001_2984157535(IEEE_P_3972351953, t27);
    t12 = (t5 + 56U);
    t13 = *((char **)t12);
    t34 = (0 + 8U);
    t12 = (t13 + t34);
    t31 = *((double *)t12);
    t36 = ieee_p_3972351953_sub_773523744_2984157535(IEEE_P_3972351953, t31);
    t37 = (t30 * t36);
    *((double *)t7) = t37;
    t15 = (t6 + 8U);
    t16 = (t5 + 56U);
    t18 = *((char **)t16);
    t40 = (0 + 0U);
    t16 = (t18 + t40);
    t38 = *((double *)t16);
    t39 = ieee_p_3972351953_sub_160431096_2984157535(IEEE_P_3972351953, t38);
    t19 = (t5 + 56U);
    t21 = *((char **)t19);
    t41 = (0 + 8U);
    t19 = (t21 + t41);
    t42 = *((double *)t19);
    t43 = ieee_p_3972351953_sub_1485185913_2984157535(IEEE_P_3972351953, t42);
    t44 = (t39 * t43);
    *((double *)t15) = t44;
    t22 = (t11 + 56U);
    t26 = *((char **)t22);
    t22 = (t26 + 0);
    memcpy(t22, t6, 16U);
    t6 = (t11 + 56U);
    t7 = *((char **)t6);
    t6 = ieee_p_4165608084_sub_4232924143_2178808227(t1, t7);
    t9 = (t17 + 56U);
    t10 = *((char **)t9);
    t9 = (t10 + 0);
    memcpy(t9, t6, 16U);
    t6 = (t17 + 56U);
    t7 = *((char **)t6);
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t7, 16U);

LAB1:    return t0;
LAB3:    *((char **)t23) = t2;
    goto LAB2;

LAB4:    if ((unsigned char)0 == 0)
        goto LAB7;

LAB8:    t6 = xsi_get_transient_memory(16U);
    memset(t6, 0, 16U);
    t7 = t6;
    *((double *)t7) = 0.00000000000000000;
    t9 = (t6 + 8U);
    *((double *)t9) = 0.00000000000000000;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t6, 16U);
    goto LAB1;

LAB7:    t28 = (t1 + 5737);
    xsi_report(t28, 27U, (unsigned char)2);
    goto LAB8;

LAB9:    goto LAB5;

LAB10:    t9 = xsi_get_transient_memory(16U);
    memset(t9, 0, 16U);
    t10 = t9;
    *((double *)t10) = 0.00000000000000000;
    t12 = (t9 + 8U);
    *((double *)t12) = 0.00000000000000000;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t9, 16U);
    goto LAB1;

LAB13:    t34 = (0 + 8U);
    t7 = (t2 + t34);
    t30 = *((double *)t7);
    t35 = (t30 == 0.00000000000000000);
    t24 = t35;
    goto LAB15;

LAB16:    goto LAB11;

LAB17:    t10 = xsi_get_transient_memory(16U);
    memset(t10, 0, 16U);
    t13 = t10;
    *((double *)t13) = 0.00000000000000000;
    t15 = (t10 + 8U);
    *((double *)t15) = 0.00000000000000000;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t10, 16U);
    goto LAB1;

LAB20:    t34 = (0 + 8U);
    t7 = (t2 + t34);
    t31 = *((double *)t7);
    t10 = ((IEEE_P_3972351953) + 1768U);
    t12 = *((char **)t10);
    t36 = *((double *)t12);
    t35 = (t31 == t36);
    t24 = t35;
    goto LAB22;

LAB23:    goto LAB18;

LAB24:    t10 = xsi_get_transient_memory(16U);
    memset(t10, 0, 16U);
    t13 = t10;
    *((double *)t13) = 1.0000000000000000;
    t15 = (t10 + 8U);
    t16 = ((IEEE_P_3972351953) + 1768U);
    t18 = *((char **)t16);
    t37 = *((double *)t18);
    *((double *)t15) = t37;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t10, 16U);
    goto LAB1;

LAB27:    t34 = (0 + 8U);
    t7 = (t2 + t34);
    t31 = *((double *)t7);
    t10 = ((IEEE_P_3972351953) + 1768U);
    t12 = *((char **)t10);
    t36 = *((double *)t12);
    t35 = (t31 == t36);
    t24 = t35;
    goto LAB29;

LAB30:    goto LAB25;

LAB31:    t10 = xsi_get_transient_memory(16U);
    memset(t10, 0, 16U);
    t13 = t10;
    *((double *)t13) = 1.0000000000000000;
    t15 = (t10 + 8U);
    t16 = ((IEEE_P_3972351953) + 1768U);
    t18 = *((char **)t16);
    t38 = *((double *)t18);
    t39 = (-(t38));
    *((double *)t15) = t39;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t10, 16U);
    goto LAB1;

LAB34:    t34 = (0 + 8U);
    t7 = (t2 + t34);
    t31 = *((double *)t7);
    t10 = ((IEEE_P_3972351953) + 1768U);
    t12 = *((char **)t10);
    t36 = *((double *)t12);
    t37 = (-(t36));
    t35 = (t31 == t37);
    t24 = t35;
    goto LAB36;

LAB37:    goto LAB32;

LAB38:;
}

char *ieee_p_4165608084_sub_1037352284_2178808227(char *t1, char *t2)
{
    char t4[16];
    char *t0;
    char *t5;
    unsigned char t6;
    unsigned int t7;
    char *t8;
    double t9;
    unsigned char t10;
    unsigned int t11;
    char *t12;
    double t13;
    unsigned char t14;
    char *t15;
    char *t16;
    double t17;
    char *t18;
    double t19;
    double t20;
    char *t21;
    unsigned int t22;
    double t23;
    double t24;
    unsigned int t25;
    char *t26;
    double t27;
    double t28;
    double t29;

LAB0:    t5 = (t4 + 4U);
    t6 = (t2 != 0);
    if (t6 == 1)
        goto LAB3;

LAB2:    t7 = (0 + 0U);
    t8 = (t2 + t7);
    t9 = *((double *)t8);
    t10 = (t9 == 0.00000000000000000);
    if (t10 != 0)
        goto LAB4;

LAB6:
LAB5:    t8 = xsi_get_transient_memory(16U);
    memset(t8, 0, 16U);
    t12 = t8;
    t7 = (0 + 0U);
    t15 = (t2 + t7);
    t9 = *((double *)t15);
    t13 = ieee_p_3972351953_sub_160431096_2984157535(IEEE_P_3972351953, t9);
    t11 = (0 + 8U);
    t16 = (t2 + t11);
    t17 = *((double *)t16);
    t19 = ieee_p_3972351953_sub_773523744_2984157535(IEEE_P_3972351953, t17);
    t20 = (t13 * t19);
    *((double *)t12) = t20;
    t18 = (t8 + 8U);
    t22 = (0 + 0U);
    t21 = (t2 + t22);
    t23 = *((double *)t21);
    t24 = ieee_p_3972351953_sub_1792801001_2984157535(IEEE_P_3972351953, t23);
    t25 = (0 + 8U);
    t26 = (t2 + t25);
    t27 = *((double *)t26);
    t28 = ieee_p_3972351953_sub_1485185913_2984157535(IEEE_P_3972351953, t27);
    t29 = (t24 * t28);
    *((double *)t18) = t29;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t8, 16U);

LAB1:    return t0;
LAB3:    *((char **)t5) = t2;
    goto LAB2;

LAB4:    t11 = (0 + 8U);
    t12 = (t2 + t11);
    t13 = *((double *)t12);
    t14 = (t13 == 0.00000000000000000);
    if (t14 != 0)
        goto LAB7;

LAB9:
LAB8:    t7 = (0 + 8U);
    t8 = (t2 + t7);
    t9 = *((double *)t8);
    t12 = ((IEEE_P_3972351953) + 1408U);
    t15 = *((char **)t12);
    t13 = *((double *)t15);
    t6 = (t9 == t13);
    if (t6 != 0)
        goto LAB11;

LAB13:
LAB12:    t7 = (0 + 8U);
    t8 = (t2 + t7);
    t9 = *((double *)t8);
    t12 = ((IEEE_P_3972351953) + 1768U);
    t15 = *((char **)t12);
    t13 = *((double *)t15);
    t10 = (t9 == t13);
    if (t10 == 1)
        goto LAB18;

LAB19:    t11 = (0 + 8U);
    t12 = (t2 + t11);
    t17 = *((double *)t12);
    t16 = ((IEEE_P_3972351953) + 1768U);
    t18 = *((char **)t16);
    t19 = *((double *)t18);
    t20 = (-(t19));
    t14 = (t17 == t20);
    t6 = t14;

LAB20:    if (t6 != 0)
        goto LAB15;

LAB17:
LAB16:    goto LAB5;

LAB7:    t15 = (t1 + 1168U);
    t16 = *((char **)t15);
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t16, 16U);
    goto LAB1;

LAB10:    goto LAB8;

LAB11:    t12 = (t1 + 1168U);
    t16 = *((char **)t12);
    t12 = ieee_p_4165608084_sub_1366103904_2178808227(t1, t16);
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t12, 16U);
    goto LAB1;

LAB14:    goto LAB12;

LAB15:    t16 = (t1 + 1408U);
    t21 = *((char **)t16);
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t21, 16U);
    goto LAB1;

LAB18:    t6 = (unsigned char)1;
    goto LAB20;

LAB21:    goto LAB16;

LAB22:;
}

char *ieee_p_4165608084_sub_2898319035_2178808227(char *t1, char *t2)
{
    char t3[368];
    char t4[16];
    char t8[16];
    char t14[16];
    char t20[16];
    char *t0;
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
    char *t21;
    char *t22;
    char *t23;
    unsigned char t24;
    unsigned int t25;
    char *t26;
    double t27;
    char *t28;
    char *t29;
    double t30;
    double t31;
    unsigned char t32;
    unsigned int t34;
    unsigned char t35;
    double t36;
    double t37;
    unsigned int t38;
    double t39;
    double t40;
    unsigned int t41;
    double t42;
    double t43;
    double t44;

LAB0:    t5 = (t3 + 4U);
    t6 = (t1 + 2992);
    t7 = (t5 + 88U);
    *((char **)t7) = t6;
    t9 = (t5 + 56U);
    *((char **)t9) = t8;
    xsi_type_set_default_value(t6, t8, 0);
    t10 = (t5 + 80U);
    *((unsigned int *)t10) = 16U;
    t11 = (t3 + 124U);
    t12 = (t1 + 2992);
    t13 = (t11 + 88U);
    *((char **)t13) = t12;
    t15 = (t11 + 56U);
    *((char **)t15) = t14;
    xsi_type_set_default_value(t12, t14, 0);
    t16 = (t11 + 80U);
    *((unsigned int *)t16) = 16U;
    t17 = (t3 + 244U);
    t18 = (t1 + 3104);
    t19 = (t17 + 88U);
    *((char **)t19) = t18;
    t21 = (t17 + 56U);
    *((char **)t21) = t20;
    xsi_type_set_default_value(t18, t20, 0);
    t22 = (t17 + 80U);
    *((unsigned int *)t22) = 16U;
    t23 = (t4 + 4U);
    t24 = (t2 != 0);
    if (t24 == 1)
        goto LAB3;

LAB2:    t25 = (0 + 8U);
    t26 = (t2 + t25);
    t27 = *((double *)t26);
    t28 = ((IEEE_P_3972351953) + 1408U);
    t29 = *((char **)t28);
    t30 = *((double *)t29);
    t31 = (-(t30));
    t32 = (t27 == t31);
    if (t32 != 0)
        goto LAB4;

LAB6:
LAB5:    t25 = (0 + 0U);
    t6 = (t2 + t25);
    t27 = *((double *)t6);
    t32 = (t27 == 0.00000000000000000);
    if (t32 == 1)
        goto LAB13;

LAB14:    t24 = (unsigned char)0;

LAB15:    if (t24 != 0)
        goto LAB10;

LAB12:
LAB11:    t25 = (0 + 0U);
    t6 = (t2 + t25);
    t27 = *((double *)t6);
    t7 = ((IEEE_P_3972351953) + 1408U);
    t9 = *((char **)t7);
    t30 = *((double *)t9);
    t32 = (t27 == t30);
    if (t32 == 1)
        goto LAB20;

LAB21:    t24 = (unsigned char)0;

LAB22:    if (t24 != 0)
        goto LAB17;

LAB19:
LAB18:    t25 = (0 + 0U);
    t6 = (t2 + t25);
    t27 = *((double *)t6);
    t7 = ((IEEE_P_3972351953) + 1768U);
    t9 = *((char **)t7);
    t30 = *((double *)t9);
    t32 = (t27 == t30);
    if (t32 == 1)
        goto LAB27;

LAB28:    t24 = (unsigned char)0;

LAB29:    if (t24 != 0)
        goto LAB24;

LAB26:
LAB25:    t25 = (0 + 0U);
    t6 = (t2 + t25);
    t27 = *((double *)t6);
    t7 = ((IEEE_P_3972351953) + 1768U);
    t9 = *((char **)t7);
    t30 = *((double *)t9);
    t32 = (t27 == t30);
    if (t32 == 1)
        goto LAB34;

LAB35:    t24 = (unsigned char)0;

LAB36:    if (t24 != 0)
        goto LAB31;

LAB33:
LAB32:    t6 = ieee_p_4165608084_sub_693027240_2178808227(t1, t2);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    t7 = (t9 + 0);
    memcpy(t7, t6, 16U);
    t6 = xsi_get_transient_memory(16U);
    memset(t6, 0, 16U);
    t7 = t6;
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    t25 = (0 + 0U);
    t9 = (t10 + t25);
    t27 = *((double *)t9);
    t30 = ieee_p_3972351953_sub_160431096_2984157535(IEEE_P_3972351953, t27);
    t12 = (t5 + 56U);
    t13 = *((char **)t12);
    t34 = (0 + 8U);
    t12 = (t13 + t34);
    t31 = *((double *)t12);
    t36 = ieee_p_3972351953_sub_773523744_2984157535(IEEE_P_3972351953, t31);
    t37 = (t30 * t36);
    *((double *)t7) = t37;
    t15 = (t6 + 8U);
    t16 = (t5 + 56U);
    t18 = *((char **)t16);
    t38 = (0 + 0U);
    t16 = (t18 + t38);
    t39 = *((double *)t16);
    t40 = ieee_p_3972351953_sub_1792801001_2984157535(IEEE_P_3972351953, t39);
    t19 = (t5 + 56U);
    t21 = *((char **)t19);
    t41 = (0 + 8U);
    t19 = (t21 + t41);
    t42 = *((double *)t19);
    t43 = ieee_p_3972351953_sub_1485185913_2984157535(IEEE_P_3972351953, t42);
    t44 = (t40 * t43);
    *((double *)t15) = t44;
    t22 = (t11 + 56U);
    t26 = *((char **)t22);
    t22 = (t26 + 0);
    memcpy(t22, t6, 16U);
    t6 = (t11 + 56U);
    t7 = *((char **)t6);
    t6 = ieee_p_4165608084_sub_4232924143_2178808227(t1, t7);
    t9 = (t17 + 56U);
    t10 = *((char **)t9);
    t9 = (t10 + 0);
    memcpy(t9, t6, 16U);
    t6 = (t17 + 56U);
    t7 = *((char **)t6);
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t7, 16U);

LAB1:    return t0;
LAB3:    *((char **)t23) = t2;
    goto LAB2;

LAB4:    if ((unsigned char)0 == 0)
        goto LAB7;

LAB8:    t6 = xsi_get_transient_memory(16U);
    memset(t6, 0, 16U);
    t7 = t6;
    *((double *)t7) = 0.00000000000000000;
    t9 = (t6 + 8U);
    *((double *)t9) = 0.00000000000000000;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t6, 16U);
    goto LAB1;

LAB7:    t28 = (t1 + 5764);
    xsi_report(t28, 27U, (unsigned char)2);
    goto LAB8;

LAB9:    goto LAB5;

LAB10:    t9 = xsi_get_transient_memory(16U);
    memset(t9, 0, 16U);
    t10 = t9;
    *((double *)t10) = 1.0000000000000000;
    t12 = (t9 + 8U);
    *((double *)t12) = 0.00000000000000000;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t9, 16U);
    goto LAB1;

LAB13:    t34 = (0 + 8U);
    t7 = (t2 + t34);
    t30 = *((double *)t7);
    t35 = (t30 == 0.00000000000000000);
    t24 = t35;
    goto LAB15;

LAB16:    goto LAB11;

LAB17:    t10 = xsi_get_transient_memory(16U);
    memset(t10, 0, 16U);
    t13 = t10;
    *((double *)t13) = 1.0000000000000000;
    t15 = (t10 + 8U);
    t16 = ((IEEE_P_3972351953) + 1408U);
    t18 = *((char **)t16);
    t37 = *((double *)t18);
    *((double *)t15) = t37;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t10, 16U);
    goto LAB1;

LAB20:    t34 = (0 + 8U);
    t7 = (t2 + t34);
    t31 = *((double *)t7);
    t10 = ((IEEE_P_3972351953) + 1768U);
    t12 = *((char **)t10);
    t36 = *((double *)t12);
    t35 = (t31 == t36);
    t24 = t35;
    goto LAB22;

LAB23:    goto LAB18;

LAB24:    t10 = xsi_get_transient_memory(16U);
    memset(t10, 0, 16U);
    t13 = t10;
    *((double *)t13) = 0.00000000000000000;
    t15 = (t10 + 8U);
    *((double *)t15) = 0.00000000000000000;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t10, 16U);
    goto LAB1;

LAB27:    t34 = (0 + 8U);
    t7 = (t2 + t34);
    t31 = *((double *)t7);
    t10 = ((IEEE_P_3972351953) + 1768U);
    t12 = *((char **)t10);
    t36 = *((double *)t12);
    t35 = (t31 == t36);
    t24 = t35;
    goto LAB29;

LAB30:    goto LAB25;

LAB31:    t10 = xsi_get_transient_memory(16U);
    memset(t10, 0, 16U);
    t13 = t10;
    *((double *)t13) = 0.00000000000000000;
    t15 = (t10 + 8U);
    *((double *)t15) = 0.00000000000000000;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t10, 16U);
    goto LAB1;

LAB34:    t34 = (0 + 8U);
    t7 = (t2 + t34);
    t31 = *((double *)t7);
    t10 = ((IEEE_P_3972351953) + 1768U);
    t12 = *((char **)t10);
    t36 = *((double *)t12);
    t37 = (-(t36));
    t35 = (t31 == t37);
    t24 = t35;
    goto LAB36;

LAB37:    goto LAB32;

LAB38:;
}

char *ieee_p_4165608084_sub_1468919718_2178808227(char *t1, char *t2, char *t3)
{
    char t5[24];
    char *t0;
    char *t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    char *t10;
    char *t11;
    unsigned int t12;
    char *t13;
    double t14;
    unsigned int t15;
    char *t16;
    double t17;
    double t18;
    char *t19;
    unsigned int t20;
    char *t21;
    double t22;
    unsigned int t23;
    char *t24;
    double t25;
    double t26;

LAB0:    t6 = (t5 + 4U);
    t7 = (t2 != 0);
    if (t7 == 1)
        goto LAB3;

LAB2:    t8 = (t5 + 12U);
    t9 = (t3 != 0);
    if (t9 == 1)
        goto LAB5;

LAB4:    t10 = xsi_get_transient_memory(16U);
    memset(t10, 0, 16U);
    t11 = t10;
    t12 = (0 + 0U);
    t13 = (t2 + t12);
    t14 = *((double *)t13);
    t15 = (0 + 0U);
    t16 = (t3 + t15);
    t17 = *((double *)t16);
    t18 = (t14 + t17);
    *((double *)t11) = t18;
    t19 = (t10 + 8U);
    t20 = (0 + 8U);
    t21 = (t2 + t20);
    t22 = *((double *)t21);
    t23 = (0 + 8U);
    t24 = (t3 + t23);
    t25 = *((double *)t24);
    t26 = (t22 + t25);
    *((double *)t19) = t26;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t10, 16U);

LAB1:    return t0;
LAB3:    *((char **)t6) = t2;
    goto LAB2;

LAB5:    *((char **)t8) = t3;
    goto LAB4;

LAB6:;
}

char *ieee_p_4165608084_sub_1398408481_2178808227(char *t1, double t2, char *t3)
{
    char t5[24];
    char *t0;
    char *t6;
    char *t7;
    unsigned char t8;
    char *t9;
    char *t10;
    unsigned int t11;
    char *t12;
    double t13;
    double t14;
    char *t15;
    unsigned int t16;
    char *t17;
    double t18;

LAB0:    t6 = (t5 + 4U);
    *((double *)t6) = t2;
    t7 = (t5 + 12U);
    t8 = (t3 != 0);
    if (t8 == 1)
        goto LAB3;

LAB2:    t9 = xsi_get_transient_memory(16U);
    memset(t9, 0, 16U);
    t10 = t9;
    t11 = (0 + 0U);
    t12 = (t3 + t11);
    t13 = *((double *)t12);
    t14 = (t2 + t13);
    *((double *)t10) = t14;
    t15 = (t9 + 8U);
    t16 = (0 + 8U);
    t17 = (t3 + t16);
    t18 = *((double *)t17);
    *((double *)t15) = t18;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t9, 16U);

LAB1:    return t0;
LAB3:    *((char **)t7) = t3;
    goto LAB2;

LAB4:;
}

char *ieee_p_4165608084_sub_1637605577_2178808227(char *t1, char *t2, double t3)
{
    char t5[24];
    char *t0;
    char *t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    char *t12;
    double t13;
    double t14;
    char *t15;
    unsigned int t16;
    char *t17;
    double t18;

LAB0:    t6 = (t5 + 4U);
    t7 = (t2 != 0);
    if (t7 == 1)
        goto LAB3;

LAB2:    t8 = (t5 + 12U);
    *((double *)t8) = t3;
    t9 = xsi_get_transient_memory(16U);
    memset(t9, 0, 16U);
    t10 = t9;
    t11 = (0 + 0U);
    t12 = (t2 + t11);
    t13 = *((double *)t12);
    t14 = (t13 + t3);
    *((double *)t10) = t14;
    t15 = (t9 + 8U);
    t16 = (0 + 8U);
    t17 = (t2 + t16);
    t18 = *((double *)t17);
    *((double *)t15) = t18;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t9, 16U);

LAB1:    return t0;
LAB3:    *((char **)t6) = t2;
    goto LAB2;

LAB4:;
}

char *ieee_p_4165608084_sub_3088663861_2178808227(char *t1, char *t2, char *t3)
{
    char t4[368];
    char t5[24];
    char t9[16];
    char t15[16];
    char t21[16];
    char *t0;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t24;
    unsigned char t25;
    char *t26;
    unsigned char t27;
    unsigned int t28;
    char *t29;
    double t30;
    char *t31;
    char *t32;
    double t33;
    double t34;
    unsigned char t35;
    unsigned int t37;
    unsigned int t38;
    double t39;
    unsigned int t40;
    double t41;
    double t42;

LAB0:    t6 = (t4 + 4U);
    t7 = (t1 + 2992);
    t8 = (t6 + 88U);
    *((char **)t8) = t7;
    t10 = (t6 + 56U);
    *((char **)t10) = t9;
    xsi_type_set_default_value(t7, t9, 0);
    t11 = (t6 + 80U);
    *((unsigned int *)t11) = 16U;
    t12 = (t4 + 124U);
    t13 = (t1 + 2992);
    t14 = (t12 + 88U);
    *((char **)t14) = t13;
    t16 = (t12 + 56U);
    *((char **)t16) = t15;
    xsi_type_set_default_value(t13, t15, 0);
    t17 = (t12 + 80U);
    *((unsigned int *)t17) = 16U;
    t18 = (t4 + 244U);
    t19 = (t1 + 3104);
    t20 = (t18 + 88U);
    *((char **)t20) = t19;
    t22 = (t18 + 56U);
    *((char **)t22) = t21;
    xsi_type_set_default_value(t19, t21, 0);
    t23 = (t18 + 80U);
    *((unsigned int *)t23) = 16U;
    t24 = (t5 + 4U);
    t25 = (t2 != 0);
    if (t25 == 1)
        goto LAB3;

LAB2:    t26 = (t5 + 12U);
    t27 = (t3 != 0);
    if (t27 == 1)
        goto LAB5;

LAB4:    t28 = (0 + 8U);
    t29 = (t2 + t28);
    t30 = *((double *)t29);
    t31 = ((IEEE_P_3972351953) + 1408U);
    t32 = *((char **)t31);
    t33 = *((double *)t32);
    t34 = (-(t33));
    t35 = (t30 == t34);
    if (t35 != 0)
        goto LAB6;

LAB8:
LAB7:    t28 = (0 + 8U);
    t7 = (t3 + t28);
    t30 = *((double *)t7);
    t8 = ((IEEE_P_3972351953) + 1408U);
    t10 = *((char **)t8);
    t33 = *((double *)t10);
    t34 = (-(t33));
    t25 = (t30 == t34);
    if (t25 != 0)
        goto LAB12;

LAB14:
LAB13:    t7 = ieee_p_4165608084_sub_693027240_2178808227(t1, t2);
    t8 = (t6 + 56U);
    t10 = *((char **)t8);
    t8 = (t10 + 0);
    memcpy(t8, t7, 16U);
    t7 = ieee_p_4165608084_sub_693027240_2178808227(t1, t3);
    t8 = (t12 + 56U);
    t10 = *((char **)t8);
    t8 = (t10 + 0);
    memcpy(t8, t7, 16U);
    t7 = xsi_get_transient_memory(16U);
    memset(t7, 0, 16U);
    t8 = t7;
    t10 = (t6 + 56U);
    t11 = *((char **)t10);
    t28 = (0 + 0U);
    t10 = (t11 + t28);
    t30 = *((double *)t10);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t37 = (0 + 0U);
    t13 = (t14 + t37);
    t33 = *((double *)t13);
    t34 = (t30 + t33);
    *((double *)t8) = t34;
    t16 = (t7 + 8U);
    t17 = (t6 + 56U);
    t19 = *((char **)t17);
    t38 = (0 + 8U);
    t17 = (t19 + t38);
    t39 = *((double *)t17);
    t20 = (t12 + 56U);
    t22 = *((char **)t20);
    t40 = (0 + 8U);
    t20 = (t22 + t40);
    t41 = *((double *)t20);
    t42 = (t39 + t41);
    *((double *)t16) = t42;
    t23 = ieee_p_4165608084_sub_4232924143_2178808227(t1, t7);
    t29 = (t18 + 56U);
    t31 = *((char **)t29);
    t29 = (t31 + 0);
    memcpy(t29, t23, 16U);
    t7 = (t18 + 56U);
    t8 = *((char **)t7);
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t8, 16U);

LAB1:    return t0;
LAB3:    *((char **)t24) = t2;
    goto LAB2;

LAB5:    *((char **)t26) = t3;
    goto LAB4;

LAB6:    if ((unsigned char)0 == 0)
        goto LAB9;

LAB10:    t7 = xsi_get_transient_memory(16U);
    memset(t7, 0, 16U);
    t8 = t7;
    *((double *)t8) = 0.00000000000000000;
    t10 = (t7 + 8U);
    *((double *)t10) = 0.00000000000000000;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t7, 16U);
    goto LAB1;

LAB9:    t31 = (t1 + 5791);
    xsi_report(t31, 26U, (unsigned char)2);
    goto LAB10;

LAB11:    goto LAB7;

LAB12:    if ((unsigned char)0 == 0)
        goto LAB15;

LAB16:    t7 = xsi_get_transient_memory(16U);
    memset(t7, 0, 16U);
    t8 = t7;
    *((double *)t8) = 0.00000000000000000;
    t10 = (t7 + 8U);
    *((double *)t10) = 0.00000000000000000;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t7, 16U);
    goto LAB1;

LAB15:    t8 = (t1 + 5817);
    xsi_report(t8, 26U, (unsigned char)2);
    goto LAB16;

LAB17:    goto LAB13;

LAB18:;
}

char *ieee_p_4165608084_sub_2819701343_2178808227(char *t1, double t2, char *t3)
{
    char t4[248];
    char t5[24];
    char t9[16];
    char t15[16];
    char *t0;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned char t20;
    unsigned int t21;
    char *t22;
    double t23;
    char *t24;
    char *t25;
    double t26;
    double t27;
    unsigned char t28;
    unsigned int t30;

LAB0:    t6 = (t4 + 4U);
    t7 = (t1 + 2992);
    t8 = (t6 + 88U);
    *((char **)t8) = t7;
    t10 = (t6 + 56U);
    *((char **)t10) = t9;
    xsi_type_set_default_value(t7, t9, 0);
    t11 = (t6 + 80U);
    *((unsigned int *)t11) = 16U;
    t12 = (t4 + 124U);
    t13 = (t1 + 3104);
    t14 = (t12 + 88U);
    *((char **)t14) = t13;
    t16 = (t12 + 56U);
    *((char **)t16) = t15;
    xsi_type_set_default_value(t13, t15, 0);
    t17 = (t12 + 80U);
    *((unsigned int *)t17) = 16U;
    t18 = (t5 + 4U);
    *((double *)t18) = t2;
    t19 = (t5 + 12U);
    t20 = (t3 != 0);
    if (t20 == 1)
        goto LAB3;

LAB2:    t21 = (0 + 8U);
    t22 = (t3 + t21);
    t23 = *((double *)t22);
    t24 = ((IEEE_P_3972351953) + 1408U);
    t25 = *((char **)t24);
    t26 = *((double *)t25);
    t27 = (-(t26));
    t28 = (t23 == t27);
    if (t28 != 0)
        goto LAB4;

LAB6:
LAB5:    t7 = ieee_p_4165608084_sub_693027240_2178808227(t1, t3);
    t8 = (t6 + 56U);
    t10 = *((char **)t8);
    t8 = (t10 + 0);
    memcpy(t8, t7, 16U);
    t7 = xsi_get_transient_memory(16U);
    memset(t7, 0, 16U);
    t8 = t7;
    t10 = (t6 + 56U);
    t11 = *((char **)t10);
    t21 = (0 + 0U);
    t10 = (t11 + t21);
    t23 = *((double *)t10);
    t26 = (t2 + t23);
    *((double *)t8) = t26;
    t13 = (t7 + 8U);
    t14 = (t6 + 56U);
    t16 = *((char **)t14);
    t30 = (0 + 8U);
    t14 = (t16 + t30);
    t27 = *((double *)t14);
    *((double *)t13) = t27;
    t17 = ieee_p_4165608084_sub_4232924143_2178808227(t1, t7);
    t22 = (t12 + 56U);
    t24 = *((char **)t22);
    t22 = (t24 + 0);
    memcpy(t22, t17, 16U);
    t7 = (t12 + 56U);
    t8 = *((char **)t7);
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t8, 16U);

LAB1:    return t0;
LAB3:    *((char **)t19) = t3;
    goto LAB2;

LAB4:    if ((unsigned char)0 == 0)
        goto LAB7;

LAB8:    t7 = xsi_get_transient_memory(16U);
    memset(t7, 0, 16U);
    t8 = t7;
    *((double *)t8) = 0.00000000000000000;
    t10 = (t7 + 8U);
    *((double *)t10) = 0.00000000000000000;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t7, 16U);
    goto LAB1;

LAB7:    t24 = (t1 + 5843);
    xsi_report(t24, 26U, (unsigned char)2);
    goto LAB8;

LAB9:    goto LAB5;

LAB10:;
}

char *ieee_p_4165608084_sub_3521476779_2178808227(char *t1, char *t2, double t3)
{
    char t4[248];
    char t5[24];
    char t9[16];
    char t15[16];
    char *t0;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    unsigned char t19;
    char *t20;
    unsigned int t21;
    char *t22;
    double t23;
    char *t24;
    char *t25;
    double t26;
    double t27;
    unsigned char t28;
    unsigned int t30;

LAB0:    t6 = (t4 + 4U);
    t7 = (t1 + 2992);
    t8 = (t6 + 88U);
    *((char **)t8) = t7;
    t10 = (t6 + 56U);
    *((char **)t10) = t9;
    xsi_type_set_default_value(t7, t9, 0);
    t11 = (t6 + 80U);
    *((unsigned int *)t11) = 16U;
    t12 = (t4 + 124U);
    t13 = (t1 + 3104);
    t14 = (t12 + 88U);
    *((char **)t14) = t13;
    t16 = (t12 + 56U);
    *((char **)t16) = t15;
    xsi_type_set_default_value(t13, t15, 0);
    t17 = (t12 + 80U);
    *((unsigned int *)t17) = 16U;
    t18 = (t5 + 4U);
    t19 = (t2 != 0);
    if (t19 == 1)
        goto LAB3;

LAB2:    t20 = (t5 + 12U);
    *((double *)t20) = t3;
    t21 = (0 + 8U);
    t22 = (t2 + t21);
    t23 = *((double *)t22);
    t24 = ((IEEE_P_3972351953) + 1408U);
    t25 = *((char **)t24);
    t26 = *((double *)t25);
    t27 = (-(t26));
    t28 = (t23 == t27);
    if (t28 != 0)
        goto LAB4;

LAB6:
LAB5:    t7 = ieee_p_4165608084_sub_693027240_2178808227(t1, t2);
    t8 = (t6 + 56U);
    t10 = *((char **)t8);
    t8 = (t10 + 0);
    memcpy(t8, t7, 16U);
    t7 = xsi_get_transient_memory(16U);
    memset(t7, 0, 16U);
    t8 = t7;
    t10 = (t6 + 56U);
    t11 = *((char **)t10);
    t21 = (0 + 0U);
    t10 = (t11 + t21);
    t23 = *((double *)t10);
    t26 = (t23 + t3);
    *((double *)t8) = t26;
    t13 = (t7 + 8U);
    t14 = (t6 + 56U);
    t16 = *((char **)t14);
    t30 = (0 + 8U);
    t14 = (t16 + t30);
    t27 = *((double *)t14);
    *((double *)t13) = t27;
    t17 = ieee_p_4165608084_sub_4232924143_2178808227(t1, t7);
    t22 = (t12 + 56U);
    t24 = *((char **)t22);
    t22 = (t24 + 0);
    memcpy(t22, t17, 16U);
    t7 = (t12 + 56U);
    t8 = *((char **)t7);
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t8, 16U);

LAB1:    return t0;
LAB3:    *((char **)t18) = t2;
    goto LAB2;

LAB4:    if ((unsigned char)0 == 0)
        goto LAB7;

LAB8:    t7 = xsi_get_transient_memory(16U);
    memset(t7, 0, 16U);
    t8 = t7;
    *((double *)t8) = 0.00000000000000000;
    t10 = (t7 + 8U);
    *((double *)t10) = 0.00000000000000000;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t7, 16U);
    goto LAB1;

LAB7:    t24 = (t1 + 5869);
    xsi_report(t24, 26U, (unsigned char)2);
    goto LAB8;

LAB9:    goto LAB5;

LAB10:;
}

char *ieee_p_4165608084_sub_1468991592_2178808227(char *t1, char *t2, char *t3)
{
    char t5[24];
    char *t0;
    char *t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    char *t10;
    char *t11;
    unsigned int t12;
    char *t13;
    double t14;
    unsigned int t15;
    char *t16;
    double t17;
    double t18;
    char *t19;
    unsigned int t20;
    char *t21;
    double t22;
    unsigned int t23;
    char *t24;
    double t25;
    double t26;

LAB0:    t6 = (t5 + 4U);
    t7 = (t2 != 0);
    if (t7 == 1)
        goto LAB3;

LAB2:    t8 = (t5 + 12U);
    t9 = (t3 != 0);
    if (t9 == 1)
        goto LAB5;

LAB4:    t10 = xsi_get_transient_memory(16U);
    memset(t10, 0, 16U);
    t11 = t10;
    t12 = (0 + 0U);
    t13 = (t2 + t12);
    t14 = *((double *)t13);
    t15 = (0 + 0U);
    t16 = (t3 + t15);
    t17 = *((double *)t16);
    t18 = (t14 - t17);
    *((double *)t11) = t18;
    t19 = (t10 + 8U);
    t20 = (0 + 8U);
    t21 = (t2 + t20);
    t22 = *((double *)t21);
    t23 = (0 + 8U);
    t24 = (t3 + t23);
    t25 = *((double *)t24);
    t26 = (t22 - t25);
    *((double *)t19) = t26;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t10, 16U);

LAB1:    return t0;
LAB3:    *((char **)t6) = t2;
    goto LAB2;

LAB5:    *((char **)t8) = t3;
    goto LAB4;

LAB6:;
}

char *ieee_p_4165608084_sub_1398480355_2178808227(char *t1, double t2, char *t3)
{
    char t5[24];
    char *t0;
    char *t6;
    char *t7;
    unsigned char t8;
    char *t9;
    char *t10;
    unsigned int t11;
    char *t12;
    double t13;
    double t14;
    char *t15;
    unsigned int t16;
    char *t17;
    double t18;
    double t19;
    double t20;

LAB0:    t6 = (t5 + 4U);
    *((double *)t6) = t2;
    t7 = (t5 + 12U);
    t8 = (t3 != 0);
    if (t8 == 1)
        goto LAB3;

LAB2:    t9 = xsi_get_transient_memory(16U);
    memset(t9, 0, 16U);
    t10 = t9;
    t11 = (0 + 0U);
    t12 = (t3 + t11);
    t13 = *((double *)t12);
    t14 = (t2 - t13);
    *((double *)t10) = t14;
    t15 = (t9 + 8U);
    t16 = (0 + 8U);
    t17 = (t3 + t16);
    t18 = *((double *)t17);
    t19 = (1.0000000000000000 * t18);
    t20 = (-(t19));
    *((double *)t15) = t20;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t9, 16U);

LAB1:    return t0;
LAB3:    *((char **)t7) = t3;
    goto LAB2;

LAB4:;
}

char *ieee_p_4165608084_sub_1637677451_2178808227(char *t1, char *t2, double t3)
{
    char t5[24];
    char *t0;
    char *t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    char *t12;
    double t13;
    double t14;
    char *t15;
    unsigned int t16;
    char *t17;
    double t18;

LAB0:    t6 = (t5 + 4U);
    t7 = (t2 != 0);
    if (t7 == 1)
        goto LAB3;

LAB2:    t8 = (t5 + 12U);
    *((double *)t8) = t3;
    t9 = xsi_get_transient_memory(16U);
    memset(t9, 0, 16U);
    t10 = t9;
    t11 = (0 + 0U);
    t12 = (t2 + t11);
    t13 = *((double *)t12);
    t14 = (t13 - t3);
    *((double *)t10) = t14;
    t15 = (t9 + 8U);
    t16 = (0 + 8U);
    t17 = (t2 + t16);
    t18 = *((double *)t17);
    *((double *)t15) = t18;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t9, 16U);

LAB1:    return t0;
LAB3:    *((char **)t6) = t2;
    goto LAB2;

LAB4:;
}

char *ieee_p_4165608084_sub_3088735735_2178808227(char *t1, char *t2, char *t3)
{
    char t4[368];
    char t5[24];
    char t9[16];
    char t15[16];
    char t21[16];
    char *t0;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t24;
    unsigned char t25;
    char *t26;
    unsigned char t27;
    unsigned int t28;
    char *t29;
    double t30;
    char *t31;
    char *t32;
    double t33;
    double t34;
    unsigned char t35;
    unsigned int t37;
    unsigned int t38;
    double t39;
    unsigned int t40;
    double t41;
    double t42;

LAB0:    t6 = (t4 + 4U);
    t7 = (t1 + 2992);
    t8 = (t6 + 88U);
    *((char **)t8) = t7;
    t10 = (t6 + 56U);
    *((char **)t10) = t9;
    xsi_type_set_default_value(t7, t9, 0);
    t11 = (t6 + 80U);
    *((unsigned int *)t11) = 16U;
    t12 = (t4 + 124U);
    t13 = (t1 + 2992);
    t14 = (t12 + 88U);
    *((char **)t14) = t13;
    t16 = (t12 + 56U);
    *((char **)t16) = t15;
    xsi_type_set_default_value(t13, t15, 0);
    t17 = (t12 + 80U);
    *((unsigned int *)t17) = 16U;
    t18 = (t4 + 244U);
    t19 = (t1 + 3104);
    t20 = (t18 + 88U);
    *((char **)t20) = t19;
    t22 = (t18 + 56U);
    *((char **)t22) = t21;
    xsi_type_set_default_value(t19, t21, 0);
    t23 = (t18 + 80U);
    *((unsigned int *)t23) = 16U;
    t24 = (t5 + 4U);
    t25 = (t2 != 0);
    if (t25 == 1)
        goto LAB3;

LAB2:    t26 = (t5 + 12U);
    t27 = (t3 != 0);
    if (t27 == 1)
        goto LAB5;

LAB4:    t28 = (0 + 8U);
    t29 = (t2 + t28);
    t30 = *((double *)t29);
    t31 = ((IEEE_P_3972351953) + 1408U);
    t32 = *((char **)t31);
    t33 = *((double *)t32);
    t34 = (-(t33));
    t35 = (t30 == t34);
    if (t35 != 0)
        goto LAB6;

LAB8:
LAB7:    t28 = (0 + 8U);
    t7 = (t3 + t28);
    t30 = *((double *)t7);
    t8 = ((IEEE_P_3972351953) + 1408U);
    t10 = *((char **)t8);
    t33 = *((double *)t10);
    t34 = (-(t33));
    t25 = (t30 == t34);
    if (t25 != 0)
        goto LAB12;

LAB14:
LAB13:    t7 = ieee_p_4165608084_sub_693027240_2178808227(t1, t2);
    t8 = (t6 + 56U);
    t10 = *((char **)t8);
    t8 = (t10 + 0);
    memcpy(t8, t7, 16U);
    t7 = ieee_p_4165608084_sub_693027240_2178808227(t1, t3);
    t8 = (t12 + 56U);
    t10 = *((char **)t8);
    t8 = (t10 + 0);
    memcpy(t8, t7, 16U);
    t7 = xsi_get_transient_memory(16U);
    memset(t7, 0, 16U);
    t8 = t7;
    t10 = (t6 + 56U);
    t11 = *((char **)t10);
    t28 = (0 + 0U);
    t10 = (t11 + t28);
    t30 = *((double *)t10);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t37 = (0 + 0U);
    t13 = (t14 + t37);
    t33 = *((double *)t13);
    t34 = (t30 - t33);
    *((double *)t8) = t34;
    t16 = (t7 + 8U);
    t17 = (t6 + 56U);
    t19 = *((char **)t17);
    t38 = (0 + 8U);
    t17 = (t19 + t38);
    t39 = *((double *)t17);
    t20 = (t12 + 56U);
    t22 = *((char **)t20);
    t40 = (0 + 8U);
    t20 = (t22 + t40);
    t41 = *((double *)t20);
    t42 = (t39 - t41);
    *((double *)t16) = t42;
    t23 = ieee_p_4165608084_sub_4232924143_2178808227(t1, t7);
    t29 = (t18 + 56U);
    t31 = *((char **)t29);
    t29 = (t31 + 0);
    memcpy(t29, t23, 16U);
    t7 = (t18 + 56U);
    t8 = *((char **)t7);
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t8, 16U);

LAB1:    return t0;
LAB3:    *((char **)t24) = t2;
    goto LAB2;

LAB5:    *((char **)t26) = t3;
    goto LAB4;

LAB6:    if ((unsigned char)0 == 0)
        goto LAB9;

LAB10:    t7 = xsi_get_transient_memory(16U);
    memset(t7, 0, 16U);
    t8 = t7;
    *((double *)t8) = 0.00000000000000000;
    t10 = (t7 + 8U);
    *((double *)t10) = 0.00000000000000000;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t7, 16U);
    goto LAB1;

LAB9:    t31 = (t1 + 5895);
    xsi_report(t31, 26U, (unsigned char)2);
    goto LAB10;

LAB11:    goto LAB7;

LAB12:    if ((unsigned char)0 == 0)
        goto LAB15;

LAB16:    t7 = xsi_get_transient_memory(16U);
    memset(t7, 0, 16U);
    t8 = t7;
    *((double *)t8) = 0.00000000000000000;
    t10 = (t7 + 8U);
    *((double *)t10) = 0.00000000000000000;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t7, 16U);
    goto LAB1;

LAB15:    t8 = (t1 + 5921);
    xsi_report(t8, 26U, (unsigned char)2);
    goto LAB16;

LAB17:    goto LAB13;

LAB18:;
}

char *ieee_p_4165608084_sub_2819773217_2178808227(char *t1, double t2, char *t3)
{
    char t4[248];
    char t5[24];
    char t9[16];
    char t15[16];
    char *t0;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned char t20;
    unsigned int t21;
    char *t22;
    double t23;
    char *t24;
    char *t25;
    double t26;
    double t27;
    unsigned char t28;
    unsigned int t30;
    double t31;
    double t32;

LAB0:    t6 = (t4 + 4U);
    t7 = (t1 + 2992);
    t8 = (t6 + 88U);
    *((char **)t8) = t7;
    t10 = (t6 + 56U);
    *((char **)t10) = t9;
    xsi_type_set_default_value(t7, t9, 0);
    t11 = (t6 + 80U);
    *((unsigned int *)t11) = 16U;
    t12 = (t4 + 124U);
    t13 = (t1 + 3104);
    t14 = (t12 + 88U);
    *((char **)t14) = t13;
    t16 = (t12 + 56U);
    *((char **)t16) = t15;
    xsi_type_set_default_value(t13, t15, 0);
    t17 = (t12 + 80U);
    *((unsigned int *)t17) = 16U;
    t18 = (t5 + 4U);
    *((double *)t18) = t2;
    t19 = (t5 + 12U);
    t20 = (t3 != 0);
    if (t20 == 1)
        goto LAB3;

LAB2:    t21 = (0 + 8U);
    t22 = (t3 + t21);
    t23 = *((double *)t22);
    t24 = ((IEEE_P_3972351953) + 1408U);
    t25 = *((char **)t24);
    t26 = *((double *)t25);
    t27 = (-(t26));
    t28 = (t23 == t27);
    if (t28 != 0)
        goto LAB4;

LAB6:
LAB5:    t7 = ieee_p_4165608084_sub_693027240_2178808227(t1, t3);
    t8 = (t6 + 56U);
    t10 = *((char **)t8);
    t8 = (t10 + 0);
    memcpy(t8, t7, 16U);
    t7 = xsi_get_transient_memory(16U);
    memset(t7, 0, 16U);
    t8 = t7;
    t10 = (t6 + 56U);
    t11 = *((char **)t10);
    t21 = (0 + 0U);
    t10 = (t11 + t21);
    t23 = *((double *)t10);
    t26 = (t2 - t23);
    *((double *)t8) = t26;
    t13 = (t7 + 8U);
    t14 = (t6 + 56U);
    t16 = *((char **)t14);
    t30 = (0 + 8U);
    t14 = (t16 + t30);
    t27 = *((double *)t14);
    t31 = (1.0000000000000000 * t27);
    t32 = (-(t31));
    *((double *)t13) = t32;
    t17 = ieee_p_4165608084_sub_4232924143_2178808227(t1, t7);
    t22 = (t12 + 56U);
    t24 = *((char **)t22);
    t22 = (t24 + 0);
    memcpy(t22, t17, 16U);
    t7 = (t12 + 56U);
    t8 = *((char **)t7);
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t8, 16U);

LAB1:    return t0;
LAB3:    *((char **)t19) = t3;
    goto LAB2;

LAB4:    if ((unsigned char)0 == 0)
        goto LAB7;

LAB8:    t7 = xsi_get_transient_memory(16U);
    memset(t7, 0, 16U);
    t8 = t7;
    *((double *)t8) = 0.00000000000000000;
    t10 = (t7 + 8U);
    *((double *)t10) = 0.00000000000000000;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t7, 16U);
    goto LAB1;

LAB7:    t24 = (t1 + 5947);
    xsi_report(t24, 26U, (unsigned char)2);
    goto LAB8;

LAB9:    goto LAB5;

LAB10:;
}

char *ieee_p_4165608084_sub_3521548653_2178808227(char *t1, char *t2, double t3)
{
    char t4[248];
    char t5[24];
    char t9[16];
    char t15[16];
    char *t0;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    unsigned char t19;
    char *t20;
    unsigned int t21;
    char *t22;
    double t23;
    char *t24;
    char *t25;
    double t26;
    double t27;
    unsigned char t28;
    unsigned int t30;

LAB0:    t6 = (t4 + 4U);
    t7 = (t1 + 2992);
    t8 = (t6 + 88U);
    *((char **)t8) = t7;
    t10 = (t6 + 56U);
    *((char **)t10) = t9;
    xsi_type_set_default_value(t7, t9, 0);
    t11 = (t6 + 80U);
    *((unsigned int *)t11) = 16U;
    t12 = (t4 + 124U);
    t13 = (t1 + 3104);
    t14 = (t12 + 88U);
    *((char **)t14) = t13;
    t16 = (t12 + 56U);
    *((char **)t16) = t15;
    xsi_type_set_default_value(t13, t15, 0);
    t17 = (t12 + 80U);
    *((unsigned int *)t17) = 16U;
    t18 = (t5 + 4U);
    t19 = (t2 != 0);
    if (t19 == 1)
        goto LAB3;

LAB2:    t20 = (t5 + 12U);
    *((double *)t20) = t3;
    t21 = (0 + 8U);
    t22 = (t2 + t21);
    t23 = *((double *)t22);
    t24 = ((IEEE_P_3972351953) + 1408U);
    t25 = *((char **)t24);
    t26 = *((double *)t25);
    t27 = (-(t26));
    t28 = (t23 == t27);
    if (t28 != 0)
        goto LAB4;

LAB6:
LAB5:    t7 = ieee_p_4165608084_sub_693027240_2178808227(t1, t2);
    t8 = (t6 + 56U);
    t10 = *((char **)t8);
    t8 = (t10 + 0);
    memcpy(t8, t7, 16U);
    t7 = xsi_get_transient_memory(16U);
    memset(t7, 0, 16U);
    t8 = t7;
    t10 = (t6 + 56U);
    t11 = *((char **)t10);
    t21 = (0 + 0U);
    t10 = (t11 + t21);
    t23 = *((double *)t10);
    t26 = (t23 - t3);
    *((double *)t8) = t26;
    t13 = (t7 + 8U);
    t14 = (t6 + 56U);
    t16 = *((char **)t14);
    t30 = (0 + 8U);
    t14 = (t16 + t30);
    t27 = *((double *)t14);
    *((double *)t13) = t27;
    t17 = ieee_p_4165608084_sub_4232924143_2178808227(t1, t7);
    t22 = (t12 + 56U);
    t24 = *((char **)t22);
    t22 = (t24 + 0);
    memcpy(t22, t17, 16U);
    t7 = (t12 + 56U);
    t8 = *((char **)t7);
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t8, 16U);

LAB1:    return t0;
LAB3:    *((char **)t18) = t2;
    goto LAB2;

LAB4:    if ((unsigned char)0 == 0)
        goto LAB7;

LAB8:    t7 = xsi_get_transient_memory(16U);
    memset(t7, 0, 16U);
    t8 = t7;
    *((double *)t8) = 0.00000000000000000;
    t10 = (t7 + 8U);
    *((double *)t10) = 0.00000000000000000;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t7, 16U);
    goto LAB1;

LAB7:    t24 = (t1 + 5973);
    xsi_report(t24, 26U, (unsigned char)2);
    goto LAB8;

LAB9:    goto LAB5;

LAB10:;
}

char *ieee_p_4165608084_sub_1468883781_2178808227(char *t1, char *t2, char *t3)
{
    char t5[24];
    char *t0;
    char *t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    char *t10;
    char *t11;
    unsigned int t12;
    char *t13;
    double t14;
    unsigned int t15;
    char *t16;
    double t17;
    double t18;
    unsigned int t19;
    char *t20;
    double t21;
    unsigned int t22;
    char *t23;
    double t24;
    double t25;
    double t26;
    char *t27;
    unsigned int t28;
    char *t29;
    double t30;
    unsigned int t31;
    char *t32;
    double t33;
    double t34;
    unsigned int t35;
    char *t36;
    double t37;
    unsigned int t38;
    char *t39;
    double t40;
    double t41;
    double t42;

LAB0:    t6 = (t5 + 4U);
    t7 = (t2 != 0);
    if (t7 == 1)
        goto LAB3;

LAB2:    t8 = (t5 + 12U);
    t9 = (t3 != 0);
    if (t9 == 1)
        goto LAB5;

LAB4:    t10 = xsi_get_transient_memory(16U);
    memset(t10, 0, 16U);
    t11 = t10;
    t12 = (0 + 0U);
    t13 = (t2 + t12);
    t14 = *((double *)t13);
    t15 = (0 + 0U);
    t16 = (t3 + t15);
    t17 = *((double *)t16);
    t18 = (t14 * t17);
    t19 = (0 + 8U);
    t20 = (t2 + t19);
    t21 = *((double *)t20);
    t22 = (0 + 8U);
    t23 = (t3 + t22);
    t24 = *((double *)t23);
    t25 = (t21 * t24);
    t26 = (t18 - t25);
    *((double *)t11) = t26;
    t27 = (t10 + 8U);
    t28 = (0 + 0U);
    t29 = (t2 + t28);
    t30 = *((double *)t29);
    t31 = (0 + 8U);
    t32 = (t3 + t31);
    t33 = *((double *)t32);
    t34 = (t30 * t33);
    t35 = (0 + 8U);
    t36 = (t2 + t35);
    t37 = *((double *)t36);
    t38 = (0 + 0U);
    t39 = (t3 + t38);
    t40 = *((double *)t39);
    t41 = (t37 * t40);
    t42 = (t34 + t41);
    *((double *)t27) = t42;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t10, 16U);

LAB1:    return t0;
LAB3:    *((char **)t6) = t2;
    goto LAB2;

LAB5:    *((char **)t8) = t3;
    goto LAB4;

LAB6:;
}

char *ieee_p_4165608084_sub_1398372544_2178808227(char *t1, double t2, char *t3)
{
    char t5[24];
    char *t0;
    char *t6;
    char *t7;
    unsigned char t8;
    char *t9;
    char *t10;
    unsigned int t11;
    char *t12;
    double t13;
    double t14;
    char *t15;
    unsigned int t16;
    char *t17;
    double t18;
    double t19;

LAB0:    t6 = (t5 + 4U);
    *((double *)t6) = t2;
    t7 = (t5 + 12U);
    t8 = (t3 != 0);
    if (t8 == 1)
        goto LAB3;

LAB2:    t9 = xsi_get_transient_memory(16U);
    memset(t9, 0, 16U);
    t10 = t9;
    t11 = (0 + 0U);
    t12 = (t3 + t11);
    t13 = *((double *)t12);
    t14 = (t2 * t13);
    *((double *)t10) = t14;
    t15 = (t9 + 8U);
    t16 = (0 + 8U);
    t17 = (t3 + t16);
    t18 = *((double *)t17);
    t19 = (t2 * t18);
    *((double *)t15) = t19;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t9, 16U);

LAB1:    return t0;
LAB3:    *((char **)t7) = t3;
    goto LAB2;

LAB4:;
}

char *ieee_p_4165608084_sub_1637569640_2178808227(char *t1, char *t2, double t3)
{
    char t5[24];
    char *t0;
    char *t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    char *t12;
    double t13;
    double t14;
    char *t15;
    unsigned int t16;
    char *t17;
    double t18;
    double t19;

LAB0:    t6 = (t5 + 4U);
    t7 = (t2 != 0);
    if (t7 == 1)
        goto LAB3;

LAB2:    t8 = (t5 + 12U);
    *((double *)t8) = t3;
    t9 = xsi_get_transient_memory(16U);
    memset(t9, 0, 16U);
    t10 = t9;
    t11 = (0 + 0U);
    t12 = (t2 + t11);
    t13 = *((double *)t12);
    t14 = (t13 * t3);
    *((double *)t10) = t14;
    t15 = (t9 + 8U);
    t16 = (0 + 8U);
    t17 = (t2 + t16);
    t18 = *((double *)t17);
    t19 = (t18 * t3);
    *((double *)t15) = t19;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t9, 16U);

LAB1:    return t0;
LAB3:    *((char **)t6) = t2;
    goto LAB2;

LAB4:;
}

char *ieee_p_4165608084_sub_3143821858_2178808227(char *t1, char *t2, char *t3)
{
    char t4[128];
    char t5[24];
    char t9[16];
    char *t0;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    unsigned char t13;
    char *t14;
    unsigned char t15;
    unsigned int t16;
    char *t17;
    double t18;
    char *t19;
    char *t20;
    double t21;
    double t22;
    unsigned char t23;
    unsigned int t25;
    unsigned int t26;
    double t27;

LAB0:    t6 = (t4 + 4U);
    t7 = (t1 + 3104);
    t8 = (t6 + 88U);
    *((char **)t8) = t7;
    t10 = (t6 + 56U);
    *((char **)t10) = t9;
    xsi_type_set_default_value(t7, t9, 0);
    t11 = (t6 + 80U);
    *((unsigned int *)t11) = 16U;
    t12 = (t5 + 4U);
    t13 = (t2 != 0);
    if (t13 == 1)
        goto LAB3;

LAB2:    t14 = (t5 + 12U);
    t15 = (t3 != 0);
    if (t15 == 1)
        goto LAB5;

LAB4:    t16 = (0 + 8U);
    t17 = (t2 + t16);
    t18 = *((double *)t17);
    t19 = ((IEEE_P_3972351953) + 1408U);
    t20 = *((char **)t19);
    t21 = *((double *)t20);
    t22 = (-(t21));
    t23 = (t18 == t22);
    if (t23 != 0)
        goto LAB6;

LAB8:
LAB7:    t16 = (0 + 8U);
    t7 = (t3 + t16);
    t18 = *((double *)t7);
    t8 = ((IEEE_P_3972351953) + 1408U);
    t10 = *((char **)t8);
    t21 = *((double *)t10);
    t22 = (-(t21));
    t13 = (t18 == t22);
    if (t13 != 0)
        goto LAB12;

LAB14:
LAB13:    t16 = (0 + 0U);
    t7 = (t2 + t16);
    t18 = *((double *)t7);
    t25 = (0 + 0U);
    t8 = (t3 + t25);
    t21 = *((double *)t8);
    t22 = (t18 * t21);
    t10 = (t6 + 56U);
    t11 = *((char **)t10);
    t26 = (0 + 0U);
    t10 = (t11 + t26);
    *((double *)t10) = t22;
    t16 = (0 + 8U);
    t7 = (t2 + t16);
    t18 = *((double *)t7);
    t25 = (0 + 8U);
    t8 = (t3 + t25);
    t21 = *((double *)t8);
    t22 = (t18 + t21);
    t27 = ieee_p_4165608084_sub_1224055613_2178808227(t1, t22);
    t10 = (t6 + 56U);
    t11 = *((char **)t10);
    t26 = (0 + 8U);
    t10 = (t11 + t26);
    *((double *)t10) = t27;
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t8, 16U);

LAB1:    return t0;
LAB3:    *((char **)t12) = t2;
    goto LAB2;

LAB5:    *((char **)t14) = t3;
    goto LAB4;

LAB6:    if ((unsigned char)0 == 0)
        goto LAB9;

LAB10:    t7 = xsi_get_transient_memory(16U);
    memset(t7, 0, 16U);
    t8 = t7;
    *((double *)t8) = 0.00000000000000000;
    t10 = (t7 + 8U);
    *((double *)t10) = 0.00000000000000000;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t7, 16U);
    goto LAB1;

LAB9:    t19 = (t1 + 5999);
    xsi_report(t19, 26U, (unsigned char)2);
    goto LAB10;

LAB11:    goto LAB7;

LAB12:    if ((unsigned char)0 == 0)
        goto LAB15;

LAB16:    t7 = xsi_get_transient_memory(16U);
    memset(t7, 0, 16U);
    t8 = t7;
    *((double *)t8) = 0.00000000000000000;
    t10 = (t7 + 8U);
    *((double *)t10) = 0.00000000000000000;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t7, 16U);
    goto LAB1;

LAB15:    t8 = (t1 + 6025);
    xsi_report(t8, 26U, (unsigned char)2);
    goto LAB16;

LAB17:    goto LAB13;

LAB18:;
}

char *ieee_p_4165608084_sub_2911062888_2178808227(char *t1, double t2, char *t3)
{
    char t4[248];
    char t5[24];
    char t9[16];
    char t15[16];
    char *t0;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned char t20;
    unsigned int t21;
    char *t22;
    double t23;
    char *t24;
    char *t25;
    double t26;
    double t27;
    unsigned char t28;
    unsigned int t30;
    unsigned int t31;
    double t32;

LAB0:    t6 = (t4 + 4U);
    t7 = (t1 + 3104);
    t8 = (t6 + 88U);
    *((char **)t8) = t7;
    t10 = (t6 + 56U);
    *((char **)t10) = t9;
    xsi_type_set_default_value(t7, t9, 0);
    t11 = (t6 + 80U);
    *((unsigned int *)t11) = 16U;
    t12 = (t4 + 124U);
    t13 = (t1 + 3104);
    t14 = (t12 + 88U);
    *((char **)t14) = t13;
    t16 = (t12 + 56U);
    *((char **)t16) = t15;
    xsi_type_set_default_value(t13, t15, 0);
    t17 = (t12 + 80U);
    *((unsigned int *)t17) = 16U;
    t18 = (t5 + 4U);
    *((double *)t18) = t2;
    t19 = (t5 + 12U);
    t20 = (t3 != 0);
    if (t20 == 1)
        goto LAB3;

LAB2:    t21 = (0 + 8U);
    t22 = (t3 + t21);
    t23 = *((double *)t22);
    t24 = ((IEEE_P_3972351953) + 1408U);
    t25 = *((char **)t24);
    t26 = *((double *)t25);
    t27 = (-(t26));
    t28 = (t23 == t27);
    if (t28 != 0)
        goto LAB4;

LAB6:
LAB5:    t23 = (t2>=0?t2: -t2);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t21 = (0 + 0U);
    t7 = (t8 + t21);
    *((double *)t7) = t23;
    t20 = (t2 < 0.00000000000000000);
    if (t20 != 0)
        goto LAB10;

LAB12:    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t21 = (0 + 8U);
    t7 = (t8 + t21);
    *((double *)t7) = 0.00000000000000000;

LAB11:    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t21 = (0 + 0U);
    t7 = (t8 + t21);
    t23 = *((double *)t7);
    t30 = (0 + 0U);
    t10 = (t3 + t30);
    t26 = *((double *)t10);
    t27 = (t23 * t26);
    t11 = (t12 + 56U);
    t13 = *((char **)t11);
    t31 = (0 + 0U);
    t11 = (t13 + t31);
    *((double *)t11) = t27;
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t21 = (0 + 8U);
    t7 = (t8 + t21);
    t23 = *((double *)t7);
    t30 = (0 + 8U);
    t10 = (t3 + t30);
    t26 = *((double *)t10);
    t27 = (t23 + t26);
    t32 = ieee_p_4165608084_sub_1224055613_2178808227(t1, t27);
    t11 = (t12 + 56U);
    t13 = *((char **)t11);
    t31 = (0 + 8U);
    t11 = (t13 + t31);
    *((double *)t11) = t32;
    t7 = (t12 + 56U);
    t8 = *((char **)t7);
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t8, 16U);

LAB1:    return t0;
LAB3:    *((char **)t19) = t3;
    goto LAB2;

LAB4:    if ((unsigned char)0 == 0)
        goto LAB7;

LAB8:    t7 = xsi_get_transient_memory(16U);
    memset(t7, 0, 16U);
    t8 = t7;
    *((double *)t8) = 0.00000000000000000;
    t10 = (t7 + 8U);
    *((double *)t10) = 0.00000000000000000;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t7, 16U);
    goto LAB1;

LAB7:    t24 = (t1 + 6051);
    xsi_report(t24, 26U, (unsigned char)2);
    goto LAB8;

LAB9:    goto LAB5;

LAB10:    t7 = ((IEEE_P_3972351953) + 1408U);
    t8 = *((char **)t7);
    t23 = *((double *)t8);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t21 = (0 + 8U);
    t7 = (t10 + t21);
    *((double *)t7) = t23;
    goto LAB11;

LAB13:;
}

char *ieee_p_4165608084_sub_3612839132_2178808227(char *t1, char *t2, double t3)
{
    char t4[248];
    char t5[24];
    char t9[16];
    char t15[16];
    char *t0;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    unsigned char t19;
    char *t20;
    unsigned int t21;
    char *t22;
    double t23;
    char *t24;
    char *t25;
    double t26;
    double t27;
    unsigned char t28;
    unsigned int t30;
    unsigned int t31;
    double t32;

LAB0:    t6 = (t4 + 4U);
    t7 = (t1 + 3104);
    t8 = (t6 + 88U);
    *((char **)t8) = t7;
    t10 = (t6 + 56U);
    *((char **)t10) = t9;
    xsi_type_set_default_value(t7, t9, 0);
    t11 = (t6 + 80U);
    *((unsigned int *)t11) = 16U;
    t12 = (t4 + 124U);
    t13 = (t1 + 3104);
    t14 = (t12 + 88U);
    *((char **)t14) = t13;
    t16 = (t12 + 56U);
    *((char **)t16) = t15;
    xsi_type_set_default_value(t13, t15, 0);
    t17 = (t12 + 80U);
    *((unsigned int *)t17) = 16U;
    t18 = (t5 + 4U);
    t19 = (t2 != 0);
    if (t19 == 1)
        goto LAB3;

LAB2:    t20 = (t5 + 12U);
    *((double *)t20) = t3;
    t21 = (0 + 8U);
    t22 = (t2 + t21);
    t23 = *((double *)t22);
    t24 = ((IEEE_P_3972351953) + 1408U);
    t25 = *((char **)t24);
    t26 = *((double *)t25);
    t27 = (-(t26));
    t28 = (t23 == t27);
    if (t28 != 0)
        goto LAB4;

LAB6:
LAB5:    t23 = (t3>=0?t3: -t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t21 = (0 + 0U);
    t7 = (t8 + t21);
    *((double *)t7) = t23;
    t19 = (t3 < 0.00000000000000000);
    if (t19 != 0)
        goto LAB10;

LAB12:    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t21 = (0 + 8U);
    t7 = (t8 + t21);
    *((double *)t7) = 0.00000000000000000;

LAB11:    t21 = (0 + 0U);
    t7 = (t2 + t21);
    t23 = *((double *)t7);
    t8 = (t6 + 56U);
    t10 = *((char **)t8);
    t30 = (0 + 0U);
    t8 = (t10 + t30);
    t26 = *((double *)t8);
    t27 = (t23 * t26);
    t11 = (t12 + 56U);
    t13 = *((char **)t11);
    t31 = (0 + 0U);
    t11 = (t13 + t31);
    *((double *)t11) = t27;
    t21 = (0 + 8U);
    t7 = (t2 + t21);
    t23 = *((double *)t7);
    t8 = (t6 + 56U);
    t10 = *((char **)t8);
    t30 = (0 + 8U);
    t8 = (t10 + t30);
    t26 = *((double *)t8);
    t27 = (t23 + t26);
    t32 = ieee_p_4165608084_sub_1224055613_2178808227(t1, t27);
    t11 = (t12 + 56U);
    t13 = *((char **)t11);
    t31 = (0 + 8U);
    t11 = (t13 + t31);
    *((double *)t11) = t32;
    t7 = (t12 + 56U);
    t8 = *((char **)t7);
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t8, 16U);

LAB1:    return t0;
LAB3:    *((char **)t18) = t2;
    goto LAB2;

LAB4:    if ((unsigned char)0 == 0)
        goto LAB7;

LAB8:    t7 = xsi_get_transient_memory(16U);
    memset(t7, 0, 16U);
    t8 = t7;
    *((double *)t8) = 0.00000000000000000;
    t10 = (t7 + 8U);
    *((double *)t10) = 0.00000000000000000;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t7, 16U);
    goto LAB1;

LAB7:    t24 = (t1 + 6077);
    xsi_report(t24, 26U, (unsigned char)2);
    goto LAB8;

LAB9:    goto LAB5;

LAB10:    t7 = ((IEEE_P_3972351953) + 1408U);
    t8 = *((char **)t7);
    t23 = *((double *)t8);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t21 = (0 + 8U);
    t7 = (t10 + t21);
    *((double *)t7) = t23;
    goto LAB11;

LAB13:;
}

char *ieee_p_4165608084_sub_2146689622_2178808227(char *t1, char *t2, char *t3)
{
    char t4[128];
    char t5[24];
    char t24[8];
    char *t0;
    unsigned int t6;
    char *t7;
    double t8;
    unsigned int t9;
    char *t10;
    double t11;
    double t12;
    unsigned int t13;
    char *t14;
    double t15;
    unsigned int t16;
    char *t17;
    double t18;
    double t19;
    double t20;
    char *t21;
    char *t22;
    char *t23;
    char *t25;
    char *t26;
    char *t27;
    unsigned char t28;
    char *t29;
    unsigned char t30;
    char *t31;
    char *t32;
    double t33;
    unsigned char t34;
    char *t35;
    double t36;
    unsigned int t37;
    double t38;
    unsigned int t39;
    double t40;
    double t41;
    unsigned int t42;
    double t43;
    unsigned int t44;
    char *t45;
    double t46;
    double t47;
    double t48;
    char *t49;
    char *t50;
    double t51;
    double t52;

LAB0:    t6 = (0 + 0U);
    t7 = (t3 + t6);
    t8 = *((double *)t7);
    t9 = (0 + 0U);
    t10 = (t3 + t9);
    t11 = *((double *)t10);
    t12 = (t8 * t11);
    t13 = (0 + 8U);
    t14 = (t3 + t13);
    t15 = *((double *)t14);
    t16 = (0 + 8U);
    t17 = (t3 + t16);
    t18 = *((double *)t17);
    t19 = (t15 * t18);
    t20 = (t12 + t19);
    t21 = (t4 + 4U);
    t22 = ((STD_STANDARD) + 472);
    t23 = (t21 + 88U);
    *((char **)t23) = t22;
    t25 = (t21 + 56U);
    *((char **)t25) = t24;
    *((double *)t24) = t20;
    t26 = (t21 + 80U);
    *((unsigned int *)t26) = 8U;
    t27 = (t5 + 4U);
    t28 = (t2 != 0);
    if (t28 == 1)
        goto LAB3;

LAB2:    t29 = (t5 + 12U);
    t30 = (t3 != 0);
    if (t30 == 1)
        goto LAB5;

LAB4:    t31 = (t21 + 56U);
    t32 = *((char **)t31);
    t33 = *((double *)t32);
    t34 = (t33 == 0.00000000000000000);
    if (t34 != 0)
        goto LAB6;

LAB8:
LAB7:    t7 = xsi_get_transient_memory(16U);
    memset(t7, 0, 16U);
    t10 = t7;
    t6 = (0 + 0U);
    t14 = (t2 + t6);
    t8 = *((double *)t14);
    t9 = (0 + 0U);
    t17 = (t3 + t9);
    t11 = *((double *)t17);
    t12 = (t8 * t11);
    t13 = (0 + 8U);
    t22 = (t2 + t13);
    t15 = *((double *)t22);
    t16 = (0 + 8U);
    t23 = (t3 + t16);
    t18 = *((double *)t23);
    t19 = (t15 * t18);
    t20 = (t12 + t19);
    t25 = (t21 + 56U);
    t26 = *((char **)t25);
    t33 = *((double *)t26);
    t36 = (t20 / t33);
    *((double *)t10) = t36;
    t25 = (t7 + 8U);
    t37 = (0 + 8U);
    t31 = (t2 + t37);
    t38 = *((double *)t31);
    t39 = (0 + 0U);
    t32 = (t3 + t39);
    t40 = *((double *)t32);
    t41 = (t38 * t40);
    t42 = (0 + 0U);
    t35 = (t2 + t42);
    t43 = *((double *)t35);
    t44 = (0 + 8U);
    t45 = (t3 + t44);
    t46 = *((double *)t45);
    t47 = (t43 * t46);
    t48 = (t41 - t47);
    t49 = (t21 + 56U);
    t50 = *((char **)t49);
    t51 = *((double *)t50);
    t52 = (t48 / t51);
    *((double *)t25) = t52;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t7, 16U);

LAB1:    return t0;
LAB3:    *((char **)t27) = t2;
    goto LAB2;

LAB5:    *((char **)t29) = t3;
    goto LAB4;

LAB6:    if ((unsigned char)0 == 0)
        goto LAB9;

LAB10:    t7 = xsi_get_transient_memory(16U);
    memset(t7, 0, 16U);
    t10 = t7;
    if (-1.7014111000000000E+308 > 1.7014111000000000E+308)
        goto LAB11;

LAB12:    if (1 == -1)
        goto LAB16;

LAB17:    t8 = 1.7014111000000000E+308;

LAB13:    *((double *)t10) = t8;
    t14 = (t7 + 8U);
    *((double *)t14) = 0.00000000000000000;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t7, 16U);
    goto LAB1;

LAB9:    t31 = (t1 + 6103);
    xsi_report(t31, 39U, (unsigned char)2);
    goto LAB10;

LAB11:    if (1 == 1)
        goto LAB14;

LAB15:    t8 = -1.7014111000000000E+308;
    goto LAB13;

LAB14:    t8 = 1.7014111000000000E+308;
    goto LAB13;

LAB16:    t8 = -1.7014111000000000E+308;
    goto LAB13;

LAB18:    goto LAB7;

LAB19:;
}

char *ieee_p_4165608084_sub_1967302441_2178808227(char *t1, double t2, char *t3)
{
    char t4[128];
    char t5[24];
    char t24[8];
    char *t0;
    unsigned int t6;
    char *t7;
    double t8;
    unsigned int t9;
    char *t10;
    double t11;
    double t12;
    unsigned int t13;
    char *t14;
    double t15;
    unsigned int t16;
    char *t17;
    double t18;
    double t19;
    double t20;
    char *t21;
    char *t22;
    char *t23;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned char t29;
    char *t30;
    char *t31;
    double t32;
    unsigned char t33;

LAB0:    t6 = (0 + 0U);
    t7 = (t3 + t6);
    t8 = *((double *)t7);
    t9 = (0 + 0U);
    t10 = (t3 + t9);
    t11 = *((double *)t10);
    t12 = (t8 * t11);
    t13 = (0 + 8U);
    t14 = (t3 + t13);
    t15 = *((double *)t14);
    t16 = (0 + 8U);
    t17 = (t3 + t16);
    t18 = *((double *)t17);
    t19 = (t15 * t18);
    t20 = (t12 + t19);
    t21 = (t4 + 4U);
    t22 = ((STD_STANDARD) + 472);
    t23 = (t21 + 88U);
    *((char **)t23) = t22;
    t25 = (t21 + 56U);
    *((char **)t25) = t24;
    *((double *)t24) = t20;
    t26 = (t21 + 80U);
    *((unsigned int *)t26) = 8U;
    t27 = (t5 + 4U);
    *((double *)t27) = t2;
    t28 = (t5 + 12U);
    t29 = (t3 != 0);
    if (t29 == 1)
        goto LAB3;

LAB2:    t30 = (t21 + 56U);
    t31 = *((char **)t30);
    t32 = *((double *)t31);
    t33 = (t32 == 0.00000000000000000);
    if (t33 != 0)
        goto LAB4;

LAB6:
LAB5:    t7 = (t21 + 56U);
    t10 = *((char **)t7);
    t8 = *((double *)t10);
    t11 = (t2 / t8);
    t7 = (t21 + 56U);
    t14 = *((char **)t7);
    t7 = (t14 + 0);
    *((double *)t7) = t11;
    t7 = xsi_get_transient_memory(16U);
    memset(t7, 0, 16U);
    t10 = t7;
    t14 = (t21 + 56U);
    t17 = *((char **)t14);
    t8 = *((double *)t17);
    t6 = (0 + 0U);
    t14 = (t3 + t6);
    t11 = *((double *)t14);
    t12 = (t8 * t11);
    *((double *)t10) = t12;
    t22 = (t7 + 8U);
    t23 = (t21 + 56U);
    t25 = *((char **)t23);
    t15 = *((double *)t25);
    t9 = (0 + 8U);
    t23 = (t3 + t9);
    t18 = *((double *)t23);
    t19 = (t15 * t18);
    t20 = (-(t19));
    *((double *)t22) = t20;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t7, 16U);

LAB1:    return t0;
LAB3:    *((char **)t28) = t3;
    goto LAB2;

LAB4:    if ((unsigned char)0 == 0)
        goto LAB7;

LAB8:    t7 = xsi_get_transient_memory(16U);
    memset(t7, 0, 16U);
    t10 = t7;
    if (-1.7014111000000000E+308 > 1.7014111000000000E+308)
        goto LAB9;

LAB10:    if (1 == -1)
        goto LAB14;

LAB15:    t8 = 1.7014111000000000E+308;

LAB11:    *((double *)t10) = t8;
    t14 = (t7 + 8U);
    *((double *)t14) = 0.00000000000000000;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t7, 16U);
    goto LAB1;

LAB7:    t30 = (t1 + 6142);
    xsi_report(t30, 39U, (unsigned char)2);
    goto LAB8;

LAB9:    if (1 == 1)
        goto LAB12;

LAB13:    t8 = -1.7014111000000000E+308;
    goto LAB11;

LAB12:    t8 = 1.7014111000000000E+308;
    goto LAB11;

LAB14:    t8 = -1.7014111000000000E+308;
    goto LAB11;

LAB16:    goto LAB5;

LAB17:;
}

char *ieee_p_4165608084_sub_1637749325_2178808227(char *t1, char *t2, double t3)
{
    char t5[24];
    char *t0;
    char *t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    char *t10;
    char *t11;
    double t12;
    char *t13;
    unsigned int t14;
    double t15;
    char *t16;
    unsigned int t17;
    char *t18;
    double t19;
    double t20;

LAB0:    t6 = (t5 + 4U);
    t7 = (t2 != 0);
    if (t7 == 1)
        goto LAB3;

LAB2:    t8 = (t5 + 12U);
    *((double *)t8) = t3;
    t9 = (t3 == 0.00000000000000000);
    if (t9 != 0)
        goto LAB4;

LAB6:
LAB5:    t10 = xsi_get_transient_memory(16U);
    memset(t10, 0, 16U);
    t11 = t10;
    t14 = (0 + 0U);
    t13 = (t2 + t14);
    t12 = *((double *)t13);
    t15 = (t12 / t3);
    *((double *)t11) = t15;
    t16 = (t10 + 8U);
    t17 = (0 + 8U);
    t18 = (t2 + t17);
    t19 = *((double *)t18);
    t20 = (t19 / t3);
    *((double *)t16) = t20;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t10, 16U);

LAB1:    return t0;
LAB3:    *((char **)t6) = t2;
    goto LAB2;

LAB4:    if ((unsigned char)0 == 0)
        goto LAB7;

LAB8:    t10 = xsi_get_transient_memory(16U);
    memset(t10, 0, 16U);
    t11 = t10;
    if (-1.7014111000000000E+308 > 1.7014111000000000E+308)
        goto LAB9;

LAB10:    if (1 == -1)
        goto LAB14;

LAB15:    t12 = 1.7014111000000000E+308;

LAB11:    *((double *)t11) = t12;
    t13 = (t10 + 8U);
    *((double *)t13) = 0.00000000000000000;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t10, 16U);
    goto LAB1;

LAB7:    t10 = (t1 + 6181);
    xsi_report(t10, 32U, (unsigned char)2);
    goto LAB8;

LAB9:    if (1 == 1)
        goto LAB12;

LAB13:    t12 = -1.7014111000000000E+308;
    goto LAB11;

LAB12:    t12 = 1.7014111000000000E+308;
    goto LAB11;

LAB14:    t12 = -1.7014111000000000E+308;
    goto LAB11;

LAB16:    goto LAB5;

LAB17:;
}

char *ieee_p_4165608084_sub_3144001543_2178808227(char *t1, char *t2, char *t3)
{
    char t4[128];
    char t5[24];
    char t9[16];
    char *t0;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    unsigned char t13;
    char *t14;
    unsigned char t15;
    unsigned int t16;
    char *t17;
    double t18;
    unsigned char t19;
    char *t20;
    double t22;
    double t23;
    unsigned int t24;
    unsigned int t25;
    double t26;

LAB0:    t6 = (t4 + 4U);
    t7 = (t1 + 3104);
    t8 = (t6 + 88U);
    *((char **)t8) = t7;
    t10 = (t6 + 56U);
    *((char **)t10) = t9;
    xsi_type_set_default_value(t7, t9, 0);
    t11 = (t6 + 80U);
    *((unsigned int *)t11) = 16U;
    t12 = (t5 + 4U);
    t13 = (t2 != 0);
    if (t13 == 1)
        goto LAB3;

LAB2:    t14 = (t5 + 12U);
    t15 = (t3 != 0);
    if (t15 == 1)
        goto LAB5;

LAB4:    t16 = (0 + 0U);
    t17 = (t3 + t16);
    t18 = *((double *)t17);
    t19 = (t18 == 0.00000000000000000);
    if (t19 != 0)
        goto LAB6;

LAB8:
LAB7:    t16 = (0 + 8U);
    t7 = (t2 + t16);
    t18 = *((double *)t7);
    t8 = ((IEEE_P_3972351953) + 1408U);
    t10 = *((char **)t8);
    t22 = *((double *)t10);
    t23 = (-(t22));
    t13 = (t18 == t23);
    if (t13 != 0)
        goto LAB19;

LAB21:
LAB20:    t16 = (0 + 8U);
    t7 = (t3 + t16);
    t18 = *((double *)t7);
    t8 = ((IEEE_P_3972351953) + 1408U);
    t10 = *((char **)t8);
    t22 = *((double *)t10);
    t23 = (-(t22));
    t13 = (t18 == t23);
    if (t13 != 0)
        goto LAB32;

LAB34:
LAB33:    t16 = (0 + 0U);
    t7 = (t2 + t16);
    t18 = *((double *)t7);
    t24 = (0 + 0U);
    t8 = (t3 + t24);
    t22 = *((double *)t8);
    t23 = (t18 / t22);
    t10 = (t6 + 56U);
    t11 = *((char **)t10);
    t25 = (0 + 0U);
    t10 = (t11 + t25);
    *((double *)t10) = t23;
    t24 = (0 + 8U);
    t7 = (t2 + t24);
    t18 = *((double *)t7);
    t25 = (0 + 8U);
    t8 = (t3 + t25);
    t22 = *((double *)t8);
    t23 = (t18 - t22);
    t26 = ieee_p_4165608084_sub_1224055613_2178808227(t1, t23);
    t10 = (t6 + 56U);
    t11 = *((char **)t10);
    t16 = (0 + 8U);
    t10 = (t11 + t16);
    *((double *)t10) = t26;
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t8, 16U);

LAB1:    return t0;
LAB3:    *((char **)t12) = t2;
    goto LAB2;

LAB5:    *((char **)t14) = t3;
    goto LAB4;

LAB6:    if ((unsigned char)0 == 0)
        goto LAB9;

LAB10:    t7 = xsi_get_transient_memory(16U);
    memset(t7, 0, 16U);
    t8 = t7;
    if (-1.7014111000000000E+308 > 1.7014111000000000E+308)
        goto LAB11;

LAB12:    if (1 == -1)
        goto LAB16;

LAB17:    t18 = 1.7014111000000000E+308;

LAB13:    *((double *)t8) = t18;
    t10 = (t7 + 8U);
    *((double *)t10) = 0.00000000000000000;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t7, 16U);
    goto LAB1;

LAB9:    t20 = (t1 + 6213);
    xsi_report(t20, 45U, (unsigned char)2);
    goto LAB10;

LAB11:    if (1 == 1)
        goto LAB14;

LAB15:    t18 = -1.7014111000000000E+308;
    goto LAB13;

LAB14:    t18 = 1.7014111000000000E+308;
    goto LAB13;

LAB16:    t18 = -1.7014111000000000E+308;
    goto LAB13;

LAB18:    goto LAB7;

LAB19:    if ((unsigned char)0 == 0)
        goto LAB22;

LAB23:    t7 = xsi_get_transient_memory(16U);
    memset(t7, 0, 16U);
    t8 = t7;
    if (-1.7014111000000000E+308 > 1.7014111000000000E+308)
        goto LAB24;

LAB25:    if (1 == -1)
        goto LAB29;

LAB30:    t18 = 1.7014111000000000E+308;

LAB26:    *((double *)t8) = t18;
    t10 = (t7 + 8U);
    *((double *)t10) = 0.00000000000000000;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t7, 16U);
    goto LAB1;

LAB22:    t8 = (t1 + 6258);
    xsi_report(t8, 26U, (unsigned char)2);
    goto LAB23;

LAB24:    if (1 == 1)
        goto LAB27;

LAB28:    t18 = -1.7014111000000000E+308;
    goto LAB26;

LAB27:    t18 = 1.7014111000000000E+308;
    goto LAB26;

LAB29:    t18 = -1.7014111000000000E+308;
    goto LAB26;

LAB31:    goto LAB20;

LAB32:    if ((unsigned char)0 == 0)
        goto LAB35;

LAB36:    t7 = xsi_get_transient_memory(16U);
    memset(t7, 0, 16U);
    t8 = t7;
    *((double *)t8) = 0.00000000000000000;
    t10 = (t7 + 8U);
    *((double *)t10) = 0.00000000000000000;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t7, 16U);
    goto LAB1;

LAB35:    t8 = (t1 + 6284);
    xsi_report(t8, 26U, (unsigned char)2);
    goto LAB36;

LAB37:    goto LAB33;

LAB38:;
}

char *ieee_p_4165608084_sub_3613018817_2178808227(char *t1, char *t2, double t3)
{
    char t4[248];
    char t5[24];
    char t9[16];
    char t15[16];
    char *t0;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    unsigned char t19;
    char *t20;
    unsigned char t21;
    char *t22;
    double t24;
    unsigned int t25;
    double t26;
    double t27;
    unsigned int t28;
    unsigned int t29;
    double t30;

LAB0:    t6 = (t4 + 4U);
    t7 = (t1 + 3104);
    t8 = (t6 + 88U);
    *((char **)t8) = t7;
    t10 = (t6 + 56U);
    *((char **)t10) = t9;
    xsi_type_set_default_value(t7, t9, 0);
    t11 = (t6 + 80U);
    *((unsigned int *)t11) = 16U;
    t12 = (t4 + 124U);
    t13 = (t1 + 3104);
    t14 = (t12 + 88U);
    *((char **)t14) = t13;
    t16 = (t12 + 56U);
    *((char **)t16) = t15;
    xsi_type_set_default_value(t13, t15, 0);
    t17 = (t12 + 80U);
    *((unsigned int *)t17) = 16U;
    t18 = (t5 + 4U);
    t19 = (t2 != 0);
    if (t19 == 1)
        goto LAB3;

LAB2:    t20 = (t5 + 12U);
    *((double *)t20) = t3;
    t21 = (t3 == 0.00000000000000000);
    if (t21 != 0)
        goto LAB4;

LAB6:
LAB5:    t25 = (0 + 8U);
    t7 = (t2 + t25);
    t24 = *((double *)t7);
    t8 = ((IEEE_P_3972351953) + 1408U);
    t10 = *((char **)t8);
    t26 = *((double *)t10);
    t27 = (-(t26));
    t19 = (t24 == t27);
    if (t19 != 0)
        goto LAB17;

LAB19:
LAB18:    t24 = (t3>=0?t3: -t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t25 = (0 + 0U);
    t7 = (t8 + t25);
    *((double *)t7) = t24;
    t19 = (t3 < 0.00000000000000000);
    if (t19 != 0)
        goto LAB30;

LAB32:    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t25 = (0 + 8U);
    t7 = (t8 + t25);
    *((double *)t7) = 0.00000000000000000;

LAB31:    t25 = (0 + 0U);
    t7 = (t2 + t25);
    t24 = *((double *)t7);
    t8 = (t6 + 56U);
    t10 = *((char **)t8);
    t28 = (0 + 0U);
    t8 = (t10 + t28);
    t26 = *((double *)t8);
    t27 = (t24 / t26);
    t11 = (t12 + 56U);
    t13 = *((char **)t11);
    t29 = (0 + 0U);
    t11 = (t13 + t29);
    *((double *)t11) = t27;
    t25 = (0 + 8U);
    t7 = (t2 + t25);
    t24 = *((double *)t7);
    t8 = (t6 + 56U);
    t10 = *((char **)t8);
    t28 = (0 + 8U);
    t8 = (t10 + t28);
    t26 = *((double *)t8);
    t27 = (t24 - t26);
    t30 = ieee_p_4165608084_sub_1224055613_2178808227(t1, t27);
    t11 = (t12 + 56U);
    t13 = *((char **)t11);
    t29 = (0 + 8U);
    t11 = (t13 + t29);
    *((double *)t11) = t30;
    t7 = (t12 + 56U);
    t8 = *((char **)t7);
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t8, 16U);

LAB1:    return t0;
LAB3:    *((char **)t18) = t2;
    goto LAB2;

LAB4:    if ((unsigned char)0 == 0)
        goto LAB7;

LAB8:    t7 = xsi_get_transient_memory(16U);
    memset(t7, 0, 16U);
    t8 = t7;
    if (-1.7014111000000000E+308 > 1.7014111000000000E+308)
        goto LAB9;

LAB10:    if (1 == -1)
        goto LAB14;

LAB15:    t24 = 1.7014111000000000E+308;

LAB11:    *((double *)t8) = t24;
    t10 = (t7 + 8U);
    *((double *)t10) = 0.00000000000000000;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t7, 16U);
    goto LAB1;

LAB7:    t22 = (t1 + 6310);
    xsi_report(t22, 38U, (unsigned char)2);
    goto LAB8;

LAB9:    if (1 == 1)
        goto LAB12;

LAB13:    t24 = -1.7014111000000000E+308;
    goto LAB11;

LAB12:    t24 = 1.7014111000000000E+308;
    goto LAB11;

LAB14:    t24 = -1.7014111000000000E+308;
    goto LAB11;

LAB16:    goto LAB5;

LAB17:    if ((unsigned char)0 == 0)
        goto LAB20;

LAB21:    t7 = xsi_get_transient_memory(16U);
    memset(t7, 0, 16U);
    t8 = t7;
    if (-1.7014111000000000E+308 > 1.7014111000000000E+308)
        goto LAB22;

LAB23:    if (1 == -1)
        goto LAB27;

LAB28:    t24 = 1.7014111000000000E+308;

LAB24:    *((double *)t8) = t24;
    t10 = (t7 + 8U);
    *((double *)t10) = 0.00000000000000000;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t7, 16U);
    goto LAB1;

LAB20:    t8 = (t1 + 6348);
    xsi_report(t8, 26U, (unsigned char)2);
    goto LAB21;

LAB22:    if (1 == 1)
        goto LAB25;

LAB26:    t24 = -1.7014111000000000E+308;
    goto LAB24;

LAB25:    t24 = 1.7014111000000000E+308;
    goto LAB24;

LAB27:    t24 = -1.7014111000000000E+308;
    goto LAB24;

LAB29:    goto LAB18;

LAB30:    t7 = ((IEEE_P_3972351953) + 1408U);
    t8 = *((char **)t7);
    t24 = *((double *)t8);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t25 = (0 + 8U);
    t7 = (t10 + t25);
    *((double *)t7) = t24;
    goto LAB31;

LAB33:;
}

char *ieee_p_4165608084_sub_2911242573_2178808227(char *t1, double t2, char *t3)
{
    char t4[248];
    char t5[24];
    char t9[16];
    char t15[16];
    char *t0;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned char t20;
    unsigned int t21;
    char *t22;
    double t23;
    unsigned char t24;
    char *t25;
    double t27;
    double t28;
    unsigned int t29;
    unsigned int t30;
    double t31;

LAB0:    t6 = (t4 + 4U);
    t7 = (t1 + 3104);
    t8 = (t6 + 88U);
    *((char **)t8) = t7;
    t10 = (t6 + 56U);
    *((char **)t10) = t9;
    xsi_type_set_default_value(t7, t9, 0);
    t11 = (t6 + 80U);
    *((unsigned int *)t11) = 16U;
    t12 = (t4 + 124U);
    t13 = (t1 + 3104);
    t14 = (t12 + 88U);
    *((char **)t14) = t13;
    t16 = (t12 + 56U);
    *((char **)t16) = t15;
    xsi_type_set_default_value(t13, t15, 0);
    t17 = (t12 + 80U);
    *((unsigned int *)t17) = 16U;
    t18 = (t5 + 4U);
    *((double *)t18) = t2;
    t19 = (t5 + 12U);
    t20 = (t3 != 0);
    if (t20 == 1)
        goto LAB3;

LAB2:    t21 = (0 + 0U);
    t22 = (t3 + t21);
    t23 = *((double *)t22);
    t24 = (t23 == 0.00000000000000000);
    if (t24 != 0)
        goto LAB4;

LAB6:
LAB5:    t21 = (0 + 8U);
    t7 = (t3 + t21);
    t23 = *((double *)t7);
    t8 = ((IEEE_P_3972351953) + 1408U);
    t10 = *((char **)t8);
    t27 = *((double *)t10);
    t28 = (-(t27));
    t20 = (t23 == t28);
    if (t20 != 0)
        goto LAB17;

LAB19:
LAB18:    t23 = (t2>=0?t2: -t2);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t21 = (0 + 0U);
    t7 = (t8 + t21);
    *((double *)t7) = t23;
    t20 = (t2 < 0.00000000000000000);
    if (t20 != 0)
        goto LAB23;

LAB25:    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t21 = (0 + 8U);
    t7 = (t8 + t21);
    *((double *)t7) = 0.00000000000000000;

LAB24:    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t21 = (0 + 0U);
    t7 = (t8 + t21);
    t23 = *((double *)t7);
    t29 = (0 + 0U);
    t10 = (t3 + t29);
    t27 = *((double *)t10);
    t28 = (t23 / t27);
    t11 = (t12 + 56U);
    t13 = *((char **)t11);
    t30 = (0 + 0U);
    t11 = (t13 + t30);
    *((double *)t11) = t28;
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t21 = (0 + 8U);
    t7 = (t8 + t21);
    t23 = *((double *)t7);
    t29 = (0 + 8U);
    t10 = (t3 + t29);
    t27 = *((double *)t10);
    t28 = (t23 - t27);
    t31 = ieee_p_4165608084_sub_1224055613_2178808227(t1, t28);
    t11 = (t12 + 56U);
    t13 = *((char **)t11);
    t30 = (0 + 8U);
    t11 = (t13 + t30);
    *((double *)t11) = t31;
    t7 = (t12 + 56U);
    t8 = *((char **)t7);
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t8, 16U);

LAB1:    return t0;
LAB3:    *((char **)t19) = t3;
    goto LAB2;

LAB4:    if ((unsigned char)0 == 0)
        goto LAB7;

LAB8:    t7 = xsi_get_transient_memory(16U);
    memset(t7, 0, 16U);
    t8 = t7;
    if (-1.7014111000000000E+308 > 1.7014111000000000E+308)
        goto LAB9;

LAB10:    if (1 == -1)
        goto LAB14;

LAB15:    t23 = 1.7014111000000000E+308;

LAB11:    *((double *)t8) = t23;
    t10 = (t7 + 8U);
    *((double *)t10) = 0.00000000000000000;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t7, 16U);
    goto LAB1;

LAB7:    t25 = (t1 + 6374);
    xsi_report(t25, 45U, (unsigned char)2);
    goto LAB8;

LAB9:    if (1 == 1)
        goto LAB12;

LAB13:    t23 = -1.7014111000000000E+308;
    goto LAB11;

LAB12:    t23 = 1.7014111000000000E+308;
    goto LAB11;

LAB14:    t23 = -1.7014111000000000E+308;
    goto LAB11;

LAB16:    goto LAB5;

LAB17:    if ((unsigned char)0 == 0)
        goto LAB20;

LAB21:    t7 = xsi_get_transient_memory(16U);
    memset(t7, 0, 16U);
    t8 = t7;
    *((double *)t8) = 0.00000000000000000;
    t10 = (t7 + 8U);
    *((double *)t10) = 0.00000000000000000;
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t7, 16U);
    goto LAB1;

LAB20:    t8 = (t1 + 6419);
    xsi_report(t8, 25U, (unsigned char)2);
    goto LAB21;

LAB22:    goto LAB18;

LAB23:    t7 = ((IEEE_P_3972351953) + 1408U);
    t8 = *((char **)t7);
    t23 = *((double *)t8);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t21 = (0 + 8U);
    t7 = (t10 + t21);
    *((double *)t7) = t23;
    goto LAB24;

LAB26:;
}


extern void ieee_p_4165608084_init()
{
	static char *se[] = {(void *)ieee_p_4165608084_sub_2154887899_2178808227,(void *)ieee_p_4165608084_sub_3498812266_2178808227,(void *)ieee_p_4165608084_sub_1083378268_2178808227,(void *)ieee_p_4165608084_sub_1224055613_2178808227,(void *)ieee_p_4165608084_sub_4232924143_2178808227,(void *)ieee_p_4165608084_sub_693027240_2178808227,(void *)ieee_p_4165608084_sub_119379431_2178808227,(void *)ieee_p_4165608084_sub_127638857_2178808227,(void *)ieee_p_4165608084_sub_1253342372_2178808227,(void *)ieee_p_4165608084_sub_694236561_2178808227,(void *)ieee_p_4165608084_sub_1366103904_2178808227,(void *)ieee_p_4165608084_sub_3707476771_2178808227,(void *)ieee_p_4165608084_sub_1037174777_2178808227,(void *)ieee_p_4165608084_sub_3272884627_2178808227,(void *)ieee_p_4165608084_sub_1820902636_2178808227,(void *)ieee_p_4165608084_sub_3423396204_2178808227,(void *)ieee_p_4165608084_sub_2054786440_2178808227,(void *)ieee_p_4165608084_sub_2848661371_2178808227,(void *)ieee_p_4165608084_sub_1458454634_2178808227,(void *)ieee_p_4165608084_sub_1391226364_2178808227,(void *)ieee_p_4165608084_sub_3467622635_2178808227,(void *)ieee_p_4165608084_sub_2897113988_2178808227,(void *)ieee_p_4165608084_sub_2829885718_2178808227,(void *)ieee_p_4165608084_sub_611314693_2178808227,(void *)ieee_p_4165608084_sub_1996961037_2178808227,(void *)ieee_p_4165608084_sub_3730672360_2178808227,(void *)ieee_p_4165608084_sub_1464402489_2178808227,(void *)ieee_p_4165608084_sub_3325369240_2178808227,(void *)ieee_p_4165608084_sub_1445648820_2178808227,(void *)ieee_p_4165608084_sub_3306615571_2178808227,(void *)ieee_p_4165608084_sub_1656223361_2178808227,(void *)ieee_p_4165608084_sub_3517190112_2178808227,(void *)ieee_p_4165608084_sub_1037352284_2178808227,(void *)ieee_p_4165608084_sub_2898319035_2178808227,(void *)ieee_p_4165608084_sub_1468919718_2178808227,(void *)ieee_p_4165608084_sub_1398408481_2178808227,(void *)ieee_p_4165608084_sub_1637605577_2178808227,(void *)ieee_p_4165608084_sub_3088663861_2178808227,(void *)ieee_p_4165608084_sub_2819701343_2178808227,(void *)ieee_p_4165608084_sub_3521476779_2178808227,(void *)ieee_p_4165608084_sub_1468991592_2178808227,(void *)ieee_p_4165608084_sub_1398480355_2178808227,(void *)ieee_p_4165608084_sub_1637677451_2178808227,(void *)ieee_p_4165608084_sub_3088735735_2178808227,(void *)ieee_p_4165608084_sub_2819773217_2178808227,(void *)ieee_p_4165608084_sub_3521548653_2178808227,(void *)ieee_p_4165608084_sub_1468883781_2178808227,(void *)ieee_p_4165608084_sub_1398372544_2178808227,(void *)ieee_p_4165608084_sub_1637569640_2178808227,(void *)ieee_p_4165608084_sub_3143821858_2178808227,(void *)ieee_p_4165608084_sub_2911062888_2178808227,(void *)ieee_p_4165608084_sub_3612839132_2178808227,(void *)ieee_p_4165608084_sub_2146689622_2178808227,(void *)ieee_p_4165608084_sub_1967302441_2178808227,(void *)ieee_p_4165608084_sub_1637749325_2178808227,(void *)ieee_p_4165608084_sub_3144001543_2178808227,(void *)ieee_p_4165608084_sub_3613018817_2178808227,(void *)ieee_p_4165608084_sub_2911242573_2178808227};
	xsi_register_didat("ieee_p_4165608084", "isim/precompiled.exe.sim/ieee/p_4165608084.didat");
	xsi_register_subprogram_executes(se);
}
