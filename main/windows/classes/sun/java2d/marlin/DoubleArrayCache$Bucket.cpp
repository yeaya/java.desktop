#include <sun/java2d/marlin/DoubleArrayCache$Bucket.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/marlin/ArrayCacheConst$BucketStats.h>
#include <sun/java2d/marlin/DoubleArrayCache.h>
#include <sun/java2d/marlin/MarlinConst.h>
#include <sun/java2d/marlin/MarlinUtils.h>
#include <jcpp.h>

#undef DO_CHECKS
#undef DO_STATS

using $doubleArray2 = $Array<double, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayCacheConst$BucketStats = ::sun::java2d::marlin::ArrayCacheConst$BucketStats;
using $DoubleArrayCache = ::sun::java2d::marlin::DoubleArrayCache;
using $MarlinConst = ::sun::java2d::marlin::MarlinConst;
using $MarlinUtils = ::sun::java2d::marlin::MarlinUtils;

namespace sun {
	namespace java2d {
		namespace marlin {

$FieldInfo _DoubleArrayCache$Bucket_FieldInfo_[] = {
	{"tail", "I", nullptr, $PRIVATE, $field(DoubleArrayCache$Bucket, tail)},
	{"arraySize", "I", nullptr, $PRIVATE | $FINAL, $field(DoubleArrayCache$Bucket, arraySize)},
	{"clean", "Z", nullptr, $PRIVATE | $FINAL, $field(DoubleArrayCache$Bucket, clean)},
	{"arrays", "[[D", nullptr, $PRIVATE | $FINAL, $field(DoubleArrayCache$Bucket, arrays)},
	{"stats", "Lsun/java2d/marlin/ArrayCacheConst$BucketStats;", nullptr, $PRIVATE | $FINAL, $field(DoubleArrayCache$Bucket, stats)},
	{}
};

$MethodInfo _DoubleArrayCache$Bucket_MethodInfo_[] = {
	{"<init>", "(ZIILsun/java2d/marlin/ArrayCacheConst$BucketStats;)V", nullptr, 0, $method(static_cast<void(DoubleArrayCache$Bucket::*)(bool,int32_t,int32_t,$ArrayCacheConst$BucketStats*)>(&DoubleArrayCache$Bucket::init$))},
	{"getArray", "()[D", nullptr, 0, $method(static_cast<$doubles*(DoubleArrayCache$Bucket::*)()>(&DoubleArrayCache$Bucket::getArray))},
	{"putArray", "([D)V", nullptr, 0, $method(static_cast<void(DoubleArrayCache$Bucket::*)($doubles*)>(&DoubleArrayCache$Bucket::putArray))},
	{}
};

$InnerClassInfo _DoubleArrayCache$Bucket_InnerClassesInfo_[] = {
	{"sun.java2d.marlin.DoubleArrayCache$Bucket", "sun.java2d.marlin.DoubleArrayCache", "Bucket", $STATIC | $FINAL},
	{}
};

$ClassInfo _DoubleArrayCache$Bucket_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.java2d.marlin.DoubleArrayCache$Bucket",
	"java.lang.Object",
	nullptr,
	_DoubleArrayCache$Bucket_FieldInfo_,
	_DoubleArrayCache$Bucket_MethodInfo_,
	nullptr,
	nullptr,
	_DoubleArrayCache$Bucket_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.marlin.DoubleArrayCache"
};

$Object* allocate$DoubleArrayCache$Bucket($Class* clazz) {
	return $of($alloc(DoubleArrayCache$Bucket));
}

void DoubleArrayCache$Bucket::init$(bool clean, int32_t arraySize, int32_t capacity, $ArrayCacheConst$BucketStats* stats) {
	this->tail = 0;
	this->arraySize = arraySize;
	this->clean = clean;
	$set(this, stats, stats);
	$set(this, arrays, $new($doubleArray2, capacity));
}

$doubles* DoubleArrayCache$Bucket::getArray() {
	$init($MarlinConst);
	if ($MarlinConst::DO_STATS) {
		++$nc(this->stats)->getOp;
	}
	if (this->tail != 0) {
		$var($doubles, array, $nc(this->arrays)->get(--this->tail));
		$nc(this->arrays)->set(this->tail, nullptr);
		return array;
	}
	if ($MarlinConst::DO_STATS) {
		++$nc(this->stats)->createOp;
	}
	return $DoubleArrayCache::createArray(this->arraySize);
}

void DoubleArrayCache$Bucket::putArray($doubles* array) {
	$useLocalCurrentObjectStackCache();
	$init($MarlinConst);
	if ($MarlinConst::DO_CHECKS && ($nc(array)->length != this->arraySize)) {
		$MarlinUtils::logInfo($$str({$($DoubleArrayCache::getLogPrefix(this->clean)), "DoubleArrayCache: bad length = "_s, $$str(array->length)}));
		return;
	}
	if ($MarlinConst::DO_STATS) {
		++$nc(this->stats)->returnOp;
	}
	if ($nc(this->arrays)->length > this->tail) {
		$nc(this->arrays)->set(this->tail++, array);
		if ($MarlinConst::DO_STATS) {
			$nc(this->stats)->updateMaxSize(this->tail);
		}
	} else {
		if ($MarlinConst::DO_CHECKS) {
			$MarlinUtils::logInfo($$str({$($DoubleArrayCache::getLogPrefix(this->clean)), "DoubleArrayCache: array capacity exceeded !"_s}));
		}
	}
}

DoubleArrayCache$Bucket::DoubleArrayCache$Bucket() {
}

$Class* DoubleArrayCache$Bucket::load$($String* name, bool initialize) {
	$loadClass(DoubleArrayCache$Bucket, name, initialize, &_DoubleArrayCache$Bucket_ClassInfo_, allocate$DoubleArrayCache$Bucket);
	return class$;
}

$Class* DoubleArrayCache$Bucket::class$ = nullptr;

		} // marlin
	} // java2d
} // sun