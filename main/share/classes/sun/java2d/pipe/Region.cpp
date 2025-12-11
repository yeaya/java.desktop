#include <sun/java2d/pipe/Region.h>

#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/PathIterator.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/lang/InternalError.h>
#include <java/lang/Math.h>
#include <sun/java2d/pipe/RegionClipSpanIterator.h>
#include <sun/java2d/pipe/RegionIterator.h>
#include <sun/java2d/pipe/RegionSpanIterator.h>
#include <sun/java2d/pipe/ShapeSpanIterator.h>
#include <sun/java2d/pipe/SpanIterator.h>
#include <jcpp.h>

#undef EMPTY_REGION
#undef GROW_SIZE
#undef INCLUDE_A
#undef INCLUDE_B
#undef INCLUDE_COMMON
#undef INIT_SIZE
#undef MAX_VALUE
#undef MIN_VALUE
#undef WHOLE_REGION

using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $RegionClipSpanIterator = ::sun::java2d::pipe::RegionClipSpanIterator;
using $RegionIterator = ::sun::java2d::pipe::RegionIterator;
using $RegionSpanIterator = ::sun::java2d::pipe::RegionSpanIterator;
using $ShapeSpanIterator = ::sun::java2d::pipe::ShapeSpanIterator;
using $SpanIterator = ::sun::java2d::pipe::SpanIterator;

