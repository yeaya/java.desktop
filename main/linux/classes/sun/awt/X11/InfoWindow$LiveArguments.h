#ifndef _sun_awt_X11_InfoWindow$LiveArguments_h_
#define _sun_awt_X11_InfoWindow$LiveArguments_h_
//$ interface sun.awt.X11.InfoWindow$LiveArguments
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Rectangle;
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class InfoWindow$LiveArguments : public ::java::lang::Object {
	$interface(InfoWindow$LiveArguments, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::awt::Rectangle* getBounds() {return nullptr;}
	virtual bool isDisposed() {return false;}
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_InfoWindow$LiveArguments_h_