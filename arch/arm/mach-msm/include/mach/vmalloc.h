/* arch/arm/mach-msm/include/mach/vmalloc.h
 *
 * Copyright (C) 2007 Google, Inc.
 * Copyright (c) 2009, Code Aurora Forum. All rights reserved.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef __ASM_ARCH_MSM_VMALLOC_H
#define __ASM_ARCH_MSM_VMALLOC_H

#ifdef CONFIG_VMSPLIT_2G
#define VMALLOC_END	  (PAGE_OFFSET + 0x60000000)
#else
#if defined (CONFIG_LGE_4G_DDR)
/* 2010-06-29 [junyeong.han] Support 512MB SDRAM */
/* To support 512MB SDRAM in VMSPLIT_3G */
#define VMALLOC_END	  (PAGE_OFFSET + 0x30000000)
#else	/* origin */
#define VMALLOC_END	  (PAGE_OFFSET + 0x20000000)
#endif
#endif

#endif

