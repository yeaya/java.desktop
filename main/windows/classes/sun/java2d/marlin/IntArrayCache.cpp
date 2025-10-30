#include <sun/java2d/marlin/IntArrayCache.h>

#include <java/lang/ref/WeakReference.h>
#include <java/util/Arrays.h>
#include <sun/java2d/marlin/ArrayCacheConst$BucketStats.h>
#include <sun/java2d/marlin/ArrayCacheConst$CacheStats.h>
#include <sun/java2d/marlin/ArrayCacheConst.h>
#include <sun/java2d/marlin/IntArrayCache$Bucket.h>
#include <sun/java2d/marlin/IntArrayCache$Reference.h>
#include <sun/java2d/marlin/MarlinConst.h>
#include <sun/java2d/marlin/MarlinUtils.h>
#include <jcpp.h>

#undef ARRAY_SIZES
#undef DO_CHECKS
#undef DO_STATS

using $ArrayCacheConst$BucketStatsArray = $Array<::sun::java2d::marlin::ArrayCacheConst$BucketStats>;
using $IntArrayCache$BucketArray = $Array<::sun::java2d::marlin::IntArrayCache$Bucket>;
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
using $IntArrayCache$Bucket = ::sun::java2d::marlin::IntArrayCache$Bucket;
using $IntArrayCache$Reference = ::sun::java2d::marlin::IntArrayCache$Reference;
using $MarlinConst = ::sun::java2d::marlin::MarlinConst;
using $MarlinUtils = ::sun::java2d::marlin::MarlinUtils;

