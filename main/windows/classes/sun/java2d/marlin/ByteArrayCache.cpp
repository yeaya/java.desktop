#include <sun/java2d/marlin/ByteArrayCache.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/ref/WeakReference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <sun/java2d/marlin/ArrayCacheConst$BucketStats.h>
#include <sun/java2d/marlin/ArrayCacheConst$CacheStats.h>
#include <sun/java2d/marlin/ArrayCacheConst.h>
#include <sun/java2d/marlin/ByteArrayCache$Bucket.h>
#include <sun/java2d/marlin/ByteArrayCache$Reference.h>
#include <sun/java2d/marlin/MarlinConst.h>
#include <sun/java2d/marlin/MarlinUtils.h>
#include <jcpp.h>

#undef ARRAY_SIZES
#undef DO_CHECKS
#undef DO_STATS

using $ArrayCacheConst$BucketStatsArray = $Array<::sun::java2d::marlin::ArrayCacheConst$BucketStats>;
using $ByteArrayCache$BucketArray = $Array<::sun::java2d::marlin::ByteArrayCache$Bucket>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $WeakReference = ::java::lang::ref::WeakReference;
using $Arrays = ::java::util::Arrays;
using $ArrayCacheConst = ::sun::java2d::marlin::ArrayCacheConst;
using $ArrayCacheConst$BucketStats = ::sun::java2d::marlin::ArrayCacheConst$BucketStats;
using $ArrayCacheConst$CacheStats = ::sun::java2d::marlin::ArrayCacheConst$CacheStats;
using $ByteArrayCache$Bucket = ::sun::java2d::marlin::ByteArrayCache$Bucket;
using $ByteArrayCache$Reference = ::sun::java2d::marlin::ByteArrayCache$Reference;
using $MarlinConst = ::sun::java2d::marlin::MarlinConst;
using $MarlinUtils = ::sun::java2d::marlin::MarlinUtils;

