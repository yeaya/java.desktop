#include <java/awt/RadialGradientPaintContext.h>

#include <java/awt/Color.h>
#include <java/awt/MultipleGradientPaint$ColorSpaceType.h>
#include <java/awt/MultipleGradientPaint$CycleMethod.h>
#include <java/awt/MultipleGradientPaint.h>
#include <java/awt/MultipleGradientPaintContext.h>
#include <java/awt/RadialGradientPaint.h>
#include <java/awt/Rectangle.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/image/ColorModel.h>
#include <java/lang/Math.h>
#include <jcpp.h>

#undef A
#undef B
#undef C
#undef NO_CYCLE
#undef SCALEBACK
#undef SQRT_LUT_SIZE
#undef X
#undef Y

using $ColorArray = $Array<::java::awt::Color>;
using $MultipleGradientPaint = ::java::awt::MultipleGradientPaint;
using $MultipleGradientPaint$ColorSpaceType = ::java::awt::MultipleGradientPaint$ColorSpaceType;
using $MultipleGradientPaint$CycleMethod = ::java::awt::MultipleGradientPaint$CycleMethod;
using $MultipleGradientPaintContext = ::java::awt::MultipleGradientPaintContext;
using $RadialGradientPaint = ::java::awt::RadialGradientPaint;
using $Rectangle = ::java::awt::Rectangle;
using $RenderingHints = ::java::awt::RenderingHints;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $ColorModel = ::java::awt::image::ColorModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$FieldInfo _RadialGradientPaintContext_FieldInfo_[] = {
	{"isSimpleFocus", "Z", nullptr, $PRIVATE, $field(RadialGradientPaintContext, isSimpleFocus)},
	{"isNonCyclic", "Z", nullptr, $PRIVATE, $field(RadialGradientPaintContext, isNonCyclic)},
	{"radius", "F", nullptr, $PRIVATE, $field(RadialGradientPaintContext, radius)},
	{"centerX", "F", nullptr, $PRIVATE, $field(RadialGradientPaintContext, centerX)},
	{"centerY", "F", nullptr, $PRIVATE, $field(RadialGradientPaintContext, centerY)},
	{"focusX", "F", nullptr, $PRIVATE, $field(RadialGradientPaintContext, focusX)},
	{"focusY", "F", nullptr, $PRIVATE, $field(RadialGradientPaintContext, focusY)},
	{"radiusSq", "F", nullptr, $PRIVATE, $field(RadialGradientPaintContext, radiusSq)},
	{"constA", "F", nullptr, $PRIVATE, $field(RadialGradientPaintContext, constA)},
	{"constB", "F", nullptr, $PRIVATE, $field(RadialGradientPaintContext, constB)},
	{"gDeltaDelta", "F", nullptr, $PRIVATE, $field(RadialGradientPaintContext, gDeltaDelta)},
	{"trivial", "F", nullptr, $PRIVATE, $field(RadialGradientPaintContext, trivial)},
	{"SCALEBACK", "F", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RadialGradientPaintContext, SCALEBACK)},
	{"SQRT_LUT_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RadialGradientPaintContext, SQRT_LUT_SIZE)},
	{"sqrtLut", "[F", nullptr, $PRIVATE | $STATIC, $staticField(RadialGradientPaintContext, sqrtLut)},
	{}
};

$MethodInfo _RadialGradientPaintContext_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/RadialGradientPaint;Ljava/awt/image/ColorModel;Ljava/awt/Rectangle;Ljava/awt/geom/Rectangle2D;Ljava/awt/geom/AffineTransform;Ljava/awt/RenderingHints;FFFFF[F[Ljava/awt/Color;Ljava/awt/MultipleGradientPaint$CycleMethod;Ljava/awt/MultipleGradientPaint$ColorSpaceType;)V", nullptr, 0, $method(static_cast<void(RadialGradientPaintContext::*)($RadialGradientPaint*,$ColorModel*,$Rectangle*,$Rectangle2D*,$AffineTransform*,$RenderingHints*,float,float,float,float,float,$floats*,$ColorArray*,$MultipleGradientPaint$CycleMethod*,$MultipleGradientPaint$ColorSpaceType*)>(&RadialGradientPaintContext::init$))},
	{"cyclicCircularGradientFillRaster", "([IIIIIII)V", nullptr, $PRIVATE, $method(static_cast<void(RadialGradientPaintContext::*)($ints*,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t)>(&RadialGradientPaintContext::cyclicCircularGradientFillRaster))},
	{"fillRaster", "([IIIIIII)V", nullptr, $PROTECTED},
	{"simpleNonCyclicFillRaster", "([IIIIIII)V", nullptr, $PRIVATE, $method(static_cast<void(RadialGradientPaintContext::*)($ints*,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t)>(&RadialGradientPaintContext::simpleNonCyclicFillRaster))},
	{}
};