namespace sun {
	namespace java2d {
		namespace pipe {

$FieldInfo _Region_FieldInfo_[] = {
	{"INIT_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Region, INIT_SIZE)},
	{"GROW_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Region, GROW_SIZE)},
	{"EMPTY_REGION", "Lsun/java2d/pipe/Region;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Region, EMPTY_REGION)},
	{"WHOLE_REGION", "Lsun/java2d/pipe/Region;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Region, WHOLE_REGION)},
	{"lox", "I", nullptr, $PRIVATE, $field(Region, lox)},
	{"loy", "I", nullptr, $PRIVATE, $field(Region, loy)},
	{"hix", "I", nullptr, $PRIVATE, $field(Region, hix)},
	{"hiy", "I", nullptr, $PRIVATE, $field(Region, hiy)},
	{"endIndex", "I", nullptr, 0, $field(Region, endIndex)},
	{"bands", "[I", nullptr, 0, $field(Region, bands)},
	{"INCLUDE_A", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Region, INCLUDE_A)},
	{"INCLUDE_B", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Region, INCLUDE_B)},
	{"INCLUDE_COMMON", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Region, INCLUDE_COMMON)},
	{}
};

$MethodInfo _Region_MethodInfo_[] = {
	{"<init>", "(IIII)V", nullptr, $PRIVATE, $method(static_cast<void(Region::*)(int32_t,int32_t,int32_t,int32_t)>(&Region::init$))},
	{"<init>", "(IIII[II)V", nullptr, $PRIVATE, $method(static_cast<void(Region::*)(int32_t,int32_t,int32_t,int32_t,$ints*,int32_t)>(&Region::init$))},
	{"appendSpan", "([I)V", nullptr, $PRIVATE, $method(static_cast<void(Region::*)($ints*)>(&Region::appendSpan))},
	{"appendSpans", "(Lsun/java2d/pipe/SpanIterator;)V", nullptr, $PRIVATE, $method(static_cast<void(Region::*)($SpanIterator*)>(&Region::appendSpans))},
	{"calcBBox", "()V", nullptr, $PRIVATE, $method(static_cast<void(Region::*)()>(&Region::calcBBox))},
	{"clipAdd", "(II)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t)>(&Region::clipAdd))},
	{"clipBoxToBounds", "([I)V", nullptr, $PUBLIC, $method(static_cast<void(Region::*)($ints*)>(&Region::clipBoxToBounds))},
	{"clipRound", "(D)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(double)>(&Region::clipRound))},
	{"clipScale", "(ID)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t,double)>(&Region::clipScale))},
	{"contains", "(II)Z", nullptr, $PUBLIC, $method(static_cast<bool(Region::*)(int32_t,int32_t)>(&Region::contains))},
	{"dimAdd", "(II)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t)>(&Region::dimAdd))},
	{"encompasses", "(Lsun/java2d/pipe/Region;)Z", nullptr, $PUBLIC, $method(static_cast<bool(Region::*)(Region*)>(&Region::encompasses))},
	{"encompassesXYWH", "(IIII)Z", nullptr, $PUBLIC, $method(static_cast<bool(Region::*)(int32_t,int32_t,int32_t,int32_t)>(&Region::encompassesXYWH))},
	{"encompassesXYXY", "(IIII)Z", nullptr, $PUBLIC, $method(static_cast<bool(Region::*)(int32_t,int32_t,int32_t,int32_t)>(&Region::encompassesXYXY))},
	{"endRow", "([I)V", nullptr, $PRIVATE, $method(static_cast<void(Region::*)($ints*)>(&Region::endRow))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"filter", "(Lsun/java2d/pipe/SpanIterator;)Lsun/java2d/pipe/SpanIterator;", nullptr, $PUBLIC, $method(static_cast<$SpanIterator*(Region::*)($SpanIterator*)>(&Region::filter))},
	{"filterSpans", "(Lsun/java2d/pipe/Region;Lsun/java2d/pipe/Region;I)V", nullptr, $PRIVATE, $method(static_cast<void(Region::*)(Region*,Region*,int32_t)>(&Region::filterSpans))},
	{"getBounds", "([I)V", nullptr, $PUBLIC, $method(static_cast<void(Region::*)($ints*)>(&Region::getBounds))},
	{"getBoundsIntersection", "(Ljava/awt/Rectangle;)Lsun/java2d/pipe/Region;", nullptr, $PUBLIC, $method(static_cast<Region*(Region::*)($Rectangle*)>(&Region::getBoundsIntersection))},
	{"getBoundsIntersection", "(Lsun/java2d/pipe/Region;)Lsun/java2d/pipe/Region;", nullptr, $PUBLIC, $method(static_cast<Region*(Region::*)(Region*)>(&Region::getBoundsIntersection))},
	{"getBoundsIntersectionXYWH", "(IIII)Lsun/java2d/pipe/Region;", nullptr, $PUBLIC, $method(static_cast<Region*(Region::*)(int32_t,int32_t,int32_t,int32_t)>(&Region::getBoundsIntersectionXYWH))},
	{"getBoundsIntersectionXYXY", "(IIII)Lsun/java2d/pipe/Region;", nullptr, $PUBLIC, $method(static_cast<Region*(Region::*)(int32_t,int32_t,int32_t,int32_t)>(&Region::getBoundsIntersectionXYXY))},
	{"getDifference", "(Lsun/java2d/pipe/Region;)Lsun/java2d/pipe/Region;", nullptr, $PUBLIC, $method(static_cast<Region*(Region::*)(Region*)>(&Region::getDifference))},
	{"getExclusiveOr", "(Lsun/java2d/pipe/Region;)Lsun/java2d/pipe/Region;", nullptr, $PUBLIC, $method(static_cast<Region*(Region::*)(Region*)>(&Region::getExclusiveOr))},
	{"getHeight", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(Region::*)()>(&Region::getHeight))},
	{"getHiX", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(Region::*)()>(&Region::getHiX))},
	{"getHiY", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(Region::*)()>(&Region::getHiY))},
	{"getInstance", "(Ljava/awt/Shape;Ljava/awt/geom/AffineTransform;)Lsun/java2d/pipe/Region;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Region*(*)($Shape*,$AffineTransform*)>(&Region::getInstance))},
	{"getInstance", "(Lsun/java2d/pipe/Region;Ljava/awt/Shape;Ljava/awt/geom/AffineTransform;)Lsun/java2d/pipe/Region;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Region*(*)(Region*,$Shape*,$AffineTransform*)>(&Region::getInstance))},
	{"getInstance", "(Lsun/java2d/pipe/Region;ZLjava/awt/Shape;Ljava/awt/geom/AffineTransform;)Lsun/java2d/pipe/Region;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Region*(*)(Region*,bool,$Shape*,$AffineTransform*)>(&Region::getInstance))},
	{"getInstance", "(IIII[I)Lsun/java2d/pipe/Region;", nullptr, $STATIC, $method(static_cast<Region*(*)(int32_t,int32_t,int32_t,int32_t,$ints*)>(&Region::getInstance))},
	{"getInstance", "(Ljava/awt/Rectangle;)Lsun/java2d/pipe/Region;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Region*(*)($Rectangle*)>(&Region::getInstance))},
	{"getInstance", "([I)Lsun/java2d/pipe/Region;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Region*(*)($ints*)>(&Region::getInstance))},
	{"getInstance", "([ILsun/java2d/pipe/SpanIterator;)Lsun/java2d/pipe/Region;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Region*(*)($ints*,$SpanIterator*)>(&Region::getInstance))},
	{"getInstanceXYWH", "(IIII)Lsun/java2d/pipe/Region;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Region*(*)(int32_t,int32_t,int32_t,int32_t)>(&Region::getInstanceXYWH))},
	{"getInstanceXYXY", "(IIII)Lsun/java2d/pipe/Region;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Region*(*)(int32_t,int32_t,int32_t,int32_t)>(&Region::getInstanceXYXY))},
	{"getIntersection", "(Ljava/awt/Rectangle;)Lsun/java2d/pipe/Region;", nullptr, $PUBLIC, $method(static_cast<Region*(Region::*)($Rectangle*)>(&Region::getIntersection))},
	{"getIntersection", "(Ljava/awt/geom/Rectangle2D;)Lsun/java2d/pipe/Region;", nullptr, $PUBLIC, $method(static_cast<Region*(Region::*)($Rectangle2D*)>(&Region::getIntersection))},
	{"getIntersection", "(Lsun/java2d/pipe/Region;)Lsun/java2d/pipe/Region;", nullptr, $PUBLIC, $method(static_cast<Region*(Region::*)(Region*)>(&Region::getIntersection))},
	{"getIntersectionXYWH", "(IIII)Lsun/java2d/pipe/Region;", nullptr, $PUBLIC, $method(static_cast<Region*(Region::*)(int32_t,int32_t,int32_t,int32_t)>(&Region::getIntersectionXYWH))},
	{"getIntersectionXYXY", "(DDDD)Lsun/java2d/pipe/Region;", nullptr, $PUBLIC, $method(static_cast<Region*(Region::*)(double,double,double,double)>(&Region::getIntersectionXYXY))},
	{"getIntersectionXYXY", "(IIII)Lsun/java2d/pipe/Region;", nullptr, $PUBLIC, $method(static_cast<Region*(Region::*)(int32_t,int32_t,int32_t,int32_t)>(&Region::getIntersectionXYXY))},
	{"getIterator", "()Lsun/java2d/pipe/RegionIterator;", nullptr, $PUBLIC, $method(static_cast<$RegionIterator*(Region::*)()>(&Region::getIterator))},
	{"getLoX", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(Region::*)()>(&Region::getLoX))},
	{"getLoY", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(Region::*)()>(&Region::getLoY))},
	{"getSafeTranslatedRegion", "(II)Lsun/java2d/pipe/Region;", nullptr, $PRIVATE, $method(static_cast<Region*(Region::*)(int32_t,int32_t)>(&Region::getSafeTranslatedRegion))},
	{"getScaledRegion", "(DD)Lsun/java2d/pipe/Region;", nullptr, $PUBLIC, $method(static_cast<Region*(Region::*)(double,double)>(&Region::getScaledRegion))},
	{"getSpanIterator", "()Lsun/java2d/pipe/SpanIterator;", nullptr, $PUBLIC, $method(static_cast<$SpanIterator*(Region::*)()>(&Region::getSpanIterator))},
	{"getSpanIterator", "([I)Lsun/java2d/pipe/SpanIterator;", nullptr, $PUBLIC, $method(static_cast<$SpanIterator*(Region::*)($ints*)>(&Region::getSpanIterator))},
	{"getTranslatedRegion", "(II)Lsun/java2d/pipe/Region;", nullptr, $PUBLIC, $method(static_cast<Region*(Region::*)(int32_t,int32_t)>(&Region::getTranslatedRegion))},
	{"getUnion", "(Lsun/java2d/pipe/Region;)Lsun/java2d/pipe/Region;", nullptr, $PUBLIC, $method(static_cast<Region*(Region::*)(Region*)>(&Region::getUnion))},
	{"getWidth", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(Region::*)()>(&Region::getWidth))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&Region::initIDs))},
	{"intersectsQuickCheck", "(Lsun/java2d/pipe/Region;)Z", nullptr, $PUBLIC, $method(static_cast<bool(Region::*)(Region*)>(&Region::intersectsQuickCheck))},
	{"intersectsQuickCheckXYXY", "(IIII)Z", nullptr, $PUBLIC, $method(static_cast<bool(Region::*)(int32_t,int32_t,int32_t,int32_t)>(&Region::intersectsQuickCheckXYXY))},
	{"isEmpty", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(Region::*)()>(&Region::isEmpty))},
	{"isInsideQuickCheck", "(Lsun/java2d/pipe/Region;)Z", nullptr, $PUBLIC, $method(static_cast<bool(Region::*)(Region*)>(&Region::isInsideQuickCheck))},
	{"isInsideXYWH", "(IIII)Z", nullptr, $PUBLIC, $method(static_cast<bool(Region::*)(int32_t,int32_t,int32_t,int32_t)>(&Region::isInsideXYWH))},
	{"isInsideXYXY", "(IIII)Z", nullptr, $PUBLIC, $method(static_cast<bool(Region::*)(int32_t,int32_t,int32_t,int32_t)>(&Region::isInsideXYXY))},
	{"isRectangular", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(Region::*)()>(&Region::isRectangular))},
	{"needSpace", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(Region::*)(int32_t)>(&Region::needSpace))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_initIDs 54

$ClassInfo _Region_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.java2d.pipe.Region",
	"java.lang.Object",
	nullptr,
	_Region_FieldInfo_,
	_Region_MethodInfo_
};

$Object* allocate$Region($Class* clazz) {
	return $of($alloc(Region));
}

Region* Region::EMPTY_REGION = nullptr;
Region* Region::WHOLE_REGION = nullptr;

void Region::initIDs() {
	$init(Region);
	$prepareNativeStatic(Region, initIDs, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

int32_t Region::dimAdd(int32_t start, int32_t dim) {
	$init(Region);
	if (dim <= 0) {
		return start;
	}
	if ((dim += start) < start) {
		return $Integer::MAX_VALUE;
	}
	return dim;
}

int32_t Region::clipAdd(int32_t v, int32_t dv) {
	$init(Region);
	int32_t newv = v + dv;
	if ((newv > v) != (dv > 0)) {
		newv = (dv < 0) ? $Integer::MIN_VALUE : $Integer::MAX_VALUE;
	}
	return newv;
}

int32_t Region::clipRound(double coordinate) {
	$init(Region);
	double newv = coordinate - 0.5;
	if (newv < $Integer::MIN_VALUE) {
		return $Integer::MIN_VALUE;
	}
	if (newv > $Integer::MAX_VALUE) {
		return $Integer::MAX_VALUE;
	}
	return $cast(int32_t, $Math::ceil(newv));
}

int32_t Region::clipScale(int32_t v, double sv) {
	$init(Region);
	if (sv == 1.0) {
		return v;
	}
	double newv = v * sv;
	if (newv < $Integer::MIN_VALUE) {
		return $Integer::MIN_VALUE;
	}
	if (newv > $Integer::MAX_VALUE) {
		return $Integer::MAX_VALUE;
	}
	return (int32_t)$Math::round(newv);
}

void Region::init$(int32_t lox, int32_t loy, int32_t hix, int32_t hiy) {
	this->lox = lox;
	this->loy = loy;
	this->hix = hix;
	this->hiy = hiy;
}

void Region::init$(int32_t lox, int32_t loy, int32_t hix, int32_t hiy, $ints* bands, int32_t end) {
	this->lox = lox;
	this->loy = loy;
	this->hix = hix;
	this->hiy = hiy;
	$set(this, bands, bands);
	this->endIndex = end;
}

Region* Region::getInstance($Shape* s, $AffineTransform* at) {
	$init(Region);
	return getInstance(Region::WHOLE_REGION, false, s, at);
}

Region* Region::getInstance(Region* devBounds, $Shape* s, $AffineTransform* at) {
	$init(Region);
	return getInstance(devBounds, false, s, at);
}

Region* Region::getInstance(Region* devBounds, bool normalize, $Shape* s, $AffineTransform* at) {
	$init(Region);
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($RectangularShape, s) && $nc(($cast($RectangularShape, s)))->isEmpty()) {
		return Region::EMPTY_REGION;
	}
	$var($ints, box, $new($ints, 4));
	$var($ShapeSpanIterator, sr, $new($ShapeSpanIterator, normalize));
	{
		$var($Throwable, var$0, nullptr);
		$var(Region, var$2, nullptr);
		bool return$1 = false;
		try {
			sr->setOutputArea(devBounds);
			sr->appendPath($($nc(s)->getPathIterator(at)));
			sr->getPathBox(box);
			$assign(var$2, Region::getInstance(box, static_cast<$SpanIterator*>(sr)));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			sr->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

Region* Region::getInstance(int32_t lox, int32_t loy, int32_t hix, int32_t hiy, $ints* edges) {
	$init(Region);
	int32_t y1 = $nc(edges)->get(0);
	int32_t y2 = edges->get(1);
	if (hiy <= loy || hix <= lox || y2 <= y1) {
		return Region::EMPTY_REGION;
	}
	$var($ints, bands, $new($ints, (y2 - y1) * 5));
	int32_t end = 0;
	int32_t index = 2;
	for (int32_t y = y1; y < y2; ++y) {
		int32_t spanlox = $Math::max(clipAdd(lox, edges->get(index++)), lox);
		int32_t spanhix = $Math::min(clipAdd(lox, edges->get(index++)), hix);
		if (spanlox < spanhix) {
			int32_t spanloy = $Math::max(clipAdd(loy, y), loy);
			int32_t spanhiy = $Math::min(clipAdd(spanloy, 1), hiy);
			if (spanloy < spanhiy) {
				bands->set(end++, spanloy);
				bands->set(end++, spanhiy);
				bands->set(end++, 1);
				bands->set(end++, spanlox);
				bands->set(end++, spanhix);
			}
		}
	}
	return end != 0 ? $new(Region, lox, loy, hix, hiy, bands, end) : Region::EMPTY_REGION;
}

Region* Region::getInstance($Rectangle* r) {
	$init(Region);
	return Region::getInstanceXYWH($nc(r)->x, r->y, r->width, r->height);
}

Region* Region::getInstanceXYWH(int32_t x, int32_t y, int32_t w, int32_t h) {
	$init(Region);
	int32_t var$0 = x;
	int32_t var$1 = y;
	int32_t var$2 = dimAdd(x, w);
	return Region::getInstanceXYXY(var$0, var$1, var$2, dimAdd(y, h));
}

Region* Region::getInstance($ints* box) {
	$init(Region);
	return $new(Region, $nc(box)->get(0), box->get(1), box->get(2), box->get(3));
}

Region* Region::getInstanceXYXY(int32_t lox, int32_t loy, int32_t hix, int32_t hiy) {
	$init(Region);
	return $new(Region, lox, loy, hix, hiy);
}

Region* Region::getInstance($ints* box, $SpanIterator* si) {
	$init(Region);
	$var(Region, ret, $new(Region, $nc(box)->get(0), box->get(1), box->get(2), box->get(3)));
	ret->appendSpans(si);
	return ret;
}

void Region::appendSpans($SpanIterator* si) {
	$var($ints, box, $new($ints, 6));
	while ($nc(si)->nextSpan(box)) {
		appendSpan(box);
	}
	endRow(box);
	calcBBox();
}

Region* Region::getScaledRegion(double sx, double sy) {
	$useLocalCurrentObjectStackCache();
	if (sx == 0 || sy == 0 || this == Region::EMPTY_REGION) {
		return Region::EMPTY_REGION;
	}
	if ((sx == 1.0 && sy == 1.0) || (this == Region::WHOLE_REGION)) {
		return this;
	}
	int32_t tlox = clipScale(this->lox, sx);
	int32_t tloy = clipScale(this->loy, sy);
	int32_t thix = clipScale(this->hix, sx);
	int32_t thiy = clipScale(this->hiy, sy);
	$var(Region, ret, $new(Region, tlox, tloy, thix, thiy));
	$var($ints, bands, this->bands);
	if (bands != nullptr) {
		int32_t end = this->endIndex;
		$var($ints, newbands, $new($ints, end));
		int32_t i = 0;
		int32_t j = 0;
		int32_t ncol = 0;
		while (i < end) {
			int32_t y1 = 0;
			int32_t y2 = 0;
			newbands->set(j++, y1 = clipScale(bands->get(i++), sy));
			newbands->set(j++, y2 = clipScale(bands->get(i++), sy));
			newbands->set(j++, ncol = bands->get(i++));
			int32_t savej = j;
			if (y1 < y2) {
				while (--ncol >= 0) {
					int32_t x1 = clipScale(bands->get(i++), sx);
					int32_t x2 = clipScale(bands->get(i++), sx);
					if (x1 < x2) {
						newbands->set(j++, x1);
						newbands->set(j++, x2);
					}
				}
			} else {
				i += ncol * 2;
			}
			if (j > savej) {
				newbands->set(savej - 1, (j - savej) / 2);
			} else {
				j = savej - 3;
			}
		}
		if (j <= 5) {
			if (j < 5) {
				ret->lox = (ret->loy = (ret->hix = (ret->hiy = 0)));
			} else {
				ret->loy = newbands->get(0);
				ret->hiy = newbands->get(1);
				ret->lox = newbands->get(3);
				ret->hix = newbands->get(4);
			}
		} else {
			ret->endIndex = j;
			$set(ret, bands, newbands);
		}
	}
	return ret;
}

Region* Region::getTranslatedRegion(int32_t dx, int32_t dy) {
	$useLocalCurrentObjectStackCache();
	if ((dx | dy) == 0) {
		return this;
	}
	int32_t tlox = this->lox + dx;
	int32_t tloy = this->loy + dy;
	int32_t thix = this->hix + dx;
	int32_t thiy = this->hiy + dy;
	if ((tlox > this->lox) != (dx > 0) || (tloy > this->loy) != (dy > 0) || (thix > this->hix) != (dx > 0) || (thiy > this->hiy) != (dy > 0)) {
		return getSafeTranslatedRegion(dx, dy);
	}
	$var(Region, ret, $new(Region, tlox, tloy, thix, thiy));
	$var($ints, bands, this->bands);
	if (bands != nullptr) {
		int32_t end = this->endIndex;
		ret->endIndex = end;
		$var($ints, newbands, $new($ints, end));
		$set(ret, bands, newbands);
		int32_t i = 0;
		int32_t ncol = 0;
		while (i < end) {
			newbands->set(i, bands->get(i) + dy);
			++i;
			newbands->set(i, bands->get(i) + dy);
			++i;
			newbands->set(i, ncol = bands->get(i));
			++i;
			while (--ncol >= 0) {
				newbands->set(i, bands->get(i) + dx);
				++i;
				newbands->set(i, bands->get(i) + dx);
				++i;
			}
		}
	}
	return ret;
}

Region* Region::getSafeTranslatedRegion(int32_t dx, int32_t dy) {
	$useLocalCurrentObjectStackCache();
	int32_t tlox = clipAdd(this->lox, dx);
	int32_t tloy = clipAdd(this->loy, dy);
	int32_t thix = clipAdd(this->hix, dx);
	int32_t thiy = clipAdd(this->hiy, dy);
	$var(Region, ret, $new(Region, tlox, tloy, thix, thiy));
	$var($ints, bands, this->bands);
	if (bands != nullptr) {
		int32_t end = this->endIndex;
		$var($ints, newbands, $new($ints, end));
		int32_t i = 0;
		int32_t j = 0;
		int32_t ncol = 0;
		while (i < end) {
			int32_t y1 = 0;
			int32_t y2 = 0;
			newbands->set(j++, y1 = clipAdd(bands->get(i++), dy));
			newbands->set(j++, y2 = clipAdd(bands->get(i++), dy));
			newbands->set(j++, ncol = bands->get(i++));
			int32_t savej = j;
			if (y1 < y2) {
				while (--ncol >= 0) {
					int32_t x1 = clipAdd(bands->get(i++), dx);
					int32_t x2 = clipAdd(bands->get(i++), dx);
					if (x1 < x2) {
						newbands->set(j++, x1);
						newbands->set(j++, x2);
					}
				}
			} else {
				i += ncol * 2;
			}
			if (j > savej) {
				newbands->set(savej - 1, (j - savej) / 2);
			} else {
				j = savej - 3;
			}
		}
		if (j <= 5) {
			if (j < 5) {
				ret->lox = (ret->loy = (ret->hix = (ret->hiy = 0)));
			} else {
				ret->loy = newbands->get(0);
				ret->hiy = newbands->get(1);
				ret->lox = newbands->get(3);
				ret->hix = newbands->get(4);
			}
		} else {
			ret->endIndex = j;
			$set(ret, bands, newbands);
		}
	}
	return ret;
}

Region* Region::getIntersection($Rectangle* r) {
	return getIntersectionXYWH($nc(r)->x, r->y, r->width, r->height);
}

Region* Region::getIntersectionXYWH(int32_t x, int32_t y, int32_t w, int32_t h) {
	int32_t var$0 = x;
	int32_t var$1 = y;
	int32_t var$2 = dimAdd(x, w);
	return getIntersectionXYXY(var$0, var$1, var$2, dimAdd(y, h));
}

Region* Region::getIntersection($Rectangle2D* r) {
	if ($instanceOf($Rectangle, r)) {
		return getIntersection($cast($Rectangle, r));
	}
	double var$0 = $nc(r)->getMinX();
	double var$1 = r->getMinY();
	double var$2 = r->getMaxX();
	return getIntersectionXYXY(var$0, var$1, var$2, r->getMaxY());
}

Region* Region::getIntersectionXYXY(double lox, double loy, double hix, double hiy) {
	bool var$2 = $Double::isNaN(lox);
	bool var$1 = var$2 || $Double::isNaN(loy);
	bool var$0 = var$1 || $Double::isNaN(hix);
	if (var$0 || $Double::isNaN(hiy)) {
		return Region::EMPTY_REGION;
	}
	int32_t var$3 = clipRound(lox);
	int32_t var$4 = clipRound(loy);
	int32_t var$5 = clipRound(hix);
	return getIntersectionXYXY(var$3, var$4, var$5, clipRound(hiy));
}

Region* Region::getIntersectionXYXY(int32_t lox, int32_t loy, int32_t hix, int32_t hiy) {
	$useLocalCurrentObjectStackCache();
	if (isInsideXYXY(lox, loy, hix, hiy)) {
		return this;
	}
	$var(Region, ret, $new(Region, (lox < this->lox) ? this->lox : lox, (loy < this->loy) ? this->loy : loy, (hix > this->hix) ? this->hix : hix, (hiy > this->hiy) ? this->hiy : hiy));
	if (this->bands != nullptr) {
		ret->appendSpans($(this->getSpanIterator()));
	}
	return ret;
}

Region* Region::getIntersection(Region* r) {
	if (this->isInsideQuickCheck(r)) {
		return this;
	}
	if ($nc(r)->isInsideQuickCheck(this)) {
		return r;
	}
	$var(Region, ret, $new(Region, ($nc(r)->lox < this->lox) ? this->lox : $nc(r)->lox, (r->loy < this->loy) ? this->loy : r->loy, (r->hix > this->hix) ? this->hix : r->hix, (r->hiy > this->hiy) ? this->hiy : r->hiy));
	if (!ret->isEmpty()) {
		ret->filterSpans(this, r, Region::INCLUDE_COMMON);
	}
	return ret;
}

Region* Region::getUnion(Region* r) {
	bool var$0 = $nc(r)->isEmpty();
	if (var$0 || $nc(r)->isInsideQuickCheck(this)) {
		return this;
	}
	bool var$1 = this->isEmpty();
	if (var$1 || this->isInsideQuickCheck(r)) {
		return r;
	}
	$var(Region, ret, $new(Region, ($nc(r)->lox > this->lox) ? this->lox : $nc(r)->lox, (r->loy > this->loy) ? this->loy : r->loy, (r->hix < this->hix) ? this->hix : r->hix, (r->hiy < this->hiy) ? this->hiy : r->hiy));
	ret->filterSpans(this, r, (Region::INCLUDE_A | Region::INCLUDE_B) | Region::INCLUDE_COMMON);
	return ret;
}

Region* Region::getDifference(Region* r) {
	if (!$nc(r)->intersectsQuickCheck(this)) {
		return this;
	}
	if (this->isInsideQuickCheck(r)) {
		return Region::EMPTY_REGION;
	}
	$var(Region, ret, $new(Region, this->lox, this->loy, this->hix, this->hiy));
	ret->filterSpans(this, r, Region::INCLUDE_A);
	return ret;
}

Region* Region::getExclusiveOr(Region* r) {
	if ($nc(r)->isEmpty()) {
		return this;
	}
	if (this->isEmpty()) {
		return r;
	}
	$var(Region, ret, $new(Region, ($nc(r)->lox > this->lox) ? this->lox : $nc(r)->lox, (r->loy > this->loy) ? this->loy : r->loy, (r->hix < this->hix) ? this->hix : r->hix, (r->hiy < this->hiy) ? this->hiy : r->hiy));
	ret->filterSpans(this, r, Region::INCLUDE_A | Region::INCLUDE_B);
	return ret;
}

void Region::filterSpans(Region* ra, Region* rb, int32_t flags) {
	$useLocalCurrentObjectStackCache();
	$var($ints, abands, $nc(ra)->bands);
	$var($ints, bbands, $nc(rb)->bands);
	if (abands == nullptr) {
		$assign(abands, $new($ints, {
			ra->loy,
			ra->hiy,
			1,
			ra->lox,
			ra->hix
		}));
	}
	if (bbands == nullptr) {
		$assign(bbands, $new($ints, {
			rb->loy,
			rb->hiy,
			1,
			rb->lox,
			rb->hix
		}));
	}
	$var($ints, box, $new($ints, 6));
	int32_t acolstart = 0;
	int32_t ay1 = $nc(abands)->get(acolstart++);
	int32_t ay2 = abands->get(acolstart++);
	int32_t acolend = abands->get(acolstart++);
	acolend = acolstart + 2 * acolend;
	int32_t bcolstart = 0;
	int32_t by1 = $nc(bbands)->get(bcolstart++);
	int32_t by2 = bbands->get(bcolstart++);
	int32_t bcolend = bbands->get(bcolstart++);
	bcolend = bcolstart + 2 * bcolend;
	int32_t y = this->loy;
	while (y < this->hiy) {
		if (y >= ay2) {
			if (acolend < ra->endIndex) {
				acolstart = acolend;
				ay1 = abands->get(acolstart++);
				ay2 = abands->get(acolstart++);
				acolend = abands->get(acolstart++);
				acolend = acolstart + 2 * acolend;
			} else {
				if (((int32_t)(flags & (uint32_t)Region::INCLUDE_B)) == 0) {
					break;
				}
				ay1 = (ay2 = this->hiy);
			}
			continue;
		}
		if (y >= by2) {
			if (bcolend < rb->endIndex) {
				bcolstart = bcolend;
				by1 = bbands->get(bcolstart++);
				by2 = bbands->get(bcolstart++);
				bcolend = bbands->get(bcolstart++);
				bcolend = bcolstart + 2 * bcolend;
			} else {
				if (((int32_t)(flags & (uint32_t)Region::INCLUDE_A)) == 0) {
					break;
				}
				by1 = (by2 = this->hiy);
			}
			continue;
		}
		int32_t yend = 0;
		if (y < by1) {
			if (y < ay1) {
				y = $Math::min(ay1, by1);
				continue;
			}
			yend = $Math::min(ay2, by1);
			if (((int32_t)(flags & (uint32_t)Region::INCLUDE_A)) != 0) {
				box->set(1, y);
				box->set(3, yend);
				int32_t acol = acolstart;
				while (acol < acolend) {
					box->set(0, abands->get(acol++));
					box->set(2, abands->get(acol++));
					appendSpan(box);
				}
			}
		} else if (y < ay1) {
			yend = $Math::min(by2, ay1);
			if (((int32_t)(flags & (uint32_t)Region::INCLUDE_B)) != 0) {
				box->set(1, y);
				box->set(3, yend);
				int32_t bcol = bcolstart;
				while (bcol < bcolend) {
					box->set(0, bbands->get(bcol++));
					box->set(2, bbands->get(bcol++));
					appendSpan(box);
				}
			}
		} else {
			yend = $Math::min(ay2, by2);
			box->set(1, y);
			box->set(3, yend);
			int32_t acol = acolstart;
			int32_t bcol = bcolstart;
			int32_t ax1 = abands->get(acol++);
			int32_t ax2 = abands->get(acol++);
			int32_t bx1 = bbands->get(bcol++);
			int32_t bx2 = bbands->get(bcol++);
			int32_t x = $Math::min(ax1, bx1);
			if (x < this->lox) {
				x = this->lox;
			}
			while (x < this->hix) {
				if (x >= ax2) {
					if (acol < acolend) {
						ax1 = abands->get(acol++);
						ax2 = abands->get(acol++);
					} else {
						if (((int32_t)(flags & (uint32_t)Region::INCLUDE_B)) == 0) {
							break;
						}
						ax1 = (ax2 = this->hix);
					}
					continue;
				}
				if (x >= bx2) {
					if (bcol < bcolend) {
						bx1 = bbands->get(bcol++);
						bx2 = bbands->get(bcol++);
					} else {
						if (((int32_t)(flags & (uint32_t)Region::INCLUDE_A)) == 0) {
							break;
						}
						bx1 = (bx2 = this->hix);
					}
					continue;
				}
				int32_t xend = 0;
				bool appendit = false;
				if (x < bx1) {
					if (x < ax1) {
						xend = $Math::min(ax1, bx1);
						appendit = false;
					} else {
						xend = $Math::min(ax2, bx1);
						appendit = (((int32_t)(flags & (uint32_t)Region::INCLUDE_A)) != 0);
					}
				} else if (x < ax1) {
					xend = $Math::min(ax1, bx2);
					appendit = (((int32_t)(flags & (uint32_t)Region::INCLUDE_B)) != 0);
				} else {
					xend = $Math::min(ax2, bx2);
					appendit = (((int32_t)(flags & (uint32_t)Region::INCLUDE_COMMON)) != 0);
				}
				if (appendit) {
					box->set(0, x);
					box->set(2, xend);
					appendSpan(box);
				}
				x = xend;
			}
		}
		y = yend;
	}
	endRow(box);
	calcBBox();
}

Region* Region::getBoundsIntersection($Rectangle* r) {
	return getBoundsIntersectionXYWH($nc(r)->x, r->y, r->width, r->height);
}

Region* Region::getBoundsIntersectionXYWH(int32_t x, int32_t y, int32_t w, int32_t h) {
	int32_t var$0 = x;
	int32_t var$1 = y;
	int32_t var$2 = dimAdd(x, w);
	return getBoundsIntersectionXYXY(var$0, var$1, var$2, dimAdd(y, h));
}

Region* Region::getBoundsIntersectionXYXY(int32_t lox, int32_t loy, int32_t hix, int32_t hiy) {
	if (this->bands == nullptr && this->lox >= lox && this->loy >= loy && this->hix <= hix && this->hiy <= hiy) {
		return this;
	}
	return $new(Region, (lox < this->lox) ? this->lox : lox, (loy < this->loy) ? this->loy : loy, (hix > this->hix) ? this->hix : hix, (hiy > this->hiy) ? this->hiy : hiy);
}

Region* Region::getBoundsIntersection(Region* r) {
	if (this->encompasses(r)) {
		return r;
	}
	if ($nc(r)->encompasses(this)) {
		return this;
	}
	return $new(Region, ($nc(r)->lox < this->lox) ? this->lox : $nc(r)->lox, (r->loy < this->loy) ? this->loy : r->loy, (r->hix > this->hix) ? this->hix : r->hix, (r->hiy > this->hiy) ? this->hiy : r->hiy);
}

void Region::appendSpan($ints* box) {
	int32_t spanlox = 0;
	int32_t spanloy = 0;
	int32_t spanhix = 0;
	int32_t spanhiy = 0;
	if ((spanlox = $nc(box)->get(0)) < this->lox) {
		spanlox = this->lox;
	}
	if ((spanloy = $nc(box)->get(1)) < this->loy) {
		spanloy = this->loy;
	}
	if ((spanhix = $nc(box)->get(2)) > this->hix) {
		spanhix = this->hix;
	}
	if ((spanhiy = $nc(box)->get(3)) > this->hiy) {
		spanhiy = this->hiy;
	}
	if (spanhix <= spanlox || spanhiy <= spanloy) {
		return;
	}
	int32_t curYrow = $nc(box)->get(4);
	if (this->endIndex == 0 || spanloy >= $nc(this->bands)->get(curYrow + 1)) {
		if (this->bands == nullptr) {
			$set(this, bands, $new($ints, Region::INIT_SIZE));
		} else {
			needSpace(5);
			endRow(box);
			curYrow = box->get(4);
		}
		$nc(this->bands)->set(this->endIndex++, spanloy);
		$nc(this->bands)->set(this->endIndex++, spanhiy);
		$nc(this->bands)->set(this->endIndex++, 0);
	} else if (spanloy == $nc(this->bands)->get(curYrow) && spanhiy == $nc(this->bands)->get(curYrow + 1) && spanlox >= $nc(this->bands)->get(this->endIndex - 1)) {
		if (spanlox == $nc(this->bands)->get(this->endIndex - 1)) {
			$nc(this->bands)->set(this->endIndex - 1, spanhix);
			return;
		}
		needSpace(2);
	} else {
		$throwNew($InternalError, "bad span"_s);
	}
	$nc(this->bands)->set(this->endIndex++, spanlox);
	$nc(this->bands)->set(this->endIndex++, spanhix);
	++(*$nc(this->bands))[curYrow + 2];
}

void Region::needSpace(int32_t num) {
	if (this->endIndex + num >= $nc(this->bands)->length) {
		$var($ints, newbands, $new($ints, $nc(this->bands)->length + Region::GROW_SIZE));
		$System::arraycopy(this->bands, 0, newbands, 0, this->endIndex);
		$set(this, bands, newbands);
	}
}

void Region::endRow($ints* box) {
	int32_t cur = $nc(box)->get(4);
	int32_t prev = box->get(5);
	if (cur > prev) {
		$var($ints, bands, this->bands);
		if ($nc(bands)->get(prev + 1) == bands->get(cur) && bands->get(prev + 2) == bands->get(cur + 2)) {
			int32_t num = bands->get(cur + 2) * 2;
			cur += 3;
			prev += 3;
			while (num > 0) {
				if (bands->get(cur++) != bands->get(prev++)) {
					break;
				}
				--num;
			}
			if (num == 0) {
				bands->set(box->get(5) + 1, bands->get(prev + 1));
				this->endIndex = prev;
				return;
			}
		}
	}
	box->set(5, box->get(4));
	box->set(4, this->endIndex);
}

void Region::calcBBox() {
	$var($ints, bands, this->bands);
	if (this->endIndex <= 5) {
		if (this->endIndex == 0) {
			this->lox = (this->loy = (this->hix = (this->hiy = 0)));
		} else {
			this->loy = $nc(bands)->get(0);
			this->hiy = bands->get(1);
			this->lox = bands->get(3);
			this->hix = bands->get(4);
			this->endIndex = 0;
		}
		$set(this, bands, nullptr);
		return;
	}
	int32_t lox = this->hix;
	int32_t hix = this->lox;
	int32_t hiyindex = 0;
	int32_t i = 0;
	while (i < this->endIndex) {
		hiyindex = i;
		int32_t numbands = $nc(bands)->get(i + 2);
		i += 3;
		if (lox > bands->get(i)) {
			lox = bands->get(i);
		}
		i += numbands * 2;
		if (hix < bands->get(i - 1)) {
			hix = bands->get(i - 1);
		}
	}
	this->lox = lox;
	this->loy = $nc(bands)->get(0);
	this->hix = hix;
	this->hiy = bands->get(hiyindex + 1);
}

int32_t Region::getLoX() {
	return this->lox;
}

int32_t Region::getLoY() {
	return this->loy;
}

int32_t Region::getHiX() {
	return this->hix;
}

int32_t Region::getHiY() {
	return this->hiy;
}

int32_t Region::getWidth() {
	if (this->hix < this->lox) {
		return 0;
	}
	int32_t w = 0;
	if ((w = this->hix - this->lox) < 0) {
		w = $Integer::MAX_VALUE;
	}
	return w;
}

int32_t Region::getHeight() {
	if (this->hiy < this->loy) {
		return 0;
	}
	int32_t h = 0;
	if ((h = this->hiy - this->loy) < 0) {
		h = $Integer::MAX_VALUE;
	}
	return h;
}

bool Region::isEmpty() {
	return (this->hix <= this->lox || this->hiy <= this->loy);
}

bool Region::isRectangular() {
	return (this->bands == nullptr);
}

bool Region::contains(int32_t x, int32_t y) {
	if (x < this->lox || x >= this->hix || y < this->loy || y >= this->hiy) {
		return false;
	}
	if (this->bands == nullptr) {
		return true;
	}
	int32_t i = 0;
	while (i < this->endIndex) {
		if (y < $nc(this->bands)->get(i++)) {
			return false;
		}
		if (y >= $nc(this->bands)->get(i++)) {
			int32_t numspans = $nc(this->bands)->get(i++);
			i += numspans * 2;
		} else {
			int32_t end = $nc(this->bands)->get(i++);
			end = i + end * 2;
			while (i < end) {
				if (x < $nc(this->bands)->get(i++)) {
					return false;
				}
				if (x < $nc(this->bands)->get(i++)) {
					return true;
				}
			}
			return false;
		}
	}
	return false;
}

bool Region::isInsideXYWH(int32_t x, int32_t y, int32_t w, int32_t h) {
	int32_t var$0 = x;
	int32_t var$1 = y;
	int32_t var$2 = dimAdd(x, w);
	return isInsideXYXY(var$0, var$1, var$2, dimAdd(y, h));
}

bool Region::isInsideXYXY(int32_t lox, int32_t loy, int32_t hix, int32_t hiy) {
	return (this->lox >= lox && this->loy >= loy && this->hix <= hix && this->hiy <= hiy);
}

bool Region::isInsideQuickCheck(Region* r) {
	return ($nc(r)->bands == nullptr && r->lox <= this->lox && r->loy <= this->loy && r->hix >= this->hix && r->hiy >= this->hiy);
}

bool Region::intersectsQuickCheckXYXY(int32_t lox, int32_t loy, int32_t hix, int32_t hiy) {
	return (hix > this->lox && lox < this->hix && hiy > this->loy && loy < this->hiy);
}

bool Region::intersectsQuickCheck(Region* r) {
	return ($nc(r)->hix > this->lox && r->lox < this->hix && r->hiy > this->loy && r->loy < this->hiy);
}

bool Region::encompasses(Region* r) {
	return (this->bands == nullptr && this->lox <= $nc(r)->lox && this->loy <= r->loy && this->hix >= r->hix && this->hiy >= r->hiy);
}

bool Region::encompassesXYWH(int32_t x, int32_t y, int32_t w, int32_t h) {
	int32_t var$0 = x;
	int32_t var$1 = y;
	int32_t var$2 = dimAdd(x, w);
	return encompassesXYXY(var$0, var$1, var$2, dimAdd(y, h));
}

bool Region::encompassesXYXY(int32_t lox, int32_t loy, int32_t hix, int32_t hiy) {
	return (this->bands == nullptr && this->lox <= lox && this->loy <= loy && this->hix >= hix && this->hiy >= hiy);
}

void Region::getBounds($ints* pathbox) {
	$nc(pathbox)->set(0, this->lox);
	pathbox->set(1, this->loy);
	pathbox->set(2, this->hix);
	pathbox->set(3, this->hiy);
}

void Region::clipBoxToBounds($ints* bbox) {
	if ($nc(bbox)->get(0) < this->lox) {
		bbox->set(0, this->lox);
	}
	if ($nc(bbox)->get(1) < this->loy) {
		bbox->set(1, this->loy);
	}
	if ($nc(bbox)->get(2) > this->hix) {
		bbox->set(2, this->hix);
	}
	if ($nc(bbox)->get(3) > this->hiy) {
		bbox->set(3, this->hiy);
	}
}

$RegionIterator* Region::getIterator() {
	return $new($RegionIterator, this);
}

$SpanIterator* Region::getSpanIterator() {
	return $new($RegionSpanIterator, this);
}

$SpanIterator* Region::getSpanIterator($ints* bbox) {
	$var($SpanIterator, result, getSpanIterator());
	$nc(result)->intersectClipBox($nc(bbox)->get(0), bbox->get(1), bbox->get(2), bbox->get(3));
	return result;
}

$SpanIterator* Region::filter($SpanIterator* si$renamed) {
	$var($SpanIterator, si, si$renamed);
	if (this->bands == nullptr) {
		$nc(si)->intersectClipBox(this->lox, this->loy, this->hix, this->hiy);
	} else {
		$assign(si, $new($RegionClipSpanIterator, this, si));
	}
	return si;
}

$String* Region::toString() {
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append("Region[["_s);
	sb->append(this->lox);
	sb->append(", "_s);
	sb->append(this->loy);
	sb->append(" => "_s);
	sb->append(this->hix);
	sb->append(", "_s);
	sb->append(this->hiy);
	sb->append(u']');
	if (this->bands != nullptr) {
		int32_t col = 0;
		while (col < this->endIndex) {
			sb->append("y{"_s);
			sb->append($nc(this->bands)->get(col++));
			sb->append(u',');
			sb->append($nc(this->bands)->get(col++));
			sb->append("}["_s);
			int32_t end = $nc(this->bands)->get(col++);
			end = col + end * 2;
			while (col < end) {
				sb->append("x("_s);
				sb->append($nc(this->bands)->get(col++));
				sb->append(", "_s);
				sb->append($nc(this->bands)->get(col++));
				sb->append(u')');
			}
			sb->append(u']');
		}
	}
	sb->append(u']');
	return sb->toString();
}

int32_t Region::hashCode() {
	return (isEmpty() ? 0 : (this->lox * 3 + this->loy * 5 + this->hix * 7 + this->hiy * 9));
}

bool Region::equals(Object$* o) {
	$useLocalCurrentObjectStackCache();
	if ($equals(this, o)) {
		return true;
	}
	if (!($instanceOf(Region, o))) {
		return false;
	}
	$var(Region, r, $cast(Region, o));
	if (this->isEmpty()) {
		return $nc(r)->isEmpty();
	} else if ($nc(r)->isEmpty()) {
		return false;
	}
	if ($nc(r)->lox != this->lox || $nc(r)->loy != this->loy || $nc(r)->hix != this->hix || $nc(r)->hiy != this->hiy) {
		return false;
	}
	if (this->bands == nullptr) {
		return ($nc(r)->bands == nullptr);
	} else if ($nc(r)->bands == nullptr) {
		return false;
	}
	if (this->endIndex != $nc(r)->endIndex) {
		return false;
	}
	$var($ints, abands, this->bands);
	$var($ints, bbands, $nc(r)->bands);
	for (int32_t i = 0; i < this->endIndex; ++i) {
		if ($nc(abands)->get(i) != $nc(bbands)->get(i)) {
			return false;
		}
	}
	return true;
}

void clinit$Region($Class* class$) {
	$assignStatic(Region::EMPTY_REGION, $new(Region, 0, 0, 0, 0));
	$assignStatic(Region::WHOLE_REGION, $new(Region, $Integer::MIN_VALUE, $Integer::MIN_VALUE, $Integer::MAX_VALUE, $Integer::MAX_VALUE));
	{
		Region::initIDs();
	}
}

Region::Region() {
}

$Class* Region::load$($String* name, bool initialize) {
	$loadClass(Region, name, initialize, &_Region_ClassInfo_, clinit$Region, allocate$Region);
	return class$;
}

$Class* Region::class$ = nullptr;

		} // pipe
	} // java2d
} // sun