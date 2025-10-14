#ifndef _sun_awt_WindowIDProvider_h_
#define _sun_awt_WindowIDProvider_h_
//$ interface sun.awt.WindowIDProvider
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace awt {

class $export WindowIDProvider : public ::java::lang::Object {
	$interface(WindowIDProvider, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int64_t getWindow() {return 0;}
};

	} // awt
} // sun

#endif // _sun_awt_WindowIDProvider_h_