namespace sun {
	namespace java2d {
		namespace marlin {

$FieldInfo _IntArrayCache_FieldInfo_[] = {
	{"clean", "Z", nullptr, $FINAL, $field(IntArrayCache, clean)},
	{"bucketCapacity", "I", nullptr, $PRIVATE | $FINAL, $field(IntArrayCache, bucketCapacity)},
	{"refBuckets", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<[Lsun/java2d/marlin/IntArrayCache$Bucket;>;", $PRIVATE, $field(IntArrayCache, refBuckets)},
	{"stats", "Lsun/java2d/marlin/ArrayCacheConst$CacheStats;", nullptr, $FINAL, $field(IntArrayCache, stats)},
	{}
};

$MethodInfo _IntArrayCache_MethodInfo_[] = {
	{"<init>", "(ZI)V", nullptr, 0, $method(static_cast<void(IntArrayCache::*)(bool,int32_t)>(&IntArrayCache::init$))},
	{"check", "([IIII)V", nullptr, $STATIC, $method(static_cast<void(*)($ints*,int32_t,int32_t,int32_t)>(&IntArrayCache::check))},
	{"createArray", "(I)[I", nullptr, $STATIC, $method(static_cast<$ints*(*)(int32_t)>(&IntArrayCache::createArray))},
	{"createRef", "(I)Lsun/java2d/marlin/IntArrayCache$Reference;", nullptr, 0, $method(static_cast<$IntArrayCache$Reference*(IntArrayCache::*)(int32_t)>(&IntArrayCache::createRef))},
	{"fill", "([IIII)V", nullptr, $STATIC, $method(static_cast<void(*)($ints*,int32_t,int32_t,int32_t)>(&IntArrayCache::fill))},
	{"getBuckets", "()[Lsun/java2d/marlin/IntArrayCache$Bucket;", nullptr, $PRIVATE, $method(static_cast<$IntArrayCache$BucketArray*(IntArrayCache::*)()>(&IntArrayCache::getBuckets))},
	{"getCacheBucket", "(I)Lsun/java2d/marlin/IntArrayCache$Bucket;", nullptr, 0, $method(static_cast<$IntArrayCache$Bucket*(IntArrayCache::*)(int32_t)>(&IntArrayCache::getCacheBucket))},
	{"getLogPrefix", "(Z)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)(bool)>(&IntArrayCache::getLogPrefix))},
	{}
};

$InnerClassInfo _IntArrayCache_InnerClassesInfo_[] = {
	{"sun.java2d.marlin.IntArrayCache$Bucket", "sun.java2d.marlin.IntArrayCache", "Bucket", $STATIC | $FINAL},
	{"sun.java2d.marlin.IntArrayCache$Reference", "sun.java2d.marlin.IntArrayCache", "Reference", $STATIC | $FINAL},
	{}
};

$ClassInfo _IntArrayCache_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.java2d.marlin.IntArrayCache",
	"java.lang.Object",
	"sun.java2d.marlin.MarlinConst",
	_IntArrayCache_FieldInfo_,
	_IntArrayCache_MethodInfo_,
	nullptr,
	nullptr,
	_IntArrayCache_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.marlin.IntArrayCache$Bucket,sun.java2d.marlin.IntArrayCache$Reference"
};

$Object* allocate$IntArrayCache($Class* clazz) {
	return $of($alloc(IntArrayCache));
}

void IntArrayCache::init$(bool clean, int32_t bucketCapacity) {
	$useLocalCurrentObjectStackCache();
	$set(this, refBuckets, nullptr);
	this->clean = clean;
	this->bucketCapacity = bucketCapacity;
	$init($MarlinConst);
	$set(this, stats, ($MarlinConst::DO_STATS) ? $new($ArrayCacheConst$CacheStats, $$str({$(getLogPrefix(clean)), "IntArrayCache"_s})) : ($ArrayCacheConst$CacheStats*)nullptr);
}

$IntArrayCache$Bucket* IntArrayCache::getCacheBucket(int32_t length) {
	int32_t bucket = $ArrayCacheConst::getBucket(length);
	return $nc($(getBuckets()))->get(bucket);
}

$IntArrayCache$BucketArray* IntArrayCache::getBuckets() {
	$useLocalCurrentObjectStackCache();
	$var($IntArrayCache$BucketArray, buckets, (this->refBuckets != nullptr) ? $cast($IntArrayCache$BucketArray, $nc(this->refBuckets)->get()) : ($IntArrayCache$BucketArray*)nullptr);
	if (buckets == nullptr) {
		$assign(buckets, $new($IntArrayCache$BucketArray, 8));
		for (int32_t i = 0; i < 8; ++i) {
			$init($ArrayCacheConst);
			$init($MarlinConst);
			buckets->set(i, $$new($IntArrayCache$Bucket, this->clean, $nc($ArrayCacheConst::ARRAY_SIZES)->get(i), this->bucketCapacity, ($MarlinConst::DO_STATS) ? $nc($nc(this->stats)->bucketStats)->get(i) : ($ArrayCacheConst$BucketStats*)nullptr));
		}
		$set(this, refBuckets, $new($WeakReference, buckets));
	}
	return buckets;
}

$IntArrayCache$Reference* IntArrayCache::createRef(int32_t initialSize) {
	return $new($IntArrayCache$Reference, this, initialSize);
}

$ints* IntArrayCache::createArray(int32_t length) {
	$init(IntArrayCache);
	return $new($ints, length);
}

void IntArrayCache::fill($ints* array, int32_t fromIndex, int32_t toIndex, int32_t value) {
	$init(IntArrayCache);
	$Arrays::fill(array, fromIndex, toIndex, value);
	$init($MarlinConst);
	if ($MarlinConst::DO_CHECKS) {
		check(array, fromIndex, toIndex, value);
	}
}

void IntArrayCache::check($ints* array, int32_t fromIndex, int32_t toIndex, int32_t value) {
	$init(IntArrayCache);
	$useLocalCurrentObjectStackCache();
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

$String* IntArrayCache::getLogPrefix(bool clean) {
	$init(IntArrayCache);
	return (clean) ? "Clean"_s : "Dirty"_s;
}

IntArrayCache::IntArrayCache() {
}

$Class* IntArrayCache::load$($String* name, bool initialize) {
	$loadClass(IntArrayCache, name, initialize, &_IntArrayCache_ClassInfo_, allocate$IntArrayCache);
	return class$;
}

$Class* IntArrayCache::class$ = nullptr;

		} // marlin
	} // java2d
} // sun