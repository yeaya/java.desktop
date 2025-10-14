#include <sun/java2d/marlin/IntArrayCache$Bucket.h>

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
#include <sun/java2d/marlin/IntArrayCache.h>
#include <sun/java2d/marlin/MarlinConst.h>
#include <sun/java2d/marlin/MarlinUtils.h>
#include <jcpp.h>

#undef DO_CHECKS
#undef DO_STATS

using $intArray2 = $Array<int32_t, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayCacheConst$BucketStats = ::sun::java2d::marlin::ArrayCacheConst$BucketStats;
using $IntArrayCache = ::sun::java2d::marlin::IntArrayCache;
using $MarlinConst = ::sun::java2d::marlin::MarlinConst;
using $MarlinUtils = ::sun::java2d::marlin::MarlinUtils;

namespace sun {
	namespace java2d {
		namespace marlin {

$FieldInfo _IntArrayCache$Bucket_FieldInfo_[] = {
	{"tail", "I", nullptr, $PRIVATE, $field(IntArrayCache$Bucket, tail)},
	{"arraySize", "I", nullptr, $PRIVATE | $FINAL, $field(IntArrayCache$Bucket, arraySize)},
	{"clean", "Z", nullptr, $PRIVATE | $FINAL, $field(IntArrayCache$Bucket, clean)},
	{"arrays", "[[I", nullptr, $PRIVATE | $FINAL, $field(IntArrayCache$Bucket, arrays)},
	{"stats", "Lsun/java2d/marlin/ArrayCacheConst$BucketStats;", nullptr, $PRIVATE | $FINAL, $field(IntArrayCache$Bucket, stats)},
	{}
};

$MethodInfo _IntArrayCache$Bucket_MethodInfo_[] = {
	{"<init>", "(ZIILsun/java2d/marlin/ArrayCacheConst$BucketStats;)V", nullptr, 0, $method(static_cast<void(IntArrayCache$Bucket::*)(bool,int32_t,int32_t,$ArrayCacheConst$BucketStats*)>(&IntArrayCache$Bucket::init$))},
	{"getArray", "()[I", nullptr, 0, $method(static_cast<$ints*(IntArrayCache$Bucket::*)()>(&IntArrayCache$Bucket::getArray))},
	{"putArray", "([I)V", nullptr, 0, $method(static_cast<void(IntArrayCache$Bucket::*)($ints*)>(&IntArrayCache$Bucket::putArray))},
	{}
};

$InnerClassInfo _IntArrayCache$Bucket_InnerClassesInfo_[] = {
	{"sun.java2d.marlin.IntArrayCache$Bucket", "sun.java2d.marlin.IntArrayCache", "Bucket", $STATIC | $FINAL},
	{}
};

$ClassInfo _IntArrayCache$Bucket_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.java2d.marlin.IntArrayCache$Bucket",
	"java.lang.Object",
	nullptr,
	_IntArrayCache$Bucket_FieldInfo_,
	_IntArrayCache$Bucket_MethodInfo_,
	nullptr,
	nullptr,
	_IntArrayCache$Bucket_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.marlin.IntArrayCache"
};

$Object* allocate$IntArrayCache$Bucket($Class* clazz) {
	return $of($alloc(IntArrayCache$Bucket));
}

void IntArrayCache$Bucket::init$(bool clean, int32_t arraySize, int32_t capacity, $ArrayCacheConst$BucketStats* stats) {
	this->tail = 0;
	this->arraySize = arraySize;
	this->clean = clean;
	$set(this, stats, stats);
	$set(this, arrays, $new($intArray2, capacity));
}

$ints* IntArrayCache$Bucket::getArray() {
	$init($MarlinConst);
	if ($MarlinConst::DO_STATS) {
		++$nc(this->stats)->getOp;
	}
	if (this->tail != 0) {
		$var($ints, array, $nc(this->arrays)->get(--this->tail));
		$nc(this->arrays)->set(this->tail, nullptr);
		return array;
	}
	if ($MarlinConst::DO_STATS) {
		++$nc(this->stats)->createOp;
	}
	return $IntArrayCache::createArray(this->arraySize);
}

void IntArrayCache$Bucket::putArray($ints* array) {
	$init($MarlinConst);
	if ($MarlinConst::DO_CHECKS && ($nc(array)->length != this->arraySize)) {
		$MarlinUtils::logInfo($$str({$($IntArrayCache::getLogPrefix(this->clean)), "IntArrayCache: bad length = "_s, $$str(array->length)}));
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
			$MarlinUtils::logInfo($$str({$($IntArrayCache::getLogPrefix(this->clean)), "IntArrayCache: array capacity exceeded !"_s}));
		}
	}
}

IntArrayCache$Bucket::IntArrayCache$Bucket() {
}

$Class* IntArrayCache$Bucket::load$($String* name, bool initialize) {
	$loadClass(IntArrayCache$Bucket, name, initialize, &_IntArrayCache$Bucket_ClassInfo_, allocate$IntArrayCache$Bucket);
	return class$;
}

$Class* IntArrayCache$Bucket::class$ = nullptr;

		} // marlin
	} // java2d
} // sun