$ClassInfo _RadialGradientPaintContext_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.awt.RadialGradientPaintContext",
	"java.awt.MultipleGradientPaintContext",
	nullptr,
	_RadialGradientPaintContext_FieldInfo_,
	_RadialGradientPaintContext_MethodInfo_
};

$Object* allocate$RadialGradientPaintContext($Class* clazz) {
	return $of($alloc(RadialGradientPaintContext));
}

float RadialGradientPaintContext::SCALEBACK = 0.0;
$floats* RadialGradientPaintContext::sqrtLut = nullptr;

void RadialGradientPaintContext::init$($RadialGradientPaint* paint, $ColorModel* cm, $Rectangle* deviceBounds, $Rectangle2D* userBounds, $AffineTransform* t, $RenderingHints* hints, float cx, float cy, float r, float fx, float fy, $floats* fractions, $ColorArray* colors, $MultipleGradientPaint$CycleMethod* cycleMethod, $MultipleGradientPaint$ColorSpaceType* colorSpace) {
	$MultipleGradientPaintContext::init$(paint, cm, deviceBounds, userBounds, t, hints, fractions, colors, cycleMethod, colorSpace);
	this->isSimpleFocus = false;
	this->isNonCyclic = false;
	this->centerX = cx;
	this->centerY = cy;
	this->focusX = fx;
	this->focusY = fy;
	this->radius = r;
	this->isSimpleFocus = (this->focusX == this->centerX) && (this->focusY == this->centerY);
	$init($MultipleGradientPaint$CycleMethod);
	this->isNonCyclic = (cycleMethod == $MultipleGradientPaint$CycleMethod::NO_CYCLE);
	this->radiusSq = this->radius * this->radius;
	float dX = this->focusX - this->centerX;
	float dY = this->focusY - this->centerY;
	double distSq = (dX * dX) + (dY * dY);
	if (distSq > this->radiusSq * RadialGradientPaintContext::SCALEBACK) {
		float scalefactor = (float)$Math::sqrt(this->radiusSq * RadialGradientPaintContext::SCALEBACK / distSq);
		dX = dX * scalefactor;
		dY = dY * scalefactor;
		this->focusX = this->centerX + dX;
		this->focusY = this->centerY + dY;
	}
	this->trivial = (float)$Math::sqrt(this->radiusSq - (dX * dX));
	this->constA = this->a02 - this->centerX;
	this->constB = this->a12 - this->centerY;
	this->gDeltaDelta = 2 * (this->a00 * this->a00 + this->a10 * this->a10) / this->radiusSq;
}

void RadialGradientPaintContext::fillRaster($ints* pixels, int32_t off, int32_t adjust, int32_t x, int32_t y, int32_t w, int32_t h) {
	if (this->isSimpleFocus && this->isNonCyclic && this->isSimpleLookup) {
		simpleNonCyclicFillRaster(pixels, off, adjust, x, y, w, h);
	} else {
		cyclicCircularGradientFillRaster(pixels, off, adjust, x, y, w, h);
	}
}

void RadialGradientPaintContext::simpleNonCyclicFillRaster($ints* pixels, int32_t off, int32_t adjust, int32_t x, int32_t y, int32_t w, int32_t h) {
	float rowX = (this->a00 * x) + (this->a01 * y) + this->constA;
	float rowY = (this->a10 * x) + (this->a11 * y) + this->constB;
	float gDeltaDelta = this->gDeltaDelta;
	adjust += w;
	int32_t rgbclip = $nc(this->gradient)->get(this->fastGradientArraySize);
	for (int32_t j = 0; j < h; ++j) {
		float gRel = (rowX * rowX + rowY * rowY) / this->radiusSq;
		float gDelta = (2 * (this->a00 * rowX + this->a10 * rowY) / this->radiusSq + gDeltaDelta / 2);
		int32_t i = 0;
		while (i < w && gRel >= 1.0f) {
			$nc(pixels)->set(off + i, rgbclip);
			gRel += gDelta;
			gDelta += gDeltaDelta;
			++i;
		}
		while (i < w && gRel < 1.0f) {
			int32_t gIndex = 0;
			if (gRel <= 0) {
				gIndex = 0;
			} else {
				float fIndex = gRel * RadialGradientPaintContext::SQRT_LUT_SIZE;
				int32_t iIndex = $cast(int32_t, (fIndex));
				float s0 = $nc(RadialGradientPaintContext::sqrtLut)->get(iIndex);
				float s1 = $nc(RadialGradientPaintContext::sqrtLut)->get(iIndex + 1) - s0;
				fIndex = s0 + (fIndex - iIndex) * s1;
				gIndex = $cast(int32_t, (fIndex * this->fastGradientArraySize));
			}
			$nc(pixels)->set(off + i, $nc(this->gradient)->get(gIndex));
			gRel += gDelta;
			gDelta += gDeltaDelta;
			++i;
		}
		while (i < w) {
			$nc(pixels)->set(off + i, rgbclip);
			++i;
		}
		off += adjust;
		rowX += this->a01;
		rowY += this->a11;
	}
}

