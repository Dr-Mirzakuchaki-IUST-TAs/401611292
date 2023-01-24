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
static const char *ng0 = "Function to_natural ended without a return statement";
static const char *ng1 = "C:/Users/meysam/Desktop/Project/6-final/Final_Project_401611292/spi_commands.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );
char *ieee_p_1242562249_sub_1919365254_1035706684(char *, char *, char *, char *, int );
unsigned char ieee_p_1242562249_sub_2110375371_1035706684(char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


int work_a_3063945713_3212880686_sub_2900996307_3057020925(char *t1, unsigned char t2)
{
    char t4[8];
    int t0;
    char *t5;
    unsigned char t6;

LAB0:    t5 = (t4 + 4U);
    *((unsigned char *)t5) = t2;
    t6 = (t2 == (unsigned char)3);
    if (t6 != 0)
        goto LAB2;

LAB4:    t0 = 0;

LAB1:    return t0;
LAB2:    t0 = 1;
    goto LAB1;

LAB3:    xsi_error(ng0);
    t0 = 0;
    goto LAB1;

LAB5:    goto LAB3;

LAB6:    goto LAB3;

}

static void work_a_3063945713_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(100, ng1);

LAB3:    t1 = (t0 + 4712U);
    t2 = *((char **)t1);
    t1 = (t0 + 9512);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 16U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 9352);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3063945713_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(101, ng1);

LAB3:    t1 = (t0 + 5352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9576);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 9368);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3063945713_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned char t14;
    unsigned char t15;
    static char *nl0[] = {&&LAB8, &&LAB9, &&LAB10, &&LAB11};

LAB0:    xsi_set_current_line(128, ng1);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 9384);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(129, ng1);
    t1 = (t0 + 9640);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(132, ng1);
    t2 = (t0 + 3432U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t2 = (char *)((nl0) + t4);
    goto **((char **)t2);

LAB7:    goto LAB3;

LAB8:    xsi_set_current_line(134, ng1);
    t6 = (t0 + 1832U);
    t7 = *((char **)t6);
    t9 = *((unsigned char *)t7);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(137, ng1);
    t1 = (t0 + 9640);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB14:    goto LAB7;

LAB9:    xsi_set_current_line(141, ng1);
    t1 = (t0 + 9640);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB7;

LAB10:    xsi_set_current_line(144, ng1);
    t1 = (t0 + 5512U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t1 = (t0 + 5352U);
    t5 = *((char **)t1);
    t9 = *((unsigned char *)t5);
    t10 = (t4 != t9);
    if (t10 == 1)
        goto LAB19;

LAB20:    t3 = (unsigned char)0;

LAB21:    if (t3 != 0)
        goto LAB16;

LAB18:    xsi_set_current_line(147, ng1);
    t1 = (t0 + 9640);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB17:    goto LAB7;

LAB11:    xsi_set_current_line(151, ng1);
    t1 = (t0 + 9640);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB7;

LAB12:    goto LAB7;

LAB13:    xsi_set_current_line(135, ng1);
    t6 = (t0 + 9640);
    t8 = (t6 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)1;
    xsi_driver_first_trans_fast(t6);
    goto LAB14;

LAB16:    xsi_set_current_line(145, ng1);
    t1 = (t0 + 9640);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB17;

LAB19:    t1 = (t0 + 5352U);
    t6 = *((char **)t1);
    t14 = *((unsigned char *)t6);
    t15 = (t14 == (unsigned char)3);
    t3 = t15;
    goto LAB21;

}

static void work_a_3063945713_3212880686_p_3(char *t0)
{
    char t24[16];
    char t26[16];
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
    int t13;
    int t14;
    int t15;
    char *t16;
    int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t25;
    unsigned int t27;
    static char *nl0[] = {&&LAB8, &&LAB9, &&LAB10, &&LAB11};

LAB0:    xsi_set_current_line(159, ng1);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 9400);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(161, ng1);
    t1 = xsi_get_transient_memory(2U);
    memset(t1, 0, 2U);
    t5 = t1;
    memset(t5, (unsigned char)2, 2U);
    t6 = (t0 + 9704);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 2U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(162, ng1);
    t1 = xsi_get_transient_memory(6U);
    memset(t1, 0, 6U);
    t2 = t1;
    memset(t2, (unsigned char)2, 6U);
    t5 = (t0 + 9768);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 6U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(163, ng1);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)2, 8U);
    t5 = (t0 + 9832);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(164, ng1);
    t1 = (t0 + 9896);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(165, ng1);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t2 = t1;
    memset(t2, (unsigned char)2, 16U);
    t5 = (t0 + 9960);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 16U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(166, ng1);
    t1 = (t0 + 10024);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(167, ng1);
    t1 = (t0 + 10088);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(168, ng1);
    t1 = (t0 + 10152);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(172, ng1);
    t2 = (t0 + 9896);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(173, ng1);
    t1 = (t0 + 10088);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(175, ng1);
    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB7:    goto LAB3;

