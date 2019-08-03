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
static const char *ng0 = "/media/dmishins/MISHINS/FROM14CPU/Desktop/AFEDM/AFE_Fpga_A_tb.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_374109322130769762_503743352(char *, unsigned char );
unsigned char ieee_p_3620187407_sub_970019341842465249_3965413181(char *, char *, char *, int );


static void work_a_4286276581_1878664202_p_0(char *t0)
{
    char t34[16];
    char t35[16];
    char t38[16];
    char t52[16];
    char t61[16];
    char t78[16];
    char t86[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned char t14;
    unsigned char t15;
    unsigned char t16;
    unsigned char t17;
    unsigned char t18;
    char *t19;
    char *t20;
    int t21;
    int t22;
    int t23;
    char *t24;
    char *t25;
    int t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned char t36;
    unsigned char t37;
    unsigned char t39;
    unsigned char t40;
    unsigned char t41;
    unsigned char t42;
    unsigned char t43;
    unsigned char t44;
    char *t45;
    unsigned char t46;
    unsigned char t47;
    char *t48;
    char *t49;
    char *t50;
    char *t53;
    char *t54;
    int t55;
    unsigned int t56;
    unsigned char t57;
    char *t58;
    char *t59;
    char *t62;
    char *t63;
    int t64;
    unsigned char t65;
    unsigned char t66;
    char *t67;
    unsigned char t68;
    unsigned char t69;
    unsigned char t70;
    unsigned char t71;
    char *t72;
    unsigned char t73;
    unsigned char t74;
    char *t75;
    char *t76;
    char *t79;
    char *t80;
    int t81;
    unsigned char t82;
    char *t83;
    char *t84;
    char *t87;
    char *t88;
    int t89;
    unsigned char t90;
    char *t91;
    unsigned char t92;
    unsigned char t93;
    char *t94;
    char *t95;
    char *t96;
    char *t97;
    char *t98;
    static char *nl0[] = {&&LAB50, &&LAB51, &&LAB52, &&LAB53, &&LAB54};

LAB0:    xsi_set_current_line(41, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 4344);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(43, ng0);
    t1 = (t0 + 4424);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(43, ng0);
    t1 = (t0 + 4488);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    xsi_set_current_line(44, ng0);
    t1 = (t0 + 4488);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 1U, 1, 0LL);
    xsi_set_current_line(44, ng0);
    t1 = (t0 + 4552);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(45, ng0);
    t1 = xsi_get_transient_memory(24U);
    memset(t1, 0, 24U);
    t2 = t1;
    memset(t2, (unsigned char)2, 24U);
    t5 = (t0 + 4616);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 24U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(45, ng0);
    t1 = (t0 + 4680);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(46, ng0);
    t1 = (t0 + 7812);
    t5 = (t0 + 4744);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(46, ng0);
    t1 = (t0 + 3048U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(47, ng0);
    t1 = (t0 + 7815);
    t5 = (t0 + 4808);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast(t5);
    goto LAB3;

LAB5:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1352U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t2 = (t0 + 4808);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t4;
    xsi_driver_first_trans_delta(t2, 1U, 1, 0LL);
    xsi_set_current_line(52, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t10 = (0 - 1);
    t11 = (t10 * -1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t1 = (t2 + t13);
    t3 = *((unsigned char *)t1);
    t5 = (t0 + 4808);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t3;
    xsi_driver_first_trans_delta(t5, 0U, 1, 0LL);
    xsi_set_current_line(54, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t14 = *((unsigned char *)t2);
    t15 = (t14 == (unsigned char)2);
    if (t15 == 1)
        goto LAB13;

LAB14:    t4 = (unsigned char)0;

LAB15:    if (t4 == 1)
        goto LAB10;

LAB11:    t3 = (unsigned char)0;

LAB12:    if (t3 != 0)
        goto LAB7;

LAB9:    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t14 = (t4 == (unsigned char)3);
    if (t14 == 1)
        goto LAB18;

LAB19:    t3 = (unsigned char)0;

LAB20:    if (t3 != 0)
        goto LAB16;

LAB17:    xsi_set_current_line(56, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 4680);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_fast(t1);

LAB8:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 7817);
    t10 = xsi_mem_cmp(t1, t2, 3U);
    if (t10 == 1)
        goto LAB22;

LAB28:    t6 = (t0 + 7820);
    t21 = xsi_mem_cmp(t6, t2, 3U);
    if (t21 == 1)
        goto LAB23;

LAB29:    t8 = (t0 + 7823);
    t22 = xsi_mem_cmp(t8, t2, 3U);
    if (t22 == 1)
        goto LAB24;

LAB30:    t19 = (t0 + 7826);
    t23 = xsi_mem_cmp(t19, t2, 3U);
    if (t23 == 1)
        goto LAB25;

LAB31:    t24 = (t0 + 7829);
    t26 = xsi_mem_cmp(t24, t2, 3U);
    if (t26 == 1)
        goto LAB26;

LAB32:
LAB27:    xsi_set_current_line(71, ng0);
    t1 = (t0 + 7856);
    t5 = (t0 + 4744);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_fast(t5);

LAB21:    xsi_set_current_line(75, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB7:    xsi_set_current_line(54, ng0);
    t7 = (t0 + 4680);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t19 = (t9 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)3;
    xsi_driver_first_trans_fast(t7);
    goto LAB8;

LAB10:    t1 = (t0 + 2632U);
    t6 = *((char **)t1);
    t1 = (t0 + 7704U);
    t18 = ieee_p_3620187407_sub_970019341842465249_3965413181(IEEE_P_3620187407, t6, t1, 1);
    t3 = t18;
    goto LAB12;

LAB13:    t1 = (t0 + 1832U);
    t5 = *((char **)t1);
    t16 = *((unsigned char *)t5);
    t17 = (t16 == (unsigned char)0);
    t4 = t17;
    goto LAB15;

LAB16:    xsi_set_current_line(55, ng0);
    t1 = (t0 + 4680);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB8;

LAB18:    t1 = (t0 + 1832U);
    t5 = *((char **)t1);
    t15 = *((unsigned char *)t5);
    t16 = (t15 == (unsigned char)1);
    t3 = t16;
    goto LAB20;

LAB22:    xsi_set_current_line(60, ng0);
    t27 = (t0 + 7832);
    t29 = (t0 + 4744);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memcpy(t33, t27, 3U);
    xsi_driver_first_trans_fast(t29);
    goto LAB21;

LAB23:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB34;

LAB36:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 7838);
    t5 = (t0 + 4744);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_fast(t5);

LAB35:    goto LAB21;

LAB24:    xsi_set_current_line(62, ng0);
    t1 = (t0 + 7841);
    t5 = (t0 + 4744);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_fast(t5);
    goto LAB21;

LAB25:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t14 = (t4 == (unsigned char)1);
    if (t14 == 1)
        goto LAB40;

LAB41:    t1 = (t0 + 1832U);
    t5 = *((char **)t1);
    t15 = *((unsigned char *)t5);
    t16 = (t15 == (unsigned char)2);
    t3 = t16;

LAB42:    if (t3 != 0)
        goto LAB37;

LAB39:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 7847);
    t5 = (t0 + 4744);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_fast(t5);

LAB38:    goto LAB21;

LAB26:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t14 = (t4 == (unsigned char)1);
    if (t14 == 1)
        goto LAB46;

LAB47:    t1 = (t0 + 1832U);
    t5 = *((char **)t1);
    t15 = *((unsigned char *)t5);
    t16 = (t15 == (unsigned char)2);
    t3 = t16;

LAB48:    if (t3 != 0)
        goto LAB43;

LAB45:    xsi_set_current_line(69, ng0);
    t1 = (t0 + 7853);
    t5 = (t0 + 4744);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_fast(t5);

LAB44:    goto LAB21;

LAB33:;
LAB34:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 7835);
    t6 = (t0 + 4744);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t19 = *((char **)t9);
    memcpy(t19, t1, 3U);
    xsi_driver_first_trans_fast(t6);
    goto LAB35;

LAB37:    xsi_set_current_line(64, ng0);
    t1 = (t0 + 7844);
    t7 = (t0 + 4744);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t19 = (t9 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t1, 3U);
    xsi_driver_first_trans_fast(t7);
    goto LAB38;

LAB40:    t3 = (unsigned char)1;
    goto LAB42;

LAB43:    xsi_set_current_line(68, ng0);
    t1 = (t0 + 7850);
    t7 = (t0 + 4744);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t19 = (t9 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t1, 3U);
    xsi_driver_first_trans_fast(t7);
    goto LAB44;

LAB46:    t3 = (unsigned char)1;
    goto LAB48;

LAB49:    xsi_set_current_line(102, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 7688U);
    t5 = (t0 + 7877);
    t7 = (t34 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 2;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t10 = (2 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t11;
    t17 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t5, t34);
    if (t17 == 1)
        goto LAB94;

LAB95:    t8 = (t0 + 2152U);
    t9 = *((char **)t8);
    t8 = (t0 + 7688U);
    t19 = (t0 + 7880);
    t24 = (t35 + 0U);
    t25 = (t24 + 0U);
    *((int *)t25) = 0;
    t25 = (t24 + 4U);
    *((int *)t25) = 2;
    t25 = (t24 + 8U);
    *((int *)t25) = 1;
    t21 = (2 - 0);
    t11 = (t21 * 1);
    t11 = (t11 + 1);
    t25 = (t24 + 12U);
    *((unsigned int *)t25) = t11;
    t18 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t9, t8, t19, t35);
    t16 = t18;

LAB96:    if (t16 == 1)
        goto LAB91;

LAB92:    t15 = (unsigned char)0;

LAB93:    if (t15 == 1)
        goto LAB88;

LAB89:    t25 = (t0 + 2152U);
    t28 = *((char **)t25);
    t25 = (t0 + 7688U);
    t29 = (t0 + 7883);
    t31 = (t38 + 0U);
    t32 = (t31 + 0U);
    *((int *)t32) = 0;
    t32 = (t31 + 4U);
    *((int *)t32) = 2;
    t32 = (t31 + 8U);
    *((int *)t32) = 1;
    t22 = (2 - 0);
    t11 = (t22 * 1);
    t11 = (t11 + 1);
    t32 = (t31 + 12U);
    *((unsigned int *)t32) = t11;
    t39 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t28, t25, t29, t38);
    t14 = t39;

LAB90:    if (t14 == 1)
        goto LAB85;

LAB86:    t32 = (t0 + 1832U);
    t33 = *((char **)t32);
    t41 = *((unsigned char *)t33);
    t42 = (t41 == (unsigned char)3);
    if (t42 == 1)
        goto LAB97;

LAB98:    t40 = (unsigned char)0;

LAB99:    t4 = t40;

LAB87:    if (t4 == 1)
        goto LAB82;

LAB83:    t63 = (t0 + 1832U);
    t67 = *((char **)t63);
    t68 = *((unsigned char *)t67);
    t69 = (t68 == (unsigned char)4);
    if (t69 == 1)
        goto LAB106;

LAB107:    t66 = (unsigned char)0;

LAB108:    t3 = t66;

LAB84:    if (t3 != 0)
        goto LAB79;

LAB81:    xsi_set_current_line(109, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t11 = (0 + 0U);
    t1 = (t2 + t11);
    t3 = *((unsigned char *)t1);
    t5 = (t0 + 4488);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t3;
    xsi_driver_first_trans_delta(t5, 0U, 1, 0LL);

LAB80:    xsi_set_current_line(113, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t14 = (t4 == (unsigned char)2);
    if (t14 == 1)
        goto LAB118;

LAB119:    t3 = (unsigned char)0;

LAB120:    if (t3 != 0)
        goto LAB115;

LAB117:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)0);
    if (t4 != 0)
        goto LAB121;

LAB122:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t14 = *((unsigned char *)t2);
    t15 = (t14 == (unsigned char)3);
    if (t15 == 1)
        goto LAB128;

LAB129:    t4 = (unsigned char)0;

LAB130:    if (t4 == 1)
        goto LAB125;

LAB126:    t3 = (unsigned char)0;

LAB127:    if (t3 != 0)
        goto LAB123;

LAB124:    xsi_set_current_line(118, ng0);
    t1 = (t0 + 3048U);
    t2 = *((char **)t1);
    t10 = *((int *)t2);
    t1 = (t0 + 3048U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = t10;

LAB116:    xsi_set_current_line(122, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t14 = (t4 == (unsigned char)0);
    if (t14 == 1)
        goto LAB134;

LAB135:    t3 = (unsigned char)0;

LAB136:    if (t3 != 0)
        goto LAB131;

LAB133:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t14 = (t4 == (unsigned char)3);
    if (t14 == 1)
        goto LAB139;

LAB140:    t3 = (unsigned char)0;

LAB141:    if (t3 != 0)
        goto LAB137;

LAB138:    xsi_set_current_line(128, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 4616);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 24U);
    xsi_driver_first_trans_fast(t1);

LAB132:    xsi_set_current_line(131, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t14 = *((unsigned char *)t2);
    t15 = (t14 == (unsigned char)3);
    if (t15 == 1)
        goto LAB150;

LAB151:    t4 = (unsigned char)0;

LAB152:    if (t4 == 1)
        goto LAB147;

LAB148:    t1 = (t0 + 1832U);
    t6 = *((char **)t1);
    t37 = *((unsigned char *)t6);
    t39 = (t37 == (unsigned char)3);
    if (t39 == 1)
        goto LAB156;

LAB157:    t36 = (unsigned char)0;

LAB158:    if (t36 == 1)
        goto LAB153;

LAB154:    t18 = (unsigned char)0;

LAB155:    t3 = t18;

LAB149:    if (t3 != 0)
        goto LAB144;

LAB146:    xsi_set_current_line(135, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 4552);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_fast(t1);

LAB145:    xsi_set_current_line(139, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 7688U);
    t5 = (t0 + 7910);
    t7 = (t34 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 2;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t10 = (2 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t11;
    t4 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t5, t34);
    if (t4 == 1)
        goto LAB162;

LAB163:    t3 = (unsigned char)0;

LAB164:    if (t3 != 0)
        goto LAB159;

LAB161:    xsi_set_current_line(140, ng0);
    t1 = (t0 + 4488);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 1U, 1, 0LL);

LAB160:    goto LAB3;

LAB50:    xsi_set_current_line(78, ng0);
    t5 = (t0 + 2472U);
    t6 = *((char **)t5);
    t14 = *((unsigned char *)t6);
    t15 = (t14 == (unsigned char)3);
    if (t15 == 1)
        goto LAB58;

LAB59:    t4 = (unsigned char)0;

LAB60:    if (t4 != 0)
        goto LAB55;

LAB57:    xsi_set_current_line(80, ng0);
    t1 = (t0 + 4424);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB56:    goto LAB49;

LAB51:    xsi_set_current_line(83, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 7688U);
    t5 = (t0 + 7865);
    t7 = (t34 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 2;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t10 = (2 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t11;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t5, t34);
    if (t3 != 0)
        goto LAB64;

LAB66:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 4424);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);

LAB65:    goto LAB49;

LAB52:    xsi_set_current_line(87, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 7688U);
    t5 = (t0 + 7868);
    t7 = (t34 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 2;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t10 = (2 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t11;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t5, t34);
    if (t3 != 0)
        goto LAB67;

LAB69:    xsi_set_current_line(88, ng0);
    t1 = (t0 + 4424);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB68:    goto LAB49;

LAB53:    xsi_set_current_line(91, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 7688U);
    t5 = (t0 + 7871);
    t7 = (t34 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 2;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t10 = (2 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t11;
    t4 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t5, t34);
    if (t4 == 1)
        goto LAB73;

LAB74:    t3 = (unsigned char)0;

LAB75:    if (t3 != 0)
        goto LAB70;

LAB72:    xsi_set_current_line(92, ng0);
    t1 = (t0 + 4424);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB71:    goto LAB49;

LAB54:    xsi_set_current_line(95, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 7688U);
    t5 = (t0 + 7874);
    t7 = (t34 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 2;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t10 = (2 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t11;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t5, t34);
    if (t3 != 0)
        goto LAB76;

LAB78:    xsi_set_current_line(96, ng0);
    t1 = (t0 + 4424);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);

LAB77:    goto LAB49;

LAB55:    xsi_set_current_line(79, ng0);
    t29 = (t0 + 4424);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    *((unsigned char *)t33) = (unsigned char)1;
    xsi_driver_first_trans_fast(t29);
    goto LAB56;

LAB58:    t5 = (t0 + 2152U);
    t7 = *((char **)t5);
    t5 = (t0 + 7688U);
    t8 = (t0 + 7859);
    t19 = (t34 + 0U);
    t20 = (t19 + 0U);
    *((int *)t20) = 0;
    t20 = (t19 + 4U);
    *((int *)t20) = 2;
    t20 = (t19 + 8U);
    *((int *)t20) = 1;
    t10 = (2 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t20 = (t19 + 12U);
    *((unsigned int *)t20) = t11;
    t17 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t7, t5, t8, t34);
    if (t17 == 1)
        goto LAB61;

LAB62:    t20 = (t0 + 2152U);
    t24 = *((char **)t20);
    t20 = (t0 + 7688U);
    t25 = (t0 + 7862);
    t28 = (t35 + 0U);
    t29 = (t28 + 0U);
    *((int *)t29) = 0;
    t29 = (t28 + 4U);
    *((int *)t29) = 2;
    t29 = (t28 + 8U);
    *((int *)t29) = 1;
    t21 = (2 - 0);
    t11 = (t21 * 1);
    t11 = (t11 + 1);
    t29 = (t28 + 12U);
    *((unsigned int *)t29) = t11;
    t18 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t24, t20, t25, t35);
    t16 = t18;

LAB63:    t4 = t16;
    goto LAB60;

LAB61:    t16 = (unsigned char)1;
    goto LAB63;

LAB64:    xsi_set_current_line(83, ng0);
    t8 = (t0 + 4424);
    t9 = (t8 + 56U);
    t19 = *((char **)t9);
    t20 = (t19 + 56U);
    t24 = *((char **)t20);
    *((unsigned char *)t24) = (unsigned char)2;
    xsi_driver_first_trans_fast(t8);
    goto LAB65;

LAB67:    xsi_set_current_line(87, ng0);
    t8 = (t0 + 4424);
    t9 = (t8 + 56U);
    t19 = *((char **)t9);
    t20 = (t19 + 56U);
    t24 = *((char **)t20);
    *((unsigned char *)t24) = (unsigned char)3;
    xsi_driver_first_trans_fast(t8);
    goto LAB68;

LAB70:    xsi_set_current_line(91, ng0);
    t8 = (t0 + 4424);
    t19 = (t8 + 56U);
    t20 = *((char **)t19);
    t24 = (t20 + 56U);
    t25 = *((char **)t24);
    *((unsigned char *)t25) = (unsigned char)4;
    xsi_driver_first_trans_fast(t8);
    goto LAB71;

LAB73:    t8 = (t0 + 3048U);
    t9 = *((char **)t8);
    t21 = *((int *)t9);
    t14 = (t21 == 0);
    t3 = t14;
    goto LAB75;

LAB76:    xsi_set_current_line(95, ng0);
    t8 = (t0 + 4424);
    t9 = (t8 + 56U);
    t19 = *((char **)t9);
    t20 = (t19 + 56U);
    t24 = *((char **)t20);
    *((unsigned char *)t24) = (unsigned char)0;
    xsi_driver_first_trans_fast(t8);
    goto LAB77;

LAB79:    xsi_set_current_line(108, ng0);
    t88 = (t0 + 1672U);
    t91 = *((char **)t88);
    t56 = (0 + 0U);
    t88 = (t91 + t56);
    t92 = *((unsigned char *)t88);
    t93 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t92);
    t94 = (t0 + 4488);
    t95 = (t94 + 56U);
    t96 = *((char **)t95);
    t97 = (t96 + 56U);
    t98 = *((char **)t97);
    *((unsigned char *)t98) = t93;
    xsi_driver_first_trans_delta(t94, 0U, 1, 0LL);
    goto LAB80;

LAB82:    t3 = (unsigned char)1;
    goto LAB84;

LAB85:    t4 = (unsigned char)1;
    goto LAB87;

LAB88:    t14 = (unsigned char)1;
    goto LAB90;

LAB91:    t25 = (t0 + 1832U);
    t27 = *((char **)t25);
    t36 = *((unsigned char *)t27);
    t37 = (t36 == (unsigned char)0);
    t15 = t37;
    goto LAB93;

LAB94:    t16 = (unsigned char)1;
    goto LAB96;

LAB97:    t32 = (t0 + 1992U);
    t45 = *((char **)t32);
    t23 = (24 - 1);
    t26 = (t23 - 23);
    t11 = (t26 * -1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t32 = (t45 + t13);
    t46 = *((unsigned char *)t32);
    t47 = (t46 == (unsigned char)3);
    if (t47 == 1)
        goto LAB103;

LAB104:    t44 = (unsigned char)0;

LAB105:    if (t44 == 1)
        goto LAB100;

LAB101:    t54 = (t0 + 2152U);
    t58 = *((char **)t54);
    t54 = (t0 + 7688U);
    t59 = (t0 + 7889);
    t62 = (t61 + 0U);
    t63 = (t62 + 0U);
    *((int *)t63) = 0;
    t63 = (t62 + 4U);
    *((int *)t63) = 2;
    t63 = (t62 + 8U);
    *((int *)t63) = 1;
    t64 = (2 - 0);
    t56 = (t64 * 1);
    t56 = (t56 + 1);
    t63 = (t62 + 12U);
    *((unsigned int *)t63) = t56;
    t65 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t58, t54, t59, t61);
    t43 = t65;

LAB102:    t40 = t43;
    goto LAB99;

LAB100:    t43 = (unsigned char)1;
    goto LAB102;

LAB103:    t48 = (t0 + 2152U);
    t49 = *((char **)t48);
    t48 = (t0 + 7688U);
    t50 = (t0 + 7886);
    t53 = (t52 + 0U);
    t54 = (t53 + 0U);
    *((int *)t54) = 0;
    t54 = (t53 + 4U);
    *((int *)t54) = 2;
    t54 = (t53 + 8U);
    *((int *)t54) = 1;
    t55 = (2 - 0);
    t56 = (t55 * 1);
    t56 = (t56 + 1);
    t54 = (t53 + 12U);
    *((unsigned int *)t54) = t56;
    t57 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t49, t48, t50, t52);
    t44 = t57;
    goto LAB105;

LAB106:    t63 = (t0 + 2312U);
    t72 = *((char **)t63);
    t73 = *((unsigned char *)t72);
    t74 = (t73 == (unsigned char)2);
    if (t74 == 1)
        goto LAB112;

LAB113:    t71 = (unsigned char)0;

LAB114:    if (t71 == 1)
        goto LAB109;

LAB110:    t80 = (t0 + 2152U);
    t83 = *((char **)t80);
    t80 = (t0 + 7688U);
    t84 = (t0 + 7895);
    t87 = (t86 + 0U);
    t88 = (t87 + 0U);
    *((int *)t88) = 0;
    t88 = (t87 + 4U);
    *((int *)t88) = 2;
    t88 = (t87 + 8U);
    *((int *)t88) = 1;
    t89 = (2 - 0);
    t56 = (t89 * 1);
    t56 = (t56 + 1);
    t88 = (t87 + 12U);
    *((unsigned int *)t88) = t56;
    t90 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t83, t80, t84, t86);
    t70 = t90;

