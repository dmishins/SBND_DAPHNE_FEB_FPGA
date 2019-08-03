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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;
static const char *ng2 = "/media/dmishins/MISHINS/FROM14CPU/Desktop/AFEDM/ipcore_dir/LPDDR_Ctrl/user_design/rtl/iodrp_mcb_controller.vhd";

unsigned char ieee_p_2592010699_sub_3488546069778340532_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_3488768496604610246_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_374109322130769762_503743352(char *, unsigned char );
char *ieee_p_3620187407_sub_1496620905533649268_3965413181(char *, char *, char *, char *, char *, char *);


void work_a_0227624086_2128832208_sub_6802649168950182557_2884140613(char *t0, char *t1, char *t2, char *t3)
{
    char t4[128];
    char t5[40];
    char t6[16];
    char t11[16];
    char t14[16];
    char t19[16];
    char t47[16];
    char t48[16];
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    char *t12;
    int t13;
    char *t15;
    int t16;
    char *t17;
    char *t18;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned char t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    int t29;
    char *t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned char t36;
    unsigned char t37;
    char *t38;
    char *t40;
    char *t41;
    int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;

LAB0:    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 7;
    t8 = (t7 + 4U);
    *((int *)t8) = 0;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t9 = (0 - 7);
    t10 = (t9 * -1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t8 = (t11 + 0U);
    t12 = (t8 + 0U);
    *((int *)t12) = 8;
    t12 = (t8 + 4U);
    *((int *)t12) = 0;
    t12 = (t8 + 8U);
    *((int *)t12) = -1;
    t13 = (0 - 8);
    t10 = (t13 * -1);
    t10 = (t10 + 1);
    t12 = (t8 + 12U);
    *((unsigned int *)t12) = t10;
    t12 = (t14 + 0U);
    t15 = (t12 + 0U);
    *((int *)t15) = 8;
    t15 = (t12 + 4U);
    *((int *)t15) = 0;
    t15 = (t12 + 8U);
    *((int *)t15) = -1;
    t16 = (0 - 8);
    t10 = (t16 * -1);
    t10 = (t10 + 1);
    t15 = (t12 + 12U);
    *((unsigned int *)t15) = t10;
    t15 = (t4 + 4U);
    t17 = ((IEEE_P_2592010699) + 4000);
    t18 = (t15 + 88U);
    *((char **)t18) = t17;
    t20 = (t15 + 56U);
    *((char **)t20) = t19;
    xsi_type_set_default_value(t17, t19, t14);
    t21 = (t15 + 64U);
    *((char **)t21) = t14;
    t22 = (t15 + 80U);
    *((unsigned int *)t22) = 9U;
    t23 = (t5 + 4U);
    t24 = (t2 != 0);
    if (t24 == 1)
        goto LAB3;

LAB2:    t25 = (t5 + 12U);
    *((char **)t25) = t6;
    t26 = (t5 + 20U);
    *((char **)t26) = t3;
    t27 = (t5 + 28U);
    *((char **)t27) = t11;
    t28 = (t6 + 0U);
    t29 = *((int *)t28);
    t30 = (t6 + 8U);
    t31 = *((int *)t30);
    t32 = (0 - t29);
    t10 = (t32 * t31);
    t33 = (1U * t10);
    t34 = (0 + t33);
    t35 = (t2 + t34);
    t36 = *((unsigned char *)t35);
    t37 = (t36 == (unsigned char)3);
    if (t37 != 0)
        goto LAB4;

LAB6:    t7 = (t0 + 30335);
    t12 = (t15 + 56U);
    t17 = *((char **)t12);
    t12 = (t14 + 0U);
    t9 = *((int *)t12);
    t10 = (t9 - 1);
    t33 = (t10 * 1U);
    t34 = (0 + t33);
    t18 = (t17 + t34);
    memcpy(t18, t7, 2U);

LAB5:    t7 = (t6 + 0U);
    t9 = *((int *)t7);
    t10 = (t9 - 1);
    t33 = (t10 * 1U);
    t34 = (0 + t33);
    t8 = (t2 + t34);
    t12 = (t47 + 0U);
    t17 = (t12 + 0U);
    *((int *)t17) = 1;
    t17 = (t12 + 4U);
    *((int *)t17) = 0;
    t17 = (t12 + 8U);
    *((int *)t17) = -1;
    t13 = (0 - 1);
    t43 = (t13 * -1);
    t43 = (t43 + 1);
    t17 = (t12 + 12U);
    *((unsigned int *)t17) = t43;
    t17 = (t0 + 30337);
    t20 = (t48 + 0U);
    t21 = (t20 + 0U);
    *((int *)t21) = 0;
    t21 = (t20 + 4U);
    *((int *)t21) = 1;
    t21 = (t20 + 8U);
    *((int *)t21) = 1;
    t16 = (1 - 0);
    t43 = (t16 * 1);
    t43 = (t43 + 1);
    t21 = (t20 + 12U);
    *((unsigned int *)t21) = t43;
    t24 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t8, t47, t17, t48);
    if (t24 != 0)
        goto LAB7;

LAB9:    t7 = (t6 + 0U);
    t9 = *((int *)t7);
    t8 = (t6 + 8U);
    t13 = *((int *)t8);
    t16 = (1 - t9);
    t10 = (t16 * t13);
    t33 = (1U * t10);
    t34 = (0 + t33);
    t12 = (t2 + t34);
    t24 = *((unsigned char *)t12);
    t17 = (t15 + 56U);
    t18 = *((char **)t17);
    t17 = (t14 + 0U);
    t29 = *((int *)t17);
    t20 = (t14 + 8U);
    t31 = *((int *)t20);
    t32 = (1 - t29);
    t43 = (t32 * t31);
    t44 = (1U * t43);
    t45 = (0 + t44);
    t21 = (t18 + t45);
    t36 = *((unsigned char *)t21);
    t28 = ((IEEE_P_2592010699) + 4000);
    t22 = xsi_base_array_concat(t22, t47, t28, (char)99, t24, (char)99, t36, (char)101);
    t30 = (t15 + 56U);
    t35 = *((char **)t30);
    t30 = (t14 + 0U);
    t42 = *((int *)t30);
    t49 = (t42 - 2);
    t50 = (t49 * 1U);
    t51 = (0 + t50);
    t38 = (t35 + t51);
    t52 = (1U + 1U);
    memcpy(t38, t22, t52);

LAB8:    t7 = (t6 + 0U);
    t9 = *((int *)t7);
    t10 = (t9 - 2);
    t33 = (t10 * 1U);
    t34 = (0 + t33);
    t8 = (t2 + t34);
    t12 = (t47 + 0U);
    t17 = (t12 + 0U);
    *((int *)t17) = 2;
    t17 = (t12 + 4U);
    *((int *)t17) = 1;
    t17 = (t12 + 8U);
    *((int *)t17) = -1;
    t13 = (1 - 2);
    t43 = (t13 * -1);
    t43 = (t43 + 1);
    t17 = (t12 + 12U);
    *((unsigned int *)t17) = t43;
    t17 = (t0 + 30341);
    t20 = (t48 + 0U);
    t21 = (t20 + 0U);
    *((int *)t21) = 0;
    t21 = (t20 + 4U);
    *((int *)t21) = 1;
    t21 = (t20 + 8U);
    *((int *)t21) = 1;
    t16 = (1 - 0);
    t43 = (t16 * 1);
    t43 = (t43 + 1);
    t21 = (t20 + 12U);
    *((unsigned int *)t21) = t43;
    t24 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t8, t47, t17, t48);
    if (t24 != 0)
        goto LAB10;

