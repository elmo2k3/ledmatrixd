/*
* Copyright (C) 2008 Bjoern Biesenbach <bjoern@bjoern-b.de>
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License as
* published by the Free Software Foundation; either version 2 of the
* License, or (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
* General Public License for more details.
*
* You should have received a copy of the GNU General Public
* License along with this program; if not, write to the
* Free Software Foundation, Inc., 59 Temple Place - Suite 330,
* Boston, MA 02111-1307, USA.
*/
#ifndef __LED_led_H__
#define __LED_led_H__
#include <avr/pgmspace.h>

/* ------------------ VERY VERY VERY important! ---------------
 *
 * Continuously call led_runner or your led-matrix will be burned!
 *
 */

extern void led_update(void);
extern void led_runner(void);
extern void led_init(void);
extern void swap_buffers(void);

extern uint16_t *backbuffer;
extern int16_t putString(uint16_t *buffer_red,uint16_t *buffer_green, char *string, int16_t x, int16_t y);
extern PGM_P font;
extern PGM_P font_table[];

//extern void draw_me_a_picture(void);

#endif
