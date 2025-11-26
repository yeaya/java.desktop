#include <sun/java2d/marlin/ArrayCacheConst$BucketStats.h>

#include <sun/java2d/marlin/ArrayCacheConst.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayCacheConst = ::sun::java2d::marlin::ArrayCacheConst;

namespace sun {
	namespace java2d {
		namespace marlin {

$FieldInfo _ArrayCacheConst$BucketStats_FieldInfo_[] = {
	{"getOp", "I", nullptr, 0, $field(ArrayCacheConst$BucketStats, getOp)},
	{"createOp", "I", nullptr, 0, $field(ArrayCacheConst$BucketStats, createOp)},
	{"returnOp", "I", nullptr, 0, $field(ArrayCacheConst$BucketStats, returnOp)},
	{"maxSize", "I", nullptr, 0, $field(ArrayCacheConst$BucketStats, maxSize)},
	{}
};

$MethodInfo _ArrayCacheConst$BucketStats_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ArrayCacheConst$BucketStats::*)()>(&ArrayCacheConst$BucketStats::init$))},
	{"reset", "()V", nullptr, 0, $method(static_cast<void(ArrayCacheConst$BucketStats::*)()>(&ArrayCacheConst$BucketStats::reset))},
	{"updateMaxSize", "(I)V", nullptr, 0, $method(static_cast<void(ArrayCacheConst$BucketStats::*)(int32_t)>(&ArrayCacheConst$BucketStats::updateMaxSize))},
	{}
};

$InnerClassInfo _ArrayCacheConst$BucketStats_InnerClassesInfo_[] = {
	{"sun.java2d.marlin.ArrayCacheConst$BucketStats", "sun.java2d.marlin.ArrayCacheConst", "BucketStats", $STATIC | $FINAL},
	{}
};

$ClassInfo _ArrayCacheConst$BucketStats_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.java2d.marlin.ArrayCacheConst$BucketStats",
	"java.lang.Object",
	nullptr,
	_ArrayCacheConst$BucketStats_FieldInfo_,
	_ArrayCacheConst$BucketStats_MethodInfo_,
	nullptr,
	nullptr,
	_ArrayCacheConst$BucketStats_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.marlin.ArrayCacheConst"
};

$Object* allocate$ArrayCacheConst$BucketStats($Class* clazz) {
	return $of($alloc(ArrayCacheConst$BucketStats));
}

void ArrayCacheConst$BucketStats::init$() {
	this->getOp = 0;
	this->createOp = 0;
	this->returnOp = 0;
	this->maxSize = 0;
}

void ArrayCacheConst$BucketStats::reset() {
	this->getOp = 0;
	this->createOp = 0;
	this->returnOp = 0;
	this->maxSize = 0;
}

void ArrayCacheConst$BucketStats::updateMaxSize(int32_t size) {
	if (size > this->maxSize) {
		this->maxSize = size;
	}
}

ArrayCacheConst$BucketStats::ArrayCacheConst$BucketStats() {
}

$Class* ArrayCacheConst$BucketStats::load$($String* name, bool initialize) {
	$loadClass(ArrayCacheConst$BucketStats, name, initialize, &_ArrayCacheConst$BucketStats_ClassInfo_, allocate$ArrayCacheConst$BucketStats);
	return class$;
}

$Class* ArrayCacheConst$BucketStats::class$ = nullptr;

		} // marlin
	} // java2d
} // sun