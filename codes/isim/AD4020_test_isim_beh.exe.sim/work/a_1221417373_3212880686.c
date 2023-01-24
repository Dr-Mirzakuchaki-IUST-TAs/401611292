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
static const char *ng0 = "C:/Users/meysam/Desktop/Project/6-final/Final_Project_401611292/AD4020.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1258338084_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_1221417373_3212880686_p_0(char *t0)
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
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    static char *nl0[] = {&&LAB8, &&LAB9, &&LAB15, &&LAB13, &&LAB12, &&LAB11, &&LAB10, &&LAB14};

LAB0:    xsi_set_current_line(145, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1312U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 12048);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(146, ng0);
    t1 = (t0 + 12240);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(147, ng0);
    t1 = (t0 + 12304);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(149, ng0);
    t2 = (t0 + 4552U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t2 = (char *)((nl0) + t4);
    goto **((char **)t2);

LAB7:    goto LAB3;

LAB8:    xsi_set_current_line(151, ng0);
    t6 = (t0 + 4392U);
    t7 = *((char **)t6);
    t9 = *((unsigned char *)t7);
    t10 = (t9 == (unsigned char)2);
    if (t10 != 0)
        goto LAB16;

LAB18:    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB22;

LAB23:    xsi_set_current_line(159, ng0);
    t1 = (t0 + 12240);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB17:    goto LAB7;

LAB9:    xsi_set_current_line(162, ng0);
    t1 = (t0 + 12240);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)6;
    xsi_driver_first_trans_fast(t1);
    goto LAB7;

LAB10:    xsi_set_current_line(164, ng0);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB24;

LAB26:    xsi_set_current_line(167, ng0);
    t1 = (t0 + 12240);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)6;
    xsi_driver_first_trans_fast(t1);

LAB25:    goto LAB7;

LAB11:    xsi_set_current_line(170, ng0);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB27;

LAB29:    xsi_set_current_line(173, ng0);
    t1 = (t0 + 12240);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(174, ng0);
    t1 = (t0 + 12368);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(175, ng0);
    t1 = (t0 + 12432);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB28:    goto LAB7;

LAB12:    xsi_set_current_line(178, ng0);
    t1 = (t0 + 5192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    if (t3 != 0)
        goto LAB30;

LAB32:    xsi_set_current_line(181, ng0);
    t1 = (t0 + 12240);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);

LAB31:    goto LAB7;

LAB13:    xsi_set_current_line(184, ng0);
    t1 = (t0 + 5032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    if (t3 != 0)
        goto LAB33;

LAB35:    xsi_set_current_line(187, ng0);
    t1 = (t0 + 12240);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB34:    goto LAB7;

LAB14:    xsi_set_current_line(190, ng0);
    t1 = (t0 + 5672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    if (t3 != 0)
        goto LAB36;

LAB38:
LAB37:    goto LAB7;

LAB15:    xsi_set_current_line(194, ng0);
    t1 = (t0 + 12240);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB7;

LAB16:    xsi_set_current_line(152, ng0);
    t6 = (t0 + 5832U);
    t8 = *((char **)t6);
    t11 = *((unsigned char *)t8);
    if (t11 != 0)
        goto LAB19;

LAB21:
LAB20:    goto LAB17;

LAB19:    xsi_set_current_line(153, ng0);
    t6 = (t0 + 12240);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)1;
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(154, ng0);
    t1 = (t0 + 12304);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB20;

LAB22:    xsi_set_current_line(157, ng0);
    t1 = (t0 + 12240);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    goto LAB17;

LAB24:    xsi_set_current_line(165, ng0);
    t1 = (t0 + 12240);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)5;
    xsi_driver_first_trans_fast(t1);
    goto LAB25;

LAB27:    xsi_set_current_line(171, ng0);
    t1 = (t0 + 12240);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)5;
    xsi_driver_first_trans_fast(t1);
    goto LAB28;

LAB30:    xsi_set_current_line(179, ng0);
    t1 = (t0 + 12240);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB31;

LAB33:    xsi_set_current_line(185, ng0);
    t1 = (t0 + 12240);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)7;
    xsi_driver_first_trans_fast(t1);
    goto LAB34;

LAB36:    xsi_set_current_line(191, ng0);
    t1 = (t0 + 12240);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    goto LAB37;

}