LAB8:    xsi_set_current_line(178, ng1);
    t5 = (t0 + 10024);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(179, ng1);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB12;

LAB14:
LAB13:    goto LAB7;

LAB9:    xsi_set_current_line(186, ng1);
    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 4232U);
    t5 = *((char **)t1);
    t4 = *((unsigned char *)t5);
    t11 = (t3 != t4);
    if (t11 != 0)
        goto LAB15;

LAB17:    xsi_set_current_line(206, ng1);
    t1 = (t0 + 9896);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB16:    goto LAB7;

LAB10:    xsi_set_current_line(210, ng1);
    t1 = (t0 + 5512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 5352U);
    t5 = *((char **)t1);
    t4 = *((unsigned char *)t5);
    t11 = (t3 != t4);
    if (t11 != 0)
        goto LAB35;

LAB37:
LAB36:    goto LAB7;

LAB11:    goto LAB7;

LAB12:    xsi_set_current_line(180, ng1);
    t1 = (t0 + 1352U);
    t5 = *((char **)t1);
    t1 = (t0 + 9704);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 2U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(181, ng1);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 9768);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 6U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(182, ng1);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 9832);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB13;

LAB15:    xsi_set_current_line(187, ng1);
    t1 = (t0 + 4232U);
    t6 = *((char **)t1);
    t12 = *((unsigned char *)t6);
    t1 = (t0 + 10024);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t12;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(189, ng1);
    t1 = (t0 + 5672U);
    t2 = *((char **)t1);
    t1 = (t0 + 17165);
    t13 = xsi_mem_cmp(t1, t2, 2U);
    if (t13 == 1)
        goto LAB19;

LAB24:    t6 = (t0 + 17167);
    t14 = xsi_mem_cmp(t6, t2, 2U);
    if (t14 == 1)
        goto LAB20;

LAB25:    t8 = (t0 + 17169);
    t15 = xsi_mem_cmp(t8, t2, 2U);
    if (t15 == 1)
        goto LAB21;

LAB26:    t10 = (t0 + 17171);
    t17 = xsi_mem_cmp(t10, t2, 2U);
    if (t17 == 1)
        goto LAB22;

LAB27:
LAB23:
LAB18:    xsi_set_current_line(204, ng1);
    t1 = (t0 + 9896);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB16;

LAB19:    xsi_set_current_line(191, ng1);
    t18 = (t0 + 3912U);
    t19 = *((char **)t18);
    t18 = (t0 + 9960);
    t20 = (t18 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t19, 16U);
    xsi_driver_first_trans_fast(t18);
    goto LAB18;

LAB20:    xsi_set_current_line(194, ng1);
    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    t1 = (t0 + 3912U);
    t5 = *((char **)t1);
    t6 = ((IEEE_P_2592010699) + 4024);
    t7 = (t0 + 16948U);
    t8 = (t0 + 16964U);
    t1 = xsi_base_array_concat(t1, t24, t6, (char)97, t2, t7, (char)97, t5, t8, (char)101);
    t25 = (6U + 8U);
    t3 = (16U != t25);
    if (t3 == 1)
        goto LAB29;

LAB30:    t9 = (t0 + 9960);
    t10 = (t9 + 56U);
    t16 = *((char **)t10);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t1, 16U);
    xsi_driver_first_trans_fast(t9);
    goto LAB18;

