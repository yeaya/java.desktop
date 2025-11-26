#ifndef _sun_awt_X11_XCustomCursor_h_
#define _sun_awt_X11_XCustomCursor_h_
//$ class sun.awt.X11.XCustomCursor
//$ extends sun.awt.X11CustomCursor

#include <java/lang/Array.h>
#include <sun/awt/X11CustomCursor.h>

namespace java {
	namespace awt {
		class Dimension;
		class Image;
		class Point;
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XCustomCursor : public ::sun::awt::X11CustomCursor {
	$class(XCustomCursor, $NO_CLASS_INIT, ::sun::awt::X11CustomCursor)
public:
	XCustomCursor();
	void init$(::java::awt::Image* cursor, ::java::awt::Point* hotSpot, $String* name);
	virtual void createCursor($bytes* xorMask, $bytes* andMask, int32_t width, int32_t height, int32_t fcolor, int32_t bcolor, int32_t xHotSpot, int32_t yHotSpot) override;
	static ::java::awt::Dimension* getBestCursorSize(int32_t preferredWidth, int32_t preferredHeight);
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XCustomCursor_h_