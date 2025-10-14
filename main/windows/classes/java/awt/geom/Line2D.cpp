#include <java/awt/geom/Line2D.h>

#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/LineIterator.h>
#include <java/awt/geom/PathIterator.h>
#include <java/awt/geom/Point2D.h>
#include <java/awt/geom/Rectangle2D$Double.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Double.h>
#include <java/lang/Exception.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InternalError.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $LineIterator = ::java::awt::geom::LineIterator;
using $PathIterator = ::java::awt::geom::PathIterator;
using $Point2D = ::java::awt::geom::Point2D;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Rectangle2D$Double = ::java::awt::geom::Rectangle2D$Double;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $Double = ::java::lang::Double;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace geom {

$MethodInfo _Line2D_MethodInfo_[] = {
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(Line2D::*)()>(&Line2D::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"contains", "(DD)Z", nullptr, $PUBLIC},
	{"contains", "(Ljava/awt/geom/Point2D;)Z", nullptr, $PUBLIC},
	{"contains", "(DDDD)Z", nullptr, $PUBLIC},
	{"contains", "(Ljava/awt/geom/Rectangle2D;)Z", nullptr, $PUBLIC},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getP1", "()Ljava/awt/geom/Point2D;", nullptr, $PUBLIC | $ABSTRACT},
	{"getP2", "()Ljava/awt/geom/Point2D;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPathIterator", "(Ljava/awt/geom/AffineTransform;)Ljava/awt/geom/PathIterator;", nullptr, $PUBLIC},
	{"getPathIterator", "(Ljava/awt/geom/AffineTransform;D)Ljava/awt/geom/PathIterator;", nullptr, $PUBLIC},
	{"getX1", "()D", nullptr, $PUBLIC | $ABSTRACT},
	{"getX2", "()D", nullptr, $PUBLIC | $ABSTRACT},
	{"getY1", "()D", nullptr, $PUBLIC | $ABSTRACT},
	{"getY2", "()D", nullptr, $PUBLIC | $ABSTRACT},
	{"intersects", "(DDDD)Z", nullptr, $PUBLIC},
	{"intersects", "(Ljava/awt/geom/Rectangle2D;)Z", nullptr, $PUBLIC},
	{"intersectsLine", "(DDDD)Z", nullptr, $PUBLIC},
	{"intersectsLine", "(Ljava/awt/geom/Line2D;)Z", nullptr, $PUBLIC},
	{"linesIntersect", "(DDDDDDDD)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(double,double,double,double,double,double,double,double)>(&Line2D::linesIntersect))},
	{"ptLineDist", "(DDDDDD)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double,double,double,double,double,double)>(&Line2D::ptLineDist))},
	{"ptLineDist", "(DD)D", nullptr, $PUBLIC},
	{"ptLineDist", "(Ljava/awt/geom/Point2D;)D", nullptr, $PUBLIC},
	{"ptLineDistSq", "(DDDDDD)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double,double,double,double,double,double)>(&Line2D::ptLineDistSq))},
	{"ptLineDistSq", "(DD)D", nullptr, $PUBLIC},
	{"ptLineDistSq", "(Ljava/awt/geom/Point2D;)D", nullptr, $PUBLIC},
	{"ptSegDist", "(DDDDDD)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double,double,double,double,double,double)>(&Line2D::ptSegDist))},
	{"ptSegDist", "(DD)D", nullptr, $PUBLIC},
	{"ptSegDist", "(Ljava/awt/geom/Point2D;)D", nullptr, $PUBLIC},
	{"ptSegDistSq", "(DDDDDD)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double,double,double,double,double,double)>(&Line2D::ptSegDistSq))},
	{"ptSegDistSq", "(DD)D", nullptr, $PUBLIC},
	{"ptSegDistSq", "(Ljava/awt/geom/Point2D;)D", nullptr, $PUBLIC},
	{"relativeCCW", "(DDDDDD)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(double,double,double,double,double,double)>(&Line2D::relativeCCW))},
	{"relativeCCW", "(DD)I", nullptr, $PUBLIC},
	{"relativeCCW", "(Ljava/awt/geom/Point2D;)I", nullptr, $PUBLIC},
	{"setLine", "(DDDD)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setLine", "(Ljava/awt/geom/Point2D;Ljava/awt/geom/Point2D;)V", nullptr, $PUBLIC},
	{"setLine", "(Ljava/awt/geom/Line2D;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Line2D_InnerClassesInfo_[] = {
	{"java.awt.geom.Line2D$Double", "java.awt.geom.Line2D", "Double", $PUBLIC | $STATIC},
	{"java.awt.geom.Line2D$Float", "java.awt.geom.Line2D", "Float", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Line2D_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.awt.geom.Line2D",
	"java.lang.Object",
	"java.awt.Shape,java.lang.Cloneable",
	nullptr,
	_Line2D_MethodInfo_,
	nullptr,
	nullptr,
	_Line2D_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.geom.Line2D$Double,java.awt.geom.Line2D$Float"
};

$Object* allocate$Line2D($Class* clazz) {
	return $of($alloc(Line2D));
}

int32_t Line2D::hashCode() {
	 return this->$Shape::hashCode();
}

bool Line2D::equals(Object$* arg0) {
	 return this->$Shape::equals(arg0);
}

$String* Line2D::toString() {
	 return this->$Shape::toString();
}

void Line2D::finalize() {
	this->$Shape::finalize();
}

void Line2D::init$() {
}

void Line2D::setLine($Point2D* p1, $Point2D* p2) {
	double var$0 = $nc(p1)->getX();
	double var$1 = p1->getY();
	double var$2 = $nc(p2)->getX();
	setLine(var$0, var$1, var$2, p2->getY());
}

void Line2D::setLine(Line2D* l) {
	double var$0 = $nc(l)->getX1();
	double var$1 = l->getY1();
	double var$2 = l->getX2();
	setLine(var$0, var$1, var$2, l->getY2());
}

int32_t Line2D::relativeCCW(double x1, double y1, double x2, double y2, double px, double py) {
	$init(Line2D);
	x2 -= x1;
	y2 -= y1;
	px -= x1;
	py -= y1;
	double ccw = px * y2 - py * x2;
	if (ccw == 0.0) {
		ccw = px * x2 + py * y2;
		if (ccw > 0.0) {
			px -= x2;
			py -= y2;
			ccw = px * x2 + py * y2;
			if (ccw < 0.0) {
				ccw = 0.0;
			}
		}
	}
	return (ccw < 0.0) ? -1 : ((ccw > 0.0) ? 1 : 0);
}

int32_t Line2D::relativeCCW(double px, double py) {
	double var$0 = getX1();
	double var$1 = getY1();
	double var$2 = getX2();
	return relativeCCW(var$0, var$1, var$2, getY2(), px, py);
}

int32_t Line2D::relativeCCW($Point2D* p) {
	double var$0 = getX1();
	double var$1 = getY1();
	double var$2 = getX2();
	double var$3 = getY2();
	double var$4 = $nc(p)->getX();
	return relativeCCW(var$0, var$1, var$2, var$3, var$4, p->getY());
}

bool Line2D::linesIntersect(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4) {
	$init(Line2D);
	int32_t var$1 = relativeCCW(x1, y1, x2, y2, x3, y3);
	bool var$0 = (var$1 * relativeCCW(x1, y1, x2, y2, x4, y4) <= 0);
	if (var$0) {
		int32_t var$2 = relativeCCW(x3, y3, x4, y4, x1, y1);
		var$0 = (var$2 * relativeCCW(x3, y3, x4, y4, x2, y2) <= 0);
	}
	return (var$0);
}

bool Line2D::intersectsLine(double x1, double y1, double x2, double y2) {
	double var$0 = x1;
	double var$1 = y1;
	double var$2 = x2;
	double var$3 = y2;
	double var$4 = getX1();
	double var$5 = getY1();
	double var$6 = getX2();
	return linesIntersect(var$0, var$1, var$2, var$3, var$4, var$5, var$6, getY2());
}

bool Line2D::intersectsLine(Line2D* l) {
	double var$0 = $nc(l)->getX1();
	double var$1 = l->getY1();
	double var$2 = l->getX2();
	double var$3 = l->getY2();
	double var$4 = getX1();
	double var$5 = getY1();
	double var$6 = getX2();
	return linesIntersect(var$0, var$1, var$2, var$3, var$4, var$5, var$6, getY2());
}

double Line2D::ptSegDistSq(double x1, double y1, double x2, double y2, double px, double py) {
	$init(Line2D);
	x2 -= x1;
	y2 -= y1;
	px -= x1;
	py -= y1;
	double dotprod = px * x2 + py * y2;
	double projlenSq = 0.0;
	if (dotprod <= 0.0) {
		projlenSq = 0.0;
	} else {
		px = x2 - px;
		py = y2 - py;
		dotprod = px * x2 + py * y2;
		if (dotprod <= 0.0) {
			projlenSq = 0.0;
		} else {
			projlenSq = dotprod * dotprod / (x2 * x2 + y2 * y2);
		}
	}
	double lenSq = px * px + py * py - projlenSq;
	if (lenSq < 0) {
		lenSq = (double)0;
	}
	return lenSq;
}

double Line2D::ptSegDist(double x1, double y1, double x2, double y2, double px, double py) {
	$init(Line2D);
	return $Math::sqrt(ptSegDistSq(x1, y1, x2, y2, px, py));
}

double Line2D::ptSegDistSq(double px, double py) {
	double var$0 = getX1();
	double var$1 = getY1();
	double var$2 = getX2();
	return ptSegDistSq(var$0, var$1, var$2, getY2(), px, py);
}

double Line2D::ptSegDistSq($Point2D* pt) {
	double var$0 = getX1();
	double var$1 = getY1();
	double var$2 = getX2();
	double var$3 = getY2();
	double var$4 = $nc(pt)->getX();
	return ptSegDistSq(var$0, var$1, var$2, var$3, var$4, pt->getY());
}

double Line2D::ptSegDist(double px, double py) {
	double var$0 = getX1();
	double var$1 = getY1();
	double var$2 = getX2();
	return ptSegDist(var$0, var$1, var$2, getY2(), px, py);
}

double Line2D::ptSegDist($Point2D* pt) {
	double var$0 = getX1();
	double var$1 = getY1();
	double var$2 = getX2();
	double var$3 = getY2();
	double var$4 = $nc(pt)->getX();
	return ptSegDist(var$0, var$1, var$2, var$3, var$4, pt->getY());
}

double Line2D::ptLineDistSq(double x1, double y1, double x2, double y2, double px, double py) {
	$init(Line2D);
	x2 -= x1;
	y2 -= y1;
	px -= x1;
	py -= y1;
	double dotprod = px * x2 + py * y2;
	double projlenSq = dotprod * dotprod / (x2 * x2 + y2 * y2);
	double lenSq = px * px + py * py - projlenSq;
	if (lenSq < 0) {
		lenSq = (double)0;
	}
	return lenSq;
}

double Line2D::ptLineDist(double x1, double y1, double x2, double y2, double px, double py) {
	$init(Line2D);
	return $Math::sqrt(ptLineDistSq(x1, y1, x2, y2, px, py));
}

double Line2D::ptLineDistSq(double px, double py) {
	double var$0 = getX1();
	double var$1 = getY1();
	double var$2 = getX2();
	return ptLineDistSq(var$0, var$1, var$2, getY2(), px, py);
}

double Line2D::ptLineDistSq($Point2D* pt) {
	double var$0 = getX1();
	double var$1 = getY1();
	double var$2 = getX2();
	double var$3 = getY2();
	double var$4 = $nc(pt)->getX();
	return ptLineDistSq(var$0, var$1, var$2, var$3, var$4, pt->getY());
}

double Line2D::ptLineDist(double px, double py) {
	double var$0 = getX1();
	double var$1 = getY1();
	double var$2 = getX2();
	return ptLineDist(var$0, var$1, var$2, getY2(), px, py);
}

double Line2D::ptLineDist($Point2D* pt) {
	double var$0 = getX1();
	double var$1 = getY1();
	double var$2 = getX2();
	double var$3 = getY2();
	double var$4 = $nc(pt)->getX();
	return ptLineDist(var$0, var$1, var$2, var$3, var$4, pt->getY());
}

bool Line2D::contains(double x, double y) {
	return false;
}

bool Line2D::contains($Point2D* p) {
	return false;
}

bool Line2D::intersects(double x, double y, double w, double h) {
	return intersects($$new($Rectangle2D$Double, x, y, w, h));
}

bool Line2D::intersects($Rectangle2D* r) {
	double var$0 = getX1();
	double var$1 = getY1();
	double var$2 = getX2();
	return $nc(r)->intersectsLine(var$0, var$1, var$2, getY2());
}

bool Line2D::contains(double x, double y, double w, double h) {
	return false;
}

bool Line2D::contains($Rectangle2D* r) {
	return false;
}

$Rectangle* Line2D::getBounds() {
	return $nc($(getBounds2D()))->getBounds();
}

$PathIterator* Line2D::getPathIterator($AffineTransform* at) {
	return $new($LineIterator, this, at);
}

$PathIterator* Line2D::getPathIterator($AffineTransform* at, double flatness) {
	return $new($LineIterator, this, at);
}

$Object* Line2D::clone() {
	try {
		return $of($Shape::clone());
	} catch ($CloneNotSupportedException&) {
		$var($CloneNotSupportedException, e, $catch());
		$throwNew($InternalError, static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

Line2D::Line2D() {
}

$Class* Line2D::load$($String* name, bool initialize) {
	$loadClass(Line2D, name, initialize, &_Line2D_ClassInfo_, allocate$Line2D);
	return class$;
}

$Class* Line2D::class$ = nullptr;

		} // geom
	} // awt
} // java