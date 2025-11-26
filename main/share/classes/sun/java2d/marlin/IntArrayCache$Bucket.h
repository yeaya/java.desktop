#ifndef _sun_java2d_marlin_IntArrayCache$Bucket_h_
#define _sun_java2d_marlin_IntArrayCache$Bucket_h_
//$ class sun.java2d.marlin.IntArrayCache$Bucket
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

class IntArrayCache$Bucket : public ::java::lang::Object {
	$class(IntArrayCache$Bucket, $NO_CLASS_INIT, ::java::lang::Object)
public:
	IntArrayCache$Bucket();
	void init$(bool clean, int32_t arraySize, int32_t capacity, ::sun::java2d::marlin::ArrayCacheConst$BucketStats* stats);
	$ints* getArray();
	void putArray($ints* array);
	int32_t tail = 0;
	int32_t arraySize = 0;
	bool clean = false;
	$Array<int32_t, 2>* arrays = nullptr;
	::sun::java2d::marlin::ArrayCacheConst$BucketStats* stats = nullptr;
};

		} // marlin
	} // java2d
} // sun

#endif // _sun_java2d_marlin_IntArrayCache$Bucket_h_