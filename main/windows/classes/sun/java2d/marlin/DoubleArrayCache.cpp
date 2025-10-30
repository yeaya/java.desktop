#include <sun/java2d/marlin/DoubleArrayCache.h>

#include <java/lang/ref/WeakReference.h>
#include <java/util/Arrays.h>
#include <sun/java2d/marlin/ArrayCacheConst$BucketStats.h>
#include <sun/java2d/marlin/ArrayCacheConst$CacheStats.h>
#include <sun/java2d/marlin/ArrayCacheConst.h>
#include <sun/java2d/marlin/DoubleArrayCache$Bucket.h>
#include <sun/java2d/marlin/DoubleArrayCache$Reference.h>
#include <sun/java2d/marlin/MarlinConst.h>
#include <sun/java2d/marlin/MarlinUtils.h>
#include <jcpp.h>

#undef ARRAY_SIZES
#undef DO_CHECKS
#undef DO_STATS

using $ArrayCacheConst$BucketStatsArray = $Array<::sun::java2d::marlin::ArrayCacheConst$BucketStats>;
using $DoubleArrayCache$BucketArray = $Array<::sun::java2d::marlin::DoubleArrayCache$Bucket>;
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
using $DoubleArrayCache$Bucket = ::sun::java2d::marlin::DoubleArrayCache$Bucket;
using $DoubleArrayCache$Reference = ::sun::java2d::marlin::DoubleArrayCache$Reference;
using $MarlinConst = ::sun::java2d::marlin::MarlinConst;
using $MarlinUtils = ::sun::java2d::marlin::MarlinUtils;

