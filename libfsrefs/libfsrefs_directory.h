/*
 * Directory functions
 *
 * Copyright (C) 2012-2016, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#if !defined( _LIBFSREFS_DIRECTORY_H )
#define _LIBFSREFS_DIRECTORY_H

#include <common.h>
#include <types.h>

#include "libfsrefs_io_handle.h"
#include "libfsrefs_libbfio.h"
#include "libfsrefs_libcerror.h"

#if defined( __cplusplus )
extern "C" {
#endif

typedef struct libfsrefs_directory libfsrefs_directory_t;

struct libfsrefs_directory
{
	/* Dummy
	 */
	int dummy;
};

int libfsrefs_directory_initialize(
     libfsrefs_directory_t **directory,
     libcerror_error_t **error );

int libfsrefs_directory_free(
     libfsrefs_directory_t **directory,
     libcerror_error_t **error );

int libfsrefs_directory_read(
     libfsrefs_directory_t *directory,
     libfsrefs_io_handle_t *io_handle,
     libbfio_handle_t *file_io_handle,
     off64_t file_offset,
     int level,
     libcerror_error_t **error );

#if defined( __cplusplus )
}
#endif

#endif