LAB12:    t7 = (t6 + 0U);
    t9 = *((int *)t7);
    t8 = (t6 + 8U);
    t13 = *((int *)t8);
    t16 = (2 - t9);
    t10 = (t16 * t13);
    t33 = (1U * t10);
    t34 = (0 + t33);
    t12 = (t2 + t34);
    t24 = *((unsigned char *)t12);
    t17 = (t15 + 56U);
    t18 = *((char **)t17);
    t17 = (t14 + 0U);
    t29 = *((int *)t17);
    t20 = (t14 + 8U);
    t31 = *((int *)t20);
    t32 = (2 - t29);
    t43 = (t32 * t31);
    t44 = (1U * t43);
    t45 = (0 + t44);
    t21 = (t18 + t45);
    t36 = *((unsigned char *)t21);
    t28 = ((IEEE_P_2592010699) + 4000);
    t22 = xsi_base_array_concat(t22, t47, t28, (char)99, t24, (char)99, t36, (char)101);
    t30 = (t15 + 56U);
    t35 = *((char **)t30);
    t30 = (t14 + 0U);
    t42 = *((int *)t30);
    t49 = (t42 - 3);
    t50 = (t49 * 1U);
    t51 = (0 + t50);
    t38 = (t35 + t51);
    t52 = (1U + 1U);
    memcpy(t38, t22, t52);

LAB11:    t7 = (t6 + 0U);
    t9 = *((int *)t7);
    t10 = (t9 - 3);
    t33 = (t10 * 1U);
    t34 = (0 + t33);
    t8 = (t2 + t34);
    t12 = (t47 + 0U);
    t17 = (t12 + 0U);
    *((int *)t17) = 3;
    t17 = (t12 + 4U);
    *((int *)t17) = 2;
    t17 = (t12 + 8U);
    *((int *)t17) = -1;
    t13 = (2 - 3);
    t43 = (t13 * -1);
    t43 = (t43 + 1);
    t17 = (t12 + 12U);
    *((unsigned int *)t17) = t43;
    t17 = (t0 + 30345);
    t20 = (t48 + 0U);
    t21 = (t20 + 0U);
    *((int *)t21) = 0;
    t21 = (t20 + 4U);
    *((int *)t21) = 1;
    t21 = (t20 + 8U);
    *((int *)t21) = 1;
    t16 = (1 - 0);
    t43 = (t16 * 1);
    t43 = (t43 + 1);
    t21 = (t20 + 12U);
    *((unsigned int *)t21) = t43;
    t24 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t8, t47, t17, t48);
    if (t24 != 0)
        goto LAB13;

LAB15:    t7 = (t6 + 0U);
    t9 = *((int *)t7);
    t8 = (t6 + 8U);
    t13 = *((int *)t8);
    t16 = (3 - t9);
    t10 = (t16 * t13);
    t33 = (1U * t10);
    t34 = (0 + t33);
    t12 = (t2 + t34);
    t24 = *((unsigned char *)t12);
    t17 = (t15 + 56U);
    t18 = *((char **)t17);
    t17 = (t14 + 0U);
    t29 = *((int *)t17);
    t20 = (t14 + 8U);
    t31 = *((int *)t20);
    t32 = (3 - t29);
    t43 = (t32 * t31);
    t44 = (1U * t43);
    t45 = (0 + t44);
    t21 = (t18 + t45);
    t36 = *((unsigned char *)t21);
    t28 = ((IEEE_P_2592010699) + 4000);
    t22 = xsi_base_array_concat(t22, t47, t28, (char)99, t24, (char)99, t36, (char)101);
    t30 = (t15 + 56U);
    t35 = *((char **)t30);
    t30 = (t14 + 0U);
    t42 = *((int *)t30);
    t49 = (t42 - 4);
    t50 = (t49 * 1U);
    t51 = (0 + t50);
    t38 = (t35 + t51);
    t52 = (1U + 1U);
    memcpy(t38, t22, t52);

LAB14:    t7 = (t6 + 0U);
    t9 = *((int *)t7);
    t10 = (t9 - 4);
    t33 = (t10 * 1U);
    t34 = (0 + t33);
    t8 = (t2 + t34);
    t12 = (t47 + 0U);
    t17 = (t12 + 0U);
    *((int *)t17) = 4;
    t17 = (t12 + 4U);
    *((int *)t17) = 3;
    t17 = (t12 + 8U);
    *((int *)t17) = -1;
    t13 = (3 - 4);
    t43 = (t13 * -1);
    t43 = (t43 + 1);
    t17 = (t12 + 12U);
    *((unsigned int *)t17) = t43;
    t17 = (t0 + 30349);
    t20 = (t48 + 0U);
    t21 = (t20 + 0U);
    *((int *)t21) = 0;
    t21 = (t20 + 4U);
    *((int *)t21) = 1;
    t21 = (t20 + 8U);
    *((int *)t21) = 1;
    t16 = (1 - 0);
    t43 = (t16 * 1);
    t43 = (t43 + 1);
    t21 = (t20 + 12U);
    *((unsigned int *)t21) = t43;
    t24 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t8, t47, t17, t48);
    if (t24 != 0)
        goto LAB16;

LAB18:    t7 = (t6 + 0U);
    t9 = *((int *)t7);
    t8 = (t6 + 8U);
    t13 = *((int *)t8);
    t16 = (4 - t9);
    t10 = (t16 * t13);
    t33 = (1U * t10);
    t34 = (0 + t33);
    t12 = (t2 + t34);
    t24 = *((unsigned char *)t12);
    t17 = (t15 + 56U);
    t18 = *((char **)t17);
    t17 = (t14 + 0U);
    t29 = *((int *)t17);
    t20 = (t14 + 8U);
    t31 = *((int *)t20);
    t32 = (4 - t29);
    t43 = (t32 * t31);
    t44 = (1U * t43);
    t45 = (0 + t44);
    t21 = (t18 + t45);
    t36 = *((unsigned char *)t21);
    t28 = ((IEEE_P_2592010699) + 4000);
    t22 = xsi_base_array_concat(t22, t47, t28, (char)99, t24, (char)99, t36, (char)101);
    t30 = (t15 + 56U);
    t35 = *((char **)t30);
    t30 = (t14 + 0U);
    t42 = *((int *)t30);
    t49 = (t42 - 5);
    t50 = (t49 * 1U);
    t51 = (0 + t50);
    t38 = (t35 + t51);
    t52 = (1U + 1U);
    memcpy(t38, t22, t52);

