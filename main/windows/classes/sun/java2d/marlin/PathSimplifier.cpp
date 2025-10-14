#include <sun/java2d/marlin/PathSimplifier.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/marlin/DPathConsumer2D.h>
#include <sun/java2d/marlin/MarlinProperties.h>
#include <jcpp.h>

#undef PIX_THRESHOLD
#undef SQUARE_TOLERANCE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DPathConsumer2D = ::sun::java2d::marlin::DPathConsumer2D;
using $MarlinProperties = ::sun::java2d::marlin::MarlinProperties;

namespace sun {
	namespace java2d {
		namespace marlin {

$FieldInfo _PathSimplifier_FieldInfo_[] = {
	{"PIX_THRESHOLD", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PathSimplifier, PIX_THRESHOLD)},
	{"SQUARE_TOLERANCE", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PathSimplifier, SQUARE_TOLERANCE)},
	{"delegate", "Lsun/java2d/marlin/DPathConsumer2D;", nullptr, $PRIVATE, $field(PathSimplifier, delegate)},
	{"cx", "D", nullptr, $PRIVATE, $field(PathSimplifier, cx)},
	{"cy", "D", nullptr, $PRIVATE, $field(PathSimplifier, cy)},
	{}
};

$MethodInfo _PathSimplifier_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(PathSimplifier::*)()>(&PathSimplifier::init$))},
	{"closePath", "()V", nullptr, $PUBLIC},
	{"curveTo", "(DDDDDD)V", nullptr, $PUBLIC},
	{"getNativeConsumer", "()J", nullptr, $PUBLIC},
	{"init", "(Lsun/java2d/marlin/DPathConsumer2D;)Lsun/java2d/marlin/PathSimplifier;", nullptr, 0, $method(static_cast<PathSimplifier*(PathSimplifier::*)($DPathConsumer2D*)>(&PathSimplifier::init))},
	{"lineTo", "(DD)V", nullptr, $PUBLIC},
	{"moveTo", "(DD)V", nullptr, $PUBLIC},
	{"pathDone", "()V", nullptr, $PUBLIC},
	{"quadTo", "(DDDD)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PathSimplifier_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.java2d.marlin.PathSimplifier",
	"java.lang.Object",
	"sun.java2d.marlin.DPathConsumer2D",
	_PathSimplifier_FieldInfo_,
	_PathSimplifier_MethodInfo_
};

$Object* allocate$PathSimplifier($Class* clazz) {
	return $of($alloc(PathSimplifier));
}

double PathSimplifier::PIX_THRESHOLD = 0.0;
double PathSimplifier::SQUARE_TOLERANCE = 0.0;

void PathSimplifier::init$() {
}

PathSimplifier* PathSimplifier::init($DPathConsumer2D* delegate) {
	$set(this, delegate, delegate);
	return this;
}

void PathSimplifier::pathDone() {
	$nc(this->delegate)->pathDone();
}

void PathSimplifier::closePath() {
	$nc(this->delegate)->closePath();
}

int64_t PathSimplifier::getNativeConsumer() {
	return 0;
}

void PathSimplifier::quadTo(double x1, double y1, double xe, double ye) {
	double dx = (xe - this->cx);
	double dy = (ye - this->cy);
	if ((dx * dx + dy * dy) <= PathSimplifier::SQUARE_TOLERANCE) {
		dx = (x1 - this->cx);
		dy = (y1 - this->cy);
		if ((dx * dx + dy * dy) <= PathSimplifier::SQUARE_TOLERANCE) {
			return;
		}
	}
	$nc(this->delegate)->quadTo(x1, y1, xe, ye);
	this->cx = xe;
	this->cy = ye;
}

void PathSimplifier::curveTo(double x1, double y1, double x2, double y2, double xe, double ye) {
	double dx = (xe - this->cx);
	double dy = (ye - this->cy);
	if ((dx * dx + dy * dy) <= PathSimplifier::SQUARE_TOLERANCE) {
		dx = (x1 - this->cx);
		dy = (y1 - this->cy);
		if ((dx * dx + dy * dy) <= PathSimplifier::SQUARE_TOLERANCE) {
			dx = (x2 - this->cx);
			dy = (y2 - this->cy);
			if ((dx * dx + dy * dy) <= PathSimplifier::SQUARE_TOLERANCE) {
				return;
			}
		}
	}
	$nc(this->delegate)->curveTo(x1, y1, x2, y2, xe, ye);
	this->cx = xe;
	this->cy = ye;
}

void PathSimplifier::moveTo(double xe, double ye) {
	$nc(this->delegate)->moveTo(xe, ye);
	this->cx = xe;
	this->cy = ye;
}

void PathSimplifier::lineTo(double xe, double ye) {
	double dx = (xe - this->cx);
	double dy = (ye - this->cy);
	if ((dx * dx + dy * dy) <= PathSimplifier::SQUARE_TOLERANCE) {
		return;
	}
	$nc(this->delegate)->lineTo(xe, ye);
	this->cx = xe;
	this->cy = ye;
}

void clinit$PathSimplifier($Class* class$) {
	PathSimplifier::PIX_THRESHOLD = $MarlinProperties::getPathSimplifierPixelTolerance();
	PathSimplifier::SQUARE_TOLERANCE = PathSimplifier::PIX_THRESHOLD * PathSimplifier::PIX_THRESHOLD;
}

PathSimplifier::PathSimplifier() {
}

$Class* PathSimplifier::load$($String* name, bool initialize) {
	$loadClass(PathSimplifier, name, initialize, &_PathSimplifier_ClassInfo_, clinit$PathSimplifier, allocate$PathSimplifier);
	return class$;
}

$Class* PathSimplifier::class$ = nullptr;

		} // marlin
	} // java2d
} // sun