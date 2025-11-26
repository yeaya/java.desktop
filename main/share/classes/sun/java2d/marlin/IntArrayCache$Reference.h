#ifndef _sun_java2d_marlin_IntArrayCache$Reference_h_
#define _sun_java2d_marlin_IntArrayCache$Reference_h_
//$ class sun.java2d.marlin.IntArrayCache$Reference
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace java2d {
		namespace marlin {
			class IntArrayCache;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace marlin {

class IntArrayCache$Reference : public ::java::lang::Object {
	$class(IntArrayCache$Reference, $NO_CLASS_INIT, ::java::lang::Object)
public:
	IntArrayCache$Reference();
	void init$(::sun::java2d::marlin::IntArrayCache* cache, int32_t initialSize);
	$ints* getArray(int32_t length);
	$ints* putArray($ints* array);
	$ints* putArray($ints* array, int32_t fromIndex, int32_t toIndex);
	$ints* widenArray($ints* array, int32_t usedSize, int32_t needSize);
	$ints* initial = nullptr;
	bool clean = false;
	::sun::java2d::marlin::IntArrayCache* cache = nullptr;
};

		} // marlin
	} // java2d
} // sun

#endif // _sun_java2d_marlin_IntArrayCache$Reference_h_