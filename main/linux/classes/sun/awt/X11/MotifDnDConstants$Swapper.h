#ifndef _sun_awt_X11_MotifDnDConstants$Swapper_h_
#define _sun_awt_X11_MotifDnDConstants$Swapper_h_
//$ class sun.awt.X11.MotifDnDConstants$Swapper
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace awt {
		namespace X11 {

class MotifDnDConstants$Swapper : public ::java::lang::Object {
	$class(MotifDnDConstants$Swapper, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MotifDnDConstants$Swapper();
	void init$();
	static int32_t getInt(int64_t data, int8_t order);
	static int16_t getShort(int64_t data, int8_t order);
	static int16_t swap(int16_t s);
	static int32_t swap(int32_t i);
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_MotifDnDConstants$Swapper_h_