#ifndef _sun_font_GlyphLayout$LayoutEngineFactory_h_
#define _sun_font_GlyphLayout$LayoutEngineFactory_h_
//$ interface sun.font.GlyphLayout$LayoutEngineFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace font {
		class Font2D;
		class GlyphLayout$LayoutEngine;
		class GlyphLayout$LayoutEngineKey;
	}
}

namespace sun {
	namespace font {

class GlyphLayout$LayoutEngineFactory : public ::java::lang::Object {
	$interface(GlyphLayout$LayoutEngineFactory, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::sun::font::GlyphLayout$LayoutEngine* getEngine(::sun::font::Font2D* font, int32_t script, int32_t lang) {return nullptr;}
	virtual ::sun::font::GlyphLayout$LayoutEngine* getEngine(::sun::font::GlyphLayout$LayoutEngineKey* key) {return nullptr;}
};

	} // font
} // sun

#endif // _sun_font_GlyphLayout$LayoutEngineFactory_h_