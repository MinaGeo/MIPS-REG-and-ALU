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
static const char *ng0 = "D:/14.7/Phase1/Decoder.vhd";



static void work_a_2263464102_3212880686_p_0(char *t0)
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
    unsigned char t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned char t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned char t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    unsigned char t56;
    unsigned int t57;
    char *t58;
    char *t59;
    char *t60;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;

LAB0:    xsi_set_current_line(14, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB3;

LAB4:    t11 = (t0 + 1032U);
    t12 = *((char **)t11);
    t11 = (t0 + 4379);
    t14 = 1;
    if (2U == 2U)
        goto LAB7;

LAB8:    t14 = 0;

LAB9:    if (t14 != 0)
        goto LAB5;

LAB6:    t25 = (t0 + 1032U);
    t26 = *((char **)t25);
    t25 = (t0 + 4385);
    t28 = 1;
    if (2U == 2U)
        goto LAB15;

LAB16:    t28 = 0;

LAB17:    if (t28 != 0)
        goto LAB13;

LAB14:    t39 = (t0 + 1032U);
    t40 = *((char **)t39);
    t39 = (t0 + 4391);
    t42 = 1;
    if (2U == 2U)
        goto LAB23;

LAB24:    t42 = 0;

LAB25:    if (t42 != 0)
        goto LAB21;

LAB22:    t53 = (t0 + 1032U);
    t54 = *((char **)t53);
    t53 = (t0 + 4397);
    t56 = 1;
    if (2U == 2U)
        goto LAB31;

LAB32:    t56 = 0;

LAB33:    if (t56 != 0)
        goto LAB29;

LAB30:
LAB37:    t67 = xsi_get_transient_memory(4U);
    memset(t67, 0, 4U);
    t68 = t67;
    memset(t68, (unsigned char)4, 4U);
    t69 = (t0 + 2912);
    t70 = (t69 + 56U);
    t71 = *((char **)t70);
    t72 = (t71 + 56U);
    t73 = *((char **)t72);
    memcpy(t73, t67, 4U);
    xsi_driver_first_trans_fast_port(t69);

LAB2:    t74 = (t0 + 2832);
    *((int *)t74) = 1;

LAB1:    return;
LAB3:    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t5 = t1;
    memset(t5, (unsigned char)4, 4U);
    t6 = (t0 + 2912);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast_port(t6);
    goto LAB2;

LAB5:    t18 = (t0 + 4381);
    t20 = (t0 + 2912);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t18, 4U);
    xsi_driver_first_trans_fast_port(t20);
    goto LAB2;

LAB7:    t15 = 0;

LAB10:    if (t15 < 2U)
        goto LAB11;
    else
        goto LAB9;

LAB11:    t16 = (t12 + t15);
    t17 = (t11 + t15);
    if (*((unsigned char *)t16) != *((unsigned char *)t17))
        goto LAB8;

LAB12:    t15 = (t15 + 1);
    goto LAB10;

LAB13:    t32 = (t0 + 4387);
    t34 = (t0 + 2912);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    memcpy(t38, t32, 4U);
    xsi_driver_first_trans_fast_port(t34);
    goto LAB2;

LAB15:    t29 = 0;

LAB18:    if (t29 < 2U)
        goto LAB19;
    else
        goto LAB17;

LAB19:    t30 = (t26 + t29);
    t31 = (t25 + t29);
    if (*((unsigned char *)t30) != *((unsigned char *)t31))
        goto LAB16;

LAB20:    t29 = (t29 + 1);
    goto LAB18;

LAB21:    t46 = (t0 + 4393);
    t48 = (t0 + 2912);
    t49 = (t48 + 56U);
    t50 = *((char **)t49);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    memcpy(t52, t46, 4U);
    xsi_driver_first_trans_fast_port(t48);
    goto LAB2;

LAB23:    t43 = 0;

LAB26:    if (t43 < 2U)
        goto LAB27;
    else
        goto LAB25;

LAB27:    t44 = (t40 + t43);
    t45 = (t39 + t43);
    if (*((unsigned char *)t44) != *((unsigned char *)t45))
        goto LAB24;

LAB28:    t43 = (t43 + 1);
    goto LAB26;

LAB29:    t60 = (t0 + 4399);
    t62 = (t0 + 2912);
    t63 = (t62 + 56U);
    t64 = *((char **)t63);
    t65 = (t64 + 56U);
    t66 = *((char **)t65);
    memcpy(t66, t60, 4U);
    xsi_driver_first_trans_fast_port(t62);
    goto LAB2;

LAB31:    t57 = 0;

LAB34:    if (t57 < 2U)
        goto LAB35;
    else
        goto LAB33;

LAB35:    t58 = (t54 + t57);
    t59 = (t53 + t57);
    if (*((unsigned char *)t58) != *((unsigned char *)t59))
        goto LAB32;

LAB36:    t57 = (t57 + 1);
    goto LAB34;

LAB38:    goto LAB2;

}


extern void work_a_2263464102_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2263464102_3212880686_p_0};
	xsi_register_didat("work_a_2263464102_3212880686", "isim/test_isim_beh.exe.sim/work/a_2263464102_3212880686.didat");
	xsi_register_executes(pe);
}
