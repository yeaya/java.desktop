#include <sun/java2d/marlin/ArrayCacheConst$CacheStats.h>

#include <java/lang/Array.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/marlin/ArrayCacheConst$BucketStats.h>
#include <sun/java2d/marlin/ArrayCacheConst.h>
#include <sun/java2d/marlin/MarlinConst.h>
#include <sun/java2d/marlin/MarlinUtils.h>
#include <jcpp.h>

#undef ARRAY_SIZES
#undef DO_STATS

using $ArrayCacheConst$BucketStatsArray = $Array<::sun::java2d::marlin::ArrayCacheConst$BucketStats>;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayCacheConst = ::sun::java2d::marlin::ArrayCacheConst;
using $ArrayCacheConst$BucketStats = ::sun::java2d::marlin::ArrayCacheConst$BucketStats;
using $MarlinConst = ::sun::java2d::marlin::MarlinConst;
using $MarlinUtils = ::sun::java2d::marlin::MarlinUtils;

namespace sun {
	namespace java2d {
		namespace marlin {

$FieldInfo _ArrayCacheConst$CacheStats_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $FINAL, $field(ArrayCacheConst$CacheStats, name)},
	{"bucketStats", "[Lsun/java2d/marlin/ArrayCacheConst$BucketStats;", nullptr, $FINAL, $field(ArrayCacheConst$CacheStats, bucketStats)},
	{"resize", "I", nullptr, 0, $field(ArrayCacheConst$CacheStats, resize)},
	{"oversize", "I", nullptr, 0, $field(ArrayCacheConst$CacheStats, oversize)},
	{"totalInitial", "J", nullptr, 0, $field(ArrayCacheConst$CacheStats, totalInitial)},
	{}
};

$MethodInfo _ArrayCacheConst$CacheStats_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(ArrayCacheConst$CacheStats::*)($String*)>(&ArrayCacheConst$CacheStats::init$))},
	{"dumpStats", "()J", nullptr, 0, $method(static_cast<int64_t(ArrayCacheConst$CacheStats::*)()>(&ArrayCacheConst$CacheStats::dumpStats))},
	{"getByteFactor", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(ArrayCacheConst$CacheStats::*)()>(&ArrayCacheConst$CacheStats::getByteFactor))},
	{"getTotalInitialBytes", "()J", nullptr, 0, $method(static_cast<int64_t(ArrayCacheConst$CacheStats::*)()>(&ArrayCacheConst$CacheStats::getTotalInitialBytes))},
	{"reset", "()V", nullptr, 0, $method(static_cast<void(ArrayCacheConst$CacheStats::*)()>(&ArrayCacheConst$CacheStats::reset))},
	{}
};

$InnerClassInfo _ArrayCacheConst$CacheStats_InnerClassesInfo_[] = {
	{"sun.java2d.marlin.ArrayCacheConst$CacheStats", "sun.java2d.marlin.ArrayCacheConst", "CacheStats", $STATIC | $FINAL},
	{}
};

$ClassInfo _ArrayCacheConst$CacheStats_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.java2d.marlin.ArrayCacheConst$CacheStats",
	"java.lang.Object",
	nullptr,
	_ArrayCacheConst$CacheStats_FieldInfo_,
	_ArrayCacheConst$CacheStats_MethodInfo_,
	nullptr,
	nullptr,
	_ArrayCacheConst$CacheStats_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.marlin.ArrayCacheConst"
};

$Object* allocate$ArrayCacheConst$CacheStats($Class* clazz) {
	return $of($alloc(ArrayCacheConst$CacheStats));
}

void ArrayCacheConst$CacheStats::init$($String* name) {
	this->resize = 0;
	this->oversize = 0;
	this->totalInitial = 0;
	$set(this, name, name);
	$set(this, bucketStats, $new($ArrayCacheConst$BucketStatsArray, 8));
	for (int32_t i = 0; i < 8; ++i) {
		$nc(this->bucketStats)->set(i, $$new($ArrayCacheConst$BucketStats));
	}
}

void ArrayCacheConst$CacheStats::reset() {
	this->resize = 0;
	this->oversize = 0;
	for (int32_t i = 0; i < 8; ++i) {
		$nc($nc(this->bucketStats)->get(i))->reset();
	}
}

int64_t ArrayCacheConst$CacheStats::dumpStats() {
	int64_t totalCacheBytes = 0;
	$init($MarlinConst);
	if ($MarlinConst::DO_STATS) {
		for (int32_t i = 0; i < 8; ++i) {
			$var($ArrayCacheConst$BucketStats, s, $nc(this->bucketStats)->get(i));
			if ($nc(s)->maxSize != 0) {
				$init($ArrayCacheConst);
				totalCacheBytes += getByteFactor() * (s->maxSize * $nc($ArrayCacheConst::ARRAY_SIZES)->get(i));
			}
		}
		if (this->totalInitial != (int64_t)0 || totalCacheBytes != (int64_t)0 || this->resize != 0 || this->oversize != 0) {
			$MarlinUtils::logInfo($$str({this->name, ": resize: "_s, $$str(this->resize), " - oversize: "_s, $$str(this->oversize), " - initial: "_s, $$str(getTotalInitialBytes()), " bytes ("_s, $$str(this->totalInitial), " elements) - cache: "_s, $$str(totalCacheBytes), " bytes"_s}));
		}
		if (totalCacheBytes != (int64_t)0) {
			$MarlinUtils::logInfo($$str({this->name, ": usage stats:"_s}));
			for (int32_t i = 0; i < 8; ++i) {
				$var($ArrayCacheConst$BucketStats, s, $nc(this->bucketStats)->get(i));
				if ($nc(s)->getOp != 0) {
					$init($ArrayCacheConst);
					$MarlinUtils::logInfo($$str({"  Bucket["_s, $$str($nc($ArrayCacheConst::ARRAY_SIZES)->get(i)), "]: get: "_s, $$str(s->getOp), " - put: "_s, $$str(s->returnOp), " - create: "_s, $$str(s->createOp), " :: max size: "_s, $$str(s->maxSize)}));
				}
			}
		}
	}
	return totalCacheBytes;
}

int32_t ArrayCacheConst$CacheStats::getByteFactor() {
	int32_t factor = 1;
	bool var$0 = $nc(this->name)->contains("Int"_s);
	if (var$0 || $nc(this->name)->contains("Float"_s)) {
		factor = 4;
	} else if ($nc(this->name)->contains("Double"_s)) {
		factor = 8;
	}
	return factor;
}

int64_t ArrayCacheConst$CacheStats::getTotalInitialBytes() {
	return getByteFactor() * this->totalInitial;
}

ArrayCacheConst$CacheStats::ArrayCacheConst$CacheStats() {
}

$Class* ArrayCacheConst$CacheStats::load$($String* name, bool initialize) {
	$loadClass(ArrayCacheConst$CacheStats, name, initialize, &_ArrayCacheConst$CacheStats_ClassInfo_, allocate$ArrayCacheConst$CacheStats);
	return class$;
}

$Class* ArrayCacheConst$CacheStats::class$ = nullptr;

		} // marlin
	} // java2d
} // sun