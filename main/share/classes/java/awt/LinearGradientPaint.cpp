#include <java/awt/LinearGradientPaint.h>

#include <java/awt/Color.h>
#include <java/awt/GradientPaintContext.h>
#include <java/awt/LinearGradientPaintContext.h>
#include <java/awt/MultipleGradientPaint$ColorSpaceType.h>
#include <java/awt/MultipleGradientPaint$CycleMethod.h>
#include <java/awt/MultipleGradientPaint.h>
#include <java/awt/MultipleGradientPaintContext.h>
#include <java/awt/PaintContext.h>
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
#undef REPEAT
#undef SRGB

using $ColorArray = $Array<::java::awt::Color>;
using $GradientPaintContext = ::java::awt::GradientPaintContext;
using $LinearGradientPaintContext = ::java::awt::LinearGradientPaintContext;
using $MultipleGradientPaint = ::java::awt::MultipleGradientPaint;
using $MultipleGradientPaint$ColorSpaceType = ::java::awt::MultipleGradientPaint$ColorSpaceType;
using $MultipleGradientPaint$CycleMethod = ::java::awt::MultipleGradientPaint$CycleMethod;
using $MultipleGradientPaintContext = ::java::awt::MultipleGradientPaintContext;
using $PaintContext = ::java::awt::PaintContext;
using $Rectangle = ::java::awt::Rectangle;
using $RenderingHints = ::java::awt::RenderingHints;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Point2D = ::java::awt::geom::Point2D;
using $Point2D$Double = ::java::awt::geom::Point2D$Double;
using $Point2D$Float = ::java::awt::geom::Point2D$Float;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $ColorModel = ::java::awt::image::ColorModel;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $NullPointerException = ::java::lang::NullPointerException;

