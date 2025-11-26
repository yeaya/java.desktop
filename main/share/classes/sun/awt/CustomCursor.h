#ifndef _sun_awt_CustomCursor_h_
#define _sun_awt_CustomCursor_h_
//$ class sun.awt.CustomCursor
//$ extends java.awt.Cursor

#include <java/awt/Cursor.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Image;
		class Point;
	}
}

namespace sun {
	namespace awt {

class $export CustomCursor : public ::java::awt::Cursor {
	$class(CustomCursor, $NO_CLASS_INIT, ::java::awt::Cursor)
public:
	CustomCursor();
	void init$(::java::awt::Image* cursor, ::java::awt::Point* hotSpot, $String* name);
	virtual void createNativeCursor(::java::awt::Image* im, $ints* pixels, int32_t width, int32_t height, int32_t xHotSpot, int32_t yHotSpot) {}
	::java::awt::Image* image = nullptr;
};

	} // awt
} // sun

#endif // _sun_awt_CustomCursor_h_