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
extern char *IEEE_P_3499444699;
static const char *ng1 = "Function initedgecount ended without a return statement";
extern char *UNISIM_P_3222816464;
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_13554554585326073636_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_3488546069778340532_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_3488768496604610246_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_374109322130769762_503743352(char *, unsigned char );
char *ieee_p_3499444699_sub_17544701978858283880_3536714472(char *, char *, int , int );
char *ieee_p_3620187407_sub_2255506239096166994_3965413181(char *, char *, char *, char *, int );
void unisim_p_3222816464_sub_11988526220581003040_279109243(char *, char *, char *, char *, char *, char *, char *, char *, char *, char *, int , char *, char *, char *, char *, char *, char *, char *, char *, unsigned char );


char *unisim_a_4198481118_3074513846_sub_7727409628704357505_4110765920(char *t1, char *t2, int t3)
{
    char t5[8];
    char t7[16];
    char *t0;
    char *t6;
    int t8;
    char *t9;
    char *t10;
    unsigned int t11;
    char *t12;
    int t13;
    char *t14;
    int t15;
    char *t16;
    int t17;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;

LAB0:    t6 = (t5 + 4U);
    *((int *)t6) = t3;
    if (t3 == 4)
        goto LAB3;

LAB6:    if (t3 == 6)
        goto LAB3;

LAB7:    if (t3 == 8)
        goto LAB3;

LAB8:    if (t3 == 3)
        goto LAB4;

LAB9:    if (t3 == 5)
        goto LAB4;

LAB10:    if (t3 == 7)
        goto LAB4;

LAB11:
LAB5:    t8 = (6 - 1);
    t9 = ieee_p_3499444699_sub_17544701978858283880_3536714472(IEEE_P_3499444699, t7, t8, 3);
    t10 = (t7 + 12U);
    t11 = *((unsigned int *)t10);
    t11 = (t11 * 1U);
    t0 = xsi_get_transient_memory(t11);
    memcpy(t0, t9, t11);
    t12 = (t7 + 0U);
    t13 = *((int *)t12);
    t14 = (t7 + 4U);
    t15 = *((int *)t14);
    t16 = (t7 + 8U);
    t17 = *((int *)t16);
    t18 = (t2 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = t13;
    t19 = (t18 + 4U);
    *((int *)t19) = t15;
    t19 = (t18 + 8U);
    *((int *)t19) = t17;
    t20 = (t15 - t13);
    t21 = (t20 * t17);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;

LAB1:    return t0;
LAB2:    xsi_error(ng1);
    t0 = 0;
    goto LAB1;

LAB3:    t8 = (6 - 1);
    t9 = ieee_p_3499444699_sub_17544701978858283880_3536714472(IEEE_P_3499444699, t7, t8, 3);
    t10 = (t7 + 12U);
    t11 = *((unsigned int *)t10);
    t11 = (t11 * 1U);
    t0 = xsi_get_transient_memory(t11);
    memcpy(t0, t9, t11);
    t12 = (t7 + 0U);
    t13 = *((int *)t12);
    t14 = (t7 + 4U);
    t15 = *((int *)t14);
    t16 = (t7 + 8U);
    t17 = *((int *)t16);
    t18 = (t2 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = t13;
    t19 = (t18 + 4U);
    *((int *)t19) = t15;
    t19 = (t18 + 8U);
    *((int *)t19) = t17;
    t20 = (t15 - t13);
    t21 = (t20 * t17);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    goto LAB1;

LAB4:    t9 = ieee_p_3499444699_sub_17544701978858283880_3536714472(IEEE_P_3499444699, t7, 1, 3);
    t10 = (t7 + 12U);
    t11 = *((unsigned int *)t10);
    t11 = (t11 * 1U);
    t0 = xsi_get_transient_memory(t11);
    memcpy(t0, t9, t11);
    t12 = (t7 + 0U);
    t8 = *((int *)t12);
    t14 = (t7 + 4U);
    t13 = *((int *)t14);
    t16 = (t7 + 8U);
    t15 = *((int *)t16);
    t18 = (t2 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = t8;
    t19 = (t18 + 4U);
    *((int *)t19) = t13;
    t19 = (t18 + 8U);
    *((int *)t19) = t15;
    t17 = (t13 - t8);
    t21 = (t17 * t15);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    goto LAB1;

LAB12:;
LAB13:    goto LAB2;

LAB14:    goto LAB2;

LAB15:    goto LAB2;

}

static void unisim_a_4198481118_3074513846_p_0(char *t0)
{
    int64 t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:
LAB3:    t1 = (0 * 1LL);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t2 = (t0 + 11912);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_delta(t2, 0U, 1, t1);
    t9 = (t0 + 11912);
    xsi_driver_intertial_reject(t9, t1, t1);

LAB2:    t10 = (t0 + 11592);
    *((int *)t10) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void unisim_a_4198481118_3074513846_p_1(char *t0)
{
    int64 t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:
LAB3:    t1 = (0 * 1LL);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t2 = (t0 + 11976);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_delta(t2, 0U, 1, t1);
    t9 = (t0 + 11976);
    xsi_driver_intertial_reject(t9, t1, t1);

LAB2:    t10 = (t0 + 11608);
    *((int *)t10) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void unisim_a_4198481118_3074513846_p_2(char *t0)
{
    char t23[16];
    char t26[16];
    char t30[16];
    char t35[16];
    char t40[16];
    char t45[16];
    char t50[16];
    char t55[16];
    char *t1;
    char *t2;
    int64 t3;
    unsigned char t4;
    unsigned char t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    int t24;
    unsigned int t25;
    char *t27;
    int t28;
    char *t31;
    char *t32;
    int t33;
    char *t36;
    char *t37;
    int t38;
    char *t41;
    char *t42;
    int t43;
    char *t46;
    char *t47;
    int t48;
    char *t51;
    char *t52;
    int t53;
    char *t56;
    char *t57;
    int t58;

LAB0:    t1 = (t0 + 7800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t3 = (1 * 1LL);
    t2 = (t0 + 7608);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t10 = (6 == 2);
    if (t10 == 1)
        goto LAB26;

LAB27:    t11 = (6 == 3);
    t9 = t11;

LAB28:    if (t9 == 1)
        goto LAB23;

LAB24:    t12 = (6 == 4);
    t8 = t12;

LAB25:    if (t8 == 1)
        goto LAB20;

LAB21:    t13 = (6 == 5);
    t7 = t13;

LAB22:    if (t7 == 1)
        goto LAB17;

LAB18:    t14 = (6 == 6);
    t6 = t14;

LAB19:    if (t6 == 1)
        goto LAB14;

LAB15:    t15 = (6 == 7);
    t5 = t15;

LAB16:    if (t5 == 1)
        goto LAB11;

LAB12:    t16 = (6 == 8);
    t4 = t16;

LAB13:    if (t4 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 7608);
    t17 = (t0 + 19377);
    t19 = (t23 + 0U);
    t20 = (t19 + 0U);
    *((int *)t20) = 1;
    t20 = (t19 + 4U);
    *((int *)t20) = 24;
    t20 = (t19 + 8U);
    *((int *)t20) = 1;
    t24 = (24 - 1);
    t25 = (t24 * 1);
    t25 = (t25 + 1);
    t20 = (t19 + 12U);
    *((unsigned int *)t20) = t25;
    t20 = (t0 + 19401);
    t22 = (t26 + 0U);
    t27 = (t22 + 0U);
    *((int *)t27) = 1;
    t27 = (t22 + 4U);
    *((int *)t27) = 8;
    t27 = (t22 + 8U);
    *((int *)t27) = 1;
    t28 = (8 - 1);
    t25 = (t28 * 1);
    t25 = (t25 + 1);
    t27 = (t22 + 12U);
    *((unsigned int *)t27) = t25;
    t27 = (t0 + 19409);
    t31 = (t30 + 0U);
    t32 = (t31 + 0U);
    *((int *)t32) = 1;
    t32 = (t31 + 4U);
    *((int *)t32) = 7;
    t32 = (t31 + 8U);
    *((int *)t32) = 1;
    t33 = (7 - 1);
    t25 = (t33 * 1);
    t25 = (t25 + 1);
    t32 = (t31 + 12U);
    *((unsigned int *)t32) = t25;
    t32 = (t0 + 19416);
    t36 = (t35 + 0U);
    t37 = (t36 + 0U);
    *((int *)t37) = 1;
    t37 = (t36 + 4U);
    *((int *)t37) = 0;
    t37 = (t36 + 8U);
    *((int *)t37) = 1;
    t38 = (0 - 1);
    t25 = (t38 * 1);
    t25 = (t25 + 1);
    t37 = (t36 + 12U);
    *((unsigned int *)t37) = t25;
    t37 = (t0 + 19416);
    t41 = (t40 + 0U);
    t42 = (t41 + 0U);
    *((int *)t42) = 1;
    t42 = (t41 + 4U);
    *((int *)t42) = 0;
    t42 = (t41 + 8U);
    *((int *)t42) = 1;
    t43 = (0 - 1);
    t25 = (t43 * 1);
    t25 = (t25 + 1);
    t42 = (t41 + 12U);
    *((unsigned int *)t42) = t25;
    t42 = (t0 + 19416);
    t46 = (t45 + 0U);
    t47 = (t46 + 0U);
    *((int *)t47) = 1;
    t47 = (t46 + 4U);
    *((int *)t47) = 41;
    t47 = (t46 + 8U);
    *((int *)t47) = 1;
    t48 = (41 - 1);
    t25 = (t48 * 1);
    t25 = (t25 + 1);
    t47 = (t46 + 12U);
    *((unsigned int *)t47) = t25;
    t47 = (t0 + 19457);
    t51 = (t50 + 0U);
    t52 = (t51 + 0U);
    *((int *)t52) = 1;
    t52 = (t51 + 4U);
    *((int *)t52) = 21;
    t52 = (t51 + 8U);
    *((int *)t52) = 1;
    t53 = (21 - 1);
    t25 = (t53 * 1);
    t25 = (t25 + 1);
    t52 = (t51 + 12U);
    *((unsigned int *)t52) = t25;
    t52 = (t0 + 19478);
    t56 = (t55 + 0U);
    t57 = (t56 + 0U);
    *((int *)t57) = 1;
    t57 = (t56 + 4U);
    *((int *)t57) = 0;
    t57 = (t56 + 8U);
    *((int *)t57) = 1;
    t58 = (0 - 1);
    t25 = (t58 * 1);
    t25 = (t25 + 1);
    t57 = (t56 + 12U);
    *((unsigned int *)t57) = t25;
    unisim_p_3222816464_sub_11988526220581003040_279109243(UNISIM_P_3222816464, t2, t17, t23, t20, t26, t27, t30, t32, t35, 6, t37, t40, t42, t45, t47, t50, t52, t55, (unsigned char)3);

LAB9:    t4 = (6 == 1);
    if (t4 != 0)
        goto LAB44;

LAB46:    t2 = (t0 + 12232);
    t17 = (t2 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB45:
LAB49:    *((char **)t1) = &&LAB50;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    if (6 == 3)
        goto LAB30;

LAB37:    if (6 == 4)
        goto LAB31;

LAB38:    if (6 == 5)
        goto LAB32;

LAB39:    if (6 == 6)
        goto LAB33;

LAB40:    if (6 == 7)
        goto LAB34;

LAB41:    if (6 == 8)
        goto LAB35;

LAB42:
LAB36:
LAB29:    goto LAB9;

LAB11:    t4 = (unsigned char)1;
    goto LAB13;

LAB14:    t5 = (unsigned char)1;
    goto LAB16;

LAB17:    t6 = (unsigned char)1;
    goto LAB19;

LAB20:    t7 = (unsigned char)1;
    goto LAB22;

LAB23:    t8 = (unsigned char)1;
    goto LAB25;

LAB26:    t9 = (unsigned char)1;
    goto LAB28;

LAB30:    t2 = (t0 + 19341);
    t18 = (t0 + 12040);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t2, 3U);
    xsi_driver_first_trans_fast(t18);
    t2 = (t0 + 19344);
    t18 = (t0 + 12104);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t2, 3U);
    xsi_driver_first_trans_fast(t18);
    t2 = (t0 + 12168);
    t17 = (t2 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB29;

LAB31:    t2 = (t0 + 19347);
    t18 = (t0 + 12040);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t2, 3U);
    xsi_driver_first_trans_fast(t18);
    t2 = (t0 + 19350);
    t18 = (t0 + 12104);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t2, 3U);
    xsi_driver_first_trans_fast(t18);
    t2 = (t0 + 12168);
    t17 = (t2 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB29;

LAB32:    t2 = (t0 + 19353);
    t18 = (t0 + 12040);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t2, 3U);
    xsi_driver_first_trans_fast(t18);
    t2 = (t0 + 19356);
    t18 = (t0 + 12104);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t2, 3U);
    xsi_driver_first_trans_fast(t18);
    t2 = (t0 + 12168);
    t17 = (t2 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB29;

LAB33:    t2 = (t0 + 19359);
    t18 = (t0 + 12040);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t2, 3U);
    xsi_driver_first_trans_fast(t18);
    t2 = (t0 + 19362);
    t18 = (t0 + 12104);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t2, 3U);
    xsi_driver_first_trans_fast(t18);
    t2 = (t0 + 12168);
    t17 = (t2 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB29;

LAB34:    t2 = (t0 + 19365);
    t18 = (t0 + 12040);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t2, 3U);
    xsi_driver_first_trans_fast(t18);
    t2 = (t0 + 19368);
    t18 = (t0 + 12104);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t2, 3U);
    xsi_driver_first_trans_fast(t18);
    t2 = (t0 + 12168);
    t17 = (t2 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB29;

LAB35:    t2 = (t0 + 19371);
    t18 = (t0 + 12040);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t2, 3U);
    xsi_driver_first_trans_fast(t18);
    t2 = (t0 + 19374);
    t18 = (t0 + 12104);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t2, 3U);
    xsi_driver_first_trans_fast(t18);
    t2 = (t0 + 12168);
    t17 = (t2 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB29;

LAB43:;
LAB44:    t2 = (t0 + 12232);
    t17 = (t2 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB45;

LAB47:    goto LAB2;

LAB48:    goto LAB47;

LAB50:    goto LAB48;

}

static void unisim_a_4198481118_3074513846_p_3(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int64 t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    t1 = (t0 + 1952U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 11624);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    t3 = (t0 + 12296);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_delta(t3, 0U, 1, 0LL);
    t8 = (100 * 1LL);
    t9 = (t0 + 12296);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t9, 0U, 1, t8);
    goto LAB3;

}

static void unisim_a_4198481118_3074513846_p_4(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int64 t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    t1 = (t0 + 2272U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 11640);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    t3 = (t0 + 12360);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_delta(t3, 0U, 1, 0LL);
    t8 = (100 * 1LL);
    t9 = (t0 + 12360);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t9, 0U, 1, t8);
    goto LAB3;

}

