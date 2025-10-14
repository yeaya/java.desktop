#ifndef _sun_font_GlyphLayout$LayoutEngine_h_
#define _sun_font_GlyphLayout$LayoutEngine_h_
//$ interface sun.font.GlyphLayout$LayoutEngine
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		namespace geom {
			class Point2D$Float;
		}
	}
}
namespace sun {
	namespace font {
		class FontStrikeDesc;
		class GlyphLayout$GVData;
		class TextRecord;
	}
}

namespace sun {
	namespace font {

class GlyphLayout$LayoutEngine : public ::java::lang::Object {
	$interface(GlyphLayout$LayoutEngine, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void layout(::sun::font::FontStrikeDesc* sd, $floats* mat, float ptSize, int32_t gmask, int32_t baseIndex, ::sun::font::TextRecord* text, int32_t typo_flags, ::java::awt::geom::Point2D$Float* pt, ::sun::font::GlyphLayout$GVData* data) {}
};

	} // font
} // sun

#endif // _sun_font_GlyphLayout$LayoutEngine_h_