#ifndef _sun_java2d_marlin_ArrayCacheConst$BucketStats_h_
#define _sun_java2d_marlin_ArrayCacheConst$BucketStats_h_
//$ class sun.java2d.marlin.ArrayCacheConst$BucketStats
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace java2d {
		namespace marlin {

class ArrayCacheConst$BucketStats : public ::java::lang::Object {
	$class(ArrayCacheConst$BucketStats, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ArrayCacheConst$BucketStats();
	void init$();
	void reset();
	void updateMaxSize(int32_t size);
	int32_t getOp = 0;
	int32_t createOp = 0;
	int32_t returnOp = 0;
	int32_t maxSize = 0;
};

		} // marlin
	} // java2d
} // sun

#endif // _sun_java2d_marlin_ArrayCacheConst$BucketStats_h_