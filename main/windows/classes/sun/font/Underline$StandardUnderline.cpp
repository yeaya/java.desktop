#include <sun/font/Underline$StandardUnderline.h>

#include <java/awt/BasicStroke.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Shape.h>
#include <java/awt/Stroke.h>
#include <java/awt/geom/Line2D$Float.h>
#include <java/awt/geom/Line2D.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/font/Underline.h>
#include <jcpp.h>

#undef CAP_BUTT
#undef JOIN_MITER

using $BasicStroke = ::java::awt::BasicStroke;
using $Graphics2D = ::java::awt::Graphics2D;
using $Shape = ::java::awt::Shape;
using $Stroke = ::java::awt::Stroke;
using $Line2D = ::java::awt::geom::Line2D;
using $Line2D$Float = ::java::awt::geom::Line2D$Float;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Underline = ::sun::font::Underline;

namespace sun {
	namespace font {

$FieldInfo _Underline$StandardUnderline_FieldInfo_[] = {
	{"shift", "F", nullptr, $PRIVATE, $field(Underline$StandardUnderline, shift)},
	{"thicknessMultiplier", "F", nullptr, $PRIVATE, $field(Underline$StandardUnderline, thicknessMultiplier)},
	{"dashPattern", "[F", nullptr, $PRIVATE, $field(Underline$StandardUnderline, dashPattern)},
	{"useThickness", "Z", nullptr, $PRIVATE, $field(Underline$StandardUnderline, useThickness)},
	{"cachedStroke", "Ljava/awt/BasicStroke;", nullptr, $PRIVATE, $field(Underline$StandardUnderline, cachedStroke)},
	{}
};

$MethodInfo _Underline$StandardUnderline_MethodInfo_[] = {
	{"<init>", "(FF[FZ)V", nullptr, 0, $method(static_cast<void(Underline$StandardUnderline::*)(float,float,$floats*,bool)>(&Underline$StandardUnderline::init$))},
	{"createStroke", "(F)Ljava/awt/BasicStroke;", nullptr, $PRIVATE, $method(static_cast<$BasicStroke*(Underline$StandardUnderline::*)(float)>(&Underline$StandardUnderline::createStroke))},
	{"drawUnderline", "(Ljava/awt/Graphics2D;FFFF)V", nullptr, 0},
	{"getLineThickness", "(F)F", nullptr, $PRIVATE, $method(static_cast<float(Underline$StandardUnderline::*)(float)>(&Underline$StandardUnderline::getLineThickness))},
	{"getLowerDrawLimit", "(F)F", nullptr, 0},
	{"getStroke", "(F)Ljava/awt/Stroke;", nullptr, $PRIVATE, $method(static_cast<$Stroke*(Underline$StandardUnderline::*)(float)>(&Underline$StandardUnderline::getStroke))},
	{"getUnderlineShape", "(FFFF)Ljava/awt/Shape;", nullptr, 0},
	{}
};

$InnerClassInfo _Underline$StandardUnderline_InnerClassesInfo_[] = {
	{"sun.font.Underline$StandardUnderline", "sun.font.Underline", "StandardUnderline", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _Underline$StandardUnderline_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.font.Underline$StandardUnderline",
	"sun.font.Underline",
	nullptr,
	_Underline$StandardUnderline_FieldInfo_,
	_Underline$StandardUnderline_MethodInfo_,
	nullptr,
	nullptr,
	_Underline$StandardUnderline_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.Underline"
};

$Object* allocate$Underline$StandardUnderline($Class* clazz) {
	return $of($alloc(Underline$StandardUnderline));
}

void Underline$StandardUnderline::init$(float shift, float thicknessMultiplier, $floats* dashPattern, bool useThickness) {
	$Underline::init$();
	this->shift = shift;
	this->thicknessMultiplier = thicknessMultiplier;
	$set(this, dashPattern, dashPattern);
	this->useThickness = useThickness;
	$set(this, cachedStroke, nullptr);
}

$BasicStroke* Underline$StandardUnderline::createStroke(float lineThickness) {
	if (this->dashPattern == nullptr) {
		return $new($BasicStroke, lineThickness, $BasicStroke::CAP_BUTT, $BasicStroke::JOIN_MITER);
	} else {
		return $new($BasicStroke, lineThickness, $BasicStroke::CAP_BUTT, $BasicStroke::JOIN_MITER, 10.0f, this->dashPattern, (float)0);
	}
}

float Underline$StandardUnderline::getLineThickness(float thickness) {
	if (this->useThickness) {
		return thickness * this->thicknessMultiplier;
	} else {
		return 1.0f * this->thicknessMultiplier;
	}
}

$Stroke* Underline$StandardUnderline::getStroke(float thickness) {
	float lineThickness = getLineThickness(thickness);
	$var($BasicStroke, stroke, this->cachedStroke);
	if (stroke == nullptr || $nc(stroke)->getLineWidth() != lineThickness) {
		$assign(stroke, createStroke(lineThickness));
		$set(this, cachedStroke, stroke);
	}
	return stroke;
}

void Underline$StandardUnderline::drawUnderline($Graphics2D* g2d, float thickness, float x1, float x2, float y) {
	$useLocalCurrentObjectStackCache();
	$var($Stroke, saveStroke, $nc(g2d)->getStroke());
	g2d->setStroke($(getStroke(thickness)));
	g2d->draw($$new($Line2D$Float, x1, y + this->shift, x2, y + this->shift));
	g2d->setStroke(saveStroke);
}

float Underline$StandardUnderline::getLowerDrawLimit(float thickness) {
	return this->shift + getLineThickness(thickness);
}

$Shape* Underline$StandardUnderline::getUnderlineShape(float thickness, float x1, float x2, float y) {
	$useLocalCurrentObjectStackCache();
	$var($Stroke, ulStroke, getStroke(thickness));
	$var($Line2D, line, $new($Line2D$Float, x1, y + this->shift, x2, y + this->shift));
	return $nc(ulStroke)->createStrokedShape(line);
}

Underline$StandardUnderline::Underline$StandardUnderline() {
}

$Class* Underline$StandardUnderline::load$($String* name, bool initialize) {
	$loadClass(Underline$StandardUnderline, name, initialize, &_Underline$StandardUnderline_ClassInfo_, allocate$Underline$StandardUnderline);
	return class$;
}

$Class* Underline$StandardUnderline::class$ = nullptr;

	} // font
} // sun