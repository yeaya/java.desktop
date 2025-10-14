#ifndef _sun_awt_windows_WCustomCursor_h_
#define _sun_awt_windows_WCustomCursor_h_
//$ class sun.awt.windows.WCustomCursor
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
		namespace windows {

class WCustomCursor : public ::sun::awt::CustomCursor {
	$class(WCustomCursor, $NO_CLASS_INIT, ::sun::awt::CustomCursor)
public:
	WCustomCursor();
	void init$(::java::awt::Image* cursor, ::java::awt::Point* hotSpot, $String* name);
	void createCursorIndirect($ints* rData, $bytes* andMask, int32_t nScanStride, int32_t width, int32_t height, int32_t xHotSpot, int32_t yHotSpot);
	virtual void createNativeCursor(::java::awt::Image* im, $ints* pixels, int32_t w, int32_t h, int32_t xHotSpot, int32_t yHotSpot) override;
	static int32_t getCursorHeight();
	static int32_t getCursorWidth();
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_WCustomCursor_h_