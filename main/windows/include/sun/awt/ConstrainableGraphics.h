#ifndef _sun_awt_ConstrainableGraphics_h_
#define _sun_awt_ConstrainableGraphics_h_
//$ interface sun.awt.ConstrainableGraphics
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace awt {

class $import ConstrainableGraphics : public ::java::lang::Object {
	$interface(ConstrainableGraphics, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void constrain(int32_t x, int32_t y, int32_t w, int32_t h) {}
};

	} // awt
} // sun

#endif // _sun_awt_ConstrainableGraphics_h_