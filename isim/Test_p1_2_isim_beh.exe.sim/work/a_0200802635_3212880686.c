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

/* This file is designed for use with ISim build 0xc3576ebc */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/vhdl_github_2/vhdl_github_2/p2/p1/demux.vhd";
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );


static void work_a_0200802635_3212880686_p_0(char *t0)
{
    char t17[16];
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    int t10;
    char *t11;
    int t13;
    char *t14;
    int t16;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    xsi_set_current_line(42, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 4336);
    t4 = xsi_mem_cmp(t1, t2, 4U);
    if (t4 == 1)
        goto LAB3;

LAB9:    t5 = (t0 + 4340);
    t7 = xsi_mem_cmp(t5, t2, 4U);
    if (t7 == 1)
        goto LAB4;

LAB10:    t8 = (t0 + 4344);
    t10 = xsi_mem_cmp(t8, t2, 4U);
    if (t10 == 1)
        goto LAB5;

LAB11:    t11 = (t0 + 4348);
    t13 = xsi_mem_cmp(t11, t2, 4U);
    if (t13 == 1)
        goto LAB6;

LAB12:    t14 = (t0 + 4352);
    t16 = xsi_mem_cmp(t14, t2, 4U);
    if (t16 == 1)
        goto LAB7;

LAB13:
LAB8:    xsi_set_current_line(49, ng0);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t17, 32768, 16);
    t2 = (t0 + 2752);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t1, 16U);
    xsi_driver_first_trans_fast_port(t2);

LAB2:    t1 = (t0 + 2672);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(43, ng0);
    t18 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t17, 1, 16);
    t19 = (t0 + 2752);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t18, 16U);
    xsi_driver_first_trans_fast_port(t19);
    goto LAB2;

LAB4:    xsi_set_current_line(44, ng0);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t17, 2, 16);
    t2 = (t0 + 2752);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t1, 16U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB2;

LAB5:    xsi_set_current_line(46, ng0);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t17, 4, 16);
    t2 = (t0 + 2752);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t1, 16U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB2;

LAB6:    xsi_set_current_line(47, ng0);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t17, 16384, 16);
    t2 = (t0 + 2752);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t1, 16U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB2;

LAB7:    xsi_set_current_line(48, ng0);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t17, 32768, 16);
    t2 = (t0 + 2752);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t1, 16U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB2;

LAB14:;
}


extern void work_a_0200802635_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0200802635_3212880686_p_0};
	xsi_register_didat("work_a_0200802635_3212880686", "isim/Test_p1_2_isim_beh.exe.sim/work/a_0200802635_3212880686.didat");
	xsi_register_executes(pe);
}