LAB17:    t7 = (t6 + 0U);
    t9 = *((int *)t7);
    t10 = (t9 - 5);
    t33 = (t10 * 1U);
    t34 = (0 + t33);
    t8 = (t2 + t34);
    t12 = (t47 + 0U);
    t17 = (t12 + 0U);
    *((int *)t17) = 5;
    t17 = (t12 + 4U);
    *((int *)t17) = 4;
    t17 = (t12 + 8U);
    *((int *)t17) = -1;
    t13 = (4 - 5);
    t43 = (t13 * -1);
    t43 = (t43 + 1);
    t17 = (t12 + 12U);
    *((unsigned int *)t17) = t43;
    t17 = (t0 + 30353);
    t20 = (t48 + 0U);
    t21 = (t20 + 0U);
    *((int *)t21) = 0;
    t21 = (t20 + 4U);
    *((int *)t21) = 1;
    t21 = (t20 + 8U);
    *((int *)t21) = 1;
    t16 = (1 - 0);
    t43 = (t16 * 1);
    t43 = (t43 + 1);
    t21 = (t20 + 12U);
    *((unsigned int *)t21) = t43;
    t24 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t8, t47, t17, t48);
    if (t24 != 0)
        goto LAB19;

LAB21:    t7 = (t6 + 0U);
    t9 = *((int *)t7);
    t8 = (t6 + 8U);
    t13 = *((int *)t8);
    t16 = (5 - t9);
    t10 = (t16 * t13);
    t33 = (1U * t10);
    t34 = (0 + t33);
    t12 = (t2 + t34);
    t24 = *((unsigned char *)t12);
    t17 = (t15 + 56U);
    t18 = *((char **)t17);
    t17 = (t14 + 0U);
    t29 = *((int *)t17);
    t20 = (t14 + 8U);
    t31 = *((int *)t20);
    t32 = (5 - t29);
    t43 = (t32 * t31);
    t44 = (1U * t43);
    t45 = (0 + t44);
    t21 = (t18 + t45);
    t36 = *((unsigned char *)t21);
    t28 = ((IEEE_P_2592010699) + 4000);
    t22 = xsi_base_array_concat(t22, t47, t28, (char)99, t24, (char)99, t36, (char)101);
    t30 = (t15 + 56U);
    t35 = *((char **)t30);
    t30 = (t14 + 0U);
    t42 = *((int *)t30);
    t49 = (t42 - 6);
    t50 = (t49 * 1U);
    t51 = (0 + t50);
    t38 = (t35 + t51);
    t52 = (1U + 1U);
    memcpy(t38, t22, t52);

LAB20:    t7 = (t6 + 0U);
    t9 = *((int *)t7);
    t10 = (t9 - 6);
    t33 = (t10 * 1U);
    t34 = (0 + t33);
    t8 = (t2 + t34);
    t12 = (t47 + 0U);
    t17 = (t12 + 0U);
    *((int *)t17) = 6;
    t17 = (t12 + 4U);
    *((int *)t17) = 5;
    t17 = (t12 + 8U);
    *((int *)t17) = -1;
    t13 = (5 - 6);
    t43 = (t13 * -1);
    t43 = (t43 + 1);
    t17 = (t12 + 12U);
    *((unsigned int *)t17) = t43;
    t17 = (t0 + 30357);
    t20 = (t48 + 0U);
    t21 = (t20 + 0U);
    *((int *)t21) = 0;
    t21 = (t20 + 4U);
    *((int *)t21) = 1;
    t21 = (t20 + 8U);
    *((int *)t21) = 1;
    t16 = (1 - 0);
    t43 = (t16 * 1);
    t43 = (t43 + 1);
    t21 = (t20 + 12U);
    *((unsigned int *)t21) = t43;
    t24 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t8, t47, t17, t48);
    if (t24 != 0)
        goto LAB22;

LAB24:    t7 = (t6 + 0U);
    t9 = *((int *)t7);
    t8 = (t6 + 8U);
    t13 = *((int *)t8);
    t16 = (6 - t9);
    t10 = (t16 * t13);
    t33 = (1U * t10);
    t34 = (0 + t33);
    t12 = (t2 + t34);
    t24 = *((unsigned char *)t12);
    t17 = (t15 + 56U);
    t18 = *((char **)t17);
    t17 = (t14 + 0U);
    t29 = *((int *)t17);
    t20 = (t14 + 8U);
    t31 = *((int *)t20);
    t32 = (6 - t29);
    t43 = (t32 * t31);
    t44 = (1U * t43);
    t45 = (0 + t44);
    t21 = (t18 + t45);
    t36 = *((unsigned char *)t21);
    t28 = ((IEEE_P_2592010699) + 4000);
    t22 = xsi_base_array_concat(t22, t47, t28, (char)99, t24, (char)99, t36, (char)101);
    t30 = (t15 + 56U);
    t35 = *((char **)t30);
    t30 = (t14 + 0U);
    t42 = *((int *)t30);
    t49 = (t42 - 7);
    t50 = (t49 * 1U);
    t51 = (0 + t50);
    t38 = (t35 + t51);
    t52 = (1U + 1U);
    memcpy(t38, t22, t52);

LAB23:    t7 = (t6 + 0U);
    t9 = *((int *)t7);
    t10 = (t9 - 7);
    t33 = (t10 * 1U);
    t34 = (0 + t33);
    t8 = (t2 + t34);
    t12 = (t47 + 0U);
    t17 = (t12 + 0U);
    *((int *)t17) = 7;
    t17 = (t12 + 4U);
    *((int *)t17) = 6;
    t17 = (t12 + 8U);
    *((int *)t17) = -1;
    t13 = (6 - 7);
    t43 = (t13 * -1);
    t43 = (t43 + 1);
    t17 = (t12 + 12U);
    *((unsigned int *)t17) = t43;
    t17 = (t0 + 30361);
    t20 = (t48 + 0U);
    t21 = (t20 + 0U);
    *((int *)t21) = 0;
    t21 = (t20 + 4U);
    *((int *)t21) = 1;
    t21 = (t20 + 8U);
    *((int *)t21) = 1;
    t16 = (1 - 0);
    t43 = (t16 * 1);
    t43 = (t43 + 1);
    t21 = (t20 + 12U);
    *((unsigned int *)t21) = t43;
    t24 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t8, t47, t17, t48);
    if (t24 != 0)
        goto LAB25;

