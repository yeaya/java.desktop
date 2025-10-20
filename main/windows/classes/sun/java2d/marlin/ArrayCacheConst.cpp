#include <sun/java2d/marlin/ArrayCacheConst.h>

#include <java/lang/Array.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <sun/java2d/marlin/MarlinConst.h>
#include <sun/java2d/marlin/MarlinUtils.h>
#include <jcpp.h>

#undef ARRAY_SIZES
#undef BUCKETS
#undef DO_MONITORS
#undef DO_STATS
#undef DO_TRACE
#undef MAX_ARRAY_SIZE
#undef MAX_VALUE
#undef MIN_ARRAY_SIZE
#undef THRESHOLD_ARRAY_SIZE
#undef THRESHOLD_HUGE_ARRAY_SIZE
#undef THRESHOLD_SMALL_ARRAY_SIZE

using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $MarlinConst = ::sun::java2d::marlin::MarlinConst;
using $MarlinUtils = ::sun::java2d::marlin::MarlinUtils;

namespace sun {
	namespace java2d {
		namespace marlin {

$FieldInfo _ArrayCacheConst_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ArrayCacheConst, $assertionsDisabled)},
	{"BUCKETS", "I", nullptr, $STATIC | $FINAL, $constField(ArrayCacheConst, BUCKETS)},
	{"MIN_ARRAY_SIZE", "I", nullptr, $STATIC | $FINAL, $constField(ArrayCacheConst, MIN_ARRAY_SIZE)},
	{"MAX_ARRAY_SIZE", "I", nullptr, $STATIC | $FINAL, $staticField(ArrayCacheConst, MAX_ARRAY_SIZE)},
	{"THRESHOLD_SMALL_ARRAY_SIZE", "I", nullptr, $STATIC | $FINAL, $constField(ArrayCacheConst, THRESHOLD_SMALL_ARRAY_SIZE)},
	{"THRESHOLD_ARRAY_SIZE", "I", nullptr, $STATIC | $FINAL, $staticField(ArrayCacheConst, THRESHOLD_ARRAY_SIZE)},
	{"THRESHOLD_HUGE_ARRAY_SIZE", "J", nullptr, $STATIC | $FINAL, $staticField(ArrayCacheConst, THRESHOLD_HUGE_ARRAY_SIZE)},
	{"ARRAY_SIZES", "[I", nullptr, $STATIC | $FINAL, $staticField(ArrayCacheConst, ARRAY_SIZES)},
	{}
};

