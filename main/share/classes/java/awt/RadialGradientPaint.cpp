#include <java/awt/RadialGradientPaint.h>

#include <java/awt/Color.h>
#include <java/awt/MultipleGradientPaint$ColorSpaceType.h>
#include <java/awt/MultipleGradientPaint$CycleMethod.h>
#include <java/awt/MultipleGradientPaint.h>
#include <java/awt/MultipleGradientPaintContext.h>
#include <java/awt/PaintContext.h>
#include <java/awt/RadialGradientPaintContext.h>
#include <java/awt/Rectangle.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Point2D$Double.h>
#include <java/awt/geom/Point2D$Float.h>
#include <java/awt/geom/Point2D.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/image/ColorModel.h>
#include <jcpp.h>

#undef NO_CYCLE
#undef SRGB

using $ColorArray = $Array<::java::awt::Color>;
using $MultipleGradientPaint = ::java::awt::MultipleGradientPaint;
using $MultipleGradientPaint$ColorSpaceType = ::java::awt::MultipleGradientPaint$ColorSpaceType;
using $MultipleGradientPaint$CycleMethod = ::java::awt::MultipleGradientPaint$CycleMethod;
using $MultipleGradientPaintContext = ::java::awt::MultipleGradientPaintContext;
using $PaintContext = ::java::awt::PaintContext;
using $RadialGradientPaintContext = ::java::awt::RadialGradientPaintContext;
using $Rectangle = ::java::awt::Rectangle;
using $RenderingHints = ::java::awt::RenderingHints;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Point2D = ::java::awt::geom::Point2D;
using $Point2D$Double = ::java::awt::geom::Point2D$Double;
using $Point2D$Float = ::java::awt::geom::Point2D$Float;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $ColorModel = ::java::awt::image::ColorModel;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $NullPointerException = ::java::lang::NullPointerException;