LAB27:    t7 = (t6 + 0U);
    t9 = *((int *)t7);
    t8 = (t6 + 8U);
    t13 = *((int *)t8);
    t16 = (7 - t9);
    t10 = (t16 * t13);
    t33 = (1U * t10);
    t34 = (0 + t33);
    t12 = (t2 + t34);
    t24 = *((unsigned char *)t12);
    t17 = (t15 + 56U);
    t18 = *((char **)t17);
    t17 = (t14 + 0U);
    t29 = *((int *)t17);
    t20 = (t14 + 8U);
    t31 = *((int *)t20);
    t32 = (7 - t29);
    t43 = (t32 * t31);
    t44 = (1U * t43);
    t45 = (0 + t44);
    t21 = (t18 + t45);
    t36 = *((unsigned char *)t21);
    t28 = ((IEEE_P_2592010699) + 4000);
    t22 = xsi_base_array_concat(t22, t47, t28, (char)99, t24, (char)99, t36, (char)101);
    t30 = (t15 + 56U);
    t35 = *((char **)t30);
    t30 = (t14 + 0U);
    t42 = *((int *)t30);
    t49 = (t42 - 8);
    t50 = (t49 * 1U);
    t51 = (0 + t50);
    t38 = (t35 + t51);
    t52 = (1U + 1U);
    memcpy(t38, t22, t52);

LAB26:
LAB1:    return;
LAB3:    *((char **)t23) = t2;
    goto LAB2;

LAB4:    t38 = (t0 + 30333);
    t40 = (t15 + 56U);
    t41 = *((char **)t40);
    t40 = (t14 + 0U);
    t42 = *((int *)t40);
    t43 = (t42 - 1);
    t44 = (t43 * 1U);
    t45 = (0 + t44);
    t46 = (t41 + t45);
    memcpy(t46, t38, 2U);
    goto LAB5;

LAB7:    t21 = (t0 + 30339);
    t28 = (t15 + 56U);
    t30 = *((char **)t28);
    t28 = (t14 + 0U);
    t29 = *((int *)t28);
    t43 = (t29 - 2);
    t44 = (t43 * 1U);
    t45 = (0 + t44);
    t35 = (t30 + t45);
    memcpy(t35, t21, 2U);
    goto LAB8;

LAB10:    t21 = (t0 + 30343);
    t28 = (t15 + 56U);
    t30 = *((char **)t28);
    t28 = (t14 + 0U);
    t29 = *((int *)t28);
    t43 = (t29 - 3);
    t44 = (t43 * 1U);
    t45 = (0 + t44);
    t35 = (t30 + t45);
    memcpy(t35, t21, 2U);
    goto LAB11;

LAB13:    t21 = (t0 + 30347);
    t28 = (t15 + 56U);
    t30 = *((char **)t28);
    t28 = (t14 + 0U);
    t29 = *((int *)t28);
    t43 = (t29 - 4);
    t44 = (t43 * 1U);
    t45 = (0 + t44);
    t35 = (t30 + t45);
    memcpy(t35, t21, 2U);
    goto LAB14;

LAB16:    t21 = (t0 + 30351);
    t28 = (t15 + 56U);
    t30 = *((char **)t28);
    t28 = (t14 + 0U);
    t29 = *((int *)t28);
    t43 = (t29 - 5);
    t44 = (t43 * 1U);
    t45 = (0 + t44);
    t35 = (t30 + t45);
    memcpy(t35, t21, 2U);
    goto LAB17;

LAB19:    t21 = (t0 + 30355);
    t28 = (t15 + 56U);
    t30 = *((char **)t28);
    t28 = (t14 + 0U);
    t29 = *((int *)t28);
    t43 = (t29 - 6);
    t44 = (t43 * 1U);
    t45 = (0 + t44);
    t35 = (t30 + t45);
    memcpy(t35, t21, 2U);
    goto LAB20;

LAB22:    t21 = (t0 + 30359);
    t28 = (t15 + 56U);
    t30 = *((char **)t28);
    t28 = (t14 + 0U);
    t29 = *((int *)t28);
    t43 = (t29 - 7);
    t44 = (t43 * 1U);
    t45 = (0 + t44);
    t35 = (t30 + t45);
    memcpy(t35, t21, 2U);
    goto LAB23;

LAB25:    t21 = (t0 + 30363);
    t28 = (t15 + 56U);
    t30 = *((char **)t28);
    t28 = (t14 + 0U);
    t29 = *((int *)t28);
    t43 = (t29 - 8);
    t44 = (t43 * 1U);
    t45 = (0 + t44);
    t35 = (t30 + t45);
    memcpy(t35, t21, 2U);
    goto LAB26;

}

static void work_a_0227624086_2128832208_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(254, ng2);

LAB3:    t1 = (t0 + 6152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 16080);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 15696);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0227624086_2128832208_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(255, ng2);

LAB3:    t1 = (t0 + 6312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 16144);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 15712);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0227624086_2128832208_p_2(char *t0)
{
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
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(288, ng2);
    t2 = (t0 + 2432U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 15728);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(289, ng2);
    t4 = (t0 + 5192U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)0);
    if (t10 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 2472U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(290, ng2);
    t4 = (t0 + 1032U);
    t11 = *((char **)t4);
    t4 = (t0 + 16208);
    t12 = (t4 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t11, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(291, ng2);
    t2 = (t0 + 1192U);
    t4 = *((char **)t2);
    t2 = (t0 + 16272);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 8U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(292, ng2);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 16336);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

}

static void work_a_0227624086_2128832208_p_3(char *t0)
{
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
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(297, ng2);
    t1 = (t0 + 5192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)0);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t9 = (t0 + 16400);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t9);

LAB2:    t14 = (t0 + 15744);
    *((int *)t14) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 16400);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_0227624086_2128832208_p_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    int t6;
    char *t7;
    int t8;
    char *t9;
    int t10;
    char *t11;
    int t12;
    char *t13;
    int t14;
    char *t15;
    int t16;
    char *t17;
    int t18;
    char *t19;
    int t20;
    char *t21;
    int t22;
    char *t23;
    int t24;
    char *t25;
    int t26;
    char *t27;
    int t28;
    char *t29;
    int t30;
    char *t31;
    int t32;
    char *t33;
    int t34;
    char *t35;
    int t36;
    char *t37;
    int t38;
    char *t39;
    int t40;
    char *t41;
    int t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;

LAB0:    xsi_set_current_line(302, ng2);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 7408U);
    t3 = *((char **)t1);
    t4 = xsi_mem_cmp(t3, t2, 5U);
    if (t4 == 1)
        goto LAB3;

LAB24:    t1 = (t0 + 7528U);
    t5 = *((char **)t1);
    t6 = xsi_mem_cmp(t5, t2, 5U);
    if (t6 == 1)
        goto LAB4;

