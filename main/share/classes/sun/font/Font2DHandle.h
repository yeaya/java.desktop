#ifndef _sun_font_Font2DHandle_h_
#define _sun_font_Font2DHandle_h_
//$ class sun.font.Font2DHandle
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace font {
		class Font2D;
	}
}

namespace sun {
	namespace font {

class Font2DHandle : public ::java::lang::Object {
	$class(Font2DHandle, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Font2DHandle();
	void init$(::sun::font::Font2D* font);
	::sun::font::Font2D* font2D = nullptr;
};

	} // font
} // sun

#endif // _sun_font_Font2DHandle_h_