$MethodInfo _ArrayCacheConst_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ArrayCacheConst::*)()>(&ArrayCacheConst::init$))},
	{"getBucket", "(I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&ArrayCacheConst::getBucket))},
	{"getNewLargeSize", "(JJ)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)(int64_t,int64_t)>(&ArrayCacheConst::getNewLargeSize))},
	{"getNewSize", "(II)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t)>(&ArrayCacheConst::getNewSize))},
	{}
};

$InnerClassInfo _ArrayCacheConst_InnerClassesInfo_[] = {
	{"sun.java2d.marlin.ArrayCacheConst$BucketStats", "sun.java2d.marlin.ArrayCacheConst", "BucketStats", $STATIC | $FINAL},
	{"sun.java2d.marlin.ArrayCacheConst$CacheStats", "sun.java2d.marlin.ArrayCacheConst", "CacheStats", $STATIC | $FINAL},
	{}
};

$ClassInfo _ArrayCacheConst_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.java2d.marlin.ArrayCacheConst",
	"java.lang.Object",
	"sun.java2d.marlin.MarlinConst",
	_ArrayCacheConst_FieldInfo_,
	_ArrayCacheConst_MethodInfo_,
	nullptr,
	nullptr,
	_ArrayCacheConst_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.marlin.ArrayCacheConst$BucketStats,sun.java2d.marlin.ArrayCacheConst$CacheStats"
};

$Object* allocate$ArrayCacheConst($Class* clazz) {
	return $of($alloc(ArrayCacheConst));
}

bool ArrayCacheConst::$assertionsDisabled = false;
int32_t ArrayCacheConst::MAX_ARRAY_SIZE = 0;
int32_t ArrayCacheConst::THRESHOLD_ARRAY_SIZE = 0;
int64_t ArrayCacheConst::THRESHOLD_HUGE_ARRAY_SIZE = 0;
$ints* ArrayCacheConst::ARRAY_SIZES = nullptr;

void ArrayCacheConst::init$() {
}

int32_t ArrayCacheConst::getBucket(int32_t length) {
	$init(ArrayCacheConst);
	for (int32_t i = 0; i < $nc(ArrayCacheConst::ARRAY_SIZES)->length; ++i) {
		if (length <= $nc(ArrayCacheConst::ARRAY_SIZES)->get(i)) {
			return i;
		}
	}
	return -1;
}

int32_t ArrayCacheConst::getNewSize(int32_t curSize, int32_t needSize) {
	$init(ArrayCacheConst);
	if (needSize < 0) {
		$throwNew($ArrayIndexOutOfBoundsException, "array exceeds maximum capacity !"_s);
	}
	if (!ArrayCacheConst::$assertionsDisabled && !(curSize >= 0)) {
		$throwNew($AssertionError);
	}
	int32_t initial = curSize;
	int32_t size = 0;
	if (initial > ArrayCacheConst::THRESHOLD_ARRAY_SIZE) {
		size = initial + (initial >> 1);
	} else {
		size = (initial << 1);
	}
	if (size < needSize) {
		size = ((needSize >> 12) + 1) << 12;
	}
	if (size < 0) {
		size = $Integer::MAX_VALUE;
	}
	return size;
}

int64_t ArrayCacheConst::getNewLargeSize(int64_t curSize, int64_t needSize) {
	$init(ArrayCacheConst);
	if (($sr(needSize, 31)) != (int64_t)0) {
		$throwNew($ArrayIndexOutOfBoundsException, "array exceeds maximum capacity !"_s);
	}
	if (!ArrayCacheConst::$assertionsDisabled && !(curSize >= (int64_t)0)) {
		$throwNew($AssertionError);
	}
	int64_t size = 0;
	if (curSize > ArrayCacheConst::THRESHOLD_HUGE_ARRAY_SIZE) {
		size = curSize + ($sr(curSize, 2));
	} else {
		if (curSize > ArrayCacheConst::THRESHOLD_ARRAY_SIZE) {
			size = curSize + ($sr(curSize, 1));
		} else if (curSize > ArrayCacheConst::THRESHOLD_SMALL_ARRAY_SIZE) {
			size = ($sl(curSize, 1));
		} else {
			size = ($sl(curSize, 2));
		}
	}
	if (size < needSize) {
		size = $sl(($sr(needSize, 12)) + (int64_t)1, 12);
	}
	if (size > $Integer::MAX_VALUE) {
		size = $Integer::MAX_VALUE;
	}
	return size;
}

void clinit$ArrayCacheConst($Class* class$) {
	$useLocalCurrentObjectStackCache();
	ArrayCacheConst::$assertionsDisabled = !ArrayCacheConst::class$->desiredAssertionStatus();
	$assignStatic(ArrayCacheConst::ARRAY_SIZES, $new($ints, ArrayCacheConst::BUCKETS));
	{
		int32_t arraySize = ArrayCacheConst::MIN_ARRAY_SIZE;
		int32_t inc_lg = 2;
		for (int32_t i = 0; i < ArrayCacheConst::BUCKETS; ++i, arraySize <<= inc_lg) {
			$nc(ArrayCacheConst::ARRAY_SIZES)->set(i, arraySize);
			$init($MarlinConst);
			if ($MarlinConst::DO_TRACE) {
				$MarlinUtils::logInfo($$str({"arraySize["_s, $$str(i), "]: "_s, $$str(arraySize)}));
			}
			if (arraySize >= ArrayCacheConst::THRESHOLD_SMALL_ARRAY_SIZE) {
				inc_lg = 1;
			}
		}
		ArrayCacheConst::MAX_ARRAY_SIZE = $sr(arraySize, inc_lg);
		if (ArrayCacheConst::MAX_ARRAY_SIZE <= 0) {
			$throwNew($IllegalStateException, "Invalid max array size !"_s);
		}
		ArrayCacheConst::THRESHOLD_ARRAY_SIZE = 16 * 1024 * 1024;
		ArrayCacheConst::THRESHOLD_HUGE_ARRAY_SIZE = (int64_t)48 * 1024 * 1024;
		$init($MarlinConst);
		if ($MarlinConst::DO_STATS || $MarlinConst::DO_MONITORS) {
			$MarlinUtils::logInfo($$str({"ArrayCache.BUCKETS        = "_s, $$str(ArrayCacheConst::BUCKETS)}));
			$MarlinUtils::logInfo($$str({"ArrayCache.MIN_ARRAY_SIZE = "_s, $$str(ArrayCacheConst::MIN_ARRAY_SIZE)}));
			$MarlinUtils::logInfo($$str({"ArrayCache.MAX_ARRAY_SIZE = "_s, $$str(ArrayCacheConst::MAX_ARRAY_SIZE)}));
			$MarlinUtils::logInfo($$str({"ArrayCache.ARRAY_SIZES = "_s, $($Arrays::toString(ArrayCacheConst::ARRAY_SIZES))}));
			$MarlinUtils::logInfo($$str({"ArrayCache.THRESHOLD_ARRAY_SIZE = "_s, $$str(ArrayCacheConst::THRESHOLD_ARRAY_SIZE)}));
			$MarlinUtils::logInfo($$str({"ArrayCache.THRESHOLD_HUGE_ARRAY_SIZE = "_s, $$str(ArrayCacheConst::THRESHOLD_HUGE_ARRAY_SIZE)}));
		}
	}
}

ArrayCacheConst::ArrayCacheConst() {
}

$Class* ArrayCacheConst::load$($String* name, bool initialize) {
	$loadClass(ArrayCacheConst, name, initialize, &_ArrayCacheConst_ClassInfo_, clinit$ArrayCacheConst, allocate$ArrayCacheConst);
	return class$;
}

$Class* ArrayCacheConst::class$ = nullptr;

		} // marlin
	} // java2d
} // sun