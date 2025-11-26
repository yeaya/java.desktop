#ifndef _java_awt_LinearGradientPaint_h_
#define _java_awt_LinearGradientPaint_h_
//$ class java.awt.LinearGradientPaint
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

class $export LinearGradientPaint : public ::java::awt::MultipleGradientPaint {
	$class(LinearGradientPaint, $NO_CLASS_INIT, ::java::awt::MultipleGradientPaint)
public:
	LinearGradientPaint();
	void init$(float startX, float startY, float endX, float endY, $floats* fractions, $Array<::java::awt::Color>* colors);
	void init$(float startX, float startY, float endX, float endY, $floats* fractions, $Array<::java::awt::Color>* colors, ::java::awt::MultipleGradientPaint$CycleMethod* cycleMethod);
	void init$(::java::awt::geom::Point2D* start, ::java::awt::geom::Point2D* end, $floats* fractions, $Array<::java::awt::Color>* colors);
	void init$(::java::awt::geom::Point2D* start, ::java::awt::geom::Point2D* end, $floats* fractions, $Array<::java::awt::Color>* colors, ::java::awt::MultipleGradientPaint$CycleMethod* cycleMethod);
	void init$(::java::awt::geom::Point2D* start, ::java::awt::geom::Point2D* end, $floats* fractions, $Array<::java::awt::Color>* colors, ::java::awt::MultipleGradientPaint$CycleMethod* cycleMethod, ::java::awt::MultipleGradientPaint$ColorSpaceType* colorSpace, ::java::awt::geom::AffineTransform* gradientTransform);
	virtual ::java::awt::PaintContext* createContext(::java::awt::image::ColorModel* cm, ::java::awt::Rectangle* deviceBounds, ::java::awt::geom::Rectangle2D* userBounds, ::java::awt::geom::AffineTransform* transform, ::java::awt::RenderingHints* hints) override;
	::java::awt::geom::Point2D* getEndPoint();
	::java::awt::geom::Point2D* getStartPoint();
	::java::awt::geom::Point2D* start = nullptr;
	::java::awt::geom::Point2D* end = nullptr;
};

	} // awt
} // java

#endif // _java_awt_LinearGradientPaint_h_