#include <sun/awt/geom/Order0.h>

#include <java/awt/geom/PathIterator.h>
#include <java/awt/geom/Rectangle2D.h>
#include <sun/awt/geom/Crossings.h>
#include <sun/awt/geom/Curve.h>
#include <jcpp.h>

#undef INCREASING
#undef SEG_MOVETO

using $PathIterator = ::java::awt::geom::PathIterator;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Crossings = ::sun::awt::geom::Crossings;
using $Curve = ::sun::awt::geom::Curve;

namespace sun {
	namespace awt {
		namespace geom {

$FieldInfo _Order0_FieldInfo_[] = {
	{"x", "D", nullptr, $PRIVATE, $field(Order0, x)},
	{"y", "D", nullptr, $PRIVATE, $field(Order0, y)},
	{}
};

$MethodInfo _Order0_MethodInfo_[] = {
	{"<init>", "(DD)V", nullptr, $PUBLIC, $method(static_cast<void(Order0::*)(double,double)>(&Order0::init$))},
	{"TforY", "(D)D", nullptr, $PUBLIC},
	{"XforT", "(D)D", nullptr, $PUBLIC},
	{"XforY", "(D)D", nullptr, $PUBLIC},
	{"YforT", "(D)D", nullptr, $PUBLIC},
	{"accumulateCrossings", "(Lsun/awt/geom/Crossings;)Z", nullptr, $PUBLIC},
	{"crossingsFor", "(DD)I", nullptr, $PUBLIC},
	{"dXforT", "(DI)D", nullptr, $PUBLIC},
	{"dYforT", "(DI)D", nullptr, $PUBLIC},
	{"enlarge", "(Ljava/awt/geom/Rectangle2D;)V", nullptr, $PUBLIC},
	{"getOrder", "()I", nullptr, $PUBLIC},
	{"getReversedCurve", "()Lsun/awt/geom/Curve;", nullptr, $PUBLIC},
	{"getSegment", "([D)I", nullptr, $PUBLIC},
	{"getSubCurve", "(DDI)Lsun/awt/geom/Curve;", nullptr, $PUBLIC},
	{"getX0", "()D", nullptr, $PUBLIC},
	{"getX1", "()D", nullptr, $PUBLIC},
	{"getXBot", "()D", nullptr, $PUBLIC},
	{"getXMax", "()D", nullptr, $PUBLIC},
	{"getXMin", "()D", nullptr, $PUBLIC},
	{"getXTop", "()D", nullptr, $PUBLIC},
	{"getY0", "()D", nullptr, $PUBLIC},
	{"getY1", "()D", nullptr, $PUBLIC},
	{"getYBot", "()D", nullptr, $PUBLIC},
	{"getYTop", "()D", nullptr, $PUBLIC},
	{"nextVertical", "(DD)D", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Order0_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.geom.Order0",
	"sun.awt.geom.Curve",
	nullptr,
	_Order0_FieldInfo_,
	_Order0_MethodInfo_
};

$Object* allocate$Order0($Class* clazz) {
	return $of($alloc(Order0));
}

void Order0::init$(double x, double y) {
	$Curve::init$($Curve::INCREASING);
	this->x = x;
	this->y = y;
}

int32_t Order0::getOrder() {
	return 0;
}

double Order0::getXTop() {
	return this->x;
}

double Order0::getYTop() {
	return this->y;
}

double Order0::getXBot() {
	return this->x;
}

double Order0::getYBot() {
	return this->y;
}

double Order0::getXMin() {
	return this->x;
}

double Order0::getXMax() {
	return this->x;
}

double Order0::getX0() {
	return this->x;
}

double Order0::getY0() {
	return this->y;
}

double Order0::getX1() {
	return this->x;
}

double Order0::getY1() {
	return this->y;
}

double Order0::XforY(double y) {
	return y;
}

double Order0::TforY(double y) {
	return (double)0;
}

double Order0::XforT(double t) {
	return this->x;
}

double Order0::YforT(double t) {
	return this->y;
}

double Order0::dXforT(double t, int32_t deriv) {
	return (double)0;
}

double Order0::dYforT(double t, int32_t deriv) {
	return (double)0;
}

double Order0::nextVertical(double t0, double t1) {
	return t1;
}

int32_t Order0::crossingsFor(double x, double y) {
	return 0;
}

bool Order0::accumulateCrossings($Crossings* c) {
	bool var$2 = this->x > $nc(c)->getXLo();
	bool var$1 = var$2 && this->x < c->getXHi();
	bool var$0 = var$1 && this->y > c->getYLo();
	return (var$0 && this->y < c->getYHi());
}

void Order0::enlarge($Rectangle2D* r) {
	$nc(r)->add(this->x, this->y);
}

$Curve* Order0::getSubCurve(double ystart, double yend, int32_t dir) {
	return this;
}

$Curve* Order0::getReversedCurve() {
	return this;
}

int32_t Order0::getSegment($doubles* coords) {
	$nc(coords)->set(0, this->x);
	coords->set(1, this->y);
	return $PathIterator::SEG_MOVETO;
}

Order0::Order0() {
}

$Class* Order0::load$($String* name, bool initialize) {
	$loadClass(Order0, name, initialize, &_Order0_ClassInfo_, allocate$Order0);
	return class$;
}

$Class* Order0::class$ = nullptr;

		} // geom
	} // awt
} // sun