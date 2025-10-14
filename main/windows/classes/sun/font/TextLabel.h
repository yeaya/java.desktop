#ifndef _sun_font_TextLabel_h_
#define _sun_font_TextLabel_h_
//$ class sun.font.TextLabel
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

class TextLabel : public ::java::lang::Object {
	$class(TextLabel, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TextLabel();
	void init$();
	virtual void draw(::java::awt::Graphics2D* g, float x, float y) {}
	virtual void draw(::java::awt::Graphics2D* g);
	virtual ::java::awt::geom::Rectangle2D* getAlignBounds(float x, float y) {return nullptr;}
	virtual ::java::awt::geom::Rectangle2D* getAlignBounds();
	virtual ::java::awt::geom::Rectangle2D* getItalicBounds(float x, float y) {return nullptr;}
	virtual ::java::awt::geom::Rectangle2D* getItalicBounds();
	virtual ::java::awt::geom::Rectangle2D* getLogicalBounds(float x, float y) {return nullptr;}
	virtual ::java::awt::geom::Rectangle2D* getLogicalBounds();
	virtual ::java::awt::Shape* getOutline(float x, float y) {return nullptr;}
	virtual ::java::awt::Shape* getOutline();
	virtual ::java::awt::geom::Rectangle2D* getVisualBounds(float x, float y) {return nullptr;}
	virtual ::java::awt::geom::Rectangle2D* getVisualBounds();
};

	} // font
} // sun

#endif // _sun_font_TextLabel_h_