void RadialGradientPaintContext::cyclicCircularGradientFillRaster($ints* pixels, int32_t off, int32_t adjust, int32_t x, int32_t y, int32_t w, int32_t h) {
	double constC = -this->radiusSq + (this->centerX * this->centerX) + (this->centerY * this->centerY);
	double A = 0.0;
	double B = 0.0;
	double C = 0.0;
	double slope = 0.0;
	double yintcpt = 0.0;
	double solutionX = 0.0;
	double solutionY = 0.0;
	float constX = (this->a00 * x) + (this->a01 * y) + this->a02;
	float constY = (this->a10 * x) + (this->a11 * y) + this->a12;
	float precalc2 = 2 * this->centerY;
	float precalc3 = -2 * this->centerX;
	float g = 0.0;
	float det = 0.0;
	float currentToFocusSq = 0.0;
	float intersectToFocusSq = 0.0;
	float deltaXSq = 0.0;
	float deltaYSq = 0.0;
	int32_t indexer = off;
	int32_t pixInc = w + adjust;
	for (int32_t j = 0; j < h; ++j) {
		float X = (this->a01 * j) + constX;
		float Y = (this->a11 * j) + constY;
		for (int32_t i = 0; i < w; ++i) {
			if (X == this->focusX) {
				solutionX = this->focusX;
				solutionY = this->centerY;
				solutionY += (Y > this->focusY) ? this->trivial : -this->trivial;
			} else {
				slope = (Y - this->focusY) / (X - this->focusX);
				yintcpt = Y - (slope * X);
				A = (slope * slope) + 1;
				B = precalc3 + (-2 * slope * (this->centerY - yintcpt));
				C = constC + (yintcpt * (yintcpt - precalc2));
				det = (float)$Math::sqrt((B * B) - (4 * A * C));
				solutionX = -B;
				solutionX += (X < this->focusX) ? -det : det;
				solutionX = solutionX / (2 * A);
				solutionY = (slope * solutionX) + yintcpt;
			}
			deltaXSq = X - this->focusX;
			deltaXSq = deltaXSq * deltaXSq;
			deltaYSq = Y - this->focusY;
			deltaYSq = deltaYSq * deltaYSq;
			currentToFocusSq = deltaXSq + deltaYSq;
			deltaXSq = (float)solutionX - this->focusX;
			deltaXSq = deltaXSq * deltaXSq;
			deltaYSq = (float)solutionY - this->focusY;
			deltaYSq = deltaYSq * deltaYSq;
			intersectToFocusSq = deltaXSq + deltaYSq;
			g = (float)$Math::sqrt(currentToFocusSq / intersectToFocusSq);
			$nc(pixels)->set(indexer + i, indexIntoGradientsArrays(g));
			X += this->a00;
			Y += this->a10;
		}
		indexer += pixInc;
	}
}

void clinit$RadialGradientPaintContext($Class* class$) {
	RadialGradientPaintContext::SCALEBACK = 0.99f;
	$assignStatic(RadialGradientPaintContext::sqrtLut, $new($floats, RadialGradientPaintContext::SQRT_LUT_SIZE + 1));
	{
		for (int32_t i = 0; i < $nc(RadialGradientPaintContext::sqrtLut)->length; ++i) {
			$nc(RadialGradientPaintContext::sqrtLut)->set(i, (float)$Math::sqrt($div(i, ((float)RadialGradientPaintContext::SQRT_LUT_SIZE))));
		}
	}
}

RadialGradientPaintContext::RadialGradientPaintContext() {
}

$Class* RadialGradientPaintContext::load$($String* name, bool initialize) {
	$loadClass(RadialGradientPaintContext, name, initialize, &_RadialGradientPaintContext_ClassInfo_, clinit$RadialGradientPaintContext, allocate$RadialGradientPaintContext);
	return class$;
}

$Class* RadialGradientPaintContext::class$ = nullptr;

	} // awt
} // java