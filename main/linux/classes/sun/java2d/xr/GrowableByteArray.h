#ifndef _sun_java2d_xr_GrowableByteArray_h_
#define _sun_java2d_xr_GrowableByteArray_h_
//$ class sun.java2d.xr.GrowableByteArray
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace java2d {
		namespace xr {

class GrowableByteArray : public ::java::lang::Object {
	$class(GrowableByteArray, $NO_CLASS_INIT, ::java::lang::Object)
public:
	GrowableByteArray();
	void init$(int32_t cellSize, int32_t initialSize);
	void addByte(int8_t i);
	virtual void clear();
	virtual $bytes* getArray();
	int32_t getByte(int32_t index);
	int32_t getCellIndex(int32_t cellIndex);
	int32_t getNextCellIndex();
	int32_t getNextIndex();
	int32_t getSize();
	virtual $bytes* getSizedArray();
	virtual void growArray();
	$bytes* array = nullptr;
	int32_t size = 0;
	int32_t cellSize = 0;
};

		} // xr
	} // java2d
} // sun

#endif // _sun_java2d_xr_GrowableByteArray_h_