#ifndef _sun_font_XRTextRenderer_h_
#define _sun_font_XRTextRenderer_h_
//$ class sun.font.XRTextRenderer
//$ extends sun.java2d.pipe.GlyphListPipe

#include <sun/java2d/pipe/GlyphListPipe.h>

#pragma push_macro("MAX_ELT_GLYPH_COUNT")
#undef MAX_ELT_GLYPH_COUNT

namespace sun {
	namespace font {
		class GlyphList;
		class XRGlyphCache;
	}
}
namespace sun {
	namespace java2d {
		class SunGraphics2D;
	}
}
namespace sun {
	namespace java2d {
		namespace xr {
			class GrowableEltArray;
			class XRBackend;
			class XRCompositeManager;
		}
	}
}

namespace sun {
	namespace font {

class XRTextRenderer : public ::sun::java2d::pipe::GlyphListPipe {
	$class(XRTextRenderer, $NO_CLASS_INIT, ::sun::java2d::pipe::GlyphListPipe)
public:
	XRTextRenderer();
	using ::sun::java2d::pipe::GlyphListPipe::drawGlyphList;
	void init$(::sun::java2d::xr::XRCompositeManager* buffer);
	virtual void drawGlyphList(::sun::java2d::SunGraphics2D* sg2d, ::sun::font::GlyphList* gl) override;
	static const int32_t MAX_ELT_GLYPH_COUNT = 253;
	::sun::font::XRGlyphCache* glyphCache = nullptr;
	::sun::java2d::xr::XRCompositeManager* maskBuffer = nullptr;
	::sun::java2d::xr::XRBackend* backend = nullptr;
	::sun::java2d::xr::GrowableEltArray* eltList = nullptr;
};

	} // font
} // sun

#pragma pop_macro("MAX_ELT_GLYPH_COUNT")

#endif // _sun_font_XRTextRenderer_h_