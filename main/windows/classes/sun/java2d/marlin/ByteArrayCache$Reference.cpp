#include <sun/java2d/marlin/ByteArrayCache$Reference.h>

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
#include <sun/java2d/marlin/ByteArrayCache$Bucket.h>
#include <sun/java2d/marlin/ByteArrayCache.h>
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
using $ByteArrayCache = ::sun::java2d::marlin::ByteArrayCache;
using $ByteArrayCache$Bucket = ::sun::java2d::marlin::ByteArrayCache$Bucket;
using $MarlinConst = ::sun::java2d::marlin::MarlinConst;
using $MarlinUtils = ::sun::java2d::marlin::MarlinUtils;

namespace sun {
	namespace java2d {
		namespace marlin {

$FieldInfo _ByteArrayCache$Reference_FieldInfo_[] = {
	{"initial", "[B", nullptr, $FINAL, $field(ByteArrayCache$Reference, initial)},
	{"clean", "Z", nullptr, $PRIVATE | $FINAL, $field(ByteArrayCache$Reference, clean)},
	{"cache", "Lsun/java2d/marlin/ByteArrayCache;", nullptr, $PRIVATE | $FINAL, $field(ByteArrayCache$Reference, cache)},
	{}
};

$MethodInfo _ByteArrayCache$Reference_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/marlin/ByteArrayCache;I)V", nullptr, 0, $method(static_cast<void(ByteArrayCache$Reference::*)($ByteArrayCache*,int32_t)>(&ByteArrayCache$Reference::init$))},
	{"getArray", "(I)[B", nullptr, 0, $method(static_cast<$bytes*(ByteArrayCache$Reference::*)(int32_t)>(&ByteArrayCache$Reference::getArray))},
	{"putArray", "([B)[B", nullptr, 0, $method(static_cast<$bytes*(ByteArrayCache$Reference::*)($bytes*)>(&ByteArrayCache$Reference::putArray))},
	{"putArray", "([BII)[B", nullptr, 0, $method(static_cast<$bytes*(ByteArrayCache$Reference::*)($bytes*,int32_t,int32_t)>(&ByteArrayCache$Reference::putArray))},
	{"widenArray", "([BII)[B", nullptr, 0, $method(static_cast<$bytes*(ByteArrayCache$Reference::*)($bytes*,int32_t,int32_t)>(&ByteArrayCache$Reference::widenArray))},
	{}
};

$InnerClassInfo _ByteArrayCache$Reference_InnerClassesInfo_[] = {
	{"sun.java2d.marlin.ByteArrayCache$Reference", "sun.java2d.marlin.ByteArrayCache", "Reference", $STATIC | $FINAL},
	{}
};

$ClassInfo _ByteArrayCache$Reference_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.java2d.marlin.ByteArrayCache$Reference",
	"java.lang.Object",
	nullptr,
	_ByteArrayCache$Reference_FieldInfo_,
	_ByteArrayCache$Reference_MethodInfo_,
	nullptr,
	nullptr,
	_ByteArrayCache$Reference_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.marlin.ByteArrayCache"
};

$Object* allocate$ByteArrayCache$Reference($Class* clazz) {
	return $of($alloc(ByteArrayCache$Reference));
}

void ByteArrayCache$Reference::init$($ByteArrayCache* cache, int32_t initialSize) {
	$set(this, cache, cache);
	this->clean = $nc(cache)->clean;
	$set(this, initial, $ByteArrayCache::createArray(initialSize));
	$init($MarlinConst);
	if ($MarlinConst::DO_STATS) {
		$nc(cache->stats)->totalInitial += initialSize;
	}
}

$bytes* ByteArrayCache$Reference::getArray(int32_t length) {
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
		$MarlinUtils::logInfo($$str({$($ByteArrayCache::getLogPrefix(this->clean)), "ByteArrayCache: getArray[oversize]: length=\t"_s, $$str(length)}));
	}
	return $ByteArrayCache::createArray(length);
}

$bytes* ByteArrayCache$Reference::widenArray($bytes* array, int32_t usedSize, int32_t needSize) {
	$useLocalCurrentObjectStackCache();
	int32_t length = $nc(array)->length;
	$init($MarlinConst);
	if ($MarlinConst::DO_CHECKS && length >= needSize) {
		return array;
	}
	if ($MarlinConst::DO_STATS) {
		++$nc($nc(this->cache)->stats)->resize;
	}
	$var($bytes, res, getArray($ArrayCacheConst::getNewSize(usedSize, needSize)));
	$System::arraycopy(array, 0, res, 0, usedSize);
	putArray(array, 0, usedSize);
	if ($MarlinConst::DO_LOG_WIDEN_ARRAY) {
		$MarlinUtils::logInfo($$str({$($ByteArrayCache::getLogPrefix(this->clean)), "ByteArrayCache: widenArray["_s, $$str($nc(res)->length), "]: usedSize=\t"_s, $$str(usedSize), "\tlength=\t"_s, $$str(length), "\tneeded length=\t"_s, $$str(needSize)}));
	}
	return res;
}

$bytes* ByteArrayCache$Reference::putArray($bytes* array) {
	return putArray(array, 0, $nc(array)->length);
}

$bytes* ByteArrayCache$Reference::putArray($bytes* array, int32_t fromIndex, int32_t toIndex) {
	$init($ArrayCacheConst);
	if ($nc(array)->length <= $ArrayCacheConst::MAX_ARRAY_SIZE) {
		if ((this->clean || false) && (toIndex != 0)) {
			$ByteArrayCache::fill(array, fromIndex, toIndex, (int8_t)0);
		}
		if (array != this->initial) {
			$nc($($nc(this->cache)->getCacheBucket(array->length)))->putArray(array);
		}
	}
	return this->initial;
}

ByteArrayCache$Reference::ByteArrayCache$Reference() {
}

$Class* ByteArrayCache$Reference::load$($String* name, bool initialize) {
	$loadClass(ByteArrayCache$Reference, name, initialize, &_ByteArrayCache$Reference_ClassInfo_, allocate$ByteArrayCache$Reference);
	return class$;
}

$Class* ByteArrayCache$Reference::class$ = nullptr;

		} // marlin
	} // java2d
} // sun