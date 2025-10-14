#ifndef _sun_font_GlyphLayout$GVData_h_
#define _sun_font_GlyphLayout$GVData_h_
//$ class sun.font.GlyphLayout$GVData
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("UNINITIALIZED_FLAGS")
#undef UNINITIALIZED_FLAGS

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
namespace sun {
	namespace font {
		class StandardGlyphVector;
	}
}

namespace sun {
	namespace font {

class GlyphLayout$GVData : public ::java::lang::Object {
	$class(GlyphLayout$GVData, $NO_CLASS_INIT, ::java::lang::Object)
public:
	GlyphLayout$GVData();
	void init$();
	::sun::font::StandardGlyphVector* createGlyphVector(::java::awt::Font* font, ::java::awt::font::FontRenderContext* frc, ::sun::font::StandardGlyphVector* result);
	void grow();
	void grow(int32_t delta);
	void init(int32_t size);
	int32_t _count = 0;
	int32_t _flags = 0;
	$ints* _glyphs = nullptr;
	$floats* _positions = nullptr;
	$ints* _indices = nullptr;
	static const int32_t UNINITIALIZED_FLAGS = (-1);
};

	} // font
} // sun

#pragma pop_macro("UNINITIALIZED_FLAGS")

#endif // _sun_font_GlyphLayout$GVData_h_