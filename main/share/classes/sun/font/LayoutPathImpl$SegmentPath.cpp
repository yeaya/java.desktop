#include <sun/font/LayoutPathImpl$SegmentPath.h>

#include <java/awt/Shape.h>
#include <java/awt/geom/Point2D$Double.h>
#include <java/awt/geom/Point2D.h>
#include <java/lang/Math.h>
#include <sun/font/LayoutPathImpl$EndType.h>
#include <sun/font/LayoutPathImpl$SegmentPath$Mapper.h>
#include <sun/font/LayoutPathImpl$SegmentPathBuilder.h>
#include <sun/font/LayoutPathImpl.h>
#include <jcpp.h>

#undef MAX_VALUE

using $Shape = ::java::awt::Shape;
using $Point2D = ::java::awt::geom::Point2D;
using $Point2D$Double = ::java::awt::geom::Point2D$Double;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $LayoutPathImpl = ::sun::font::LayoutPathImpl;
using $LayoutPathImpl$EndType = ::sun::font::LayoutPathImpl$EndType;
using $LayoutPathImpl$SegmentPath$Mapper = ::sun::font::LayoutPathImpl$SegmentPath$Mapper;
using $LayoutPathImpl$SegmentPathBuilder = ::sun::font::LayoutPathImpl$SegmentPathBuilder;