LAB25:    t1 = (t0 + 7648U);
    t7 = *((char **)t1);
    t8 = xsi_mem_cmp(t7, t2, 5U);
    if (t8 == 1)
        goto LAB5;

LAB26:    t1 = (t0 + 7768U);
    t9 = *((char **)t1);
    t10 = xsi_mem_cmp(t9, t2, 5U);
    if (t10 == 1)
        goto LAB6;

LAB27:    t1 = (t0 + 7888U);
    t11 = *((char **)t1);
    t12 = xsi_mem_cmp(t11, t2, 5U);
    if (t12 == 1)
        goto LAB7;

LAB28:    t1 = (t0 + 8008U);
    t13 = *((char **)t1);
    t14 = xsi_mem_cmp(t13, t2, 5U);
    if (t14 == 1)
        goto LAB8;

LAB29:    t1 = (t0 + 8128U);
    t15 = *((char **)t1);
    t16 = xsi_mem_cmp(t15, t2, 5U);
    if (t16 == 1)
        goto LAB9;

LAB30:    t1 = (t0 + 8248U);
    t17 = *((char **)t1);
    t18 = xsi_mem_cmp(t17, t2, 5U);
    if (t18 == 1)
        goto LAB10;

LAB31:    t1 = (t0 + 8368U);
    t19 = *((char **)t1);
    t20 = xsi_mem_cmp(t19, t2, 5U);
    if (t20 == 1)
        goto LAB11;

LAB32:    t1 = (t0 + 8488U);
    t21 = *((char **)t1);
    t22 = xsi_mem_cmp(t21, t2, 5U);
    if (t22 == 1)
        goto LAB12;

LAB33:    t1 = (t0 + 8608U);
    t23 = *((char **)t1);
    t24 = xsi_mem_cmp(t23, t2, 5U);
    if (t24 == 1)
        goto LAB13;

LAB34:    t1 = (t0 + 8728U);
    t25 = *((char **)t1);
    t26 = xsi_mem_cmp(t25, t2, 5U);
    if (t26 == 1)
        goto LAB14;

LAB35:    t1 = (t0 + 8848U);
    t27 = *((char **)t1);
    t28 = xsi_mem_cmp(t27, t2, 5U);
    if (t28 == 1)
        goto LAB15;

LAB36:    t1 = (t0 + 8968U);
    t29 = *((char **)t1);
    t30 = xsi_mem_cmp(t29, t2, 5U);
    if (t30 == 1)
        goto LAB16;

LAB37:    t1 = (t0 + 9088U);
    t31 = *((char **)t1);
    t32 = xsi_mem_cmp(t31, t2, 5U);
    if (t32 == 1)
        goto LAB17;

LAB38:    t1 = (t0 + 9208U);
    t33 = *((char **)t1);
    t34 = xsi_mem_cmp(t33, t2, 5U);
    if (t34 == 1)
        goto LAB18;

LAB39:    t1 = (t0 + 9328U);
    t35 = *((char **)t1);
    t36 = xsi_mem_cmp(t35, t2, 5U);
    if (t36 == 1)
        goto LAB19;

LAB40:    t1 = (t0 + 9448U);
    t37 = *((char **)t1);
    t38 = xsi_mem_cmp(t37, t2, 5U);
    if (t38 == 1)
        goto LAB20;

LAB41:    t1 = (t0 + 9568U);
    t39 = *((char **)t1);
    t40 = xsi_mem_cmp(t39, t2, 5U);
    if (t40 == 1)
        goto LAB21;

LAB42:    t1 = (t0 + 9688U);
    t41 = *((char **)t1);
    t42 = xsi_mem_cmp(t41, t2, 5U);
    if (t42 == 1)
        goto LAB22;

LAB43:
LAB23:    xsi_set_current_line(344, ng2);
    t1 = (t0 + 5512U);
    t2 = *((char **)t1);
    t1 = (t0 + 16464);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t2, 9U);
    xsi_driver_first_trans_fast(t1);

LAB2:    t1 = (t0 + 15760);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(304, ng2);
    t1 = (t0 + 5512U);
    t43 = *((char **)t1);
    t1 = (t0 + 16464);
    t44 = (t1 + 56U);
    t45 = *((char **)t44);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    memcpy(t47, t43, 9U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB4:    xsi_set_current_line(306, ng2);
    t1 = (t0 + 5512U);
    t2 = *((char **)t1);
    t1 = (t0 + 16464);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t2, 9U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB5:    xsi_set_current_line(308, ng2);
    t1 = (t0 + 5512U);
    t2 = *((char **)t1);
    t1 = (t0 + 16464);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t2, 9U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    xsi_set_current_line(310, ng2);
    t1 = (t0 + 5512U);
    t2 = *((char **)t1);
    t1 = (t0 + 16464);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t2, 9U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB7:    xsi_set_current_line(312, ng2);
    t1 = (t0 + 5512U);
    t2 = *((char **)t1);
    t1 = (t0 + 16464);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t2, 9U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB8:    xsi_set_current_line(314, ng2);
    t1 = (t0 + 5512U);
    t2 = *((char **)t1);
    t1 = (t0 + 16464);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t2, 9U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB9:    xsi_set_current_line(316, ng2);
    t1 = (t0 + 5512U);
    t2 = *((char **)t1);
    t1 = (t0 + 16464);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t2, 9U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB10:    xsi_set_current_line(318, ng2);
    t1 = (t0 + 5512U);
    t2 = *((char **)t1);
    t1 = (t0 + 16464);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t2, 9U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB11:    xsi_set_current_line(320, ng2);
    t1 = (t0 + 5512U);
    t2 = *((char **)t1);
    t1 = (t0 + 16464);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t2, 9U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB12:    xsi_set_current_line(322, ng2);
    t1 = (t0 + 5512U);
    t2 = *((char **)t1);
    t1 = (t0 + 16464);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t2, 9U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB13:    xsi_set_current_line(324, ng2);
    t1 = (t0 + 5512U);
    t2 = *((char **)t1);
    t1 = (t0 + 16464);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t2, 9U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB14:    xsi_set_current_line(326, ng2);
    t1 = (t0 + 5512U);
    t2 = *((char **)t1);
    t1 = (t0 + 16464);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t2, 9U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB15:    xsi_set_current_line(328, ng2);
    t1 = (t0 + 5512U);
    t2 = *((char **)t1);
    t1 = (t0 + 16464);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t2, 9U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB16:    xsi_set_current_line(330, ng2);
    t1 = (t0 + 5512U);
    t2 = *((char **)t1);
    t1 = (t0 + 16464);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t2, 9U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB17:    xsi_set_current_line(332, ng2);
    t1 = (t0 + 5512U);
    t2 = *((char **)t1);
    t1 = (t0 + 16464);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t2, 9U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB18:    xsi_set_current_line(334, ng2);
    t1 = (t0 + 5512U);
    t2 = *((char **)t1);
    t1 = (t0 + 16464);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t2, 9U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB19:    xsi_set_current_line(336, ng2);
    t1 = (t0 + 5512U);
    t2 = *((char **)t1);
    t1 = (t0 + 16464);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t2, 9U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB20:    xsi_set_current_line(338, ng2);
    t1 = (t0 + 5512U);
    t2 = *((char **)t1);
    t1 = (t0 + 16464);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t2, 9U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB21:    xsi_set_current_line(340, ng2);
    t1 = (t0 + 5512U);
    t2 = *((char **)t1);
    t1 = (t0 + 16464);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t2, 9U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB22:    xsi_set_current_line(342, ng2);
    t1 = (t0 + 5512U);
    t2 = *((char **)t1);
    t1 = (t0 + 16464);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t2, 9U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB44:;
}

