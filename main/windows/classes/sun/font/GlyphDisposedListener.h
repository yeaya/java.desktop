#ifndef _sun_font_GlyphDisposedListener_h_
#define _sun_font_GlyphDisposedListener_h_
//$ interface sun.font.GlyphDisposedListener
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class ArrayList;
	}
}

namespace sun {
	namespace font {

class GlyphDisposedListener : public ::java::lang::Object {
	$interface(GlyphDisposedListener, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void glyphDisposed(::java::util::ArrayList* glyphs) {}
};

	} // font
} // sun

#endif // _sun_font_GlyphDisposedListener_h_