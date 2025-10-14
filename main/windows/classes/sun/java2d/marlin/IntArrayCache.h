#ifndef _sun_java2d_marlin_IntArrayCache_h_
#define _sun_java2d_marlin_IntArrayCache_h_
//$ class sun.java2d.marlin.IntArrayCache
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
			class IntArrayCache$Bucket;
			class IntArrayCache$Reference;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace marlin {

class IntArrayCache : public ::sun::java2d::marlin::MarlinConst {
	$class(IntArrayCache, $NO_CLASS_INIT, ::sun::java2d::marlin::MarlinConst)
public:
	IntArrayCache();
	void init$(bool clean, int32_t bucketCapacity);
	static void check($ints* array, int32_t fromIndex, int32_t toIndex, int32_t value);
	static $ints* createArray(int32_t length);
	::sun::java2d::marlin::IntArrayCache$Reference* createRef(int32_t initialSize);
	static void fill($ints* array, int32_t fromIndex, int32_t toIndex, int32_t value);
	$Array<::sun::java2d::marlin::IntArrayCache$Bucket>* getBuckets();
	::sun::java2d::marlin::IntArrayCache$Bucket* getCacheBucket(int32_t length);
	static $String* getLogPrefix(bool clean);
	bool clean = false;
	int32_t bucketCapacity = 0;
	::java::lang::ref::WeakReference* refBuckets = nullptr;
	::sun::java2d::marlin::ArrayCacheConst$CacheStats* stats = nullptr;
};

		} // marlin
	} // java2d
} // sun

#endif // _sun_java2d_marlin_IntArrayCache_h_