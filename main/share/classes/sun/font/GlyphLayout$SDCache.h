#ifndef _sun_font_GlyphLayout$SDCache_h_
#define _sun_font_GlyphLayout$SDCache_h_
//$ class sun.font.GlyphLayout$SDCache
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("ZERO_DELTA")
#undef ZERO_DELTA

namespace java {
	namespace awt {
		class Font;
	}
}
namespace java {
	namespace awt {
		namespace font {
			class FontRenderContext;
		}
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
			class Point2D$Float;
		}
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class SoftReference;
		}
	}
}
namespace sun {
	namespace font {
		class FontStrikeDesc;
	}
}

namespace sun {
	namespace font {

class GlyphLayout$SDCache : public ::java::lang::Object {
	$class(GlyphLayout$SDCache, 0, ::java::lang::Object)
public:
	GlyphLayout$SDCache();
	void init$(::java::awt::Font* font, ::java::awt::font::FontRenderContext* frc);
	static ::sun::font::GlyphLayout$SDCache* get(::java::awt::Font* font, ::java::awt::font::FontRenderContext* frc);
	::java::awt::Font* key_font = nullptr;
	::java::awt::font::FontRenderContext* key_frc = nullptr;
	::java::awt::geom::AffineTransform* dtx = nullptr;
	::java::awt::geom::AffineTransform* gtx = nullptr;
	::java::awt::geom::Point2D$Float* delta = nullptr;
	::sun::font::FontStrikeDesc* sd = nullptr;
	static ::java::awt::geom::Point2D$Float* ZERO_DELTA;
	static ::java::lang::ref::SoftReference* cacheRef;
};

	} // font
} // sun

#pragma pop_macro("ZERO_DELTA")

#endif // _sun_font_GlyphLayout$SDCache_h_