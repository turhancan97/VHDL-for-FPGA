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

#include "xsi.h"

struct XSI_INFO xsi_info;

char *IEEE_P_2592010699;
char *STD_STANDARD;
char *IEEE_P_3564397177;
char *STD_TEXTIO;
char *IEEE_P_3499444699;
char *IEEE_P_3039841270;
char *IEEE_P_1242562249;
char *IEEE_P_0774719531;
char *IEEE_P_3620187407;
char *IEEE_P_3972351953;
char *IEEE_P_4165608084;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    std_textio_init();
    ieee_p_3564397177_init();
    ieee_p_3499444699_init();
    ieee_p_3039841270_init();
    ieee_p_1242562249_init();
    ieee_p_0774719531_init();
    ieee_p_3620187407_init();
    ieee_p_3972351953_init();
    ieee_p_4165608084_init();
    work_a_3819254352_3212880686_init();
    work_a_4182566835_2372691052_init();


    xsi_register_tops("work_a_4182566835_2372691052");

    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    IEEE_P_3564397177 = xsi_get_engine_memory("ieee_p_3564397177");
    STD_TEXTIO = xsi_get_engine_memory("std_textio");
    IEEE_P_3499444699 = xsi_get_engine_memory("ieee_p_3499444699");
    IEEE_P_3039841270 = xsi_get_engine_memory("ieee_p_3039841270");
    IEEE_P_1242562249 = xsi_get_engine_memory("ieee_p_1242562249");
    IEEE_P_0774719531 = xsi_get_engine_memory("ieee_p_0774719531");
    IEEE_P_3620187407 = xsi_get_engine_memory("ieee_p_3620187407");
    IEEE_P_3972351953 = xsi_get_engine_memory("ieee_p_3972351953");
    IEEE_P_4165608084 = xsi_get_engine_memory("ieee_p_4165608084");

    return xsi_run_simulation(argc, argv);

}
