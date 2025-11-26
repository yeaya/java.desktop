#ifndef _sun_java2d_marlin_DoubleArrayCache$Bucket_h_
#define _sun_java2d_marlin_DoubleArrayCache$Bucket_h_
//$ class sun.java2d.marlin.DoubleArrayCache$Bucket
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

class DoubleArrayCache$Bucket : public ::java::lang::Object {
	$class(DoubleArrayCache$Bucket, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DoubleArrayCache$Bucket();
	void init$(bool clean, int32_t arraySize, int32_t capacity, ::sun::java2d::marlin::ArrayCacheConst$BucketStats* stats);
	$doubles* getArray();
	void putArray($doubles* array);
	int32_t tail = 0;
	int32_t arraySize = 0;
	bool clean = false;
	$Array<double, 2>* arrays = nullptr;
	::sun::java2d::marlin::ArrayCacheConst$BucketStats* stats = nullptr;
};

		} // marlin
	} // java2d
} // sun

#endif // _sun_java2d_marlin_DoubleArrayCache$Bucket_h_