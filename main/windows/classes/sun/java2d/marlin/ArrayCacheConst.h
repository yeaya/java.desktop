#ifndef _sun_java2d_marlin_ArrayCacheConst_h_
#define _sun_java2d_marlin_ArrayCacheConst_h_
//$ class sun.java2d.marlin.ArrayCacheConst
//$ extends sun.java2d.marlin.MarlinConst

#include <java/lang/Array.h>
#include <sun/java2d/marlin/MarlinConst.h>

#pragma push_macro("ARRAY_SIZES")
#undef ARRAY_SIZES
#pragma push_macro("BUCKETS")
#undef BUCKETS
#pragma push_macro("MAX_ARRAY_SIZE")
#undef MAX_ARRAY_SIZE
#pragma push_macro("MIN_ARRAY_SIZE")
#undef MIN_ARRAY_SIZE
#pragma push_macro("THRESHOLD_ARRAY_SIZE")
#undef THRESHOLD_ARRAY_SIZE
#pragma push_macro("THRESHOLD_HUGE_ARRAY_SIZE")
#undef THRESHOLD_HUGE_ARRAY_SIZE
#pragma push_macro("THRESHOLD_SMALL_ARRAY_SIZE")
#undef THRESHOLD_SMALL_ARRAY_SIZE

namespace sun {
	namespace java2d {
		namespace marlin {

class ArrayCacheConst : public ::sun::java2d::marlin::MarlinConst {
	$class(ArrayCacheConst, 0, ::sun::java2d::marlin::MarlinConst)
public:
	ArrayCacheConst();
	void init$();
	static int32_t getBucket(int32_t length);
	static int64_t getNewLargeSize(int64_t curSize, int64_t needSize);
	static int32_t getNewSize(int32_t curSize, int32_t needSize);
	static bool $assertionsDisabled;
	static const int32_t BUCKETS = 8;
	static const int32_t MIN_ARRAY_SIZE = 4096;
	static int32_t MAX_ARRAY_SIZE;
	static const int32_t THRESHOLD_SMALL_ARRAY_SIZE = 4194304; // 4 * 1024 * 1024
	static int32_t THRESHOLD_ARRAY_SIZE;
	static int64_t THRESHOLD_HUGE_ARRAY_SIZE;
	static $ints* ARRAY_SIZES;
};

		} // marlin
	} // java2d
} // sun

#pragma pop_macro("ARRAY_SIZES")
#pragma pop_macro("BUCKETS")
#pragma pop_macro("MAX_ARRAY_SIZE")
#pragma pop_macro("MIN_ARRAY_SIZE")
#pragma pop_macro("THRESHOLD_ARRAY_SIZE")
#pragma pop_macro("THRESHOLD_HUGE_ARRAY_SIZE")
#pragma pop_macro("THRESHOLD_SMALL_ARRAY_SIZE")

#endif // _sun_java2d_marlin_ArrayCacheConst_h_