static void unisim_a_4198481118_3074513846_p_5(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:
LAB3:    t1 = (t0 + 5352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 5512U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_3488546069778340532_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 12424);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast(t1);

LAB2:    t11 = (t0 + 11656);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void unisim_a_4198481118_3074513846_p_6(char *t0)
{
    char t13[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 5632U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 11672);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    t3 = (t0 + 4232U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 3592U);
    t3 = *((char **)t1);
    t1 = (t0 + 19216U);
    t4 = ieee_p_3620187407_sub_2255506239096166994_3965413181(IEEE_P_3620187407, t13, t3, t1, 1);
    t7 = (t13 + 12U);
    t14 = *((unsigned int *)t7);
    t15 = (1U * t14);
    t2 = (3U != t15);
    if (t2 == 1)
        goto LAB8;

LAB9:    t8 = (t0 + 12488);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 3U);
    xsi_driver_first_trans_fast(t8);

LAB6:    goto LAB3;

LAB5:    t3 = (t0 + 19478);
    t8 = (t0 + 12488);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 3U);
    xsi_driver_first_trans_fast(t8);
    goto LAB6;

LAB8:    xsi_size_not_matching(3U, t15, 0);
    goto LAB9;

}

static void unisim_a_4198481118_3074513846_p_7(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t1 = (t0 + 19216U);
    t3 = (t0 + 6208U);
    t4 = *((char **)t3);
    t3 = (t0 + 19264U);
    t5 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t4, t3);
    if (t5 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 12552);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB3:    t1 = (t0 + 11688);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    t6 = (t0 + 12552);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

}

