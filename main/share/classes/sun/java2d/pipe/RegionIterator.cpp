#include <sun/java2d/pipe/RegionIterator.h>

#include <java/lang/InternalError.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace java2d {
		namespace pipe {

$FieldInfo _RegionIterator_FieldInfo_[] = {
	{"region", "Lsun/java2d/pipe/Region;", nullptr, 0, $field(RegionIterator, region)},
	{"curIndex", "I", nullptr, 0, $field(RegionIterator, curIndex)},
	{"numXbands", "I", nullptr, 0, $field(RegionIterator, numXbands)},
	{}
};

$MethodInfo _RegionIterator_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/pipe/Region;)V", nullptr, 0, $method(static_cast<void(RegionIterator::*)($Region*)>(&RegionIterator::init$))},
	{"copyStateFrom", "(Lsun/java2d/pipe/RegionIterator;)V", nullptr, $PUBLIC},
	{"createCopy", "()Lsun/java2d/pipe/RegionIterator;", nullptr, $PUBLIC},
	{"nextXBand", "([I)Z", nullptr, $PUBLIC},
	{"nextYRange", "([I)Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _RegionIterator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.pipe.RegionIterator",
	"java.lang.Object",
	nullptr,
	_RegionIterator_FieldInfo_,
	_RegionIterator_MethodInfo_
};

$Object* allocate$RegionIterator($Class* clazz) {
	return $of($alloc(RegionIterator));
}

void RegionIterator::init$($Region* r) {
	$set(this, region, r);
}

RegionIterator* RegionIterator::createCopy() {
	$var(RegionIterator, r, $new(RegionIterator, this->region));
	r->curIndex = this->curIndex;
	r->numXbands = this->numXbands;
	return r;
}

void RegionIterator::copyStateFrom(RegionIterator* ri) {
	if (this->region != $nc(ri)->region) {
		$throwNew($InternalError, "region mismatch"_s);
	}
	this->curIndex = $nc(ri)->curIndex;
	this->numXbands = ri->numXbands;
}

bool RegionIterator::nextYRange($ints* range) {
	this->curIndex += this->numXbands * 2;
	this->numXbands = 0;
	if (this->curIndex >= $nc(this->region)->endIndex) {
		return false;
	}
	$nc(range)->set(1, $nc($nc(this->region)->bands)->get(this->curIndex++));
	range->set(3, $nc($nc(this->region)->bands)->get(this->curIndex++));
	this->numXbands = $nc($nc(this->region)->bands)->get(this->curIndex++);
	return true;
}

bool RegionIterator::nextXBand($ints* range) {
	if (this->numXbands <= 0) {
		return false;
	}
	--this->numXbands;
	$nc(range)->set(0, $nc($nc(this->region)->bands)->get(this->curIndex++));
	range->set(2, $nc($nc(this->region)->bands)->get(this->curIndex++));
	return true;
}

RegionIterator::RegionIterator() {
}

$Class* RegionIterator::load$($String* name, bool initialize) {
	$loadClass(RegionIterator, name, initialize, &_RegionIterator_ClassInfo_, allocate$RegionIterator);
	return class$;
}

$Class* RegionIterator::class$ = nullptr;

		} // pipe
	} // java2d
} // sun