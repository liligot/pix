/* -*- Mode: C; tab-width: 8; indent-tabs-mode: t; c-basic-offset: 8 -*- */

/*
 *  Pix
 *
 *  Copyright (C) 2001 The Free Software Foundation, Inc.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef GTH_ERROR_H
#define GTH_ERROR_H

#include <glib.h>

G_BEGIN_DECLS

typedef enum {
	GTH_ERROR_CANCELLED,
	GTH_ERROR_GENERIC,
	GTH_ERROR_EXTENSION_DEPENDENCY
} GthErrorCode;

#define GTH_ERROR gth_error_quark ()
GQuark gth_error_quark (void);

G_END_DECLS

#endif /* GTH_ERROR_H */