static void unisim_a_4198481118_3074513846_p_8(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    t1 = (t0 + 5632U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 11704);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    t3 = (t0 + 4232U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t3 = (t0 + 12616);
    t6 = (t3 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t5;
    xsi_driver_first_trans_fast(t3);
    goto LAB3;

}

static void unisim_a_4198481118_3074513846_p_9(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:
LAB3:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 12680);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB2:    t8 = (t0 + 11720);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void unisim_a_4198481118_3074513846_p_10(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t1 = (t0 + 19216U);
    t3 = (t0 + 3752U);
    t4 = *((char **)t3);
    t3 = (t0 + 19232U);
    t5 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t4, t3);
    if (t5 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 12744);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB3:    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t1 = (t0 + 19216U);
    t3 = (t0 + 3912U);
    t4 = *((char **)t3);
    t3 = (t0 + 19248U);
    t5 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t4, t3);
    if (t5 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 12808);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB6:    t1 = (t0 + 11736);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    t6 = (t0 + 12744);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    t6 = (t0 + 12808);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t6);
    goto LAB6;

}

static void unisim_a_4198481118_3074513846_p_11(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    char *t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    t1 = (t0 + 5632U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 5632U);
    t2 = ieee_p_2592010699_sub_13554554585326073636_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 11752);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    t3 = (t0 + 4392U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t3 = (t0 + 5032U);
    t6 = *((char **)t3);
    t7 = *((unsigned char *)t6);
    t3 = (t0 + 4552U);
    t8 = *((char **)t3);
    t9 = *((unsigned char *)t8);
    t10 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t9);
    t11 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t7, t10);
    t12 = ieee_p_2592010699_sub_3488546069778340532_503743352(IEEE_P_2592010699, t5, t11);
    t3 = (t0 + 12872);
    t13 = (t3 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t12;
    xsi_driver_first_trans_fast(t3);
    goto LAB3;

LAB5:    t3 = (t0 + 4072U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t7 = (t5 == (unsigned char)2);
    if (t7 != 0)
        goto LAB7;

LAB9:    t1 = (t0 + 12936);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB8:    goto LAB3;

LAB7:    t3 = (t0 + 5032U);
    t6 = *((char **)t3);
    t9 = *((unsigned char *)t6);
    t3 = (t0 + 12936);
    t8 = (t3 + 56U);
    t13 = *((char **)t8);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = t9;
    xsi_driver_first_trans_fast(t3);
    goto LAB8;

}

static void unisim_a_4198481118_3074513846_p_12(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:
LAB3:    t1 = (t0 + 5032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 5192U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_3488546069778340532_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 13000);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast(t1);

LAB2:    t11 = (t0 + 11768);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void unisim_a_4198481118_3074513846_p_13(char *t0)
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
    char *t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:
LAB3:    t1 = (t0 + 4712U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 1992U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 4712U);
    t7 = *((char **)t1);
    t8 = *((unsigned char *)t7);
    t9 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t8);
    t1 = (t0 + 4872U);
    t10 = *((char **)t1);
    t11 = *((unsigned char *)t10);
    t12 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t9, t11);
    t13 = ieee_p_2592010699_sub_3488546069778340532_503743352(IEEE_P_2592010699, t6, t12);
    t1 = (t0 + 13064);
    t14 = (t1 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = t13;
    xsi_driver_first_trans_fast(t1);

LAB2:    t18 = (t0 + 11784);
    *((int *)t18) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void unisim_a_4198481118_3074513846_p_14(char *t0)
{
    int64 t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:
LAB3:    t1 = (100 * 1LL);
    t2 = (t0 + 2472U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t2 = (t0 + 13128);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_delta(t2, 0U, 1, t1);
    t9 = (t0 + 13128);
    xsi_driver_intertial_reject(t9, t1, t1);

LAB2:    t10 = (t0 + 11800);
    *((int *)t10) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void unisim_a_4198481118_3074513846_p_15(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:
LAB3:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 13192);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 11816);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void unisim_a_4198481118_3074513846_p_16(char *t0)
{
    int64 t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:
LAB3:    t1 = (100 * 1LL);
    t2 = (t0 + 2792U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t2 = (t0 + 13256);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_delta(t2, 0U, 1, t1);
    t9 = (t0 + 13256);
    xsi_driver_intertial_reject(t9, t1, t1);

LAB2:    t10 = (t0 + 11832);
    *((int *)t10) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void unisim_a_4198481118_3074513846_init()
{
	static char *pe[] = {(void *)unisim_a_4198481118_3074513846_p_0,(void *)unisim_a_4198481118_3074513846_p_1,(void *)unisim_a_4198481118_3074513846_p_2,(void *)unisim_a_4198481118_3074513846_p_3,(void *)unisim_a_4198481118_3074513846_p_4,(void *)unisim_a_4198481118_3074513846_p_5,(void *)unisim_a_4198481118_3074513846_p_6,(void *)unisim_a_4198481118_3074513846_p_7,(void *)unisim_a_4198481118_3074513846_p_8,(void *)unisim_a_4198481118_3074513846_p_9,(void *)unisim_a_4198481118_3074513846_p_10,(void *)unisim_a_4198481118_3074513846_p_11,(void *)unisim_a_4198481118_3074513846_p_12,(void *)unisim_a_4198481118_3074513846_p_13,(void *)unisim_a_4198481118_3074513846_p_14,(void *)unisim_a_4198481118_3074513846_p_15,(void *)unisim_a_4198481118_3074513846_p_16};
	static char *se[] = {(void *)unisim_a_4198481118_3074513846_sub_7727409628704357505_4110765920};
	xsi_register_didat("unisim_a_4198481118_3074513846", "isim/AFE_Fpga_A_tb_isim_beh.exe.sim/unisim/a_4198481118_3074513846.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
