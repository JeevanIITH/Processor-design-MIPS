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
static const char *ng0 = "D:/vhdl_github_2/vhdl_github_2/p2/p1/div1.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1258338084_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_3620187407_sub_4060537613_3965413181(char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_767740470_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_0904834510_3212880686_p_0(char *t0)
{
    char t22[16];
    char t24[16];
    char t30[16];
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
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    int t16;
    int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned char t21;
    char *t23;
    char *t25;
    char *t26;
    int t27;
    unsigned int t28;
    char *t29;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;

LAB0:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t4 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:    t1 = (t0 + 992U);
    t4 = ieee_p_2592010699_sub_1258338084_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t4 == 1)
        goto LAB32;

LAB33:    t3 = (unsigned char)0;

LAB34:    if (t3 != 0)
        goto LAB30;

LAB31:
LAB3:    t1 = (t0 + 4352);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 7244);
    t6 = (t0 + 4432);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 32U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(60, ng0);
    t1 = (t0 + 7276);
    t5 = (t0 + 4496);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 32U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(61, ng0);
    t1 = (t0 + 7308);
    t5 = (t0 + 4560);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 32U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(62, ng0);
    t1 = (t0 + 7340);
    t5 = (t0 + 3048U);
    t6 = *((char **)t5);
    t5 = (t6 + 0);
    memcpy(t5, t1, 32U);
    xsi_set_current_line(63, ng0);
    t1 = (t0 + 2928U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 31;
    goto LAB3;

LAB5:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2152U);
    t6 = *((char **)t2);
    t13 = (31 - 30);
    t14 = (t13 * 1U);
    t15 = (0 + t14);
    t2 = (t6 + t15);
    t7 = (t0 + 1352U);
    t8 = *((char **)t7);
    t7 = (t0 + 2928U);
    t9 = *((char **)t7);
    t16 = *((int *)t9);
    t17 = (t16 - 31);
    t18 = (t17 * -1);
    xsi_vhdl_check_range_of_index(31, 0, -1, t16);
    t19 = (1U * t18);
    t20 = (0 + t19);
    t7 = (t8 + t20);
    t21 = *((unsigned char *)t7);
    t23 = ((IEEE_P_2592010699) + 4024);
    t25 = (t24 + 0U);
    t26 = (t25 + 0U);
    *((int *)t26) = 30;
    t26 = (t25 + 4U);
    *((int *)t26) = 0;
    t26 = (t25 + 8U);
    *((int *)t26) = -1;
    t27 = (0 - 30);
    t28 = (t27 * -1);
    t28 = (t28 + 1);
    t26 = (t25 + 12U);
    *((unsigned int *)t26) = t28;
    t10 = xsi_base_array_concat(t10, t22, t23, (char)97, t2, t24, (char)99, t21, (char)101);
    t26 = (t0 + 3048U);
    t29 = *((char **)t26);
    t26 = (t29 + 0);
    t28 = (31U + 1U);
    memcpy(t26, t10, t28);
    xsi_set_current_line(67, ng0);
    t1 = (t0 + 3048U);
    t2 = *((char **)t1);
    t1 = (t0 + 6988U);
    t5 = (t0 + 1192U);
    t6 = *((char **)t5);
    t5 = (t0 + 6860U);
    t3 = ieee_p_3620187407_sub_4060537613_3965413181(IEEE_P_3620187407, t2, t1, t6, t5);
    if (t3 != 0)
        goto LAB10;