static void work_a_0227624086_2128832208_p_5(char *t0)
{
    char t6[16];
    char t18[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned char t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;

LAB0:    xsi_set_current_line(349, ng2);
    t1 = (t0 + 4232U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB7:    t16 = (t0 + 3752U);
    t17 = *((char **)t16);
    t19 = ((IEEE_P_2592010699) + 4000);
    t20 = (t0 + 29784U);
    t16 = xsi_base_array_concat(t16, t18, t19, (char)99, (unsigned char)2, (char)97, t17, t20, (char)101);
    t21 = (1U + 8U);
    t22 = (9U != t21);
    if (t22 == 1)
        goto LAB9;

LAB10:    t23 = (t0 + 16528);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memcpy(t27, t16, 9U);
    xsi_driver_first_trans_fast(t23);

LAB2:    t28 = (t0 + 15776);
    *((int *)t28) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 3592U);
    t5 = *((char **)t1);
    t7 = ((IEEE_P_2592010699) + 4000);
    t8 = (t0 + 29768U);
    t1 = xsi_base_array_concat(t1, t6, t7, (char)99, (unsigned char)2, (char)97, t5, t8, (char)101);
    t9 = (1U + 8U);
    t10 = (9U != t9);
    if (t10 == 1)
        goto LAB5;

LAB6:    t11 = (t0 + 16528);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t1, 9U);
    xsi_driver_first_trans_fast(t11);
    goto LAB2;

LAB5:    xsi_size_not_matching(9U, t9, 0);
    goto LAB6;

LAB8:    goto LAB2;

LAB9:    xsi_size_not_matching(9U, t21, 0);
    goto LAB10;

}

static void work_a_0227624086_2128832208_p_6(char *t0)
{
    char t17[16];
    char t21[16];
    char t22[16];
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
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;

LAB0:    xsi_set_current_line(354, ng2);
    t2 = (t0 + 2432U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 15792);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(355, ng2);
    t4 = (t0 + 2312U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(358, ng2);
    t2 = (t0 + 4072U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(361, ng2);
    t2 = (t0 + 3272U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t5 = ((IEEE_P_2592010699) + 4000);
    t2 = xsi_base_array_concat(t2, t17, t5, (char)99, (unsigned char)2, (char)99, t1, (char)101);
    t8 = (t0 + 3912U);
    t11 = *((char **)t8);
    t18 = (8 - 7);
    t19 = (t18 * 1U);
    t20 = (0 + t19);
    t8 = (t11 + t20);
    t13 = ((IEEE_P_2592010699) + 4000);
    t14 = (t22 + 0U);
    t15 = (t14 + 0U);
    *((int *)t15) = 7;
    t15 = (t14 + 4U);
    *((int *)t15) = 1;
    t15 = (t14 + 8U);
    *((int *)t15) = -1;
    t23 = (1 - 7);
    t24 = (t23 * -1);
    t24 = (t24 + 1);
    t15 = (t14 + 12U);
    *((unsigned int *)t15) = t24;
    t12 = xsi_base_array_concat(t12, t21, t13, (char)97, t2, t17, (char)97, t8, t22, (char)101);
    t24 = (1U + 1U);
    t25 = (t24 + 7U);
    t3 = (9U != t25);
    if (t3 == 1)
        goto LAB14;

LAB15:    t15 = (t0 + 16592);
    t16 = (t15 + 56U);
    t26 = *((char **)t16);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t12, 9U);
    xsi_driver_first_trans_fast(t15);

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 2472U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(356, ng2);
    t4 = (t0 + 30365);
    t12 = (t0 + 16592);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t4, 9U);
    xsi_driver_first_trans_fast(t12);
    goto LAB9;

LAB11:    xsi_set_current_line(359, ng2);
    t2 = (t0 + 5672U);
    t5 = *((char **)t2);
    t2 = (t0 + 16592);
    t8 = (t2 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t5, 9U);
    xsi_driver_first_trans_fast(t2);
    goto LAB12;

LAB14:    xsi_size_not_matching(9U, t25, 0);
    goto LAB15;

}

static void work_a_0227624086_2128832208_p_7(char *t0)
{
    char t19[16];
    char t23[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    unsigned char t14;
    unsigned char t15;
    char *t16;
    unsigned char t17;
    unsigned char t18;
    char *t20;
    char *t21;
    char *t24;
    char *t25;
    int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned char t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;

LAB0:    xsi_set_current_line(370, ng2);
    t2 = (t0 + 2432U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 15808);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(371, ng2);
    t4 = (t0 + 5192U);
    t10 = *((char **)t4);
    t11 = *((unsigned char *)t10);
    t12 = (t11 == (unsigned char)2);
    if (t12 == 1)
        goto LAB14;

LAB15:    t4 = (t0 + 5192U);
    t13 = *((char **)t4);
    t14 = *((unsigned char *)t13);
    t15 = (t14 == (unsigned char)6);
    t9 = t15;

LAB16:    if (t9 == 1)
        goto LAB11;

LAB12:    t8 = (unsigned char)0;

LAB13:    if (t8 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(374, ng2);
    t2 = (t0 + 30377);
    t5 = (t0 + 16656);
    t10 = (t5 + 56U);
    t13 = *((char **)t10);
    t16 = (t13 + 56U);
    t20 = *((char **)t16);
    memcpy(t20, t2, 3U);
    xsi_driver_first_trans_fast(t5);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 2472U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(372, ng2);
    t4 = (t0 + 4392U);
    t20 = *((char **)t4);
    t4 = (t0 + 29816U);
    t21 = (t0 + 30374);
    t24 = (t23 + 0U);
    t25 = (t24 + 0U);
    *((int *)t25) = 0;
    t25 = (t24 + 4U);
    *((int *)t25) = 2;
    t25 = (t24 + 8U);
    *((int *)t25) = 1;
    t26 = (2 - 0);
    t27 = (t26 * 1);
    t27 = (t27 + 1);
    t25 = (t24 + 12U);
    *((unsigned int *)t25) = t27;
    t25 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t19, t20, t4, t21, t23);
    t28 = (t19 + 12U);
    t27 = *((unsigned int *)t28);
    t29 = (1U * t27);
    t30 = (3U != t29);
    if (t30 == 1)
        goto LAB17;

LAB18:    t31 = (t0 + 16656);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memcpy(t35, t25, 3U);
    xsi_driver_first_trans_fast(t31);
    goto LAB9;

LAB11:    t4 = (t0 + 2312U);
    t16 = *((char **)t4);
    t17 = *((unsigned char *)t16);
    t18 = (t17 == (unsigned char)2);
    t8 = t18;
    goto LAB13;

LAB14:    t9 = (unsigned char)1;
    goto LAB16;

LAB17:    xsi_size_not_matching(3U, t29, 0);
    goto LAB18;

}

static void work_a_0227624086_2128832208_p_8(char *t0)
{
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
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;

LAB0:    xsi_set_current_line(382, ng2);
    t2 = (t0 + 2432U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 15824);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(383, ng2);
    t4 = (t0 + 2312U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(386, ng2);
    t2 = (t0 + 5192U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)9);
    if (t3 != 0)
        goto LAB11;

LAB13:
LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 2472U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(384, ng2);
    t4 = (t0 + 30380);
    t12 = (t0 + 16720);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t4, 8U);
    xsi_driver_first_trans_fast_port(t12);
    goto LAB9;

LAB11:    xsi_set_current_line(387, ng2);
    t2 = (t0 + 3912U);
    t5 = *((char **)t2);
    t17 = (8 - 7);
    t18 = (t17 * 1U);
    t19 = (0 + t18);
    t2 = (t5 + t19);
    t8 = (t0 + 16720);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 8U);
    xsi_driver_first_trans_fast_port(t8);
    goto LAB12;

}