LAB111:    t66 = t70;
    goto LAB108;

LAB109:    t70 = (unsigned char)1;
    goto LAB111;

LAB112:    t63 = (t0 + 2152U);
    t75 = *((char **)t63);
    t63 = (t0 + 7688U);
    t76 = (t0 + 7892);
    t79 = (t78 + 0U);
    t80 = (t79 + 0U);
    *((int *)t80) = 0;
    t80 = (t79 + 4U);
    *((int *)t80) = 2;
    t80 = (t79 + 8U);
    *((int *)t80) = 1;
    t81 = (2 - 0);
    t56 = (t81 * 1);
    t56 = (t56 + 1);
    t80 = (t79 + 12U);
    *((unsigned int *)t80) = t56;
    t82 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t75, t63, t76, t78);
    t71 = t82;
    goto LAB114;

LAB115:    xsi_set_current_line(114, ng0);
    t21 = (24 - 1);
    t9 = (t0 + 3048U);
    t19 = *((char **)t9);
    t9 = (t19 + 0);
    *((int *)t9) = t21;
    goto LAB116;

LAB118:    t1 = (t0 + 2152U);
    t5 = *((char **)t1);
    t1 = (t0 + 7688U);
    t6 = (t0 + 7898);
    t8 = (t34 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 2;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t10 = (2 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t11;
    t15 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t5, t1, t6, t34);
    t3 = t15;
    goto LAB120;

LAB121:    xsi_set_current_line(115, ng0);
    t1 = (t0 + 3048U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = 0;
    goto LAB116;

LAB123:    xsi_set_current_line(117, ng0);
    t9 = (t0 + 3048U);
    t20 = *((char **)t9);
    t22 = *((int *)t20);
    t23 = (t22 - 1);
    t9 = (t0 + 3048U);
    t24 = *((char **)t9);
    t9 = (t24 + 0);
    *((int *)t9) = t23;
    goto LAB116;

LAB125:    t9 = (t0 + 3048U);
    t19 = *((char **)t9);
    t21 = *((int *)t19);
    t17 = (t21 != 0);
    t3 = t17;
    goto LAB127;

LAB128:    t1 = (t0 + 2152U);
    t5 = *((char **)t1);
    t1 = (t0 + 7688U);
    t6 = (t0 + 7901);
    t8 = (t34 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 2;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t10 = (2 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t11;
    t16 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t5, t1, t6, t34);
    t4 = t16;
    goto LAB130;

LAB131:    xsi_set_current_line(123, ng0);
    t6 = (t0 + 1512U);
    t7 = *((char **)t6);
    t6 = (t0 + 4616);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    t19 = (t9 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t7, 24U);
    xsi_driver_first_trans_fast(t6);
    goto LAB132;

LAB134:    t1 = (t0 + 2632U);
    t5 = *((char **)t1);
    t1 = (t0 + 7704U);
    t15 = ieee_p_3620187407_sub_970019341842465249_3965413181(IEEE_P_3620187407, t5, t1, 1);
    t3 = t15;
    goto LAB136;

LAB137:    xsi_set_current_line(127, ng0);
    t9 = (t0 + 1992U);
    t19 = *((char **)t9);
    t21 = (24 - 2);
    t11 = (23 - t21);
    t12 = (t11 * 1U);
    t13 = (0 + t12);
    t9 = (t19 + t13);
    t24 = ((IEEE_P_2592010699) + 4000);
    t25 = (t38 + 0U);
    t27 = (t25 + 0U);
    *((int *)t27) = 22;
    t27 = (t25 + 4U);
    *((int *)t27) = 0;
    t27 = (t25 + 8U);
    *((int *)t27) = -1;
    t22 = (0 - 22);
    t56 = (t22 * -1);
    t56 = (t56 + 1);
    t27 = (t25 + 12U);
    *((unsigned int *)t27) = t56;
    t20 = xsi_base_array_concat(t20, t35, t24, (char)97, t9, t38, (char)99, (unsigned char)2, (char)101);
    t56 = (23U + 1U);
    t16 = (24U != t56);
    if (t16 == 1)
        goto LAB142;

LAB143:    t27 = (t0 + 4616);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    memcpy(t31, t20, 24U);
    xsi_driver_first_trans_fast(t27);
    goto LAB132;

LAB139:    t1 = (t0 + 2152U);
    t5 = *((char **)t1);
    t1 = (t0 + 7688U);
    t6 = (t0 + 7904);
    t8 = (t34 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 2;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t10 = (2 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t11;
    t15 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t5, t1, t6, t34);
    t3 = t15;
    goto LAB141;

LAB142:    xsi_size_not_matching(24U, t56, 0);
    goto LAB143;

LAB144:    xsi_set_current_line(134, ng0);
    t25 = (t0 + 2312U);
    t27 = *((char **)t25);
    t43 = *((unsigned char *)t27);
    t44 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t43);
    t25 = (t0 + 4552);
    t28 = (t25 + 56U);
    t29 = *((char **)t28);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    *((unsigned char *)t31) = t44;
    xsi_driver_first_trans_fast(t25);
    goto LAB145;

LAB147:    t3 = (unsigned char)1;
    goto LAB149;

LAB150:    t1 = (t0 + 1832U);
    t5 = *((char **)t1);
    t16 = *((unsigned char *)t5);
    t17 = (t16 == (unsigned char)0);
    t4 = t17;
    goto LAB152;

LAB153:    t20 = (t0 + 1992U);
    t24 = *((char **)t20);
    t21 = (24 - 1);
    t22 = (t21 - 23);
    t11 = (t22 * -1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t20 = (t24 + t13);
    t41 = *((unsigned char *)t20);
    t42 = (t41 == (unsigned char)2);
    t18 = t42;
    goto LAB155;

LAB156:    t1 = (t0 + 2152U);
    t7 = *((char **)t1);
    t1 = (t0 + 7688U);
    t8 = (t0 + 7907);
    t19 = (t34 + 0U);
    t20 = (t19 + 0U);
    *((int *)t20) = 0;
    t20 = (t19 + 4U);
    *((int *)t20) = 2;
    t20 = (t19 + 8U);
    *((int *)t20) = 1;
    t10 = (2 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t20 = (t19 + 12U);
    *((unsigned int *)t20) = t11;
    t40 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t7, t1, t8, t34);
    t36 = t40;
    goto LAB158;

LAB159:    xsi_set_current_line(139, ng0);
    t8 = (t0 + 4488);
    t19 = (t8 + 56U);
    t20 = *((char **)t19);
    t24 = (t20 + 56U);
    t25 = *((char **)t24);
    *((unsigned char *)t25) = (unsigned char)3;
    xsi_driver_first_trans_delta(t8, 1U, 1, 0LL);
    goto LAB160;

LAB162:    t8 = (t0 + 1832U);
    t9 = *((char **)t8);
    t14 = *((unsigned char *)t9);
    t15 = (t14 == (unsigned char)4);
    t3 = t15;
    goto LAB164;

}


extern void work_a_4286276581_1878664202_init()
{
	static char *pe[] = {(void *)work_a_4286276581_1878664202_p_0};
	xsi_register_didat("work_a_4286276581_1878664202", "isim/AFE_Fpga_A_tb_isim_beh.exe.sim/work/a_4286276581_1878664202.didat");
	xsi_register_executes(pe);
}
