#ifndef STATIC_LINK
#define IMPLEMENT_API
#endif

#if defined(HX_WINDOWS) || defined(HX_MACOS) || defined(HX_LINUX)
#define NEKO_COMPATIBLE
#endif

#include <hx/CFFI.h>
#include "Utils.h"

using namespace nativecom;

static value nativecom_sum (value aInputValue, value bInputValue)
{	
	int returnValue = sum(val_int(aInputValue), val_int(bInputValue));
	return alloc_int(returnValue);
}
DEFINE_PRIM (nativecom_sum, 2);

static value nativecom_byte_string ()
{	
	return alloc_string(byteString());
}
DEFINE_PRIM (nativecom_byte_string, 0);

static buffer nativecom_byte_array ()
{	
	return alloc_buffer(byteArray());
}
DEFINE_PRIM (nativecom_byte_array, 0);

static buffer nativecom_byte_image_array ()
{	
	return alloc_buffer(byteImageArray());
}
DEFINE_PRIM (nativecom_byte_image_array, 0);

extern "C" void nativecom_main ()
{	
	val_int(0); // Fix Neko init
}
DEFINE_ENTRY_POINT (nativecom_main);

extern "C" int nativecom_register_prims () { return 0; }