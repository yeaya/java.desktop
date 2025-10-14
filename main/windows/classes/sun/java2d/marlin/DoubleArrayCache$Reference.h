#ifndef _sun_java2d_marlin_DoubleArrayCache$Reference_h_
#define _sun_java2d_marlin_DoubleArrayCache$Reference_h_
//$ class sun.java2d.marlin.DoubleArrayCache$Reference
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace java2d {
		namespace marlin {
			class DoubleArrayCache;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace marlin {

class DoubleArrayCache$Reference : public ::java::lang::Object {
	$class(DoubleArrayCache$Reference, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DoubleArrayCache$Reference();
	void init$(::sun::java2d::marlin::DoubleArrayCache* cache, int32_t initialSize);
	$doubles* getArray(int32_t length);
	$doubles* putArray($doubles* array);
	$doubles* putArray($doubles* array, int32_t fromIndex, int32_t toIndex);
	$doubles* widenArray($doubles* array, int32_t usedSize, int32_t needSize);
	$doubles* initial = nullptr;
	bool clean = false;
	::sun::java2d::marlin::DoubleArrayCache* cache = nullptr;
};

		} // marlin
	} // java2d
} // sun

#endif // _sun_java2d_marlin_DoubleArrayCache$Reference_h_