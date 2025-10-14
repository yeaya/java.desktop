#ifndef _sun_java2d_marlin_ArrayCacheConst$CacheStats_h_
#define _sun_java2d_marlin_ArrayCacheConst$CacheStats_h_
//$ class sun.java2d.marlin.ArrayCacheConst$CacheStats
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace java2d {
		namespace marlin {
			class ArrayCacheConst$BucketStats;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace marlin {

class ArrayCacheConst$CacheStats : public ::java::lang::Object {
	$class(ArrayCacheConst$CacheStats, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ArrayCacheConst$CacheStats();
	void init$($String* name);
	int64_t dumpStats();
	int32_t getByteFactor();
	int64_t getTotalInitialBytes();
	void reset();
	$String* name = nullptr;
	$Array<::sun::java2d::marlin::ArrayCacheConst$BucketStats>* bucketStats = nullptr;
	int32_t resize = 0;
	int32_t oversize = 0;
	int64_t totalInitial = 0;
};

		} // marlin
	} // java2d
} // sun

#endif // _sun_java2d_marlin_ArrayCacheConst$CacheStats_h_