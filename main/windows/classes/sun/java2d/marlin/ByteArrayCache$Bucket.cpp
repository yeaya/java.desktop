#include <sun/java2d/marlin/ByteArrayCache$Bucket.h>

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
#include <sun/java2d/marlin/ByteArrayCache.h>
#include <sun/java2d/marlin/MarlinConst.h>
#include <sun/java2d/marlin/MarlinUtils.h>
#include <jcpp.h>

#undef DO_CHECKS
#undef DO_STATS

using $byteArray2 = $Array<int8_t, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayCacheConst$BucketStats = ::sun::java2d::marlin::ArrayCacheConst$BucketStats;
using $ByteArrayCache = ::sun::java2d::marlin::ByteArrayCache;
using $MarlinConst = ::sun::java2d::marlin::MarlinConst;
using $MarlinUtils = ::sun::java2d::marlin::MarlinUtils;

namespace sun {
	namespace java2d {
		namespace marlin {

$FieldInfo _ByteArrayCache$Bucket_FieldInfo_[] = {
	{"tail", "I", nullptr, $PRIVATE, $field(ByteArrayCache$Bucket, tail)},
	{"arraySize", "I", nullptr, $PRIVATE | $FINAL, $field(ByteArrayCache$Bucket, arraySize)},
	{"clean", "Z", nullptr, $PRIVATE | $FINAL, $field(ByteArrayCache$Bucket, clean)},
	{"arrays", "[[B", nullptr, $PRIVATE | $FINAL, $field(ByteArrayCache$Bucket, arrays)},
	{"stats", "Lsun/java2d/marlin/ArrayCacheConst$BucketStats;", nullptr, $PRIVATE | $FINAL, $field(ByteArrayCache$Bucket, stats)},
	{}
};

$MethodInfo _ByteArrayCache$Bucket_MethodInfo_[] = {
	{"<init>", "(ZIILsun/java2d/marlin/ArrayCacheConst$BucketStats;)V", nullptr, 0, $method(static_cast<void(ByteArrayCache$Bucket::*)(bool,int32_t,int32_t,$ArrayCacheConst$BucketStats*)>(&ByteArrayCache$Bucket::init$))},
	{"getArray", "()[B", nullptr, 0, $method(static_cast<$bytes*(ByteArrayCache$Bucket::*)()>(&ByteArrayCache$Bucket::getArray))},
	{"putArray", "([B)V", nullptr, 0, $method(static_cast<void(ByteArrayCache$Bucket::*)($bytes*)>(&ByteArrayCache$Bucket::putArray))},
	{}
};

$InnerClassInfo _ByteArrayCache$Bucket_InnerClassesInfo_[] = {
	{"sun.java2d.marlin.ByteArrayCache$Bucket", "sun.java2d.marlin.ByteArrayCache", "Bucket", $STATIC | $FINAL},
	{}
};

$ClassInfo _ByteArrayCache$Bucket_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.java2d.marlin.ByteArrayCache$Bucket",
	"java.lang.Object",
	nullptr,
	_ByteArrayCache$Bucket_FieldInfo_,
	_ByteArrayCache$Bucket_MethodInfo_,
	nullptr,
	nullptr,
	_ByteArrayCache$Bucket_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.marlin.ByteArrayCache"
};

$Object* allocate$ByteArrayCache$Bucket($Class* clazz) {
	return $of($alloc(ByteArrayCache$Bucket));
}

void ByteArrayCache$Bucket::init$(bool clean, int32_t arraySize, int32_t capacity, $ArrayCacheConst$BucketStats* stats) {
	this->tail = 0;
	this->arraySize = arraySize;
	this->clean = clean;
	$set(this, stats, stats);
	$set(this, arrays, $new($byteArray2, capacity));
}

$bytes* ByteArrayCache$Bucket::getArray() {
	$init($MarlinConst);
	if ($MarlinConst::DO_STATS) {
		++$nc(this->stats)->getOp;
	}
	if (this->tail != 0) {
		$var($bytes, array, $nc(this->arrays)->get(--this->tail));
		$nc(this->arrays)->set(this->tail, nullptr);
		return array;
	}
	if ($MarlinConst::DO_STATS) {
		++$nc(this->stats)->createOp;
	}
	return $ByteArrayCache::createArray(this->arraySize);
}

void ByteArrayCache$Bucket::putArray($bytes* array) {
	$init($MarlinConst);
	if ($MarlinConst::DO_CHECKS && ($nc(array)->length != this->arraySize)) {
		$MarlinUtils::logInfo($$str({$($ByteArrayCache::getLogPrefix(this->clean)), "ByteArrayCache: bad length = "_s, $$str(array->length)}));
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
			$MarlinUtils::logInfo($$str({$($ByteArrayCache::getLogPrefix(this->clean)), "ByteArrayCache: array capacity exceeded !"_s}));
		}
	}
}

ByteArrayCache$Bucket::ByteArrayCache$Bucket() {
}

$Class* ByteArrayCache$Bucket::load$($String* name, bool initialize) {
	$loadClass(ByteArrayCache$Bucket, name, initialize, &_ByteArrayCache$Bucket_ClassInfo_, allocate$ByteArrayCache$Bucket);
	return class$;
}

$Class* ByteArrayCache$Bucket::class$ = nullptr;

		} // marlin
	} // java2d
} // sun