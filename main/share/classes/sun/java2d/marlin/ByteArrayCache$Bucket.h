#ifndef _sun_java2d_marlin_ByteArrayCache$Bucket_h_
#define _sun_java2d_marlin_ByteArrayCache$Bucket_h_
//$ class sun.java2d.marlin.ByteArrayCache$Bucket
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

class ByteArrayCache$Bucket : public ::java::lang::Object {
	$class(ByteArrayCache$Bucket, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ByteArrayCache$Bucket();
	void init$(bool clean, int32_t arraySize, int32_t capacity, ::sun::java2d::marlin::ArrayCacheConst$BucketStats* stats);
	$bytes* getArray();
	void putArray($bytes* array);
	int32_t tail = 0;
	int32_t arraySize = 0;
	bool clean = false;
	$Array<int8_t, 2>* arrays = nullptr;
	::sun::java2d::marlin::ArrayCacheConst$BucketStats* stats = nullptr;
};

		} // marlin
	} // java2d
} // sun

#endif // _sun_java2d_marlin_ByteArrayCache$Bucket_h_