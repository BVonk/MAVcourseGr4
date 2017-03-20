/*
 * Copyright (C) 2015
 *
 * This file is part of Paparazzi.
 *
 * Paparazzi is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * Paparazzi is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Paparazzi; see the file COPYING.  If not, write to
 * the Free Software Foundation, 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

/**
 * @file modules/computer_vision/colorfilter.c
 */

// Own header
#include "modules/computer_vision/colorfilter.h"
#include <stdio.h>

#include "modules/computer_vision/lib/vision/image.h"

struct video_listener *listener = NULL;

// Filter Settings for GREEN, same as in green_keeper.c
uint8_t color_lum_min = 105; // was 105
uint8_t color_lum_max = 205; // was 205
uint8_t color_cb_min  = 0; // 52
uint8_t color_cb_max  = 120; // 140
uint8_t color_cr_min  = 0; // 180
uint8_t color_cr_max  = 120; // 255

// Result
int color_count = 0;
uint32_t col_count[3] = {0,0,0};
/*struct col_count{
int left;
int mid;
int right;
} */

// Function
struct image_t *colorfilter_func(struct image_t *img);
struct image_t *colorfilter_func(struct image_t *img)
{
  // Filter
/* Use only one filter at a time
  color_count = image_yuv422_colorfilt(img, img,
                                       color_lum_min, color_lum_max,
                                       color_cb_min, color_cb_max,
                                       color_cr_min, color_cr_max
                                      );
*/

  ColCount(img, img,
                                       color_lum_min, color_lum_max,
                                       color_cb_min, color_cb_max,
                                       color_cr_min, color_cr_max,
                                       col_count);
  fprintf("colourcount = %d \n", color_count);
  fprintf("col1=%d \t col2=%d \t col3=%d \n", col_count[0], col_count[1], col_count[2]);
  return img; // Colorfilter did not make a new image
}

void colorfilter_init(void)
{
  listener = cv_add_to_device(&COLORFILTER_CAMERA, colorfilter_func);
}
