#pragma once

#ifndef _VITA_DEFS_H
#define _VITA_DEFS_H

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <malloc.h>
#include <unistd.h>
#include <sys/stat.h>
#include <vitasdk.h>

#include "sysfuncs.h"

#define CWD "ux0:/data/xash3d"
#define PATH_MAX 256

#undef mkdir
#define mkdir( path, mode ) sceIoMkdir( (path), (mode) )
#define _snprintf snprintf
#define _sprintf sprintf
#define strcasestr strstr

// HACK: don't use actual libc functions for mem and io
#undef strdup
#undef malloc
#undef calloc
#undef realloc
#undef free
#undef fopen
#undef fclose
#undef fseek
#undef ftell
#undef fread
#undef fwrite
#undef fprintf

#define malloc SYS_MALLOC
#define calloc SYS_CALLOC
#define realloc SYS_REALLOC
#define free( x ) SYS_FREE( x )
#define fopen vita_fopen // wrapper defined in vita_hacks.cpp
#define fclose SYS_FCLOSE
#define fseek SYS_FSEEK
#define ftell SYS_FTELL
#define fread SYS_FREAD
#define fwrite SYS_FWRITE
#define fprintf SYS_FPRINTF
#define strdup vita_strdup

typedef struct dllexport_s
{
	const char *name;
	void *func;
} dllexport_t;

extern dllexport_t vita_exports[];

FILE *vita_fopen( const char *name, const char *mode );
char *vita_strdup( const char *str );

#ifdef __cplusplus
}
#endif

#endif