namespace sun {
	namespace java2d {
		namespace marlin {

$FieldInfo _DoubleArrayCache_FieldInfo_[] = {
	{"clean", "Z", nullptr, $FINAL, $field(DoubleArrayCache, clean)},
	{"bucketCapacity", "I", nullptr, $PRIVATE | $FINAL, $field(DoubleArrayCache, bucketCapacity)},
	{"refBuckets", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<[Lsun/java2d/marlin/DoubleArrayCache$Bucket;>;", $PRIVATE, $field(DoubleArrayCache, refBuckets)},
	{"stats", "Lsun/java2d/marlin/ArrayCacheConst$CacheStats;", nullptr, $FINAL, $field(DoubleArrayCache, stats)},
	{}
};

$MethodInfo _DoubleArrayCache_MethodInfo_[] = {
	{"<init>", "(ZI)V", nullptr, 0, $method(static_cast<void(DoubleArrayCache::*)(bool,int32_t)>(&DoubleArrayCache::init$))},
	{"check", "([DIID)V", nullptr, $STATIC, $method(static_cast<void(*)($doubles*,int32_t,int32_t,double)>(&DoubleArrayCache::check))},
	{"createArray", "(I)[D", nullptr, $STATIC, $method(static_cast<$doubles*(*)(int32_t)>(&DoubleArrayCache::createArray))},
	{"createRef", "(I)Lsun/java2d/marlin/DoubleArrayCache$Reference;", nullptr, 0, $method(static_cast<$DoubleArrayCache$Reference*(DoubleArrayCache::*)(int32_t)>(&DoubleArrayCache::createRef))},
	{"fill", "([DIID)V", nullptr, $STATIC, $method(static_cast<void(*)($doubles*,int32_t,int32_t,double)>(&DoubleArrayCache::fill))},
	{"getBuckets", "()[Lsun/java2d/marlin/DoubleArrayCache$Bucket;", nullptr, $PRIVATE, $method(static_cast<$DoubleArrayCache$BucketArray*(DoubleArrayCache::*)()>(&DoubleArrayCache::getBuckets))},
	{"getCacheBucket", "(I)Lsun/java2d/marlin/DoubleArrayCache$Bucket;", nullptr, 0, $method(static_cast<$DoubleArrayCache$Bucket*(DoubleArrayCache::*)(int32_t)>(&DoubleArrayCache::getCacheBucket))},
	{"getLogPrefix", "(Z)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)(bool)>(&DoubleArrayCache::getLogPrefix))},
	{}
};

$InnerClassInfo _DoubleArrayCache_InnerClassesInfo_[] = {
	{"sun.java2d.marlin.DoubleArrayCache$Bucket", "sun.java2d.marlin.DoubleArrayCache", "Bucket", $STATIC | $FINAL},
	{"sun.java2d.marlin.DoubleArrayCache$Reference", "sun.java2d.marlin.DoubleArrayCache", "Reference", $STATIC | $FINAL},
	{}
};

$ClassInfo _DoubleArrayCache_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.java2d.marlin.DoubleArrayCache",
	"java.lang.Object",
	"sun.java2d.marlin.MarlinConst",
	_DoubleArrayCache_FieldInfo_,
	_DoubleArrayCache_MethodInfo_,
	nullptr,
	nullptr,
	_DoubleArrayCache_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.marlin.DoubleArrayCache$Bucket,sun.java2d.marlin.DoubleArrayCache$Reference"
};

$Object* allocate$DoubleArrayCache($Class* clazz) {
	return $of($alloc(DoubleArrayCache));
}

void DoubleArrayCache::init$(bool clean, int32_t bucketCapacity) {
	$useLocalCurrentObjectStackCache();
	$set(this, refBuckets, nullptr);
	this->clean = clean;
	this->bucketCapacity = bucketCapacity;
	$init($MarlinConst);
	$set(this, stats, ($MarlinConst::DO_STATS) ? $new($ArrayCacheConst$CacheStats, $$str({$(getLogPrefix(clean)), "DoubleArrayCache"_s})) : ($ArrayCacheConst$CacheStats*)nullptr);
}

$DoubleArrayCache$Bucket* DoubleArrayCache::getCacheBucket(int32_t length) {
	int32_t bucket = $ArrayCacheConst::getBucket(length);
	return $nc($(getBuckets()))->get(bucket);
}

$DoubleArrayCache$BucketArray* DoubleArrayCache::getBuckets() {
	$useLocalCurrentObjectStackCache();
	$var($DoubleArrayCache$BucketArray, buckets, (this->refBuckets != nullptr) ? $cast($DoubleArrayCache$BucketArray, $nc(this->refBuckets)->get()) : ($DoubleArrayCache$BucketArray*)nullptr);
	if (buckets == nullptr) {
		$assign(buckets, $new($DoubleArrayCache$BucketArray, 8));
		for (int32_t i = 0; i < 8; ++i) {
			$init($ArrayCacheConst);
			$init($MarlinConst);
			buckets->set(i, $$new($DoubleArrayCache$Bucket, this->clean, $nc($ArrayCacheConst::ARRAY_SIZES)->get(i), this->bucketCapacity, ($MarlinConst::DO_STATS) ? $nc($nc(this->stats)->bucketStats)->get(i) : ($ArrayCacheConst$BucketStats*)nullptr));
		}
		$set(this, refBuckets, $new($WeakReference, buckets));
	}
	return buckets;
}

$DoubleArrayCache$Reference* DoubleArrayCache::createRef(int32_t initialSize) {
	return $new($DoubleArrayCache$Reference, this, initialSize);
}

$doubles* DoubleArrayCache::createArray(int32_t length) {
	$init(DoubleArrayCache);
	return $new($doubles, length);
}

void DoubleArrayCache::fill($doubles* array, int32_t fromIndex, int32_t toIndex, double value) {
	$init(DoubleArrayCache);
	$Arrays::fill(array, fromIndex, toIndex, value);
	$init($MarlinConst);
	if ($MarlinConst::DO_CHECKS) {
		check(array, fromIndex, toIndex, value);
	}
}

void DoubleArrayCache::check($doubles* array, int32_t fromIndex, int32_t toIndex, double value) {
	$init(DoubleArrayCache);
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

$String* DoubleArrayCache::getLogPrefix(bool clean) {
	$init(DoubleArrayCache);
	return (clean) ? "Clean"_s : "Dirty"_s;
}

DoubleArrayCache::DoubleArrayCache() {
}

$Class* DoubleArrayCache::load$($String* name, bool initialize) {
	$loadClass(DoubleArrayCache, name, initialize, &_DoubleArrayCache_ClassInfo_, allocate$DoubleArrayCache);
	return class$;
}

$Class* DoubleArrayCache::class$ = nullptr;

		} // marlin
	} // java2d
} // sun