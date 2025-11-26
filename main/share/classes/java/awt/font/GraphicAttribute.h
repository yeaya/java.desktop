#ifndef _java_awt_font_GraphicAttribute_h_
#define _java_awt_font_GraphicAttribute_h_
//$ class java.awt.font.GraphicAttribute
//$ extends java.lang.Object

#include <java/awt/Font.h>

#pragma push_macro("BOTTOM_ALIGNMENT")
#undef BOTTOM_ALIGNMENT
#pragma push_macro("CENTER_BASELINE")
#undef CENTER_BASELINE
#pragma push_macro("HANGING_BASELINE")
#undef HANGING_BASELINE
#pragma push_macro("ROMAN_BASELINE")
#undef ROMAN_BASELINE
#pragma push_macro("TOP_ALIGNMENT")
#undef TOP_ALIGNMENT

namespace java {
	namespace awt {
		class Graphics2D;
		class Shape;
	}
}
namespace java {
	namespace awt {
		namespace font {
			class GlyphJustificationInfo;
		}
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
			class Rectangle2D;
		}
	}
}

namespace java {
	namespace awt {
		namespace font {

class $export GraphicAttribute : public ::java::lang::Object {
	$class(GraphicAttribute, $NO_CLASS_INIT, ::java::lang::Object)
public:
	GraphicAttribute();
	void init$(int32_t alignment);
	virtual void draw(::java::awt::Graphics2D* graphics, float x, float y) {}
	virtual float getAdvance() {return 0.0;}
	int32_t getAlignment();
	virtual float getAscent() {return 0.0;}
	virtual ::java::awt::geom::Rectangle2D* getBounds();
	virtual float getDescent() {return 0.0;}
	virtual ::java::awt::font::GlyphJustificationInfo* getJustificationInfo();
	virtual ::java::awt::Shape* getOutline(::java::awt::geom::AffineTransform* tx);
	int32_t fAlignment = 0;
	static const int32_t TOP_ALIGNMENT = (-1);
	static const int32_t BOTTOM_ALIGNMENT = (-2);
	static const int32_t ROMAN_BASELINE = ::java::awt::Font::ROMAN_BASELINE;
	static const int32_t CENTER_BASELINE = ::java::awt::Font::CENTER_BASELINE;
	static const int32_t HANGING_BASELINE = ::java::awt::Font::HANGING_BASELINE;
};

		} // font
	} // awt
} // java

#pragma pop_macro("BOTTOM_ALIGNMENT")
#pragma pop_macro("CENTER_BASELINE")
#pragma pop_macro("HANGING_BASELINE")
#pragma pop_macro("ROMAN_BASELINE")
#pragma pop_macro("TOP_ALIGNMENT")

#endif // _java_awt_font_GraphicAttribute_h_