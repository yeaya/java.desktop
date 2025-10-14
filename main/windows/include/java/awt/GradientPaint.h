#ifndef _java_awt_GradientPaint_h_
#define _java_awt_GradientPaint_h_
//$ class java.awt.GradientPaint
//$ extends java.awt.Paint

#include <java/awt/Paint.h>

namespace java {
	namespace awt {
		class Color;
		class PaintContext;
		class Rectangle;
		class RenderingHints;
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
			class Point2D;
			class Point2D$Float;
			class Rectangle2D;
		}
	}
}
namespace java {
	namespace awt {
		namespace image {
			class ColorModel;
		}
	}
}

namespace java {
	namespace awt {

class $import GradientPaint : public ::java::awt::Paint {
	$class(GradientPaint, $NO_CLASS_INIT, ::java::awt::Paint)
public:
	GradientPaint();
	void init$(float x1, float y1, ::java::awt::Color* color1, float x2, float y2, ::java::awt::Color* color2);
	void init$(::java::awt::geom::Point2D* pt1, ::java::awt::Color* color1, ::java::awt::geom::Point2D* pt2, ::java::awt::Color* color2);
	void init$(float x1, float y1, ::java::awt::Color* color1, float x2, float y2, ::java::awt::Color* color2, bool cyclic);
	void init$(::java::awt::geom::Point2D* pt1, ::java::awt::Color* color1, ::java::awt::geom::Point2D* pt2, ::java::awt::Color* color2, bool cyclic);
	virtual ::java::awt::PaintContext* createContext(::java::awt::image::ColorModel* cm, ::java::awt::Rectangle* deviceBounds, ::java::awt::geom::Rectangle2D* userBounds, ::java::awt::geom::AffineTransform* xform, ::java::awt::RenderingHints* hints) override;
	virtual ::java::awt::Color* getColor1();
	virtual ::java::awt::Color* getColor2();
	virtual ::java::awt::geom::Point2D* getPoint1();
	virtual ::java::awt::geom::Point2D* getPoint2();
	virtual int32_t getTransparency() override;
	virtual bool isCyclic();
	::java::awt::geom::Point2D$Float* p1 = nullptr;
	::java::awt::geom::Point2D$Float* p2 = nullptr;
	::java::awt::Color* color1 = nullptr;
	::java::awt::Color* color2 = nullptr;
	bool cyclic = false;
};

	} // awt
} // java

#endif // _java_awt_GradientPaint_h_