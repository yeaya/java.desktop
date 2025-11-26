#ifndef _sun_font_Decoration$Label_h_
#define _sun_font_Decoration$Label_h_
//$ interface sun.font.Decoration$Label
//$ extends java.lang.Object

#include <java/lang/Object.h>

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
namespace sun {
	namespace font {
		class CoreMetrics;
	}
}

namespace sun {
	namespace font {

class Decoration$Label : public ::java::lang::Object {
	$interface(Decoration$Label, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::sun::font::CoreMetrics* getCoreMetrics() {return nullptr;}
	virtual ::java::awt::geom::Rectangle2D* getLogicalBounds() {return nullptr;}
	virtual void handleDraw(::java::awt::Graphics2D* g2d, float x, float y) {}
	virtual ::java::awt::geom::Rectangle2D* handleGetCharVisualBounds(int32_t index) {return nullptr;}
	virtual ::java::awt::Shape* handleGetOutline(float x, float y) {return nullptr;}
	virtual ::java::awt::geom::Rectangle2D* handleGetVisualBounds() {return nullptr;}
};

	} // font
} // sun

#endif // _sun_font_Decoration$Label_h_