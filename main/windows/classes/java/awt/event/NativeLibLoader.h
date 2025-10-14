#ifndef _java_awt_event_NativeLibLoader_h_
#define _java_awt_event_NativeLibLoader_h_
//$ class java.awt.event.NativeLibLoader
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		namespace event {

class NativeLibLoader : public ::java::lang::Object {
	$class(NativeLibLoader, $NO_CLASS_INIT, ::java::lang::Object)
public:
	NativeLibLoader();
	void init$();
	static void loadLibraries();
};

		} // event
	} // awt
} // java

#endif // _java_awt_event_NativeLibLoader_h_