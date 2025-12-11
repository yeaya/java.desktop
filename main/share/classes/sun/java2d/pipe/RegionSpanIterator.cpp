#include <sun/java2d/pipe/RegionSpanIterator.h>

#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/pipe/RegionIterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Region = ::sun::java2d::pipe::Region;
using $RegionIterator = ::sun::java2d::pipe::RegionIterator;

namespace sun {
	namespace java2d {
		namespace pipe {

$FieldInfo _RegionSpanIterator_FieldInfo_[] = {
	{"ri", "Lsun/java2d/pipe/RegionIterator;", nullptr, 0, $field(RegionSpanIterator, ri)},
	{"lox", "I", nullptr, 0, $field(RegionSpanIterator, lox)},
	{"loy", "I", nullptr, 0, $field(RegionSpanIterator, loy)},
	{"hix", "I", nullptr, 0, $field(RegionSpanIterator, hix)},
	{"hiy", "I", nullptr, 0, $field(RegionSpanIterator, hiy)},
	{"curloy", "I", nullptr, 0, $field(RegionSpanIterator, curloy)},
	{"curhiy", "I", nullptr, 0, $field(RegionSpanIterator, curhiy)},
	{"done", "Z", nullptr, 0, $field(RegionSpanIterator, done)},
	{"isrect", "Z", nullptr, 0, $field(RegionSpanIterator, isrect)},
	{}
};

$MethodInfo _RegionSpanIterator_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/pipe/Region;)V", nullptr, $PUBLIC, $method(static_cast<void(RegionSpanIterator::*)($Region*)>(&RegionSpanIterator::init$))},
	{"getNativeIterator", "()J", nullptr, $PUBLIC},
	{"getPathBox", "([I)V", nullptr, $PUBLIC},
	{"intersectClipBox", "(IIII)V", nullptr, $PUBLIC},
	{"nextSpan", "([I)Z", nullptr, $PUBLIC},
	{"skipDownTo", "(I)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _RegionSpanIterator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.pipe.RegionSpanIterator",
	"java.lang.Object",
	"sun.java2d.pipe.SpanIterator",
	_RegionSpanIterator_FieldInfo_,
	_RegionSpanIterator_MethodInfo_
};

$Object* allocate$RegionSpanIterator($Class* clazz) {
	return $of($alloc(RegionSpanIterator));
}

void RegionSpanIterator::init$($Region* r) {
	this->done = false;
	$var($ints, bounds, $new($ints, 4));
	$nc(r)->getBounds(bounds);
	this->lox = bounds->get(0);
	this->loy = bounds->get(1);
	this->hix = bounds->get(2);
	this->hiy = bounds->get(3);
	this->isrect = r->isRectangular();
	$set(this, ri, r->getIterator());
}

void RegionSpanIterator::getPathBox($ints* pathbox) {
	$nc(pathbox)->set(0, this->lox);
	pathbox->set(1, this->loy);
	pathbox->set(2, this->hix);
	pathbox->set(3, this->hiy);
}

void RegionSpanIterator::intersectClipBox(int32_t clox, int32_t cloy, int32_t chix, int32_t chiy) {
	if (clox > this->lox) {
		this->lox = clox;
	}
	if (cloy > this->loy) {
		this->loy = cloy;
	}
	if (chix < this->hix) {
		this->hix = chix;
	}
	if (chiy < this->hiy) {
		this->hiy = chiy;
	}
	this->done = this->lox >= this->hix || this->loy >= this->hiy;
}

bool RegionSpanIterator::nextSpan($ints* spanbox) {
	if (this->done) {
		return false;
	}
	if (this->isrect) {
		getPathBox(spanbox);
		this->done = true;
		return true;
	}
	int32_t curlox = 0;
	int32_t curhix = 0;
	int32_t curloy = this->curloy;
	int32_t curhiy = this->curhiy;
	while (true) {
		if (!$nc(this->ri)->nextXBand(spanbox)) {
			if (!$nc(this->ri)->nextYRange(spanbox)) {
				this->done = true;
				return false;
			}
			curloy = $nc(spanbox)->get(1);
			curhiy = spanbox->get(3);
			if (curloy < this->loy) {
				curloy = this->loy;
			}
			if (curhiy > this->hiy) {
				curhiy = this->hiy;
			}
			if (curloy >= this->hiy) {
				this->done = true;
				return false;
			}
			continue;
		}
		curlox = $nc(spanbox)->get(0);
		curhix = spanbox->get(2);
		if (curlox < this->lox) {
			curlox = this->lox;
		}
		if (curhix > this->hix) {
			curhix = this->hix;
		}
		if (curlox < curhix && curloy < curhiy) {
			break;
		}
	}
	$nc(spanbox)->set(0, curlox);
	spanbox->set(1, this->curloy = curloy);
	spanbox->set(2, curhix);
	spanbox->set(3, this->curhiy = curhiy);
	return true;
}

void RegionSpanIterator::skipDownTo(int32_t y) {
	this->loy = y;
}

int64_t RegionSpanIterator::getNativeIterator() {
	return 0;
}

RegionSpanIterator::RegionSpanIterator() {
}

$Class* RegionSpanIterator::load$($String* name, bool initialize) {
	$loadClass(RegionSpanIterator, name, initialize, &_RegionSpanIterator_ClassInfo_, allocate$RegionSpanIterator);
	return class$;
}

$Class* RegionSpanIterator::class$ = nullptr;

		} // pipe
	} // java2d
} // sun