LAB21:    xsi_set_current_line(197, ng1);
    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t1 = (t0 + 3752U);
    t5 = *((char **)t1);
    t6 = ((IEEE_P_2592010699) + 4024);
    t7 = (t0 + 16932U);
    t8 = (t0 + 16948U);
    t1 = xsi_base_array_concat(t1, t24, t6, (char)97, t2, t7, (char)97, t5, t8, (char)101);
    t9 = (t0 + 3912U);
    t10 = *((char **)t9);
    t16 = ((IEEE_P_2592010699) + 4024);
    t18 = (t0 + 16964U);
    t9 = xsi_base_array_concat(t9, t26, t16, (char)97, t1, t24, (char)97, t10, t18, (char)101);
    t25 = (2U + 6U);
    t27 = (t25 + 8U);
    t3 = (16U != t27);
    if (t3 == 1)
        goto LAB31;

LAB32:    t19 = (t0 + 9960);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t9, 16U);
    xsi_driver_first_trans_fast(t19);
    goto LAB18;

LAB22:    xsi_set_current_line(200, ng1);
    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t1 = (t0 + 3912U);
    t5 = *((char **)t1);
    t6 = ((IEEE_P_2592010699) + 4024);
    t7 = (t0 + 16932U);
    t8 = (t0 + 16964U);
    t1 = xsi_base_array_concat(t1, t24, t6, (char)97, t2, t7, (char)97, t5, t8, (char)101);
    t25 = (2U + 8U);
    t3 = (16U != t25);
    if (t3 == 1)
        goto LAB33;

LAB34:    t9 = (t0 + 9960);
    t10 = (t9 + 56U);
    t16 = *((char **)t10);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t1, 16U);
    xsi_driver_first_trans_fast(t9);
    goto LAB18;

LAB28:;
LAB29:    xsi_size_not_matching(16U, t25, 0);
    goto LAB30;

LAB31:    xsi_size_not_matching(16U, t27, 0);
    goto LAB32;

LAB33:    xsi_size_not_matching(16U, t25, 0);
    goto LAB34;

LAB35:    xsi_set_current_line(211, ng1);
    t1 = (t0 + 5352U);
    t6 = *((char **)t1);
    t12 = *((unsigned char *)t6);
    t1 = (t0 + 10152);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t12;
    xsi_driver_first_trans_fast(t1);
    goto LAB36;

}

static void work_a_3063945713_3212880686_p_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned char t6;
    char *t7;
    char *t8;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5, &&LAB6};

LAB0:    xsi_set_current_line(224, ng1);
    t1 = (t0 + 10216);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(225, ng1);
    t1 = (t0 + 10280);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(227, ng1);
    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t6);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 9416);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(230, ng1);
    t3 = (t0 + 10216);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t3);
    goto LAB2;

LAB4:    goto LAB2;

LAB5:    goto LAB2;

LAB6:    xsi_set_current_line(234, ng1);
    t1 = (t0 + 10280);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

}

