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
char *STD_TEXTIO;
char *IEEE_P_1242562249;
char *IEEE_P_3564397177;
char *IEEE_P_3620187407;
char *IEEE_P_3499444699;
char *STD_STANDARD;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    ieee_p_1242562249_init();
    ieee_p_3499444699_init();
    ieee_p_3620187407_init();
    std_textio_init();
    ieee_p_3564397177_init();
    work_a_3045258160_3212880686_init();
    work_a_1030971986_3212880686_init();
    work_a_0817802551_3212880686_init();
    work_a_4232424827_3212880686_init();
    work_a_0115900056_3212880686_init();
    work_a_3998048205_3212880686_init();
    work_a_3763486430_3212880686_init();
    work_a_1619267642_3212880686_init();
    work_a_3781778562_3212880686_init();
    work_a_0909257147_3212880686_init();
    work_a_1910158702_3212880686_init();
    work_a_3240125370_3212880686_init();
    work_a_3853510154_3212880686_init();
    work_a_2086533550_3212880686_init();
    work_a_1598527830_3212880686_init();
    work_a_1436514732_3708392848_init();
    work_a_0637058416_1316803736_init();
    work_a_4088829756_3212880686_init();
    work_a_4062542468_3212880686_init();
    work_a_0888681323_3212880686_init();
    work_a_1843507802_3212880686_init();
    work_a_2820838970_3212880686_init();
    work_a_0904834510_3212880686_init();
    work_a_0312434395_3212880686_init();
    work_a_4288990908_3212880686_init();
    work_a_2841792138_3212880686_init();
    work_a_2521061078_3212880686_init();
    work_a_1890678477_3212880686_init();
    work_a_0200802635_3212880686_init();
    work_a_3404259863_3212880686_init();
    work_a_0832606739_3212880686_init();
    work_a_0919178533_3212880686_init();
    work_a_3044219816_3212880686_init();
    work_a_3392787015_3212880686_init();
    work_a_3657043965_3212880686_init();
    work_a_0955078297_3212880686_init();
    work_a_1640669797_3212880686_init();
    work_a_3589629958_2372691052_init();


    xsi_register_tops("work_a_3589629958_2372691052");

    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    STD_TEXTIO = xsi_get_engine_memory("std_textio");
    IEEE_P_1242562249 = xsi_get_engine_memory("ieee_p_1242562249");
    IEEE_P_3564397177 = xsi_get_engine_memory("ieee_p_3564397177");
    IEEE_P_3620187407 = xsi_get_engine_memory("ieee_p_3620187407");
    IEEE_P_3499444699 = xsi_get_engine_memory("ieee_p_3499444699");
    STD_STANDARD = xsi_get_engine_memory("std_standard");

    return xsi_run_simulation(argc, argv);

}