static void work_a_0227624086_2128832208_p_9(char *t0)
{
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
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(393, ng2);
    t1 = (t0 + 5192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)8);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t9 = (t0 + 16784);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast(t9);

LAB2:    t14 = (t0 + 15840);
    *((int *)t14) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 16784);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_0227624086_2128832208_p_10(char *t0)
{
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
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(394, ng2);
    t1 = (t0 + 5192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t9 = (t0 + 16848);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast(t9);

LAB2:    t14 = (t0 + 15856);
    *((int *)t14) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 16848);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_0227624086_2128832208_p_11(char *t0)
{
    char t5[16];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    xsi_set_current_line(395, ng2);
    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    t1 = (t0 + 29816U);
    t3 = (t0 + 30388);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 2;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (2 - 0);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t10 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t5);
    if (t10 != 0)
        goto LAB3;

LAB4:
LAB5:    t15 = (t0 + 16912);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)2;
    xsi_driver_first_trans_fast(t15);

LAB2:    t20 = (t0 + 15872);
    *((int *)t20) = 1;

LAB1:    return;
LAB3:    t7 = (t0 + 16912);
    t11 = (t7 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast(t7);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_0227624086_2128832208_p_12(char *t0)
{
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
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(399, ng2);
    t2 = (t0 + 2432U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 15888);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(400, ng2);
    t4 = (t0 + 2312U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(403, ng2);
    t2 = (t0 + 4712U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(408, ng2);
    t2 = (t0 + 6632U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 6792U);
    t5 = *((char **)t2);
    t3 = *((unsigned char *)t5);
    t6 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t1, t3);
    t2 = (t0 + 16976);
    t8 = (t2 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t6;
    xsi_driver_first_trans_fast(t2);

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 2472U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(401, ng2);
    t4 = (t0 + 16976);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    xsi_set_current_line(405, ng2);
    t2 = (t0 + 4712U);
    t5 = *((char **)t2);
    t6 = *((unsigned char *)t5);
    t2 = (t0 + 6472U);
    t8 = *((char **)t2);
    t7 = *((unsigned char *)t8);
    t9 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t7);
    t10 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t6, t9);
    t2 = (t0 + 16976);
    t11 = (t2 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = t10;
    xsi_driver_first_trans_fast(t2);
    goto LAB12;

}

static void work_a_0227624086_2128832208_p_13(char *t0)
{
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
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(414, ng2);
    t1 = (t0 + 5352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t9 = (t0 + 17040);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast(t9);

LAB2:    t14 = (t0 + 15904);
    *((int *)t14) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 17040);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_0227624086_2128832208_p_14(char *t0)
{
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
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(415, ng2);
    t1 = (t0 + 5352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)6);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t9 = (t0 + 17104);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast(t9);

LAB2:    t14 = (t0 + 15920);
    *((int *)t14) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 17104);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_0227624086_2128832208_p_15(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(421, ng2);
    t2 = (t0 + 2432U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 15936);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(422, ng2);
    t4 = (t0 + 6952U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (t0 + 17168);
    t10 = (t4 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t9;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(424, ng2);
    t2 = (t0 + 6952U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 7112U);
    t5 = *((char **)t2);
    t3 = *((unsigned char *)t5);
    t6 = ieee_p_2592010699_sub_3488546069778340532_503743352(IEEE_P_2592010699, t1, t3);
    t2 = (t0 + 17232);
    t8 = (t2 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t6;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(425, ng2);
    t2 = (t0 + 7112U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 4552U);
    t5 = *((char **)t2);
    t3 = *((unsigned char *)t5);
    t6 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t1, t3);
    t2 = (t0 + 17296);
    t8 = (t2 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t6;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(426, ng2);
    t2 = (t0 + 5192U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)0);
    if (t3 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 2472U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(427, ng2);
    t2 = (t0 + 1992U);
    t5 = *((char **)t2);
    t6 = *((unsigned char *)t5);
    t2 = (t0 + 17360);
    t8 = (t2 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t6;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB9;

}

static void work_a_0227624086_2128832208_p_16(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(433, ng2);
    t1 = (t0 + 6152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t16 = (t0 + 17424);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)2;
    xsi_driver_first_trans_fast(t16);

LAB2:    t21 = (t0 + 15952);
    *((int *)t21) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 3912U);
    t5 = *((char **)t1);
    t6 = (0 - 8);
    t7 = (t6 * -1);
    t8 = (1U * t7);
    t9 = (0 + t8);
    t1 = (t5 + t9);
    t10 = *((unsigned char *)t1);
    t11 = (t0 + 17424);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = t10;
    xsi_driver_first_trans_fast(t11);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_0227624086_2128832208_p_17(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    unsigned char t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned char t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    xsi_set_current_line(435, ng2);
    t1 = (t0 + 4552U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 6152U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 6312U);
    t7 = *((char **)t1);
    t8 = *((unsigned char *)t7);
    t9 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t8);
    t10 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t6, t9);
    t11 = (t10 == (unsigned char)3);
    if (t11 != 0)
        goto LAB3;

LAB4:
LAB5:    t18 = (t0 + 5832U);
    t19 = *((char **)t18);
    t20 = *((unsigned char *)t19);
    t18 = (t0 + 17488);
    t21 = (t18 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    *((unsigned char *)t24) = t20;
    xsi_driver_first_trans_fast_port(t18);

LAB2:    t25 = (t0 + 15968);
    *((int *)t25) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 3272U);
    t12 = *((char **)t1);
    t13 = *((unsigned char *)t12);
    t1 = (t0 + 17488);
    t14 = (t1 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = t13;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_0227624086_2128832208_p_18(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned char t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5, &&LAB6, &&LAB7, &&LAB8, &&LAB9, &&LAB10, &&LAB11, &&LAB12};

LAB0:    xsi_set_current_line(440, ng2);
    t1 = (t0 + 17552);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(441, ng2);
    t1 = (t0 + 17616);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(442, ng2);
    t1 = (t0 + 5192U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t6);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 15984);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(444, ng2);
    t3 = (t0 + 17616);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(445, ng2);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t9 = (t6 == (unsigned char)3);
    if (t9 != 0)
        goto LAB14;

LAB16:    xsi_set_current_line(448, ng2);
    t1 = (t0 + 17680);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB15:    goto LAB2;

LAB4:    xsi_set_current_line(451, ng2);
    t1 = (t0 + 17616);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(452, ng2);
    t1 = (t0 + 17552);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(453, ng2);
    t1 = (t0 + 17680);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB5:    xsi_set_current_line(457, ng2);
    t1 = (t0 + 17616);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(458, ng2);
    t1 = (t0 + 6792U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t9 = (t6 == (unsigned char)3);
    if (t9 != 0)
        goto LAB17;

LAB19:    xsi_set_current_line(469, ng2);
    t1 = (t0 + 17680);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB18:    goto LAB2;

LAB6:    xsi_set_current_line(472, ng2);
    t1 = (t0 + 17616);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(473, ng2);
    t1 = (t0 + 17680);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB7:    xsi_set_current_line(475, ng2);
    t1 = (t0 + 17616);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(476, ng2);
    t1 = (t0 + 17680);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)5;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB8:    xsi_set_current_line(478, ng2);
    t1 = (t0 + 17616);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(479, ng2);
    t1 = (t0 + 17680);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)6;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB9:    xsi_set_current_line(481, ng2);
    t1 = (t0 + 17616);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(482, ng2);
    t1 = (t0 + 6792U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t9 = (t6 == (unsigned char)3);
    if (t9 != 0)
        goto LAB26;

LAB28:    xsi_set_current_line(485, ng2);
    t1 = (t0 + 17680);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)6;
    xsi_driver_first_trans_fast(t1);

LAB27:    goto LAB2;

LAB10:    xsi_set_current_line(488, ng2);
    t1 = (t0 + 17616);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(489, ng2);
    t1 = (t0 + 17680);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)8;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB11:    xsi_set_current_line(491, ng2);
    t1 = (t0 + 17616);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(492, ng2);
    t1 = (t0 + 17680);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)9;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB12:    xsi_set_current_line(494, ng2);
    t1 = (t0 + 17616);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(495, ng2);
    t1 = (t0 + 17680);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB13:    xsi_set_current_line(497, ng2);
    t1 = (t0 + 17616);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(498, ng2);
    t1 = (t0 + 17680);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB14:    xsi_set_current_line(446, ng2);
    t1 = (t0 + 17680);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB15;

LAB17:    xsi_set_current_line(459, ng2);
    t1 = (t0 + 4552U);
    t3 = *((char **)t1);
    t10 = *((unsigned char *)t3);
    t11 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, (unsigned char)3, t10);
    t12 = (t11 == (unsigned char)3);
    if (t12 != 0)
        goto LAB20;

LAB22:    xsi_set_current_line(466, ng2);
    t1 = (t0 + 17680);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB21:    goto LAB18;

LAB20:    xsi_set_current_line(460, ng2);
    t1 = (t0 + 4712U);
    t4 = *((char **)t1);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)3);
    if (t14 != 0)
        goto LAB23;

