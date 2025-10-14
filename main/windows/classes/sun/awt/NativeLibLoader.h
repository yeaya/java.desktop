#ifndef _sun_awt_NativeLibLoader_h_
#define _sun_awt_NativeLibLoader_h_
//$ class sun.awt.NativeLibLoader
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace awt {

class NativeLibLoader : public ::java::lang::Object {
	$class(NativeLibLoader, $NO_CLASS_INIT, ::java::lang::Object)
public:
	NativeLibLoader();
	void init$();
	static void loadLibraries();
};

	} // awt
} // sun

#endif // _sun_awt_NativeLibLoader_h_