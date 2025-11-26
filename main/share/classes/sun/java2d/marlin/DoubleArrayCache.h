#ifndef _sun_java2d_marlin_DoubleArrayCache_h_
#define _sun_java2d_marlin_DoubleArrayCache_h_
//$ class sun.java2d.marlin.DoubleArrayCache
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
			class DoubleArrayCache$Bucket;
			class DoubleArrayCache$Reference;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace marlin {

class DoubleArrayCache : public ::sun::java2d::marlin::MarlinConst {
	$class(DoubleArrayCache, $NO_CLASS_INIT, ::sun::java2d::marlin::MarlinConst)
public:
	DoubleArrayCache();
	void init$(bool clean, int32_t bucketCapacity);
	static void check($doubles* array, int32_t fromIndex, int32_t toIndex, double value);
	static $doubles* createArray(int32_t length);
	::sun::java2d::marlin::DoubleArrayCache$Reference* createRef(int32_t initialSize);
	static void fill($doubles* array, int32_t fromIndex, int32_t toIndex, double value);
	$Array<::sun::java2d::marlin::DoubleArrayCache$Bucket>* getBuckets();
	::sun::java2d::marlin::DoubleArrayCache$Bucket* getCacheBucket(int32_t length);
	static $String* getLogPrefix(bool clean);
	bool clean = false;
	int32_t bucketCapacity = 0;
	::java::lang::ref::WeakReference* refBuckets = nullptr;
	::sun::java2d::marlin::ArrayCacheConst$CacheStats* stats = nullptr;
};

		} // marlin
	} // java2d
} // sun

#endif // _sun_java2d_marlin_DoubleArrayCache_h_