namespace java {
	namespace awt {

$Attribute RadialGradientPaint_Attribute_var$1[] = {
	{'s', "centerPoint"},
	{'s', "radius"},
	{'s', "focusPoint"},
	{'s', "fractions"},
	{'s', "colors"},
	{'s', "cycleMethod"},
	{'s', "colorSpace"},
	{'s', "transform"},
	{'-'}
};

$NamedAttribute RadialGradientPaint_Attribute_var$0[] = {
	{"value", '[', RadialGradientPaint_Attribute_var$1},
	{}
};

$CompoundAttribute _RadialGradientPaint_MethodAnnotations_init$6[] = {
	{"Ljava/beans/ConstructorProperties;", RadialGradientPaint_Attribute_var$0},
	{}
};

$FieldInfo _RadialGradientPaint_FieldInfo_[] = {
	{"focus", "Ljava/awt/geom/Point2D;", nullptr, $PRIVATE | $FINAL, $field(RadialGradientPaint, focus)},
	{"center", "Ljava/awt/geom/Point2D;", nullptr, $PRIVATE | $FINAL, $field(RadialGradientPaint, center)},
	{"radius", "F", nullptr, $PRIVATE | $FINAL, $field(RadialGradientPaint, radius)},
	{}
};

$MethodInfo _RadialGradientPaint_MethodInfo_[] = {
	{"<init>", "(FFF[F[Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(static_cast<void(RadialGradientPaint::*)(float,float,float,$floats*,$ColorArray*)>(&RadialGradientPaint::init$))},
	{"<init>", "(Ljava/awt/geom/Point2D;F[F[Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(static_cast<void(RadialGradientPaint::*)($Point2D*,float,$floats*,$ColorArray*)>(&RadialGradientPaint::init$))},
	{"<init>", "(FFF[F[Ljava/awt/Color;Ljava/awt/MultipleGradientPaint$CycleMethod;)V", nullptr, $PUBLIC, $method(static_cast<void(RadialGradientPaint::*)(float,float,float,$floats*,$ColorArray*,$MultipleGradientPaint$CycleMethod*)>(&RadialGradientPaint::init$))},
	{"<init>", "(Ljava/awt/geom/Point2D;F[F[Ljava/awt/Color;Ljava/awt/MultipleGradientPaint$CycleMethod;)V", nullptr, $PUBLIC, $method(static_cast<void(RadialGradientPaint::*)($Point2D*,float,$floats*,$ColorArray*,$MultipleGradientPaint$CycleMethod*)>(&RadialGradientPaint::init$))},
	{"<init>", "(FFFFF[F[Ljava/awt/Color;Ljava/awt/MultipleGradientPaint$CycleMethod;)V", nullptr, $PUBLIC, $method(static_cast<void(RadialGradientPaint::*)(float,float,float,float,float,$floats*,$ColorArray*,$MultipleGradientPaint$CycleMethod*)>(&RadialGradientPaint::init$))},
	{"<init>", "(Ljava/awt/geom/Point2D;FLjava/awt/geom/Point2D;[F[Ljava/awt/Color;Ljava/awt/MultipleGradientPaint$CycleMethod;)V", nullptr, $PUBLIC, $method(static_cast<void(RadialGradientPaint::*)($Point2D*,float,$Point2D*,$floats*,$ColorArray*,$MultipleGradientPaint$CycleMethod*)>(&RadialGradientPaint::init$))},
	{"<init>", "(Ljava/awt/geom/Point2D;FLjava/awt/geom/Point2D;[F[Ljava/awt/Color;Ljava/awt/MultipleGradientPaint$CycleMethod;Ljava/awt/MultipleGradientPaint$ColorSpaceType;Ljava/awt/geom/AffineTransform;)V", nullptr, $PUBLIC, $method(static_cast<void(RadialGradientPaint::*)($Point2D*,float,$Point2D*,$floats*,$ColorArray*,$MultipleGradientPaint$CycleMethod*,$MultipleGradientPaint$ColorSpaceType*,$AffineTransform*)>(&RadialGradientPaint::init$)), nullptr, nullptr, _RadialGradientPaint_MethodAnnotations_init$6},
	{"<init>", "(Ljava/awt/geom/Rectangle2D;[F[Ljava/awt/Color;Ljava/awt/MultipleGradientPaint$CycleMethod;)V", nullptr, $PUBLIC, $method(static_cast<void(RadialGradientPaint::*)($Rectangle2D*,$floats*,$ColorArray*,$MultipleGradientPaint$CycleMethod*)>(&RadialGradientPaint::init$))},
	{"createContext", "(Ljava/awt/image/ColorModel;Ljava/awt/Rectangle;Ljava/awt/geom/Rectangle2D;Ljava/awt/geom/AffineTransform;Ljava/awt/RenderingHints;)Ljava/awt/PaintContext;", nullptr, $PUBLIC},
	{"createGradientTransform", "(Ljava/awt/geom/Rectangle2D;)Ljava/awt/geom/AffineTransform;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$AffineTransform*(*)($Rectangle2D*)>(&RadialGradientPaint::createGradientTransform))},
	{"getCenterPoint", "()Ljava/awt/geom/Point2D;", nullptr, $PUBLIC, $method(static_cast<$Point2D*(RadialGradientPaint::*)()>(&RadialGradientPaint::getCenterPoint))},
	{"getFocusPoint", "()Ljava/awt/geom/Point2D;", nullptr, $PUBLIC, $method(static_cast<$Point2D*(RadialGradientPaint::*)()>(&RadialGradientPaint::getFocusPoint))},
	{"getRadius", "()F", nullptr, $PUBLIC, $method(static_cast<float(RadialGradientPaint::*)()>(&RadialGradientPaint::getRadius))},
	{}
};

$ClassInfo _RadialGradientPaint_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.awt.RadialGradientPaint",
	"java.awt.MultipleGradientPaint",
	nullptr,
	_RadialGradientPaint_FieldInfo_,
	_RadialGradientPaint_MethodInfo_
};

$Object* allocate$RadialGradientPaint($Class* clazz) {
	return $of($alloc(RadialGradientPaint));
}

void RadialGradientPaint::init$(float cx, float cy, float radius, $floats* fractions, $ColorArray* colors) {
	$init($MultipleGradientPaint$CycleMethod);
	RadialGradientPaint::init$(cx, cy, radius, cx, cy, fractions, colors, $MultipleGradientPaint$CycleMethod::NO_CYCLE);
}

void RadialGradientPaint::init$($Point2D* center, float radius, $floats* fractions, $ColorArray* colors) {
	$init($MultipleGradientPaint$CycleMethod);
	RadialGradientPaint::init$(center, radius, center, fractions, colors, $MultipleGradientPaint$CycleMethod::NO_CYCLE);
}

void RadialGradientPaint::init$(float cx, float cy, float radius, $floats* fractions, $ColorArray* colors, $MultipleGradientPaint$CycleMethod* cycleMethod) {
	RadialGradientPaint::init$(cx, cy, radius, cx, cy, fractions, colors, cycleMethod);
}

void RadialGradientPaint::init$($Point2D* center, float radius, $floats* fractions, $ColorArray* colors, $MultipleGradientPaint$CycleMethod* cycleMethod) {
	RadialGradientPaint::init$(center, radius, center, fractions, colors, cycleMethod);
}

void RadialGradientPaint::init$(float cx, float cy, float radius, float fx, float fy, $floats* fractions, $ColorArray* colors, $MultipleGradientPaint$CycleMethod* cycleMethod) {
	$useLocalCurrentObjectStackCache();
	$var($Point2D, var$0, static_cast<$Point2D*>($new($Point2D$Float, cx, cy)));
	float var$1 = radius;
	RadialGradientPaint::init$(var$0, var$1, static_cast<$Point2D*>($$new($Point2D$Float, fx, fy)), fractions, colors, cycleMethod);
}

void RadialGradientPaint::init$($Point2D* center, float radius, $Point2D* focus, $floats* fractions, $ColorArray* colors, $MultipleGradientPaint$CycleMethod* cycleMethod) {
	$init($MultipleGradientPaint$ColorSpaceType);
	RadialGradientPaint::init$(center, radius, focus, fractions, colors, cycleMethod, $MultipleGradientPaint$ColorSpaceType::SRGB, $$new($AffineTransform));
}

void RadialGradientPaint::init$($Point2D* center, float radius, $Point2D* focus, $floats* fractions, $ColorArray* colors, $MultipleGradientPaint$CycleMethod* cycleMethod, $MultipleGradientPaint$ColorSpaceType* colorSpace, $AffineTransform* gradientTransform) {
	$MultipleGradientPaint::init$(fractions, colors, cycleMethod, colorSpace, gradientTransform);
	if (center == nullptr) {
		$throwNew($NullPointerException, "Center point must be non-null"_s);
	}
	if (focus == nullptr) {
		$throwNew($NullPointerException, "Focus point must be non-null"_s);
	}
	if (radius <= 0) {
		$throwNew($IllegalArgumentException, "Radius must be greater than zero"_s);
	}
	double var$0 = $nc(center)->getX();
	$set(this, center, $new($Point2D$Double, var$0, center->getY()));
	double var$1 = $nc(focus)->getX();
	$set(this, focus, $new($Point2D$Double, var$1, focus->getY()));
	this->radius = radius;
}

void RadialGradientPaint::init$($Rectangle2D* gradientBounds, $floats* fractions, $ColorArray* colors, $MultipleGradientPaint$CycleMethod* cycleMethod) {
	$useLocalCurrentObjectStackCache();
	double var$1 = $nc(gradientBounds)->getCenterX();
	$var($Point2D, var$0, static_cast<$Point2D*>($new($Point2D$Double, var$1, gradientBounds->getCenterY())));
	double var$3 = $nc(gradientBounds)->getCenterX();
	$var($Point2D, var$2, static_cast<$Point2D*>($new($Point2D$Double, var$3, gradientBounds->getCenterY())));
	$var($floats, var$4, fractions);
	$var($ColorArray, var$5, colors);
	$var($MultipleGradientPaint$CycleMethod, var$6, cycleMethod);
	$init($MultipleGradientPaint$ColorSpaceType);
	$var($MultipleGradientPaint$ColorSpaceType, var$7, $MultipleGradientPaint$ColorSpaceType::SRGB);
	RadialGradientPaint::init$(var$0, 1.0f, var$2, var$4, var$5, var$6, var$7, $(createGradientTransform(gradientBounds)));
	if ($nc(gradientBounds)->isEmpty()) {
		$throwNew($IllegalArgumentException, "Gradient bounds must be non-empty"_s);
	}
}

$AffineTransform* RadialGradientPaint::createGradientTransform($Rectangle2D* r) {
	$init(RadialGradientPaint);
	double cx = $nc(r)->getCenterX();
	double cy = r->getCenterY();
	$var($AffineTransform, xform, $AffineTransform::getTranslateInstance(cx, cy));
	double var$0 = r->getWidth() / 2;
	$nc(xform)->scale(var$0, r->getHeight() / 2);
	xform->translate(-cx, -cy);
	return xform;
}

$PaintContext* RadialGradientPaint::createContext($ColorModel* cm, $Rectangle* deviceBounds, $Rectangle2D* userBounds, $AffineTransform* transform$renamed, $RenderingHints* hints) {
	$useLocalCurrentObjectStackCache();
	$var($AffineTransform, transform, transform$renamed);
	$assign(transform, $new($AffineTransform, transform));
	transform->concatenate(this->gradientTransform);
	$var($ColorModel, var$0, cm);
	$var($Rectangle, var$1, deviceBounds);
	$var($Rectangle2D, var$2, userBounds);
	$var($AffineTransform, var$3, transform);
	$var($RenderingHints, var$4, hints);
	float var$5 = (float)$nc(this->center)->getX();
	float var$6 = (float)$nc(this->center)->getY();
	float var$7 = this->radius;
	float var$8 = (float)$nc(this->focus)->getX();
	return $new($RadialGradientPaintContext, this, var$0, var$1, var$2, var$3, var$4, var$5, var$6, var$7, var$8, (float)$nc(this->focus)->getY(), this->fractions, this->colors, this->cycleMethod, this->colorSpace);
}

$Point2D* RadialGradientPaint::getCenterPoint() {
	double var$0 = $nc(this->center)->getX();
	return $new($Point2D$Double, var$0, $nc(this->center)->getY());
}

$Point2D* RadialGradientPaint::getFocusPoint() {
	double var$0 = $nc(this->focus)->getX();
	return $new($Point2D$Double, var$0, $nc(this->focus)->getY());
}

float RadialGradientPaint::getRadius() {
	return this->radius;
}

RadialGradientPaint::RadialGradientPaint() {
}

$Class* RadialGradientPaint::load$($String* name, bool initialize) {
	$loadClass(RadialGradientPaint, name, initialize, &_RadialGradientPaint_ClassInfo_, allocate$RadialGradientPaint);
	return class$;
}

$Class* RadialGradientPaint::class$ = nullptr;

	} // awt
} // java