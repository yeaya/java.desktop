#ifndef _java_awt_RadialGradientPaint_h_
#define _java_awt_RadialGradientPaint_h_
//$ class java.awt.RadialGradientPaint
//$ extends java.awt.MultipleGradientPaint

#include <java/awt/MultipleGradientPaint.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Color;
		class MultipleGradientPaint$ColorSpaceType;
		class MultipleGradientPaint$CycleMethod;
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

class $export RadialGradientPaint : public ::java::awt::MultipleGradientPaint {
	$class(RadialGradientPaint, $NO_CLASS_INIT, ::java::awt::MultipleGradientPaint)
public:
	RadialGradientPaint();
	void init$(float cx, float cy, float radius, $floats* fractions, $Array<::java::awt::Color>* colors);
	void init$(::java::awt::geom::Point2D* center, float radius, $floats* fractions, $Array<::java::awt::Color>* colors);
	void init$(float cx, float cy, float radius, $floats* fractions, $Array<::java::awt::Color>* colors, ::java::awt::MultipleGradientPaint$CycleMethod* cycleMethod);
	void init$(::java::awt::geom::Point2D* center, float radius, $floats* fractions, $Array<::java::awt::Color>* colors, ::java::awt::MultipleGradientPaint$CycleMethod* cycleMethod);
	void init$(float cx, float cy, float radius, float fx, float fy, $floats* fractions, $Array<::java::awt::Color>* colors, ::java::awt::MultipleGradientPaint$CycleMethod* cycleMethod);
	void init$(::java::awt::geom::Point2D* center, float radius, ::java::awt::geom::Point2D* focus, $floats* fractions, $Array<::java::awt::Color>* colors, ::java::awt::MultipleGradientPaint$CycleMethod* cycleMethod);
	void init$(::java::awt::geom::Point2D* center, float radius, ::java::awt::geom::Point2D* focus, $floats* fractions, $Array<::java::awt::Color>* colors, ::java::awt::MultipleGradientPaint$CycleMethod* cycleMethod, ::java::awt::MultipleGradientPaint$ColorSpaceType* colorSpace, ::java::awt::geom::AffineTransform* gradientTransform);
	void init$(::java::awt::geom::Rectangle2D* gradientBounds, $floats* fractions, $Array<::java::awt::Color>* colors, ::java::awt::MultipleGradientPaint$CycleMethod* cycleMethod);
	virtual ::java::awt::PaintContext* createContext(::java::awt::image::ColorModel* cm, ::java::awt::Rectangle* deviceBounds, ::java::awt::geom::Rectangle2D* userBounds, ::java::awt::geom::AffineTransform* transform, ::java::awt::RenderingHints* hints) override;
	static ::java::awt::geom::AffineTransform* createGradientTransform(::java::awt::geom::Rectangle2D* r);
	::java::awt::geom::Point2D* getCenterPoint();
	::java::awt::geom::Point2D* getFocusPoint();
	float getRadius();
	::java::awt::geom::Point2D* focus = nullptr;
	::java::awt::geom::Point2D* center = nullptr;
	float radius = 0.0;
};

	} // awt
} // java

#endif // _java_awt_RadialGradientPaint_h_