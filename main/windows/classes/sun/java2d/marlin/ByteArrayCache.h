#ifndef _sun_java2d_marlin_ByteArrayCache_h_
#define _sun_java2d_marlin_ByteArrayCache_h_
//$ class sun.java2d.marlin.ByteArrayCache
//$ extends sun.java2d.marlin.MarlinConst

#include <java/lang/Array.h>
#include <sun/java2d/marlin/MarlinConst.h>

namespace java {
	namespace lang {
		namespace ref {
			class WeakReference;
		}
	}
}
namespace sun {
	namespace java2d {
		namespace marlin {
			class ArrayCacheConst$CacheStats;
			class ByteArrayCache$Bucket;
			class ByteArrayCache$Reference;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace marlin {

class ByteArrayCache : public ::sun::java2d::marlin::MarlinConst {
	$class(ByteArrayCache, $NO_CLASS_INIT, ::sun::java2d::marlin::MarlinConst)
public:
	ByteArrayCache();
	void init$(bool clean, int32_t bucketCapacity);
	static void check($bytes* array, int32_t fromIndex, int32_t toIndex, int8_t value);
	static $bytes* createArray(int32_t length);
	::sun::java2d::marlin::ByteArrayCache$Reference* createRef(int32_t initialSize);
	static void fill($bytes* array, int32_t fromIndex, int32_t toIndex, int8_t value);
	$Array<::sun::java2d::marlin::ByteArrayCache$Bucket>* getBuckets();
	::sun::java2d::marlin::ByteArrayCache$Bucket* getCacheBucket(int32_t length);
	static $String* getLogPrefix(bool clean);
	bool clean = false;
	int32_t bucketCapacity = 0;
	::java::lang::ref::WeakReference* refBuckets = nullptr;
	::sun::java2d::marlin::ArrayCacheConst$CacheStats* stats = nullptr;
};

		} // marlin
	} // java2d
} // sun

#endif // _sun_java2d_marlin_ByteArrayCache_h_