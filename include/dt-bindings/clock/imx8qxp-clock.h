/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Copyright 2018 NXP
 *   Dong Aisheng <aisheng.dong@nxp.com>
 */

#ifndef __DT_BINDINGS_CLOCK_IMX8QXP_H
#define __DT_BINDINGS_CLOCK_IMX8QXP_H

/* SCU Clocks */

#define IMX8QXP_CLK_DUMMY				0

/* CPU */
#define IMX8QXP_A35_CLK					1

/* LSIO SS */
#define IMX8QXP_LSIO_MEM_CLK				2
#define IMX8QXP_LSIO_BUS_CLK				3
#define IMX8QXP_LSIO_PWM0_CLK				10
#define IMX8QXP_LSIO_PWM1_CLK				11
#define IMX8QXP_LSIO_PWM2_CLK				12
#define IMX8QXP_LSIO_PWM3_CLK				13
#define IMX8QXP_LSIO_PWM4_CLK				14
#define IMX8QXP_LSIO_PWM5_CLK				15
#define IMX8QXP_LSIO_PWM6_CLK				16
#define IMX8QXP_LSIO_PWM7_CLK				17
#define IMX8QXP_LSIO_GPT0_CLK				18
#define IMX8QXP_LSIO_GPT1_CLK				19
#define IMX8QXP_LSIO_GPT2_CLK				20
#define IMX8QXP_LSIO_GPT3_CLK				21
#define IMX8QXP_LSIO_GPT4_CLK				22
#define IMX8QXP_LSIO_FSPI0_CLK				23
#define IMX8QXP_LSIO_FSPI1_CLK				24

/* Connectivity SS */
#define IMX8QXP_CONN_AXI_CLK_ROOT			30
#define IMX8QXP_CONN_AHB_CLK_ROOT			31
#define IMX8QXP_CONN_IPG_CLK_ROOT			32
#define IMX8QXP_CONN_SDHC0_CLK				40
#define IMX8QXP_CONN_SDHC1_CLK				41
#define IMX8QXP_CONN_SDHC2_CLK				42
#define IMX8QXP_CONN_ENET0_ROOT_CLK			43
#define IMX8QXP_CONN_ENET0_BYPASS_CLK			44
#define IMX8QXP_CONN_ENET0_RGMII_CLK			45
#define IMX8QXP_CONN_ENET1_ROOT_CLK			46
#define IMX8QXP_CONN_ENET1_BYPASS_CLK			47
#define IMX8QXP_CONN_ENET1_RGMII_CLK			48
#define IMX8QXP_CONN_GPMI_BCH_IO_CLK			49
#define IMX8QXP_CONN_GPMI_BCH_CLK			50
#define IMX8QXP_CONN_USB2_ACLK				51
#define IMX8QXP_CONN_USB2_BUS_CLK			52
#define IMX8QXP_CONN_USB2_LPM_CLK			53

/* HSIO SS */
#define IMX8QXP_HSIO_AXI_CLK				60
#define IMX8QXP_HSIO_PER_CLK				61

/* Display controller SS */
#define IMX8QXP_DC_AXI_EXT_CLK				70
#define IMX8QXP_DC_AXI_INT_CLK				71
#define IMX8QXP_DC_CFG_CLK				72
#define IMX8QXP_DC0_PLL0_CLK				80
#define IMX8QXP_DC0_PLL1_CLK				81
#define IMX8QXP_DC0_DISP0_CLK				82
#define IMX8QXP_DC0_DISP1_CLK				83

/* MIPI-LVDS SS */
#define IMX8QXP_MIPI_IPG_CLK				90
#define IMX8QXP_MIPI0_PIXEL_CLK				100
#define IMX8QXP_MIPI0_BYPASS_CLK			101
#define IMX8QXP_MIPI0_LVDS_PIXEL_CLK			102
#define IMX8QXP_MIPI0_LVDS_BYPASS_CLK			103
#define IMX8QXP_MIPI0_LVDS_PHY_CLK			104
#define IMX8QXP_MIPI0_I2C0_CLK				105
#define IMX8QXP_MIPI0_I2C1_CLK				106
#define IMX8QXP_MIPI0_PWM0_CLK				107
#define IMX8QXP_MIPI1_PIXEL_CLK				108
#define IMX8QXP_MIPI1_BYPASS_CLK			109
#define IMX8QXP_MIPI1_LVDS_PIXEL_CLK			110
#define IMX8QXP_MIPI1_LVDS_BYPASS_CLK			111
#define IMX8QXP_MIPI1_LVDS_PHY_CLK			112
#define IMX8QXP_MIPI1_I2C0_CLK				113
#define IMX8QXP_MIPI1_I2C1_CLK				114
#define IMX8QXP_MIPI1_PWM0_CLK				115

/* IMG SS */
#define IMX8QXP_IMG_AXI_CLK				120
#define IMX8QXP_IMG_IPG_CLK				121
#define IMX8QXP_IMG_PXL_CLK				122

/* MIPI-CSI SS */
#define IMX8QXP_CSI0_CORE_CLK				130
#define IMX8QXP_CSI0_ESC_CLK				131
#define IMX8QXP_CSI0_PWM0_CLK				132
#define IMX8QXP_CSI0_I2C0_CLK				133

/* PARALLER CSI SS */
#define IMX8QXP_PARALLEL_CSI_DPLL_CLK			140
#define IMX8QXP_PARALLEL_CSI_PIXEL_CLK			141
#define IMX8QXP_PARALLEL_CSI_MCLK_CLK			142

/* VPU SS */
#define IMX8QXP_VPU_ENC_CLK				150
#define IMX8QXP_VPU_DEC_CLK				151

/* GPU SS */
#define IMX8QXP_GPU0_CORE_CLK				160
#define IMX8QXP_GPU0_SHADER_CLK				161

/* ADMA SS */
#define IMX8QXP_ADMA_IPG_CLK_ROOT			165
#define IMX8QXP_ADMA_UART0_CLK				170
#define IMX8QXP_ADMA_UART1_CLK				171
#define IMX8QXP_ADMA_UART2_CLK				172
#define IMX8QXP_ADMA_UART3_CLK				173
#define IMX8QXP_ADMA_SPI0_CLK				174
#define IMX8QXP_ADMA_SPI1_CLK				175
#define IMX8QXP_ADMA_SPI2_CLK				176
#define IMX8QXP_ADMA_SPI3_CLK				177
#define IMX8QXP_ADMA_CAN0_CLK				178
#define IMX8QXP_ADMA_CAN1_CLK				179
#define IMX8QXP_ADMA_CAN2_CLK				180
#define IMX8QXP_ADMA_I2C0_CLK				181
#define IMX8QXP_ADMA_I2C1_CLK				182
#define IMX8QXP_ADMA_I2C2_CLK				183
#define IMX8QXP_ADMA_I2C3_CLK				184
#define IMX8QXP_ADMA_FTM0_CLK				185
#define IMX8QXP_ADMA_FTM1_CLK				186
#define IMX8QXP_ADMA_ADC0_CLK				187
#define IMX8QXP_ADMA_PWM_CLK				188
#define IMX8QXP_ADMA_LCD_CLK				189

#define IMX8QXP_SCU_CLK_END				190

#endif /* __DT_BINDINGS_CLOCK_IMX8QXP_H */
