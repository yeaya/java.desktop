#include <sun/java2d/marlin/IntArrayCache$Reference.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/marlin/ArrayCacheConst$CacheStats.h>
#include <sun/java2d/marlin/ArrayCacheConst.h>
#include <sun/java2d/marlin/IntArrayCache$Bucket.h>
#include <sun/java2d/marlin/IntArrayCache.h>
#include <sun/java2d/marlin/MarlinConst.h>
#include <sun/java2d/marlin/MarlinUtils.h>
#include <jcpp.h>

#undef DO_CHECKS
#undef DO_LOG_OVERSIZE
#undef DO_LOG_WIDEN_ARRAY
#undef DO_STATS
#undef MAX_ARRAY_SIZE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayCacheConst = ::sun::java2d::marlin::ArrayCacheConst;
using $ArrayCacheConst$CacheStats = ::sun::java2d::marlin::ArrayCacheConst$CacheStats;
using $IntArrayCache = ::sun::java2d::marlin::IntArrayCache;
using $IntArrayCache$Bucket = ::sun::java2d::marlin::IntArrayCache$Bucket;
using $MarlinConst = ::sun::java2d::marlin::MarlinConst;
using $MarlinUtils = ::sun::java2d::marlin::MarlinUtils;

namespace sun {
	namespace java2d {
		namespace marlin {

$FieldInfo _IntArrayCache$Reference_FieldInfo_[] = {
	{"initial", "[I", nullptr, $FINAL, $field(IntArrayCache$Reference, initial)},
	{"clean", "Z", nullptr, $PRIVATE | $FINAL, $field(IntArrayCache$Reference, clean)},
	{"cache", "Lsun/java2d/marlin/IntArrayCache;", nullptr, $PRIVATE | $FINAL, $field(IntArrayCache$Reference, cache)},
	{}
};

$MethodInfo _IntArrayCache$Reference_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/marlin/IntArrayCache;I)V", nullptr, 0, $method(static_cast<void(IntArrayCache$Reference::*)($IntArrayCache*,int32_t)>(&IntArrayCache$Reference::init$))},
	{"getArray", "(I)[I", nullptr, 0, $method(static_cast<$ints*(IntArrayCache$Reference::*)(int32_t)>(&IntArrayCache$Reference::getArray))},
	{"putArray", "([I)[I", nullptr, 0, $method(static_cast<$ints*(IntArrayCache$Reference::*)($ints*)>(&IntArrayCache$Reference::putArray))},
	{"putArray", "([III)[I", nullptr, 0, $method(static_cast<$ints*(IntArrayCache$Reference::*)($ints*,int32_t,int32_t)>(&IntArrayCache$Reference::putArray))},
	{"widenArray", "([III)[I", nullptr, 0, $method(static_cast<$ints*(IntArrayCache$Reference::*)($ints*,int32_t,int32_t)>(&IntArrayCache$Reference::widenArray))},
	{}
};

$InnerClassInfo _IntArrayCache$Reference_InnerClassesInfo_[] = {
	{"sun.java2d.marlin.IntArrayCache$Reference", "sun.java2d.marlin.IntArrayCache", "Reference", $STATIC | $FINAL},
	{}
};

$ClassInfo _IntArrayCache$Reference_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.java2d.marlin.IntArrayCache$Reference",
	"java.lang.Object",
	nullptr,
	_IntArrayCache$Reference_FieldInfo_,
	_IntArrayCache$Reference_MethodInfo_,
	nullptr,
	nullptr,
	_IntArrayCache$Reference_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.marlin.IntArrayCache"
};

$Object* allocate$IntArrayCache$Reference($Class* clazz) {
	return $of($alloc(IntArrayCache$Reference));
}

void IntArrayCache$Reference::init$($IntArrayCache* cache, int32_t initialSize) {
	$set(this, cache, cache);
	this->clean = $nc(cache)->clean;
	$set(this, initial, $IntArrayCache::createArray(initialSize));
	$init($MarlinConst);
	if ($MarlinConst::DO_STATS) {
		$nc(cache->stats)->totalInitial += initialSize;
	}
}

$ints* IntArrayCache$Reference::getArray(int32_t length) {
	$init($ArrayCacheConst);
	if (length <= $ArrayCacheConst::MAX_ARRAY_SIZE) {
		return $nc($($nc(this->cache)->getCacheBucket(length)))->getArray();
	}
	$init($MarlinConst);
	if ($MarlinConst::DO_STATS) {
		++$nc($nc(this->cache)->stats)->oversize;
	}
	if ($MarlinConst::DO_LOG_OVERSIZE) {
		$MarlinUtils::logInfo($$str({$($IntArrayCache::getLogPrefix(this->clean)), "IntArrayCache: getArray[oversize]: length=\t"_s, $$str(length)}));
	}
	return $IntArrayCache::createArray(length);
}

$ints* IntArrayCache$Reference::widenArray($ints* array, int32_t usedSize, int32_t needSize) {
	int32_t length = $nc(array)->length;
	$init($MarlinConst);
	if ($MarlinConst::DO_CHECKS && length >= needSize) {
		return array;
	}
	if ($MarlinConst::DO_STATS) {
		++$nc($nc(this->cache)->stats)->resize;
	}
	$var($ints, res, getArray($ArrayCacheConst::getNewSize(usedSize, needSize)));
	$System::arraycopy(array, 0, res, 0, usedSize);
	putArray(array, 0, usedSize);
	if ($MarlinConst::DO_LOG_WIDEN_ARRAY) {
		$MarlinUtils::logInfo($$str({$($IntArrayCache::getLogPrefix(this->clean)), "IntArrayCache: widenArray["_s, $$str($nc(res)->length), "]: usedSize=\t"_s, $$str(usedSize), "\tlength=\t"_s, $$str(length), "\tneeded length=\t"_s, $$str(needSize)}));
	}
	return res;
}

$ints* IntArrayCache$Reference::putArray($ints* array) {
	return putArray(array, 0, $nc(array)->length);
}

$ints* IntArrayCache$Reference::putArray($ints* array, int32_t fromIndex, int32_t toIndex) {
	$init($ArrayCacheConst);
	if ($nc(array)->length <= $ArrayCacheConst::MAX_ARRAY_SIZE) {
		if ((this->clean || false) && (toIndex != 0)) {
			$IntArrayCache::fill(array, fromIndex, toIndex, 0);
		}
		if (array != this->initial) {
			$nc($($nc(this->cache)->getCacheBucket(array->length)))->putArray(array);
		}
	}
	return this->initial;
}

IntArrayCache$Reference::IntArrayCache$Reference() {
}

$Class* IntArrayCache$Reference::load$($String* name, bool initialize) {
	$loadClass(IntArrayCache$Reference, name, initialize, &_IntArrayCache$Reference_ClassInfo_, allocate$IntArrayCache$Reference);
	return class$;
}

$Class* IntArrayCache$Reference::class$ = nullptr;

		} // marlin
	} // java2d
} // sun