LAB12:    xsi_set_current_line(79, ng0);
    t1 = (t0 + 3048U);
    t2 = *((char **)t1);
    t13 = (31 - 31);
    t14 = (t13 * 1U);
    t15 = (0 + t14);
    t1 = (t2 + t15);
    t5 = (t24 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 31;
    t6 = (t5 + 4U);
    *((int *)t6) = 0;
    t6 = (t5 + 8U);
    *((int *)t6) = -1;
    t16 = (0 - 31);
    t18 = (t16 * -1);
    t18 = (t18 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t18;
    t6 = (t0 + 7372);
    t8 = (t30 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 31;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t17 = (31 - 0);
    t18 = (t17 * 1);
    t18 = (t18 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t18;
    t9 = ieee_p_3620187407_sub_767740470_3965413181(IEEE_P_3620187407, t22, t1, t24, t6, t30);
    t10 = (t22 + 12U);
    t18 = *((unsigned int *)t10);
    t19 = (1U * t18);
    t3 = (32U != t19);
    if (t3 == 1)
        goto LAB21;

LAB22:    t23 = (t0 + 4496);
    t25 = (t23 + 56U);
    t26 = *((char **)t25);
    t29 = (t26 + 56U);
    t32 = *((char **)t29);
    memcpy(t32, t9, 32U);
    xsi_driver_first_trans_fast(t23);
    xsi_set_current_line(80, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t13 = (31 - 30);
    t14 = (t13 * 1U);
    t15 = (0 + t14);
    t1 = (t2 + t15);
    t6 = ((IEEE_P_2592010699) + 4024);
    t7 = (t24 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 30;
    t8 = (t7 + 4U);
    *((int *)t8) = 0;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t16 = (0 - 30);
    t18 = (t16 * -1);
    t18 = (t18 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t18;
    t5 = xsi_base_array_concat(t5, t22, t6, (char)97, t1, t24, (char)99, (unsigned char)2, (char)101);
    t18 = (31U + 1U);
    t3 = (32U != t18);
    if (t3 == 1)
        goto LAB23;

LAB24:    t8 = (t0 + 4560);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t23 = (t10 + 56U);
    t25 = *((char **)t23);
    memcpy(t25, t5, 32U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(81, ng0);
    t1 = (t0 + 2928U);
    t2 = *((char **)t1);
    t16 = *((int *)t2);
    t17 = (t16 - 1);
    t1 = (t0 + 2928U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = t17;
    xsi_set_current_line(84, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t13 = (31 - 30);
    t14 = (t13 * 1U);
    t15 = (0 + t14);
    t1 = (t2 + t15);
    t6 = ((IEEE_P_2592010699) + 4024);
    t7 = (t24 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 30;
    t8 = (t7 + 4U);
    *((int *)t8) = 0;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t16 = (0 - 30);
    t18 = (t16 * -1);
    t18 = (t18 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t18;
    t5 = xsi_base_array_concat(t5, t22, t6, (char)97, t1, t24, (char)99, (unsigned char)2, (char)101);
    t18 = (31U + 1U);
    t3 = (32U != t18);
    if (t3 == 1)
        goto LAB25;

LAB26:    t8 = (t0 + 4624);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t23 = (t10 + 56U);
    t25 = *((char **)t23);
    memcpy(t25, t5, 32U);
    xsi_driver_first_trans_fast_port(t8);
    xsi_set_current_line(85, ng0);
    t1 = (t0 + 3048U);
    t2 = *((char **)t1);
    t13 = (31 - 31);
    t14 = (t13 * 1U);
    t15 = (0 + t14);
    t1 = (t2 + t15);
    t5 = (t0 + 4688);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 32U);
    xsi_driver_first_trans_fast_port(t5);

LAB11:    xsi_set_current_line(89, ng0);
    t1 = (t0 + 2928U);
    t2 = *((char **)t1);
    t16 = *((int *)t2);
    t3 = (t16 < 0);
    if (t3 != 0)
        goto LAB27;

LAB29:
LAB28:    goto LAB3;

LAB7:    t2 = (t0 + 1992U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB9;

LAB10:    xsi_set_current_line(68, ng0);
    t7 = (t0 + 3048U);
    t8 = *((char **)t7);
    t13 = (31 - 31);
    t14 = (t13 * 1U);
    t15 = (0 + t14);
    t7 = (t8 + t15);
    t9 = (t24 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 31;
    t10 = (t9 + 4U);
    *((int *)t10) = 0;
    t10 = (t9 + 8U);
    *((int *)t10) = -1;
    t16 = (0 - 31);
    t18 = (t16 * -1);
    t18 = (t18 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t18;
    t10 = (t0 + 1192U);
    t23 = *((char **)t10);
    t18 = (31 - 31);
    t19 = (t18 * 1U);
    t20 = (0 + t19);
    t10 = (t23 + t20);
    t25 = (t30 + 0U);
    t26 = (t25 + 0U);
    *((int *)t26) = 31;
    t26 = (t25 + 4U);
    *((int *)t26) = 0;
    t26 = (t25 + 8U);
    *((int *)t26) = -1;
    t17 = (0 - 31);
    t28 = (t17 * -1);
    t28 = (t28 + 1);
    t26 = (t25 + 12U);
    *((unsigned int *)t26) = t28;
    t26 = ieee_p_3620187407_sub_767740470_3965413181(IEEE_P_3620187407, t22, t7, t24, t10, t30);
    t29 = (t22 + 12U);
    t28 = *((unsigned int *)t29);
    t31 = (1U * t28);
    t4 = (32U != t31);
    if (t4 == 1)
        goto LAB13;

LAB14:    t32 = (t0 + 4496);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    memcpy(t36, t26, 32U);
    xsi_driver_first_trans_fast(t32);
    xsi_set_current_line(69, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t13 = (31 - 30);
    t14 = (t13 * 1U);
    t15 = (0 + t14);
    t1 = (t2 + t15);
    t6 = ((IEEE_P_2592010699) + 4024);
    t7 = (t24 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 30;
    t8 = (t7 + 4U);
    *((int *)t8) = 0;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t16 = (0 - 30);
    t18 = (t16 * -1);
    t18 = (t18 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t18;
    t5 = xsi_base_array_concat(t5, t22, t6, (char)97, t1, t24, (char)99, (unsigned char)3, (char)101);
    t18 = (31U + 1U);
    t3 = (32U != t18);
    if (t3 == 1)
        goto LAB15;

LAB16:    t8 = (t0 + 4560);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t23 = (t10 + 56U);
    t25 = *((char **)t23);
    memcpy(t25, t5, 32U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(71, ng0);
    t1 = (t0 + 2928U);
    t2 = *((char **)t1);
    t16 = *((int *)t2);
    t17 = (t16 - 1);
    t1 = (t0 + 2928U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = t17;
    xsi_set_current_line(74, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t13 = (31 - 30);
    t14 = (t13 * 1U);
    t15 = (0 + t14);
    t1 = (t2 + t15);
    t6 = ((IEEE_P_2592010699) + 4024);
    t7 = (t24 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 30;
    t8 = (t7 + 4U);
    *((int *)t8) = 0;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t16 = (0 - 30);
    t18 = (t16 * -1);
    t18 = (t18 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t18;
    t5 = xsi_base_array_concat(t5, t22, t6, (char)97, t1, t24, (char)99, (unsigned char)3, (char)101);
    t18 = (31U + 1U);
    t3 = (32U != t18);
    if (t3 == 1)
        goto LAB17;

LAB18:    t8 = (t0 + 4624);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t23 = (t10 + 56U);
    t25 = *((char **)t23);
    memcpy(t25, t5, 32U);
    xsi_driver_first_trans_fast_port(t8);
    xsi_set_current_line(75, ng0);
    t1 = (t0 + 3048U);
    t2 = *((char **)t1);
    t13 = (31 - 31);
    t14 = (t13 * 1U);
    t15 = (0 + t14);
    t1 = (t2 + t15);
    t5 = (t24 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 31;
    t6 = (t5 + 4U);
    *((int *)t6) = 0;
    t6 = (t5 + 8U);
    *((int *)t6) = -1;
    t16 = (0 - 31);
    t18 = (t16 * -1);
    t18 = (t18 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t18;
    t6 = (t0 + 1192U);
    t7 = *((char **)t6);
    t18 = (31 - 31);
    t19 = (t18 * 1U);
    t20 = (0 + t19);
    t6 = (t7 + t20);
    t8 = (t30 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 31;
    t9 = (t8 + 4U);
    *((int *)t9) = 0;
    t9 = (t8 + 8U);
    *((int *)t9) = -1;
    t17 = (0 - 31);
    t28 = (t17 * -1);
    t28 = (t28 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t28;
    t9 = ieee_p_3620187407_sub_767740470_3965413181(IEEE_P_3620187407, t22, t1, t24, t6, t30);
    t10 = (t22 + 12U);
    t28 = *((unsigned int *)t10);
    t31 = (1U * t28);
    t3 = (32U != t31);
    if (t3 == 1)
        goto LAB19;

LAB20:    t23 = (t0 + 4688);
    t25 = (t23 + 56U);
    t26 = *((char **)t25);
    t29 = (t26 + 56U);
    t32 = *((char **)t29);
    memcpy(t32, t9, 32U);
    xsi_driver_first_trans_fast_port(t23);
    goto LAB11;

LAB13:    xsi_size_not_matching(32U, t31, 0);
    goto LAB14;

LAB15:    xsi_size_not_matching(32U, t18, 0);
    goto LAB16;

LAB17:    xsi_size_not_matching(32U, t18, 0);
    goto LAB18;

LAB19:    xsi_size_not_matching(32U, t31, 0);
    goto LAB20;

LAB21:    xsi_size_not_matching(32U, t19, 0);
    goto LAB22;

LAB23:    xsi_size_not_matching(32U, t18, 0);
    goto LAB24;

LAB25:    xsi_size_not_matching(32U, t18, 0);
    goto LAB26;

LAB27:    xsi_set_current_line(90, ng0);
    t1 = (t0 + 7404);
    t6 = (t0 + 4432);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 32U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(91, ng0);
    t1 = (t0 + 7436);
    t5 = (t0 + 4496);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 32U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(92, ng0);
    t1 = (t0 + 7468);
    t5 = (t0 + 4560);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 32U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(93, ng0);
    t1 = (t0 + 7500);
    t5 = (t0 + 3048U);
    t6 = *((char **)t5);
    t5 = (t6 + 0);
    memcpy(t5, t1, 32U);
    xsi_set_current_line(94, ng0);
    t1 = (t0 + 2928U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 31;
    goto LAB28;

LAB30:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 2312U);
    t6 = *((char **)t2);
    t2 = (t0 + 4432);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t6, 32U);
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

LAB32:    t2 = (t0 + 1992U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB34;

}


extern void work_a_0904834510_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0904834510_3212880686_p_0};
	xsi_register_didat("work_a_0904834510_3212880686", "isim/Test_p1_2_isim_beh.exe.sim/work/a_0904834510_3212880686.didat");
	xsi_register_executes(pe);
}
