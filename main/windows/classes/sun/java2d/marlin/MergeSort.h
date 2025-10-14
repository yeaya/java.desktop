#ifndef _sun_java2d_marlin_MergeSort_h_
#define _sun_java2d_marlin_MergeSort_h_
//$ class sun.java2d.marlin.MergeSort
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("INSERTION_SORT_THRESHOLD")
#undef INSERTION_SORT_THRESHOLD

namespace sun {
	namespace java2d {
		namespace marlin {

class MergeSort : public ::java::lang::Object {
	$class(MergeSort, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MergeSort();
	void init$();
	static void mergeSort($ints* refX, $ints* refY, $ints* srcX, $ints* dstX, $ints* srcY, $ints* dstY, int32_t low, int32_t high);
	static void mergeSortNoCopy($ints* x, $ints* y, $ints* auxX, $ints* auxY, int32_t toIndex, int32_t insertionSortIndex);
	static const int32_t INSERTION_SORT_THRESHOLD = 14;
};

		} // marlin
	} // java2d
} // sun

#pragma pop_macro("INSERTION_SORT_THRESHOLD")

#endif // _sun_java2d_marlin_MergeSort_h_