namespace java {
	namespace awt {

$Attribute LinearGradientPaint_Attribute_var$1[] = {
	{'s', "startPoint"},
	{'s', "endPoint"},
	{'s', "fractions"},
	{'s', "colors"},
	{'s', "cycleMethod"},
	{'s', "colorSpace"},
	{'s', "transform"},
	{'-'}
};

$NamedAttribute LinearGradientPaint_Attribute_var$0[] = {
	{"value", '[', LinearGradientPaint_Attribute_var$1},
	{}
};

$CompoundAttribute _LinearGradientPaint_MethodAnnotations_init$4[] = {
	{"Ljava/beans/ConstructorProperties;", LinearGradientPaint_Attribute_var$0},
	{}
};

$FieldInfo _LinearGradientPaint_FieldInfo_[] = {
	{"start", "Ljava/awt/geom/Point2D;", nullptr, $PRIVATE | $FINAL, $field(LinearGradientPaint, start)},
	{"end", "Ljava/awt/geom/Point2D;", nullptr, $PRIVATE | $FINAL, $field(LinearGradientPaint, end)},
	{}
};

$MethodInfo _LinearGradientPaint_MethodInfo_[] = {
	{"<init>", "(FFFF[F[Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(static_cast<void(LinearGradientPaint::*)(float,float,float,float,$floats*,$ColorArray*)>(&LinearGradientPaint::init$))},
	{"<init>", "(FFFF[F[Ljava/awt/Color;Ljava/awt/MultipleGradientPaint$CycleMethod;)V", nullptr, $PUBLIC, $method(static_cast<void(LinearGradientPaint::*)(float,float,float,float,$floats*,$ColorArray*,$MultipleGradientPaint$CycleMethod*)>(&LinearGradientPaint::init$))},
	{"<init>", "(Ljava/awt/geom/Point2D;Ljava/awt/geom/Point2D;[F[Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(static_cast<void(LinearGradientPaint::*)($Point2D*,$Point2D*,$floats*,$ColorArray*)>(&LinearGradientPaint::init$))},
	{"<init>", "(Ljava/awt/geom/Point2D;Ljava/awt/geom/Point2D;[F[Ljava/awt/Color;Ljava/awt/MultipleGradientPaint$CycleMethod;)V", nullptr, $PUBLIC, $method(static_cast<void(LinearGradientPaint::*)($Point2D*,$Point2D*,$floats*,$ColorArray*,$MultipleGradientPaint$CycleMethod*)>(&LinearGradientPaint::init$))},
	{"<init>", "(Ljava/awt/geom/Point2D;Ljava/awt/geom/Point2D;[F[Ljava/awt/Color;Ljava/awt/MultipleGradientPaint$CycleMethod;Ljava/awt/MultipleGradientPaint$ColorSpaceType;Ljava/awt/geom/AffineTransform;)V", nullptr, $PUBLIC, $method(static_cast<void(LinearGradientPaint::*)($Point2D*,$Point2D*,$floats*,$ColorArray*,$MultipleGradientPaint$CycleMethod*,$MultipleGradientPaint$ColorSpaceType*,$AffineTransform*)>(&LinearGradientPaint::init$)), nullptr, nullptr, _LinearGradientPaint_MethodAnnotations_init$4},
	{"createContext", "(Ljava/awt/image/ColorModel;Ljava/awt/Rectangle;Ljava/awt/geom/Rectangle2D;Ljava/awt/geom/AffineTransform;Ljava/awt/RenderingHints;)Ljava/awt/PaintContext;", nullptr, $PUBLIC},
	{"getEndPoint", "()Ljava/awt/geom/Point2D;", nullptr, $PUBLIC, $method(static_cast<$Point2D*(LinearGradientPaint::*)()>(&LinearGradientPaint::getEndPoint))},
	{"getStartPoint", "()Ljava/awt/geom/Point2D;", nullptr, $PUBLIC, $method(static_cast<$Point2D*(LinearGradientPaint::*)()>(&LinearGradientPaint::getStartPoint))},
	{}
};

$ClassInfo _LinearGradientPaint_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.awt.LinearGradientPaint",
	"java.awt.MultipleGradientPaint",
	nullptr,
	_LinearGradientPaint_FieldInfo_,
	_LinearGradientPaint_MethodInfo_
};

$Object* allocate$LinearGradientPaint($Class* clazz) {
	return $of($alloc(LinearGradientPaint));
}

void LinearGradientPaint::init$(float startX, float startY, float endX, float endY, $floats* fractions, $ColorArray* colors) {
	$useLocalCurrentObjectStackCache();
	$var($Point2D, var$0, static_cast<$Point2D*>($new($Point2D$Float, startX, startY)));
	$init($MultipleGradientPaint$CycleMethod);
	LinearGradientPaint::init$(var$0, $$new($Point2D$Float, endX, endY), fractions, colors, $MultipleGradientPaint$CycleMethod::NO_CYCLE);
}

void LinearGradientPaint::init$(float startX, float startY, float endX, float endY, $floats* fractions, $ColorArray* colors, $MultipleGradientPaint$CycleMethod* cycleMethod) {
	$useLocalCurrentObjectStackCache();
	$var($Point2D, var$0, static_cast<$Point2D*>($new($Point2D$Float, startX, startY)));
	LinearGradientPaint::init$(var$0, $$new($Point2D$Float, endX, endY), fractions, colors, cycleMethod);
}

void LinearGradientPaint::init$($Point2D* start, $Point2D* end, $floats* fractions, $ColorArray* colors) {
	$init($MultipleGradientPaint$CycleMethod);
	LinearGradientPaint::init$(start, end, fractions, colors, $MultipleGradientPaint$CycleMethod::NO_CYCLE);
}

void LinearGradientPaint::init$($Point2D* start, $Point2D* end, $floats* fractions, $ColorArray* colors, $MultipleGradientPaint$CycleMethod* cycleMethod) {
	$init($MultipleGradientPaint$ColorSpaceType);
	LinearGradientPaint::init$(start, end, fractions, colors, cycleMethod, $MultipleGradientPaint$ColorSpaceType::SRGB, $$new($AffineTransform));
}

void LinearGradientPaint::init$($Point2D* start, $Point2D* end, $floats* fractions, $ColorArray* colors, $MultipleGradientPaint$CycleMethod* cycleMethod, $MultipleGradientPaint$ColorSpaceType* colorSpace, $AffineTransform* gradientTransform) {
	$MultipleGradientPaint::init$(fractions, colors, cycleMethod, colorSpace, gradientTransform);
	if (start == nullptr || end == nullptr) {
		$throwNew($NullPointerException, "Start and end points must benon-null"_s);
	}
	if ($nc(start)->equals(end)) {
		$throwNew($IllegalArgumentException, "Start point cannot equalendpoint"_s);
	}
	double var$0 = $nc(start)->getX();
	$set(this, start, $new($Point2D$Double, var$0, start->getY()));
	double var$1 = $nc(end)->getX();
	$set(this, end, $new($Point2D$Double, var$1, end->getY()));
}

$PaintContext* LinearGradientPaint::createContext($ColorModel* cm, $Rectangle* deviceBounds, $Rectangle2D* userBounds, $AffineTransform* transform$renamed, $RenderingHints* hints) {
	$var($AffineTransform, transform, transform$renamed);
	$assign(transform, $new($AffineTransform, transform));
	transform->concatenate(this->gradientTransform);
	$init($MultipleGradientPaint$CycleMethod);
	$init($MultipleGradientPaint$ColorSpaceType);
	if (($nc(this->fractions)->length == 2) && (this->cycleMethod != $MultipleGradientPaint$CycleMethod::REPEAT) && (this->colorSpace == $MultipleGradientPaint$ColorSpaceType::SRGB)) {
		bool cyclic = (this->cycleMethod != $MultipleGradientPaint$CycleMethod::NO_CYCLE);
		return $new($GradientPaintContext, cm, this->start, this->end, transform, $nc(this->colors)->get(0), $nc(this->colors)->get(1), cyclic);
	} else {
		return $new($LinearGradientPaintContext, this, cm, deviceBounds, userBounds, transform, hints, this->start, this->end, this->fractions, this->colors, this->cycleMethod, this->colorSpace);
	}
}

$Point2D* LinearGradientPaint::getStartPoint() {
	double var$0 = $nc(this->start)->getX();
	return $new($Point2D$Double, var$0, $nc(this->start)->getY());
}

$Point2D* LinearGradientPaint::getEndPoint() {
	double var$0 = $nc(this->end)->getX();
	return $new($Point2D$Double, var$0, $nc(this->end)->getY());
}

LinearGradientPaint::LinearGradientPaint() {
}

$Class* LinearGradientPaint::load$($String* name, bool initialize) {
	$loadClass(LinearGradientPaint, name, initialize, &_LinearGradientPaint_ClassInfo_, allocate$LinearGradientPaint);
	return class$;
}

$Class* LinearGradientPaint::class$ = nullptr;

	} // awt
} // java