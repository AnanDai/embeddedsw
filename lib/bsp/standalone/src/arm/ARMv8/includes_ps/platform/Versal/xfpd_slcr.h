/*******************************************************************************
 *
 * Copyright (C) 2018-2019 Xilinx, Inc.  All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMANGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *
 *
*******************************************************************************/

#ifndef __XFPD_SLCR_H__
#define __XFPD_SLCR_H__


#ifdef __cplusplus
extern "C" {
#endif

/**
 * XfpdSlcr Base Address
 */
#define XFPD_SLCR_BASEADDR      0xFD610000UL

/**
 * Register: XfpdSlcrWprot0
 */
#define XFPD_SLCR_WPROT0    ( ( XFPD_SLCR_BASEADDR ) + 0x00000000UL )
#define XFPD_SLCR_WPROT0_RSTVAL   0x00000001UL

#define XFPD_SLCR_WPROT0_ACT_SHIFT   0UL
#define XFPD_SLCR_WPROT0_ACT_WIDTH   1UL
#define XFPD_SLCR_WPROT0_ACT_MASK    0x00000001UL
#define XFPD_SLCR_WPROT0_ACT_DEFVAL  0x1UL

/**
 * Register: XfpdSlcrCtrl
 */
#define XFPD_SLCR_CTRL    ( ( XFPD_SLCR_BASEADDR ) + 0x00000004UL )
#define XFPD_SLCR_CTRL_RSTVAL   0x00000000UL

#define XFPD_SLCR_CTRL_SLVERR_EN_SHIFT   0UL
#define XFPD_SLCR_CTRL_SLVERR_EN_WIDTH   1UL
#define XFPD_SLCR_CTRL_SLVERR_EN_MASK    0x00000001UL
#define XFPD_SLCR_CTRL_SLVERR_EN_DEFVAL  0x0UL

/**
 * Register: XfpdSlcrIsr
 */
#define XFPD_SLCR_ISR    ( ( XFPD_SLCR_BASEADDR ) + 0x00000008UL )
#define XFPD_SLCR_ISR_RSTVAL   0x00000000UL

#define XFPD_SLCR_ISR_ADDR_DECODE_ERR_SHIFT   0UL
#define XFPD_SLCR_ISR_ADDR_DECODE_ERR_WIDTH   1UL
#define XFPD_SLCR_ISR_ADDR_DECODE_ERR_MASK    0x00000001UL
#define XFPD_SLCR_ISR_ADDR_DECODE_ERR_DEFVAL  0x0UL

/**
 * Register: XfpdSlcrImr
 */
#define XFPD_SLCR_IMR    ( ( XFPD_SLCR_BASEADDR ) + 0x0000000CUL )
#define XFPD_SLCR_IMR_RSTVAL   0x00000001UL

#define XFPD_SLCR_IMR_ADDR_DECODE_ERR_SHIFT   0UL
#define XFPD_SLCR_IMR_ADDR_DECODE_ERR_WIDTH   1UL
#define XFPD_SLCR_IMR_ADDR_DECODE_ERR_MASK    0x00000001UL
#define XFPD_SLCR_IMR_ADDR_DECODE_ERR_DEFVAL  0x1UL

/**
 * Register: XfpdSlcrIer
 */
#define XFPD_SLCR_IER    ( ( XFPD_SLCR_BASEADDR ) + 0x00000010UL )
#define XFPD_SLCR_IER_RSTVAL   0x00000000UL

#define XFPD_SLCR_IER_ADDR_DECODE_ERR_SHIFT   0UL
#define XFPD_SLCR_IER_ADDR_DECODE_ERR_WIDTH   1UL
#define XFPD_SLCR_IER_ADDR_DECODE_ERR_MASK    0x00000001UL
#define XFPD_SLCR_IER_ADDR_DECODE_ERR_DEFVAL  0x0UL

/**
 * Register: XfpdSlcrIdr
 */
#define XFPD_SLCR_IDR    ( ( XFPD_SLCR_BASEADDR ) + 0x00000014UL )
#define XFPD_SLCR_IDR_RSTVAL   0x00000000UL

#define XFPD_SLCR_IDR_ADDR_DECODE_ERR_SHIFT   0UL
#define XFPD_SLCR_IDR_ADDR_DECODE_ERR_WIDTH   1UL
#define XFPD_SLCR_IDR_ADDR_DECODE_ERR_MASK    0x00000001UL
#define XFPD_SLCR_IDR_ADDR_DECODE_ERR_DEFVAL  0x0UL

/**
 * Register: XfpdSlcrItr
 */
#define XFPD_SLCR_ITR    ( ( XFPD_SLCR_BASEADDR ) + 0x00000018UL )
#define XFPD_SLCR_ITR_RSTVAL   0x00000000UL

#define XFPD_SLCR_ITR_ADDR_DECODE_ERR_SHIFT   0UL
#define XFPD_SLCR_ITR_ADDR_DECODE_ERR_WIDTH   1UL
#define XFPD_SLCR_ITR_ADDR_DECODE_ERR_MASK    0x00000001UL
#define XFPD_SLCR_ITR_ADDR_DECODE_ERR_DEFVAL  0x0UL

/**
 * Register: XfpdSlcrWdtClkSel
 */
#define XFPD_SLCR_WDT_CLK_SEL    ( ( XFPD_SLCR_BASEADDR ) + 0x00000100UL )
#define XFPD_SLCR_WDT_CLK_SEL_RSTVAL   0x00000000UL

#define XFPD_SLCR_WDT_CLK_SEL_SHIFT   0UL
#define XFPD_SLCR_WDT_CLK_SEL_WIDTH   1UL
#define XFPD_SLCR_WDT_CLK_SEL_MASK    0x00000001UL
#define XFPD_SLCR_WDT_CLK_SEL_DEFVAL  0x0UL

/**
 * Register: XfpdSlcrApugicCtrl
 */
#define XFPD_SLCR_APUGIC_CTRL    ( ( XFPD_SLCR_BASEADDR ) + 0x0000010CUL )
#define XFPD_SLCR_APUGIC_CTRL_RSTVAL   0x00040004UL

#define XFPD_SLCR_APUGIC_CTRL_AWQOS_SHIFT   16UL
#define XFPD_SLCR_APUGIC_CTRL_AWQOS_WIDTH   4UL
#define XFPD_SLCR_APUGIC_CTRL_AWQOS_MASK    0x000f0000UL
#define XFPD_SLCR_APUGIC_CTRL_AWQOS_DEFVAL  0x4UL

#define XFPD_SLCR_APUGIC_CTRL_ARQOS_SHIFT   0UL
#define XFPD_SLCR_APUGIC_CTRL_ARQOS_WIDTH   4UL
#define XFPD_SLCR_APUGIC_CTRL_ARQOS_MASK    0x0000000fUL
#define XFPD_SLCR_APUGIC_CTRL_ARQOS_DEFVAL  0x4UL

/**
 * Register: XfpdSlcrAfiFs
 */
#define XFPD_SLCR_AFI_FS    ( ( XFPD_SLCR_BASEADDR ) + 0x00005000UL )
#define XFPD_SLCR_AFI_FS_RSTVAL   0x00000200UL

#define XFPD_SLCR_AFI_FS_DW_SS0_SEL_SHIFT   8UL
#define XFPD_SLCR_AFI_FS_DW_SS0_SEL_WIDTH   2UL
#define XFPD_SLCR_AFI_FS_DW_SS0_SEL_MASK    0x00000300UL
#define XFPD_SLCR_AFI_FS_DW_SS0_SEL_DEFVAL  0x2UL


#ifdef __cplusplus
}
#endif

#endif /* __XFPD_SLCR_H__ */