LAB25:    xsi_set_current_line(463, ng2);
    t1 = (t0 + 17680);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);

LAB24:    goto LAB21;

LAB23:    xsi_set_current_line(461, ng2);
    t1 = (t0 + 17680);
    t5 = (t1 + 56U);
    t7 = *((char **)t5);
    t8 = (t7 + 56U);
    t15 = *((char **)t8);
    *((unsigned char *)t15) = (unsigned char)7;
    xsi_driver_first_trans_fast(t1);
    goto LAB24;

LAB26:    xsi_set_current_line(483, ng2);
    t1 = (t0 + 17680);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)7;
    xsi_driver_first_trans_fast(t1);
    goto LAB27;

}

static void work_a_0227624086_2128832208_p_19(char *t0)
{
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
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(505, ng2);
    t2 = (t0 + 2432U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 16000);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(506, ng2);
    t4 = (t0 + 2312U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(509, ng2);
    t2 = (t0 + 5352U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 17744);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 2472U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(507, ng2);
    t4 = (t0 + 17744);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)0;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

}


extern void work_a_0227624086_2128832208_init()
{
	static char *pe[] = {(void *)work_a_0227624086_2128832208_p_0,(void *)work_a_0227624086_2128832208_p_1,(void *)work_a_0227624086_2128832208_p_2,(void *)work_a_0227624086_2128832208_p_3,(void *)work_a_0227624086_2128832208_p_4,(void *)work_a_0227624086_2128832208_p_5,(void *)work_a_0227624086_2128832208_p_6,(void *)work_a_0227624086_2128832208_p_7,(void *)work_a_0227624086_2128832208_p_8,(void *)work_a_0227624086_2128832208_p_9,(void *)work_a_0227624086_2128832208_p_10,(void *)work_a_0227624086_2128832208_p_11,(void *)work_a_0227624086_2128832208_p_12,(void *)work_a_0227624086_2128832208_p_13,(void *)work_a_0227624086_2128832208_p_14,(void *)work_a_0227624086_2128832208_p_15,(void *)work_a_0227624086_2128832208_p_16,(void *)work_a_0227624086_2128832208_p_17,(void *)work_a_0227624086_2128832208_p_18,(void *)work_a_0227624086_2128832208_p_19};
	static char *se[] = {(void *)work_a_0227624086_2128832208_sub_6802649168950182557_2884140613};
	xsi_register_didat("work_a_0227624086_2128832208", "isim/AFE_Fpga_A_tb_isim_beh.exe.sim/work/a_0227624086_2128832208.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
