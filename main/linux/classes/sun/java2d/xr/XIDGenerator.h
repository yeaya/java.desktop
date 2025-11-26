#ifndef _sun_java2d_xr_XIDGenerator_h_
#define _sun_java2d_xr_XIDGenerator_h_
//$ class sun.java2d.xr.XIDGenerator
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("XID_BUFFER_SIZE")
#undef XID_BUFFER_SIZE

namespace sun {
	namespace java2d {
		namespace xr {

class XIDGenerator : public ::java::lang::Object {
	$class(XIDGenerator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XIDGenerator();
	void init$();
	static void bufferXIDs($ints* buffer, int32_t arraySize);
	virtual int32_t getNextXID();
	static const int32_t XID_BUFFER_SIZE = 512;
	$ints* xidBuffer = nullptr;
	int32_t currentIndex = 0;
};

		} // xr
	} // java2d
} // sun

#pragma pop_macro("XID_BUFFER_SIZE")

#endif // _sun_java2d_xr_XIDGenerator_h_