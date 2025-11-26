#ifndef _sun_awt_X11CustomCursor_h_
#define _sun_awt_X11CustomCursor_h_
//$ class sun.awt.X11CustomCursor
//$ extends sun.awt.CustomCursor

#include <java/lang/Array.h>
#include <sun/awt/CustomCursor.h>

namespace java {
	namespace awt {
		class Image;
		class Point;
	}
}

namespace sun {
	namespace awt {

class $export X11CustomCursor : public ::sun::awt::CustomCursor {
	$class(X11CustomCursor, $NO_CLASS_INIT, ::sun::awt::CustomCursor)
public:
	X11CustomCursor();
	void init$(::java::awt::Image* cursor, ::java::awt::Point* hotSpot, $String* name);
	virtual void createCursor($bytes* xorMask, $bytes* andMask, int32_t width, int32_t height, int32_t fcolor, int32_t bcolor, int32_t xHotSpot, int32_t yHotSpot) {}
	virtual void createNativeCursor(::java::awt::Image* im, $ints* pixels, int32_t width, int32_t height, int32_t xHotSpot, int32_t yHotSpot) override;
};

	} // awt
} // sun

#endif // _sun_awt_X11CustomCursor_h_