namespace sun {
	namespace java2d {
		namespace marlin {

$FieldInfo _ByteArrayCache_FieldInfo_[] = {
	{"clean", "Z", nullptr, $FINAL, $field(ByteArrayCache, clean)},
	{"bucketCapacity", "I", nullptr, $PRIVATE | $FINAL, $field(ByteArrayCache, bucketCapacity)},
	{"refBuckets", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<[Lsun/java2d/marlin/ByteArrayCache$Bucket;>;", $PRIVATE, $field(ByteArrayCache, refBuckets)},
	{"stats", "Lsun/java2d/marlin/ArrayCacheConst$CacheStats;", nullptr, $FINAL, $field(ByteArrayCache, stats)},
	{}
};

$MethodInfo _ByteArrayCache_MethodInfo_[] = {
	{"<init>", "(ZI)V", nullptr, 0, $method(static_cast<void(ByteArrayCache::*)(bool,int32_t)>(&ByteArrayCache::init$))},
	{"check", "([BIIB)V", nullptr, $STATIC, $method(static_cast<void(*)($bytes*,int32_t,int32_t,int8_t)>(&ByteArrayCache::check))},
	{"createArray", "(I)[B", nullptr, $STATIC, $method(static_cast<$bytes*(*)(int32_t)>(&ByteArrayCache::createArray))},
	{"createRef", "(I)Lsun/java2d/marlin/ByteArrayCache$Reference;", nullptr, 0, $method(static_cast<$ByteArrayCache$Reference*(ByteArrayCache::*)(int32_t)>(&ByteArrayCache::createRef))},
	{"fill", "([BIIB)V", nullptr, $STATIC, $method(static_cast<void(*)($bytes*,int32_t,int32_t,int8_t)>(&ByteArrayCache::fill))},
	{"getBuckets", "()[Lsun/java2d/marlin/ByteArrayCache$Bucket;", nullptr, $PRIVATE, $method(static_cast<$ByteArrayCache$BucketArray*(ByteArrayCache::*)()>(&ByteArrayCache::getBuckets))},
	{"getCacheBucket", "(I)Lsun/java2d/marlin/ByteArrayCache$Bucket;", nullptr, 0, $method(static_cast<$ByteArrayCache$Bucket*(ByteArrayCache::*)(int32_t)>(&ByteArrayCache::getCacheBucket))},
	{"getLogPrefix", "(Z)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)(bool)>(&ByteArrayCache::getLogPrefix))},
	{}
};

$InnerClassInfo _ByteArrayCache_InnerClassesInfo_[] = {
	{"sun.java2d.marlin.ByteArrayCache$Bucket", "sun.java2d.marlin.ByteArrayCache", "Bucket", $STATIC | $FINAL},
	{"sun.java2d.marlin.ByteArrayCache$Reference", "sun.java2d.marlin.ByteArrayCache", "Reference", $STATIC | $FINAL},
	{}
};

$ClassInfo _ByteArrayCache_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.java2d.marlin.ByteArrayCache",
	"java.lang.Object",
	"sun.java2d.marlin.MarlinConst",
	_ByteArrayCache_FieldInfo_,
	_ByteArrayCache_MethodInfo_,
	nullptr,
	nullptr,
	_ByteArrayCache_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.marlin.ByteArrayCache$Bucket,sun.java2d.marlin.ByteArrayCache$Reference"
};

$Object* allocate$ByteArrayCache($Class* clazz) {
	return $of($alloc(ByteArrayCache));
}

void ByteArrayCache::init$(bool clean, int32_t bucketCapacity) {
	$set(this, refBuckets, nullptr);
	this->clean = clean;
	this->bucketCapacity = bucketCapacity;
	$init($MarlinConst);
	$set(this, stats, ($MarlinConst::DO_STATS) ? $new($ArrayCacheConst$CacheStats, $$str({$(getLogPrefix(clean)), "ByteArrayCache"_s})) : ($ArrayCacheConst$CacheStats*)nullptr);
}

$ByteArrayCache$Bucket* ByteArrayCache::getCacheBucket(int32_t length) {
	int32_t bucket = $ArrayCacheConst::getBucket(length);
	return $nc($(getBuckets()))->get(bucket);
}

$ByteArrayCache$BucketArray* ByteArrayCache::getBuckets() {
	$var($ByteArrayCache$BucketArray, buckets, (this->refBuckets != nullptr) ? $cast($ByteArrayCache$BucketArray, $nc(this->refBuckets)->get()) : ($ByteArrayCache$BucketArray*)nullptr);
	if (buckets == nullptr) {
		$assign(buckets, $new($ByteArrayCache$BucketArray, 8));
		for (int32_t i = 0; i < 8; ++i) {
			$init($ArrayCacheConst);
			$init($MarlinConst);
			buckets->set(i, $$new($ByteArrayCache$Bucket, this->clean, $nc($ArrayCacheConst::ARRAY_SIZES)->get(i), this->bucketCapacity, ($MarlinConst::DO_STATS) ? $nc($nc(this->stats)->bucketStats)->get(i) : ($ArrayCacheConst$BucketStats*)nullptr));
		}
		$set(this, refBuckets, $new($WeakReference, buckets));
	}
	return buckets;
}

$ByteArrayCache$Reference* ByteArrayCache::createRef(int32_t initialSize) {
	return $new($ByteArrayCache$Reference, this, initialSize);
}

$bytes* ByteArrayCache::createArray(int32_t length) {
	$init(ByteArrayCache);
	return $new($bytes, length);
}

void ByteArrayCache::fill($bytes* array, int32_t fromIndex, int32_t toIndex, int8_t value) {
	$init(ByteArrayCache);
	$Arrays::fill(array, fromIndex, toIndex, value);
	$init($MarlinConst);
	if ($MarlinConst::DO_CHECKS) {
		check(array, fromIndex, toIndex, value);
	}
}

void ByteArrayCache::check($bytes* array, int32_t fromIndex, int32_t toIndex, int8_t value) {
	$init(ByteArrayCache);
	$init($MarlinConst);
	if ($MarlinConst::DO_CHECKS) {
		for (int32_t i = 0; i < $nc(array)->length; ++i) {
			if (array->get(i) != value) {
				$var($String, var$0, $str({"Invalid value at: "_s, $$str(i), " = "_s, $$str(array->get(i)), " from: "_s, $$str(fromIndex), " to: "_s, $$str(toIndex), "\n"_s, $($Arrays::toString(array))}));
				$MarlinUtils::logException(var$0, $$new($Throwable));
				$Arrays::fill(array, value);
				return;
			}
		}
	}
}

$String* ByteArrayCache::getLogPrefix(bool clean) {
	$init(ByteArrayCache);
	return (clean) ? "Clean"_s : "Dirty"_s;
}

ByteArrayCache::ByteArrayCache() {
}

$Class* ByteArrayCache::load$($String* name, bool initialize) {
	$loadClass(ByteArrayCache, name, initialize, &_ByteArrayCache_ClassInfo_, allocate$ByteArrayCache);
	return class$;
}

$Class* ByteArrayCache::class$ = nullptr;

		} // marlin
	} // java2d
} // sun