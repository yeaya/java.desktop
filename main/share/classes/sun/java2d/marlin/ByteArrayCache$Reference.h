#ifndef _sun_java2d_marlin_ByteArrayCache$Reference_h_
#define _sun_java2d_marlin_ByteArrayCache$Reference_h_
//$ class sun.java2d.marlin.ByteArrayCache$Reference
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace java2d {
		namespace marlin {
			class ByteArrayCache;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace marlin {

class ByteArrayCache$Reference : public ::java::lang::Object {
	$class(ByteArrayCache$Reference, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ByteArrayCache$Reference();
	void init$(::sun::java2d::marlin::ByteArrayCache* cache, int32_t initialSize);
	$bytes* getArray(int32_t length);
	$bytes* putArray($bytes* array);
	$bytes* putArray($bytes* array, int32_t fromIndex, int32_t toIndex);
	$bytes* widenArray($bytes* array, int32_t usedSize, int32_t needSize);
	$bytes* initial = nullptr;
	bool clean = false;
	::sun::java2d::marlin::ByteArrayCache* cache = nullptr;
};

		} // marlin
	} // java2d
} // sun

#endif // _sun_java2d_marlin_ByteArrayCache$Reference_h_