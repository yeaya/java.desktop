#ifndef _java_awt_font_ShapeGraphicAttribute_h_
#define _java_awt_font_ShapeGraphicAttribute_h_
//$ class java.awt.font.ShapeGraphicAttribute
//$ extends java.awt.font.GraphicAttribute

#include <java/awt/font/GraphicAttribute.h>

#pragma push_macro("FILL")
#undef FILL
#pragma push_macro("STROKE")
#undef STROKE

namespace java {
	namespace awt {
		class Graphics2D;
		class Shape;
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

class $import ShapeGraphicAttribute : public ::java::awt::font::GraphicAttribute {
	$class(ShapeGraphicAttribute, $NO_CLASS_INIT, ::java::awt::font::GraphicAttribute)
public:
	ShapeGraphicAttribute();
	void init$(::java::awt::Shape* shape, int32_t alignment, bool stroke);
	virtual void draw(::java::awt::Graphics2D* graphics, float x, float y) override;
	virtual bool equals(Object$* rhs) override;
	bool equals(::java::awt::font::ShapeGraphicAttribute* rhs);
	virtual float getAdvance() override;
	virtual float getAscent() override;
	virtual ::java::awt::geom::Rectangle2D* getBounds() override;
	virtual float getDescent() override;
	virtual ::java::awt::Shape* getOutline(::java::awt::geom::AffineTransform* tx) override;
	virtual int32_t hashCode() override;
	::java::awt::Shape* fShape = nullptr;
	bool fStroke = false;
	static const bool STROKE = true;
	static const bool FILL = false;
	::java::awt::geom::Rectangle2D* fShapeBounds = nullptr;
};

		} // font
	} // awt
} // java

#pragma pop_macro("FILL")
#pragma pop_macro("STROKE")

#endif // _java_awt_font_ShapeGraphicAttribute_h_