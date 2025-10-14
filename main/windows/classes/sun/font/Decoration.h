#ifndef _sun_font_Decoration_h_
#define _sun_font_Decoration_h_
//$ class sun.font.Decoration
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("PLAIN")
#undef PLAIN
#pragma push_macro("VALUES_MASK")
#undef VALUES_MASK

namespace java {
	namespace awt {
		class Graphics2D;
		class Shape;
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class Rectangle2D;
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace sun {
	namespace font {
		class AttributeValues;
		class Decoration$Label;
	}
}

namespace sun {
	namespace font {

class Decoration : public ::java::lang::Object {
	$class(Decoration, 0, ::java::lang::Object)
public:
	Decoration();
	void init$();
	virtual void drawTextAndDecorations(::sun::font::Decoration$Label* label, ::java::awt::Graphics2D* g2d, float x, float y);
	virtual ::java::awt::geom::Rectangle2D* getCharVisualBounds(::sun::font::Decoration$Label* label, int32_t index);
	static ::sun::font::Decoration* getDecoration(::sun::font::AttributeValues* values);
	static ::sun::font::Decoration* getDecoration(::java::util::Map* attributes);
	virtual ::java::awt::Shape* getOutline(::sun::font::Decoration$Label* label, float x, float y);
	static ::sun::font::Decoration* getPlainDecoration();
	virtual ::java::awt::geom::Rectangle2D* getVisualBounds(::sun::font::Decoration$Label* label);
	static int32_t VALUES_MASK;
	static ::sun::font::Decoration* PLAIN;
};

	} // font
} // sun

#pragma pop_macro("PLAIN")
#pragma pop_macro("VALUES_MASK")

#endif // _sun_font_Decoration_h_