namespace sun {
	namespace font {

$FieldInfo _LayoutPathImpl$SegmentPath_FieldInfo_[] = {
	{"data", "[D", nullptr, $PRIVATE, $field(LayoutPathImpl$SegmentPath, data)},
	{"etype", "Lsun/font/LayoutPathImpl$EndType;", nullptr, 0, $field(LayoutPathImpl$SegmentPath, etype)},
	{}
};

$MethodInfo _LayoutPathImpl$SegmentPath_MethodInfo_[] = {
	{"<init>", "([DLsun/font/LayoutPathImpl$EndType;)V", nullptr, 0, $method(static_cast<void(LayoutPathImpl$SegmentPath::*)($doubles*,$LayoutPathImpl$EndType*)>(&LayoutPathImpl$SegmentPath::init$))},
	{"calcoffset", "(IZLjava/awt/geom/Point2D;)V", nullptr, $PRIVATE, $method(static_cast<void(LayoutPathImpl$SegmentPath::*)(int32_t,bool,$Point2D*)>(&LayoutPathImpl$SegmentPath::calcoffset))},
	{"end", "()D", nullptr, $PUBLIC},
	{"get", "(Lsun/font/LayoutPathImpl$EndType;[D)Lsun/font/LayoutPathImpl$SegmentPath;", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<LayoutPathImpl$SegmentPath*(*)($LayoutPathImpl$EndType*,$doubles*)>(&LayoutPathImpl$SegmentPath::get))},
	{"getClosedAdvance", "(DZ)D", nullptr, $PRIVATE, $method(static_cast<double(LayoutPathImpl$SegmentPath::*)(double,bool)>(&LayoutPathImpl$SegmentPath::getClosedAdvance))},
	{"getSegmentIndexForAdvance", "(DZ)I", nullptr, $PRIVATE, $method(static_cast<int32_t(LayoutPathImpl$SegmentPath::*)(double,bool)>(&LayoutPathImpl$SegmentPath::getSegmentIndexForAdvance))},
	{"length", "()D", nullptr, $PUBLIC},
	{"locateAndGetIndex", "(Ljava/awt/geom/Point2D;ZLjava/awt/geom/Point2D;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(LayoutPathImpl$SegmentPath::*)($Point2D*,bool,$Point2D*)>(&LayoutPathImpl$SegmentPath::locateAndGetIndex))},
	{"map", "(IDDLjava/awt/geom/Point2D;)V", nullptr, $PRIVATE, $method(static_cast<void(LayoutPathImpl$SegmentPath::*)(int32_t,double,double,$Point2D*)>(&LayoutPathImpl$SegmentPath::map))},
	{"mapShape", "(Ljava/awt/Shape;)Ljava/awt/Shape;", nullptr, $PUBLIC},
	{"pathToPoint", "(Ljava/awt/geom/Point2D;ZLjava/awt/geom/Point2D;)V", nullptr, $PUBLIC},
	{"pointToPath", "(Ljava/awt/geom/Point2D;Ljava/awt/geom/Point2D;)Z", nullptr, $PUBLIC},
	{"start", "()D", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _LayoutPathImpl$SegmentPath_InnerClassesInfo_[] = {
	{"sun.font.LayoutPathImpl$SegmentPath", "sun.font.LayoutPathImpl", "SegmentPath", $PUBLIC | $STATIC | $FINAL},
	{"sun.font.LayoutPathImpl$SegmentPath$Mapper", "sun.font.LayoutPathImpl$SegmentPath", "Mapper", 0},
	{"sun.font.LayoutPathImpl$SegmentPath$Segment", "sun.font.LayoutPathImpl$SegmentPath", "Segment", 0},
	{"sun.font.LayoutPathImpl$SegmentPath$LineInfo", "sun.font.LayoutPathImpl$SegmentPath", "LineInfo", 0},
	{}
};

$ClassInfo _LayoutPathImpl$SegmentPath_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.font.LayoutPathImpl$SegmentPath",
	"sun.font.LayoutPathImpl",
	nullptr,
	_LayoutPathImpl$SegmentPath_FieldInfo_,
	_LayoutPathImpl$SegmentPath_MethodInfo_,
	nullptr,
	nullptr,
	_LayoutPathImpl$SegmentPath_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.LayoutPathImpl"
};

$Object* allocate$LayoutPathImpl$SegmentPath($Class* clazz) {
	return $of($alloc(LayoutPathImpl$SegmentPath));
}

LayoutPathImpl$SegmentPath* LayoutPathImpl$SegmentPath::get($LayoutPathImpl$EndType* etype, $doubles* pts) {
	$init(LayoutPathImpl$SegmentPath);
	return $$new($LayoutPathImpl$SegmentPathBuilder)->build(etype, pts);
}

void LayoutPathImpl$SegmentPath::init$($doubles* data, $LayoutPathImpl$EndType* etype) {
	$LayoutPathImpl::init$();
	$set(this, data, data);
	$set(this, etype, etype);
}

void LayoutPathImpl$SegmentPath::pathToPoint($Point2D* location, bool preceding, $Point2D* point) {
	locateAndGetIndex(location, preceding, point);
}

bool LayoutPathImpl$SegmentPath::pointToPath($Point2D* pt, $Point2D* result) {
	$useLocalCurrentObjectStackCache();
	double x = $nc(pt)->getX();
	double y = pt->getY();
	double bx = $nc(this->data)->get(0);
	double by = $nc(this->data)->get(1);
	double bl = $nc(this->data)->get(2);
	$init($Double);
	double cd2 = $Double::MAX_VALUE;
	double cx = (double)0;
	double cy = (double)0;
	double cl = (double)0;
	int32_t ci = 0;
	for (int32_t i = 3; i < $nc(this->data)->length; i += 3) {
		double nx = $nc(this->data)->get(i);
		double ny = $nc(this->data)->get(i + 1);
		double nl = $nc(this->data)->get(i + 2);
		double dx = nx - bx;
		double dy = ny - by;
		double dl = nl - bl;
		double px = x - bx;
		double py = y - by;
		double dot = dx * px + dy * py;
		double vcx = 0.0;
		double vcy = 0.0;
		double vcl = 0.0;
		int32_t vi = 0;
		do {
			if (dl == 0 || (dot < 0 && (!$nc(this->etype)->isExtended() || i != 3))) {
				vcx = bx;
				vcy = by;
				vcl = bl;
				vi = i;
			} else {
				double l2 = dl * dl;
				if (dot <= l2 || ($nc(this->etype)->isExtended() && i == $nc(this->data)->length - 3)) {
					double p = dot / l2;
					vcx = bx + p * dx;
					vcy = by + p * dy;
					vcl = bl + p * dl;
					vi = i;
				} else if (i == $nc(this->data)->length - 3) {
					vcx = nx;
					vcy = ny;
					vcl = nl;
					vi = $nc(this->data)->length;
				} else {
					break;
				}
			}
			double tdx = x - vcx;
			double tdy = y - vcy;
			double td2 = tdx * tdx + tdy * tdy;
			if (td2 <= cd2) {
				cd2 = td2;
				cx = vcx;
				cy = vcy;
				cl = vcl;
				ci = vi;
			}
		} while (false);
		bx = nx;
		by = ny;
		bl = nl;
	}
	bx = $nc(this->data)->get(ci - 3);
	by = $nc(this->data)->get(ci - 2);
	if (cx != bx || cy != by) {
		double nx = $nc(this->data)->get(ci);
		double ny = $nc(this->data)->get(ci + 1);
		double co = $Math::sqrt(cd2);
		if ((x - cx) * (ny - by) > (y - cy) * (nx - bx)) {
			co = -co;
		}
		$nc(result)->setLocation(cl, co);
		return false;
	} else {
		bool havePrev = ci != 3 && $nc(this->data)->get(ci - 1) != $nc(this->data)->get(ci - 4);
		bool haveFoll = ci != $nc(this->data)->length && $nc(this->data)->get(ci - 1) != $nc(this->data)->get(ci + 2);
		bool doExtend = $nc(this->etype)->isExtended() && (ci == 3 || ci == $nc(this->data)->length);
		if (havePrev && haveFoll) {
			$var($Point2D$Double, pp, $new($Point2D$Double, x, y));
			calcoffset(ci - 3, doExtend, pp);
			$var($Point2D$Double, fp, $new($Point2D$Double, x, y));
			calcoffset(ci, doExtend, fp);
			double var$0 = $Math::abs(pp->y);
			if (var$0 > $Math::abs(fp->y)) {
				$nc(result)->setLocation(pp);
				return true;
			} else {
				$nc(result)->setLocation(fp);
				return false;
			}
		} else if (havePrev) {
			$nc(result)->setLocation(x, y);
			calcoffset(ci - 3, doExtend, result);
			return true;
		} else {
			$nc(result)->setLocation(x, y);
			calcoffset(ci, doExtend, result);
			return false;
		}
	}
}

void LayoutPathImpl$SegmentPath::calcoffset(int32_t index, bool doExtend, $Point2D* result) {
	double bx = $nc(this->data)->get(index - 3);
	double by = $nc(this->data)->get(index - 2);
	double px = $nc(result)->getX() - bx;
	double py = result->getY() - by;
	double dx = $nc(this->data)->get(index) - bx;
	double dy = $nc(this->data)->get(index + 1) - by;
	double l = $nc(this->data)->get(index + 2) - $nc(this->data)->get(index - 1);
	double rx = (px * dx + py * dy) / l;
	double ry = (px * -dy + py * dx) / l;
	if (!doExtend) {
		if (rx < 0) {
			rx = (double)0;
		} else if (rx > l) {
			rx = l;
		}
	}
	rx += $nc(this->data)->get(index - 1);
	result->setLocation(rx, ry);
}

$Shape* LayoutPathImpl$SegmentPath::mapShape($Shape* s) {
	return $$new($LayoutPathImpl$SegmentPath$Mapper, this)->mapShape(s);
}

double LayoutPathImpl$SegmentPath::start() {
	return $nc(this->data)->get(2);
}

double LayoutPathImpl$SegmentPath::end() {
	return $nc(this->data)->get($nc(this->data)->length - 1);
}

double LayoutPathImpl$SegmentPath::length() {
	return $nc(this->data)->get($nc(this->data)->length - 1) - $nc(this->data)->get(2);
}

double LayoutPathImpl$SegmentPath::getClosedAdvance(double a, bool preceding) {
	if ($nc(this->etype)->isClosed()) {
		a -= $nc(this->data)->get(2);
		int32_t count = $cast(int32_t, (a / length()));
		a -= count * length();
		if (a < 0 || (a == 0 && preceding)) {
			a += length();
		}
		a += $nc(this->data)->get(2);
	}
	return a;
}

int32_t LayoutPathImpl$SegmentPath::getSegmentIndexForAdvance(double a, bool preceding) {
	a = getClosedAdvance(a, preceding);
	int32_t i = 0;
	int32_t lim = 0;
	for (i = 5, lim = $nc(this->data)->length - 1; i < lim; i += 3) {
		double v = $nc(this->data)->get(i);
		if (a < v || (a == v && preceding)) {
			break;
		}
	}
	return i - 2;
}

void LayoutPathImpl$SegmentPath::map(int32_t seg, double a, double o, $Point2D* pt) {
	double dx = $nc(this->data)->get(seg) - $nc(this->data)->get(seg - 3);
	double dy = $nc(this->data)->get(seg + 1) - $nc(this->data)->get(seg - 2);
	double dl = $nc(this->data)->get(seg + 2) - $nc(this->data)->get(seg - 1);
	double ux = dx / dl;
	double uy = dy / dl;
	a -= $nc(this->data)->get(seg - 1);
	$nc(pt)->setLocation($nc(this->data)->get(seg - 3) + a * ux - o * uy, $nc(this->data)->get(seg - 2) + a * uy + o * ux);
}

int32_t LayoutPathImpl$SegmentPath::locateAndGetIndex($Point2D* loc, bool preceding, $Point2D* result) {
	double a = $nc(loc)->getX();
	double o = loc->getY();
	int32_t seg = getSegmentIndexForAdvance(a, preceding);
	map(seg, a, o, result);
	return seg;
}

$String* LayoutPathImpl$SegmentPath::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, b, $new($StringBuilder));
	b->append("{"_s);
	b->append($($nc(this->etype)->toString()));
	b->append(" "_s);
	for (int32_t i = 0; i < $nc(this->data)->length; i += 3) {
		if (i > 0) {
			b->append(","_s);
		}
		float x = ($cast(int32_t, ($nc(this->data)->get(i) * 100))) / 100.0f;
		float y = ($cast(int32_t, ($nc(this->data)->get(i + 1) * 100))) / 100.0f;
		float l = ($cast(int32_t, ($nc(this->data)->get(i + 2) * 10))) / 10.0f;
		b->append("{"_s);
		b->append(x);
		b->append(","_s);
		b->append(y);
		b->append(","_s);
		b->append(l);
		b->append("}"_s);
	}
	b->append("}"_s);
	return b->toString();
}

LayoutPathImpl$SegmentPath::LayoutPathImpl$SegmentPath() {
}

$Class* LayoutPathImpl$SegmentPath::load$($String* name, bool initialize) {
	$loadClass(LayoutPathImpl$SegmentPath, name, initialize, &_LayoutPathImpl$SegmentPath_ClassInfo_, allocate$LayoutPathImpl$SegmentPath);
	return class$;
}

$Class* LayoutPathImpl$SegmentPath::class$ = nullptr;

	} // font
} // sun