static void work_a_1221417373_3212880686_p_1(char *t0)
{
    char t11[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t12;
    unsigned char t13;
    char *t14;
    int t15;
    unsigned char t16;
    int t17;
    int t18;
    int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    static char *nl0[] = {&&LAB6, &&LAB7, &&LAB13, &&LAB11, &&LAB10, &&LAB9, &&LAB8, &&LAB12};
    static char *nl1[] = {&&LAB37, &&LAB37, &&LAB37, &&LAB35, &&LAB37, &&LAB37, &&LAB37, &&LAB36};

LAB0:    xsi_set_current_line(203, ng0);
    t1 = (t0 + 1312U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(243, ng0);
    t1 = (t0 + 1312U);
    t2 = ieee_p_2592010699_sub_1258338084_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB31;

LAB33:
LAB32:    t1 = (t0 + 12064);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(204, ng0);
    t3 = (t0 + 4552U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t3 = (char *)((nl0) + t5);
    goto **((char **)t3);

LAB5:    goto LAB3;

LAB6:    goto LAB5;

LAB7:    xsi_set_current_line(207, ng0);
    t6 = (t0 + 12496);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(208, ng0);
    t1 = (t0 + 7088U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 6848U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ((IEEE_P_2592010699) + 4024);
    t1 = xsi_base_array_concat(t1, t11, t6, (char)99, t2, (char)99, t5, (char)101);
    t12 = (1U + 1U);
    t13 = (2U != t12);
    if (t13 == 1)
        goto LAB14;

LAB15:    t7 = (t0 + 12560);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t14 = *((char **)t10);
    memcpy(t14, t1, 2U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(209, ng0);
    t1 = (t0 + 6728U);
    t3 = *((char **)t1);
    t1 = (t0 + 12624);
    t4 = (t1 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t3, 6U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(210, ng0);
    t1 = (t0 + 7928U);
    t3 = *((char **)t1);
    t1 = (t0 + 12688);
    t4 = (t1 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t3, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB5;

LAB8:    xsi_set_current_line(212, ng0);
    t1 = (t0 + 12752);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(213, ng0);
    t1 = (t0 + 12496);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB5;

LAB9:    xsi_set_current_line(215, ng0);
    t1 = (t0 + 12752);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB5;

LAB10:    xsi_set_current_line(217, ng0);
    t1 = (t0 + 5352U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    if (t2 != 0)
        goto LAB16;

LAB18:    xsi_set_current_line(220, ng0);
    t1 = (t0 + 12496);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB17:    xsi_set_current_line(222, ng0);
    t1 = (t0 + 12880);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(223, ng0);
    t1 = (t0 + 5512U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    if (t2 != 0)
        goto LAB19;

LAB21:
LAB20:    goto LAB5;

LAB11:    xsi_set_current_line(231, ng0);
    t1 = (t0 + 12944);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(232, ng0);
    t1 = (t0 + 8048U);
    t3 = *((char **)t1);
    t15 = *((int *)t3);
    t2 = (t15 > 0);
    t5 = (!(t2));
    if (t5 != 0)
        goto LAB25;

LAB27:
LAB26:    goto LAB5;

LAB12:    xsi_set_current_line(236, ng0);
    t1 = (t0 + 12880);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(237, ng0);
    t1 = (t0 + 5672U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    if (t2 != 0)
        goto LAB28;

LAB30:
LAB29:    goto LAB5;

LAB13:    goto LAB5;

LAB14:    xsi_size_not_matching(2U, t12, 0);
    goto LAB15;

LAB16:    xsi_set_current_line(218, ng0);
    t1 = (t0 + 12816);
    t4 = (t1 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB17;

LAB19:    xsi_set_current_line(224, ng0);
    t1 = (t0 + 12816);
    t4 = (t1 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(225, ng0);
    t1 = (t0 + 12944);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(226, ng0);
    t1 = (t0 + 5192U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    if (t2 != 0)
        goto LAB22;

LAB24:
LAB23:    goto LAB20;

LAB22:    xsi_set_current_line(227, ng0);
    t1 = (t0 + 13008);
    t4 = (t1 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB23;

LAB25:    xsi_set_current_line(233, ng0);
    t1 = (t0 + 13008);
    t4 = (t1 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB26;

LAB28:    xsi_set_current_line(238, ng0);
    t1 = (t0 + 12496);
    t4 = (t1 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB29;

LAB31:    xsi_set_current_line(244, ng0);
    t3 = (t0 + 4552U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t3 = (char *)((nl1) + t5);
    goto **((char **)t3);

LAB34:    goto LAB32;

LAB35:    xsi_set_current_line(246, ng0);
    t6 = (t0 + 8048U);
    t7 = *((char **)t6);
    t15 = *((int *)t7);
    t13 = (t15 > 0);
    if (t13 != 0)
        goto LAB38;

LAB40:    xsi_set_current_line(250, ng0);
    t1 = (t0 + 13136);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);

LAB39:    goto LAB34;

LAB36:    xsi_set_current_line(253, ng0);
    t1 = (t0 + 13136);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(254, ng0);
    t1 = (t0 + 8048U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 20;
    goto LAB34;

LAB37:    goto LAB34;

LAB38:    xsi_set_current_line(247, ng0);
    t6 = (t0 + 1832U);
    t8 = *((char **)t6);
    t16 = *((unsigned char *)t8);
    t6 = (t0 + 8048U);
    t9 = *((char **)t6);
    t17 = *((int *)t9);
    t18 = (t17 - 1);
    t19 = (t18 - 19);
    t12 = (t19 * -1);
    t20 = (1 * t12);
    t21 = (0U + t20);
    t6 = (t0 + 13072);
    t10 = (t6 + 56U);
    t14 = *((char **)t10);
    t22 = (t14 + 56U);
    t23 = *((char **)t22);
    *((unsigned char *)t23) = t16;
    xsi_driver_first_trans_delta(t6, t21, 1, 0LL);
    xsi_set_current_line(248, ng0);
    t1 = (t0 + 8048U);
    t3 = *((char **)t1);
    t15 = *((int *)t3);
    t17 = (t15 - 1);
    t1 = (t0 + 8048U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = t17;
    goto LAB39;

}

static void work_a_1221417373_3212880686_p_2(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    int t13;
    int t14;
    static char *nl0[] = {&&LAB7, &&LAB9, &&LAB9, &&LAB9, &&LAB6, &&LAB9, &&LAB9, &&LAB8};

LAB0:    xsi_set_current_line(272, ng0);
    t1 = (t0 + 1312U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 12080);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(273, ng0);
    t3 = (t0 + 4552U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t3 = (char *)((nl0) + t5);
    goto **((char **)t3);

LAB5:    goto LAB3;

LAB6:    xsi_set_current_line(275, ng0);
    t6 = (t0 + 5352U);
    t7 = *((char **)t6);
    t8 = *((unsigned char *)t7);
    if (t8 != 0)
        goto LAB10;

LAB12:    t1 = (t0 + 9008U);
    t3 = *((char **)t1);
    t13 = *((int *)t3);
    t1 = (t0 + 8648U);
    t4 = *((char **)t1);
    t14 = *((int *)t4);
    t5 = (t13 == t14);
    if (t5 == 1)
        goto LAB15;

LAB16:    t1 = (t0 + 5512U);
    t6 = *((char **)t1);
    t8 = *((unsigned char *)t6);
    t2 = t8;

LAB17:    if (t2 != 0)
        goto LAB13;

LAB14:    xsi_set_current_line(281, ng0);
    t1 = (t0 + 9008U);
    t3 = *((char **)t1);
    t13 = *((int *)t3);
    t14 = (t13 + 1);
    t1 = (t0 + 9008U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = t14;

LAB11:    goto LAB5;

LAB7:    xsi_set_current_line(284, ng0);
    t1 = (t0 + 9008U);
    t3 = *((char **)t1);
    t13 = *((int *)t3);
    t1 = (t0 + 8888U);
    t4 = *((char **)t1);
    t14 = *((int *)t4);
    t5 = (t13 == t14);
    if (t5 == 1)
        goto LAB21;

LAB22:    t1 = (t0 + 5832U);
    t6 = *((char **)t1);
    t8 = *((unsigned char *)t6);
    t2 = t8;

LAB23:    if (t2 != 0)
        goto LAB18;

LAB20:    xsi_set_current_line(288, ng0);
    t1 = (t0 + 9008U);
    t3 = *((char **)t1);
    t13 = *((int *)t3);
    t14 = (t13 + 1);
    t1 = (t0 + 9008U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = t14;

LAB19:    goto LAB5;

LAB8:    xsi_set_current_line(291, ng0);
    t1 = (t0 + 9008U);
    t3 = *((char **)t1);
    t13 = *((int *)t3);
    t1 = (t0 + 8768U);
    t4 = *((char **)t1);
    t14 = *((int *)t4);
    t5 = (t13 == t14);
    if (t5 == 1)
        goto LAB27;

LAB28:    t1 = (t0 + 5672U);
    t6 = *((char **)t1);
    t8 = *((unsigned char *)t6);
    t2 = t8;

LAB29:    if (t2 != 0)
        goto LAB24;

LAB26:    xsi_set_current_line(295, ng0);
    t1 = (t0 + 9008U);
    t3 = *((char **)t1);
    t13 = *((int *)t3);
    t14 = (t13 + 1);
    t1 = (t0 + 9008U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = t14;

LAB25:    goto LAB5;

LAB9:    xsi_set_current_line(298, ng0);
    t1 = (t0 + 13200);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(299, ng0);
    t1 = (t0 + 9008U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(300, ng0);
    t1 = (t0 + 13264);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(301, ng0);
    t1 = (t0 + 13392);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(302, ng0);
    t1 = (t0 + 13328);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB5;

LAB10:    xsi_set_current_line(276, ng0);
    t6 = (t0 + 13200);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)0;
    xsi_driver_first_trans_fast(t6);
    goto LAB11;

LAB13:    xsi_set_current_line(278, ng0);
    t1 = (t0 + 13264);
    t7 = (t1 + 56U);
    t9 = *((char **)t7);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(279, ng0);
    t1 = (t0 + 9008U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 0;
    goto LAB11;

LAB15:    t2 = (unsigned char)1;
    goto LAB17;

LAB18:    xsi_set_current_line(285, ng0);
    t1 = (t0 + 13328);
    t7 = (t1 + 56U);
    t9 = *((char **)t7);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(286, ng0);
    t1 = (t0 + 9008U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 0;
    goto LAB19;

LAB21:    t2 = (unsigned char)1;
    goto LAB23;

LAB24:    xsi_set_current_line(292, ng0);
    t1 = (t0 + 13392);
    t7 = (t1 + 56U);
    t9 = *((char **)t7);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(293, ng0);
    t1 = (t0 + 9008U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 0;
    goto LAB25;

LAB27:    t2 = (unsigned char)1;
    goto LAB29;

}

static void work_a_1221417373_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned char t12;
    char *t13;
    unsigned char t14;
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

LAB0:    xsi_set_current_line(307, ng0);
    t1 = (t0 + 4712U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    if (t3 != 0)
        goto LAB3;

LAB4:    t10 = (t0 + 4872U);
    t11 = *((char **)t10);
    t12 = *((unsigned char *)t11);
    if (t12 != 0)
        goto LAB5;

LAB6:
LAB7:    t19 = (t0 + 13456);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    *((unsigned char *)t23) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t19);

LAB2:    t24 = (t0 + 12096);
    *((int *)t24) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 3432U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t1 = (t0 + 13456);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t5;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB5:    t10 = (t0 + 1352U);
    t13 = *((char **)t10);
    t14 = *((unsigned char *)t13);
    t10 = (t0 + 13456);
    t15 = (t10 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = t14;
    xsi_driver_first_trans_fast_port(t10);
    goto LAB2;

LAB8:    goto LAB2;

}

static void work_a_1221417373_3212880686_p_4(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(308, ng0);

LAB3:    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 13520);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 12112);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1221417373_3212880686_p_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(309, ng0);

LAB3:    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    t1 = (t0 + 13584);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 20U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 12128);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1221417373_3212880686_p_6(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(310, ng0);
    t1 = (t0 + 5992U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    if (t3 != 0)
        goto LAB3;

LAB4:
LAB5:    t10 = (t0 + 6312U);
    t11 = *((char **)t10);
    t12 = *((unsigned char *)t11);
    t10 = (t0 + 13648);
    t13 = (t10 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t12;
    xsi_driver_first_trans_fast_port(t10);

LAB2:    t17 = (t0 + 12144);
    *((int *)t17) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 6152U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t1 = (t0 + 13648);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t5;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_1221417373_3212880686_p_7(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(311, ng0);

LAB3:    t1 = (t0 + 3912U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 13712);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 12160);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_1221417373_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1221417373_3212880686_p_0,(void *)work_a_1221417373_3212880686_p_1,(void *)work_a_1221417373_3212880686_p_2,(void *)work_a_1221417373_3212880686_p_3,(void *)work_a_1221417373_3212880686_p_4,(void *)work_a_1221417373_3212880686_p_5,(void *)work_a_1221417373_3212880686_p_6,(void *)work_a_1221417373_3212880686_p_7};
	xsi_register_didat("work_a_1221417373_3212880686", "isim/AD4020_test_isim_beh.exe.sim/work/a_1221417373_3212880686.didat");
	xsi_register_executes(pe);
}
