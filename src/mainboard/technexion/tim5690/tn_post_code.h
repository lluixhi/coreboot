/*
 * This file is part of the coreboot project.
 *
 * Copyright (C) 2009 Libra Li <libra.li@technexion.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc.
 */

#define LED_MESSAGE_START       0xFF
#define LED_MESSAGE_FINISH      0x99
#define LED_MESSAGE_RAM         0x01


#ifdef __PRE_RAM__

// TechNexion's Post Code Initially.
void technexion_post_code_init(void);

#endif

void technexion_post_code(uint8_t udata8);
