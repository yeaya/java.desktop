#ifndef _java_awt_MultipleGradientPaint_h_
#define _java_awt_MultipleGradientPaint_h_
//$ class java.awt.MultipleGradientPaint
//$ extends java.awt.Paint

#include <java/awt/Paint.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Color;
		class MultipleGradientPaint$ColorSpaceType;
		class MultipleGradientPaint$CycleMethod;
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
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
	namespace lang {
		namespace ref {
			class SoftReference;
		}
	}
}

namespace java {
	namespace awt {

class $import MultipleGradientPaint : public ::java::awt::Paint {
	$class(MultipleGradientPaint, $NO_CLASS_INIT, ::java::awt::Paint)
public:
	MultipleGradientPaint();
	void init$($floats* fractions, $Array<::java::awt::Color>* colors, ::java::awt::MultipleGradientPaint$CycleMethod* cycleMethod, ::java::awt::MultipleGradientPaint$ColorSpaceType* colorSpace, ::java::awt::geom::AffineTransform* gradientTransform);
	::java::awt::MultipleGradientPaint$ColorSpaceType* getColorSpace();
	$Array<::java::awt::Color>* getColors();
	::java::awt::MultipleGradientPaint$CycleMethod* getCycleMethod();
	$floats* getFractions();
	::java::awt::geom::AffineTransform* getTransform();
	virtual int32_t getTransparency() override;
	int32_t transparency = 0;
	$floats* fractions = nullptr;
	$Array<::java::awt::Color>* colors = nullptr;
	::java::awt::geom::AffineTransform* gradientTransform = nullptr;
	::java::awt::MultipleGradientPaint$CycleMethod* cycleMethod = nullptr;
	::java::awt::MultipleGradientPaint$ColorSpaceType* colorSpace = nullptr;
	::java::awt::image::ColorModel* model = nullptr;
	$floats* normalizedIntervals = nullptr;
	bool isSimpleLookup = false;
	::java::lang::ref::SoftReference* gradients = nullptr;
	::java::lang::ref::SoftReference* gradient = nullptr;
	int32_t fastGradientArraySize = 0;
};

	} // awt
} // java

#endif // _java_awt_MultipleGradientPaint_h_