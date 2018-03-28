#include "vita_defs.h"

extern "C"
{

sysfuncs_t g_engsysfuncs;

// fopen wrapper that extends paths

FILE *vita_fopen( const char *name, const char *mode )
{
	static char buf[1024];
	_snprintf( buf, sizeof(buf), CWD "/%s", name );
	return SYS_FOPEN( buf, mode );
}

// strdup implementation that uses SYS_MALLOC
char *vita_strdup( const char *str )
{
	int len = strlen( str );
	char *newstr = SYS_MALLOC( len + 1 );
	if( !newstr ) return NULL;
	strcpy( newstr, str );
	return newstr;
}

// hacks to make libc work

void* __dso_handle = (void*) &__dso_handle;

extern void _init_vita_reent( void );
extern void _free_vita_reent( void );
extern void _init_vita_heap( void );
extern void _free_vita_heap( void );

extern void __libc_init_array( void );
extern void __libc_fini_array( void );

void _init_vita_newlib( void )
{
	_init_vita_heap( );
	_init_vita_reent( );
}

void _free_vita_newlib( void )
{
	_free_vita_reent( );
	_free_vita_heap( );
}

void _fini( void ) { }
void _init( void ) { }

// small heap for internal libc use
unsigned int _newlib_heap_size_user = 2 * 1024 * 1024;

typedef struct modarg_s
{
	sysfuncs_t imports;
	dllexport_t *exports;
} modarg_t;

int module_stop( SceSize argc, const void *args )
{
	__libc_fini_array( );
	_free_vita_newlib( );
	return SCE_KERNEL_STOP_SUCCESS;
}

int module_exit( )
{
	__libc_fini_array( );
	_free_vita_newlib( );
	return SCE_KERNEL_STOP_SUCCESS;
}

void _start() __attribute__ ((weak, alias ("module_start")));
int module_start( SceSize argc, void *args )
{
	modarg_t *arg = *(modarg_t **)args;
	arg->exports = vita_exports;
	g_engsysfuncs = arg->imports;

	_init_vita_newlib( );
	__libc_init_array( );

	return SCE_KERNEL_START_SUCCESS;
}

}

#include <new>

// fuck you C++
void * operator new( std::size_t n )
{
	return g_engsysfuncs.pfnSysMalloc( n );
}

void operator delete( void *p )
{
	g_engsysfuncs.pfnSysFree( p );
}

void * operator new[]( std::size_t n )
{
	return g_engsysfuncs.pfnSysMalloc( n );
}

void operator delete[]( void *p )
{
	g_engsysfuncs.pfnSysFree( p );
}