static void work_a_3063945713_3212880686_p_5(char *t0)
{
    char t5[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned char t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    int t18;

LAB0:    xsi_set_current_line(244, ng1);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB7;

LAB8:
LAB3:    t1 = (t0 + 9432);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(245, ng1);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t5, 0, 8);
    t6 = (8U != 8U);
    if (t6 == 1)
        goto LAB5;

LAB6:    t7 = (t0 + 10344);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 8U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(246, ng1);
    t1 = (t0 + 10408);
    t2 = (t1 + 56U);
    t7 = *((char **)t2);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(247, ng1);
    t1 = (t0 + 10472);
    t2 = (t1 + 56U);
    t7 = *((char **)t2);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

LAB5:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB6;

LAB7:    xsi_set_current_line(250, ng1);
    t2 = (t0 + 3432U);
    t7 = *((char **)t2);
    t4 = *((unsigned char *)t7);
    t6 = (t4 == (unsigned char)0);
    if (t6 != 0)
        goto LAB9;

LAB11:    t1 = (t0 + 4552U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB14;

LAB15:
LAB10:    xsi_set_current_line(258, ng1);
    t4 = ((unsigned char)3 == (unsigned char)3);
    if (t4 == 1)
        goto LAB21;

LAB22:    t3 = (unsigned char)0;

LAB23:    if (t3 != 0)
        goto LAB18;

LAB20:    t4 = ((unsigned char)3 == (unsigned char)3);
    if (t4 == 1)
        goto LAB29;

LAB30:    t3 = (unsigned char)0;

LAB31:    if (t3 != 0)
        goto LAB27;

LAB28:
LAB19:    xsi_set_current_line(268, ng1);
    t4 = ((unsigned char)3 == (unsigned char)2);
    if (t4 == 1)
        goto LAB38;

LAB39:    t3 = (unsigned char)0;

LAB40:    if (t3 != 0)
        goto LAB35;

LAB37:
LAB36:    xsi_set_current_line(272, ng1);
    t1 = (t0 + 5192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB41;

LAB43:
LAB42:    goto LAB3;

LAB9:    xsi_set_current_line(251, ng1);
    t2 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t5, 0, 8);
    t12 = (8U != 8U);
    if (t12 == 1)
        goto LAB12;

LAB13:    t8 = (t0 + 10344);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t13 = *((char **)t11);
    memcpy(t13, t2, 8U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(252, ng1);
    t1 = (t0 + 10408);
    t2 = (t1 + 56U);
    t7 = *((char **)t2);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB10;

LAB12:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB13;

LAB14:    xsi_set_current_line(254, ng1);
    t1 = (t0 + 5032U);
    t7 = *((char **)t1);
    t1 = (t0 + 17012U);
    t8 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t5, t7, t1, 1);
    t9 = (t5 + 12U);
    t14 = *((unsigned int *)t9);
    t15 = (1U * t14);
    t6 = (8U != t15);
    if (t6 == 1)
        goto LAB16;

LAB17:    t10 = (t0 + 10344);
    t11 = (t10 + 56U);
    t13 = *((char **)t11);
    t16 = (t13 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t8, 8U);
    xsi_driver_first_trans_fast(t10);
    goto LAB10;

LAB16:    xsi_size_not_matching(8U, t15, 0);
    goto LAB17;

LAB18:    xsi_set_current_line(259, ng1);
    t1 = (t0 + 5032U);
    t2 = *((char **)t1);
    t1 = (t0 + 17012U);
    t18 = (2 + 6);
    t7 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t5, t18, 8);
    t12 = ieee_p_1242562249_sub_2110375371_1035706684(IEEE_P_1242562249, t2, t1, t7, t5);
    if (t12 != 0)
        goto LAB24;

LAB26:
LAB25:    goto LAB19;

LAB21:    t6 = ((unsigned char)3 == (unsigned char)3);
    t3 = t6;
    goto LAB23;

LAB24:    xsi_set_current_line(260, ng1);
    t8 = (t0 + 10408);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t13 = *((char **)t11);
    *((unsigned char *)t13) = (unsigned char)3;
    xsi_driver_first_trans_fast(t8);
    goto LAB25;

LAB27:    xsi_set_current_line(263, ng1);
    t1 = (t0 + 5032U);
    t2 = *((char **)t1);
    t1 = (t0 + 17012U);
    t7 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t5, 2, 8);
    t12 = ieee_p_1242562249_sub_2110375371_1035706684(IEEE_P_1242562249, t2, t1, t7, t5);
    if (t12 != 0)
        goto LAB32;

LAB34:
LAB33:    goto LAB19;

LAB29:    t6 = ((unsigned char)3 == (unsigned char)2);
    t3 = t6;
    goto LAB31;

LAB32:    xsi_set_current_line(264, ng1);
    t8 = (t0 + 10408);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t13 = *((char **)t11);
    *((unsigned char *)t13) = (unsigned char)3;
    xsi_driver_first_trans_fast(t8);
    goto LAB33;

LAB35:    xsi_set_current_line(269, ng1);
    t1 = (t0 + 10408);
    t2 = (t1 + 56U);
    t7 = *((char **)t2);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB36;

LAB38:    t6 = ((unsigned char)3 == (unsigned char)2);
    t3 = t6;
    goto LAB40;

LAB41:    xsi_set_current_line(273, ng1);
    t1 = (t0 + 4552U);
    t7 = *((char **)t1);
    t6 = *((unsigned char *)t7);
    t1 = (t0 + 10472);
    t8 = (t1 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t6;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB42;

}


extern void work_a_3063945713_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3063945713_3212880686_p_0,(void *)work_a_3063945713_3212880686_p_1,(void *)work_a_3063945713_3212880686_p_2,(void *)work_a_3063945713_3212880686_p_3,(void *)work_a_3063945713_3212880686_p_4,(void *)work_a_3063945713_3212880686_p_5};
	static char *se[] = {(void *)work_a_3063945713_3212880686_sub_2900996307_3057020925};
	xsi_register_didat("work_a_3063945713_3212880686", "isim/AD4020_test_isim_beh.exe.sim/work/a_3063945713_3212880686.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
