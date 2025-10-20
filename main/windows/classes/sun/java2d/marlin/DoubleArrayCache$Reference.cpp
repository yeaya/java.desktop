#include <sun/java2d/marlin/DoubleArrayCache$Reference.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/marlin/ArrayCacheConst$CacheStats.h>
#include <sun/java2d/marlin/ArrayCacheConst.h>
#include <sun/java2d/marlin/DoubleArrayCache$Bucket.h>
#include <sun/java2d/marlin/DoubleArrayCache.h>
#include <sun/java2d/marlin/MarlinConst.h>
#include <sun/java2d/marlin/MarlinUtils.h>
#include <jcpp.h>

#undef DO_CHECKS
#undef DO_LOG_OVERSIZE
#undef DO_LOG_WIDEN_ARRAY
#undef DO_STATS
#undef MAX_ARRAY_SIZE

using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayCacheConst = ::sun::java2d::marlin::ArrayCacheConst;
using $ArrayCacheConst$CacheStats = ::sun::java2d::marlin::ArrayCacheConst$CacheStats;
using $DoubleArrayCache = ::sun::java2d::marlin::DoubleArrayCache;
using $DoubleArrayCache$Bucket = ::sun::java2d::marlin::DoubleArrayCache$Bucket;
using $MarlinConst = ::sun::java2d::marlin::MarlinConst;
using $MarlinUtils = ::sun::java2d::marlin::MarlinUtils;

namespace sun {
	namespace java2d {
		namespace marlin {

$FieldInfo _DoubleArrayCache$Reference_FieldInfo_[] = {
	{"initial", "[D", nullptr, $FINAL, $field(DoubleArrayCache$Reference, initial)},
	{"clean", "Z", nullptr, $PRIVATE | $FINAL, $field(DoubleArrayCache$Reference, clean)},
	{"cache", "Lsun/java2d/marlin/DoubleArrayCache;", nullptr, $PRIVATE | $FINAL, $field(DoubleArrayCache$Reference, cache)},
	{}
};

$MethodInfo _DoubleArrayCache$Reference_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/marlin/DoubleArrayCache;I)V", nullptr, 0, $method(static_cast<void(DoubleArrayCache$Reference::*)($DoubleArrayCache*,int32_t)>(&DoubleArrayCache$Reference::init$))},
	{"getArray", "(I)[D", nullptr, 0, $method(static_cast<$doubles*(DoubleArrayCache$Reference::*)(int32_t)>(&DoubleArrayCache$Reference::getArray))},
	{"putArray", "([D)[D", nullptr, 0, $method(static_cast<$doubles*(DoubleArrayCache$Reference::*)($doubles*)>(&DoubleArrayCache$Reference::putArray))},
	{"putArray", "([DII)[D", nullptr, 0, $method(static_cast<$doubles*(DoubleArrayCache$Reference::*)($doubles*,int32_t,int32_t)>(&DoubleArrayCache$Reference::putArray))},
	{"widenArray", "([DII)[D", nullptr, 0, $method(static_cast<$doubles*(DoubleArrayCache$Reference::*)($doubles*,int32_t,int32_t)>(&DoubleArrayCache$Reference::widenArray))},
	{}
};

$InnerClassInfo _DoubleArrayCache$Reference_InnerClassesInfo_[] = {
	{"sun.java2d.marlin.DoubleArrayCache$Reference", "sun.java2d.marlin.DoubleArrayCache", "Reference", $STATIC | $FINAL},
	{}
};

$ClassInfo _DoubleArrayCache$Reference_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.java2d.marlin.DoubleArrayCache$Reference",
	"java.lang.Object",
	nullptr,
	_DoubleArrayCache$Reference_FieldInfo_,
	_DoubleArrayCache$Reference_MethodInfo_,
	nullptr,
	nullptr,
	_DoubleArrayCache$Reference_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.marlin.DoubleArrayCache"
};

$Object* allocate$DoubleArrayCache$Reference($Class* clazz) {
	return $of($alloc(DoubleArrayCache$Reference));
}

void DoubleArrayCache$Reference::init$($DoubleArrayCache* cache, int32_t initialSize) {
	$set(this, cache, cache);
	this->clean = $nc(cache)->clean;
	$set(this, initial, $DoubleArrayCache::createArray(initialSize));
	$init($MarlinConst);
	if ($MarlinConst::DO_STATS) {
		$nc(cache->stats)->totalInitial += initialSize;
	}
}

$doubles* DoubleArrayCache$Reference::getArray(int32_t length) {
	$useLocalCurrentObjectStackCache();
	$init($ArrayCacheConst);
	if (length <= $ArrayCacheConst::MAX_ARRAY_SIZE) {
		return $nc($($nc(this->cache)->getCacheBucket(length)))->getArray();
	}
	$init($MarlinConst);
	if ($MarlinConst::DO_STATS) {
		++$nc($nc(this->cache)->stats)->oversize;
	}
	if ($MarlinConst::DO_LOG_OVERSIZE) {
		$MarlinUtils::logInfo($$str({$($DoubleArrayCache::getLogPrefix(this->clean)), "DoubleArrayCache: getArray[oversize]: length=\t"_s, $$str(length)}));
	}
	return $DoubleArrayCache::createArray(length);
}

$doubles* DoubleArrayCache$Reference::widenArray($doubles* array, int32_t usedSize, int32_t needSize) {
	$useLocalCurrentObjectStackCache();
	int32_t length = $nc(array)->length;
	$init($MarlinConst);
	if ($MarlinConst::DO_CHECKS && length >= needSize) {
		return array;
	}
	if ($MarlinConst::DO_STATS) {
		++$nc($nc(this->cache)->stats)->resize;
	}
	$var($doubles, res, getArray($ArrayCacheConst::getNewSize(usedSize, needSize)));
	$System::arraycopy(array, 0, res, 0, usedSize);
	putArray(array, 0, usedSize);
	if ($MarlinConst::DO_LOG_WIDEN_ARRAY) {
		$MarlinUtils::logInfo($$str({$($DoubleArrayCache::getLogPrefix(this->clean)), "DoubleArrayCache: widenArray["_s, $$str($nc(res)->length), "]: usedSize=\t"_s, $$str(usedSize), "\tlength=\t"_s, $$str(length), "\tneeded length=\t"_s, $$str(needSize)}));
	}
	return res;
}

$doubles* DoubleArrayCache$Reference::putArray($doubles* array) {
	return putArray(array, 0, $nc(array)->length);
}

$doubles* DoubleArrayCache$Reference::putArray($doubles* array, int32_t fromIndex, int32_t toIndex) {
	$init($ArrayCacheConst);
	if ($nc(array)->length <= $ArrayCacheConst::MAX_ARRAY_SIZE) {
		if ((this->clean || false) && (toIndex != 0)) {
			$DoubleArrayCache::fill(array, fromIndex, toIndex, 0.0);
		}
		if (array != this->initial) {
			$nc($($nc(this->cache)->getCacheBucket(array->length)))->putArray(array);
		}
	}
	return this->initial;
}

DoubleArrayCache$Reference::DoubleArrayCache$Reference() {
}

$Class* DoubleArrayCache$Reference::load$($String* name, bool initialize) {
	$loadClass(DoubleArrayCache$Reference, name, initialize, &_DoubleArrayCache$Reference_ClassInfo_, allocate$DoubleArrayCache$Reference);
	return class$;
}

$Class* DoubleArrayCache$Reference::class$ = nullptr;

		} // marlin
	} // java2d
} // sun