#include <java/awt/GradientPaint.h>

#include <java/awt/Color.h>
#include <java/awt/GradientPaintContext.h>
#include <java/awt/PaintContext.h>
#include <java/awt/Rectangle.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/Transparency.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Point2D$Float.h>
#include <java/awt/geom/Point2D.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/image/ColorModel.h>
#include <jcpp.h>

#undef OPAQUE
#undef TRANSLUCENT

using $Color = ::java::awt::Color;
using $GradientPaintContext = ::java::awt::GradientPaintContext;
using $PaintContext = ::java::awt::PaintContext;
using $Rectangle = ::java::awt::Rectangle;
using $RenderingHints = ::java::awt::RenderingHints;
using $Transparency = ::java::awt::Transparency;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Point2D = ::java::awt::geom::Point2D;
using $Point2D$Float = ::java::awt::geom::Point2D$Float;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $ColorModel = ::java::awt::image::ColorModel;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $NullPointerException = ::java::lang::NullPointerException;

namespace java {
	namespace awt {

$Attribute GradientPaint_Attribute_var$1[] = {
	{'s', "point1"},
	{'s', "color1"},
	{'s', "point2"},
	{'s', "color2"},
	{'s', "cyclic"},
	{'-'}
};

$NamedAttribute GradientPaint_Attribute_var$0[] = {
	{"value", '[', GradientPaint_Attribute_var$1},
	{}
};

$CompoundAttribute _GradientPaint_MethodAnnotations_init$3[] = {
	{"Ljava/beans/ConstructorProperties;", GradientPaint_Attribute_var$0},
	{}
};

$FieldInfo _GradientPaint_FieldInfo_[] = {
	{"p1", "Ljava/awt/geom/Point2D$Float;", nullptr, 0, $field(GradientPaint, p1)},
	{"p2", "Ljava/awt/geom/Point2D$Float;", nullptr, 0, $field(GradientPaint, p2)},
	{"color1", "Ljava/awt/Color;", nullptr, 0, $field(GradientPaint, color1)},
	{"color2", "Ljava/awt/Color;", nullptr, 0, $field(GradientPaint, color2)},
	{"cyclic", "Z", nullptr, 0, $field(GradientPaint, cyclic)},
	{}
};

$MethodInfo _GradientPaint_MethodInfo_[] = {
	{"<init>", "(FFLjava/awt/Color;FFLjava/awt/Color;)V", nullptr, $PUBLIC, $method(static_cast<void(GradientPaint::*)(float,float,$Color*,float,float,$Color*)>(&GradientPaint::init$))},
	{"<init>", "(Ljava/awt/geom/Point2D;Ljava/awt/Color;Ljava/awt/geom/Point2D;Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(static_cast<void(GradientPaint::*)($Point2D*,$Color*,$Point2D*,$Color*)>(&GradientPaint::init$))},
	{"<init>", "(FFLjava/awt/Color;FFLjava/awt/Color;Z)V", nullptr, $PUBLIC, $method(static_cast<void(GradientPaint::*)(float,float,$Color*,float,float,$Color*,bool)>(&GradientPaint::init$))},
	{"<init>", "(Ljava/awt/geom/Point2D;Ljava/awt/Color;Ljava/awt/geom/Point2D;Ljava/awt/Color;Z)V", nullptr, $PUBLIC, $method(static_cast<void(GradientPaint::*)($Point2D*,$Color*,$Point2D*,$Color*,bool)>(&GradientPaint::init$)), nullptr, nullptr, _GradientPaint_MethodAnnotations_init$3},
	{"createContext", "(Ljava/awt/image/ColorModel;Ljava/awt/Rectangle;Ljava/awt/geom/Rectangle2D;Ljava/awt/geom/AffineTransform;Ljava/awt/RenderingHints;)Ljava/awt/PaintContext;", nullptr, $PUBLIC},
	{"getColor1", "()Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getColor2", "()Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getPoint1", "()Ljava/awt/geom/Point2D;", nullptr, $PUBLIC},
	{"getPoint2", "()Ljava/awt/geom/Point2D;", nullptr, $PUBLIC},
	{"getTransparency", "()I", nullptr, $PUBLIC},
	{"isCyclic", "()Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _GradientPaint_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.GradientPaint",
	"java.lang.Object",
	"java.awt.Paint",
	_GradientPaint_FieldInfo_,
	_GradientPaint_MethodInfo_
};

$Object* allocate$GradientPaint($Class* clazz) {
	return $of($alloc(GradientPaint));
}

void GradientPaint::init$(float x1, float y1, $Color* color1, float x2, float y2, $Color* color2) {
	if ((color1 == nullptr) || (color2 == nullptr)) {
		$throwNew($NullPointerException, "Colors cannot be null"_s);
	}
	$set(this, p1, $new($Point2D$Float, x1, y1));
	$set(this, p2, $new($Point2D$Float, x2, y2));
	$set(this, color1, color1);
	$set(this, color2, color2);
}

void GradientPaint::init$($Point2D* pt1, $Color* color1, $Point2D* pt2, $Color* color2) {
	if ((color1 == nullptr) || (color2 == nullptr) || (pt1 == nullptr) || (pt2 == nullptr)) {
		$throwNew($NullPointerException, "Colors and points should be non-null"_s);
	}
	float var$0 = (float)$nc(pt1)->getX();
	$set(this, p1, $new($Point2D$Float, var$0, (float)pt1->getY()));
	float var$1 = (float)$nc(pt2)->getX();
	$set(this, p2, $new($Point2D$Float, var$1, (float)pt2->getY()));
	$set(this, color1, color1);
	$set(this, color2, color2);
}

void GradientPaint::init$(float x1, float y1, $Color* color1, float x2, float y2, $Color* color2, bool cyclic) {
	GradientPaint::init$(x1, y1, color1, x2, y2, color2);
	this->cyclic = cyclic;
}

void GradientPaint::init$($Point2D* pt1, $Color* color1, $Point2D* pt2, $Color* color2, bool cyclic) {
	GradientPaint::init$(pt1, color1, pt2, color2);
	this->cyclic = cyclic;
}

$Point2D* GradientPaint::getPoint1() {
	return $new($Point2D$Float, $nc(this->p1)->x, $nc(this->p1)->y);
}

$Color* GradientPaint::getColor1() {
	return this->color1;
}

$Point2D* GradientPaint::getPoint2() {
	return $new($Point2D$Float, $nc(this->p2)->x, $nc(this->p2)->y);
}

$Color* GradientPaint::getColor2() {
	return this->color2;
}

bool GradientPaint::isCyclic() {
	return this->cyclic;
}

$PaintContext* GradientPaint::createContext($ColorModel* cm, $Rectangle* deviceBounds, $Rectangle2D* userBounds, $AffineTransform* xform, $RenderingHints* hints) {
	return $new($GradientPaintContext, cm, this->p1, this->p2, xform, this->color1, this->color2, this->cyclic);
}

int32_t GradientPaint::getTransparency() {
	int32_t a1 = $nc(this->color1)->getAlpha();
	int32_t a2 = $nc(this->color2)->getAlpha();
	return ((((int32_t)(a1 & (uint32_t)a2)) == 255) ? $Transparency::OPAQUE : $Transparency::TRANSLUCENT);
}

GradientPaint::GradientPaint() {
}

$Class* GradientPaint::load$($String* name, bool initialize) {
	$loadClass(GradientPaint, name, initialize, &_GradientPaint_ClassInfo_, allocate$GradientPaint);
	return class$;
}

$Class* GradientPaint::class$ = nullptr;

	} // awt
} // java