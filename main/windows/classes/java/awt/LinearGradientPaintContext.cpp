#include <java/awt/LinearGradientPaintContext.h>

#include <java/awt/Color.h>
#include <java/awt/LinearGradientPaint.h>
#include <java/awt/MultipleGradientPaint$ColorSpaceType.h>
#include <java/awt/MultipleGradientPaint$CycleMethod.h>
#include <java/awt/MultipleGradientPaint.h>
#include <java/awt/MultipleGradientPaintContext.h>
#include <java/awt/Rectangle.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Point2D.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/image/ColorModel.h>
#include <jcpp.h>

using $ColorArray = $Array<::java::awt::Color>;
using $LinearGradientPaint = ::java::awt::LinearGradientPaint;
using $MultipleGradientPaint = ::java::awt::MultipleGradientPaint;
using $MultipleGradientPaint$ColorSpaceType = ::java::awt::MultipleGradientPaint$ColorSpaceType;
using $MultipleGradientPaint$CycleMethod = ::java::awt::MultipleGradientPaint$CycleMethod;
using $MultipleGradientPaintContext = ::java::awt::MultipleGradientPaintContext;
using $Rectangle = ::java::awt::Rectangle;
using $RenderingHints = ::java::awt::RenderingHints;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Point2D = ::java::awt::geom::Point2D;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $ColorModel = ::java::awt::image::ColorModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$FieldInfo _LinearGradientPaintContext_FieldInfo_[] = {
	{"dgdX", "F", nullptr, $PRIVATE, $field(LinearGradientPaintContext, dgdX)},
	{"dgdY", "F", nullptr, $PRIVATE, $field(LinearGradientPaintContext, dgdY)},
	{"gc", "F", nullptr, $PRIVATE, $field(LinearGradientPaintContext, gc)},
	{}
};

$MethodInfo _LinearGradientPaintContext_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/LinearGradientPaint;Ljava/awt/image/ColorModel;Ljava/awt/Rectangle;Ljava/awt/geom/Rectangle2D;Ljava/awt/geom/AffineTransform;Ljava/awt/RenderingHints;Ljava/awt/geom/Point2D;Ljava/awt/geom/Point2D;[F[Ljava/awt/Color;Ljava/awt/MultipleGradientPaint$CycleMethod;Ljava/awt/MultipleGradientPaint$ColorSpaceType;)V", nullptr, 0, $method(static_cast<void(LinearGradientPaintContext::*)($LinearGradientPaint*,$ColorModel*,$Rectangle*,$Rectangle2D*,$AffineTransform*,$RenderingHints*,$Point2D*,$Point2D*,$floats*,$ColorArray*,$MultipleGradientPaint$CycleMethod*,$MultipleGradientPaint$ColorSpaceType*)>(&LinearGradientPaintContext::init$))},
	{"fillRaster", "([IIIIIII)V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _LinearGradientPaintContext_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.awt.LinearGradientPaintContext",
	"java.awt.MultipleGradientPaintContext",
	nullptr,
	_LinearGradientPaintContext_FieldInfo_,
	_LinearGradientPaintContext_MethodInfo_
};

$Object* allocate$LinearGradientPaintContext($Class* clazz) {
	return $of($alloc(LinearGradientPaintContext));
}

void LinearGradientPaintContext::init$($LinearGradientPaint* paint, $ColorModel* cm, $Rectangle* deviceBounds, $Rectangle2D* userBounds, $AffineTransform* t, $RenderingHints* hints, $Point2D* start, $Point2D* end, $floats* fractions, $ColorArray* colors, $MultipleGradientPaint$CycleMethod* cycleMethod, $MultipleGradientPaint$ColorSpaceType* colorSpace) {
	$MultipleGradientPaintContext::init$(paint, cm, deviceBounds, userBounds, t, hints, fractions, colors, cycleMethod, colorSpace);
	float startx = (float)$nc(start)->getX();
	float starty = (float)start->getY();
	float endx = (float)$nc(end)->getX();
	float endy = (float)end->getY();
	float dx = endx - startx;
	float dy = endy - starty;
	float dSq = dx * dx + dy * dy;
	float constX = dx / dSq;
	float constY = dy / dSq;
	this->dgdX = this->a00 * constX + this->a10 * constY;
	this->dgdY = this->a01 * constX + this->a11 * constY;
	this->gc = (this->a02 - startx) * constX + (this->a12 - starty) * constY;
}

void LinearGradientPaintContext::fillRaster($ints* pixels, int32_t off, int32_t adjust, int32_t x, int32_t y, int32_t w, int32_t h) {
	float g = (float)0;
	int32_t rowLimit = off + w;
	float initConst = (this->dgdX * x) + this->gc;
	for (int32_t i = 0; i < h; ++i) {
		g = initConst + this->dgdY * (y + i);
		while (off < rowLimit) {
			$nc(pixels)->set(off++, indexIntoGradientsArrays(g));
			g += this->dgdX;
		}
		off += adjust;
		rowLimit = off + w;
	}
}

LinearGradientPaintContext::LinearGradientPaintContext() {
}

$Class* LinearGradientPaintContext::load$($String* name, bool initialize) {
	$loadClass(LinearGradientPaintContext, name, initialize, &_LinearGradientPaintContext_ClassInfo_, allocate$LinearGradientPaintContext);
	return class$;
}

$Class* LinearGradientPaintContext::class$ = nullptr;

	} // awt
} // java