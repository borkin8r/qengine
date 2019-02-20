/*
 * Copyright (C) 1997-2001 Id Software, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or (at
 * your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
 * 02111-1307, USA.
 *
 * =======================================================================
 *
 * Header shared between different refreshers (but not with client)
 *
 * =======================================================================
 */

#ifndef SRC_CLIENT_REFRESH_REF_SHARED_H_
#define SRC_CLIENT_REFRESH_REF_SHARED_H_

#include "../header/ref.h"

/*
 * skins will be outline flood filled and mip mapped
 * pics and sprites with alpha will be outline flood filled
 * pic won't be mip mapped
 *
 * model skin
 * sprite frame
 * wall texture
 * pic
 */
typedef enum
{
  it_skin,
  it_sprite,
  it_wall,
  it_pic,
  it_sky
} imagetype_t;

typedef enum
{
  mod_bad,
  mod_brush,
  mod_sprite,
  mod_alias
} modtype_t;

#define MAX_LBM_HEIGHT 480

#ifdef _WIN32
extern void R_Printf(int level, const char *msg, ...);
#else
extern void R_Printf(int level, const char *msg, ...) __attribute__((format(printf, 2, 3)));
#endif

extern void LoadPCX(char *origname, byte **pic, byte **palette, int *width, int *height);

#endif /* SRC_CLIENT_REFRESH_REF_SHARED_H_ */
