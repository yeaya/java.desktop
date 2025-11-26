#ifndef _sun_java2d_xr_GrowableIntArray_h_
#define _sun_java2d_xr_GrowableIntArray_h_
//$ class sun.java2d.xr.GrowableIntArray
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace java2d {
		namespace xr {

class GrowableIntArray : public ::java::lang::Object {
	$class(GrowableIntArray, $NO_CLASS_INIT, ::java::lang::Object)
public:
	GrowableIntArray();
	void init$(int32_t cellSize, int32_t initialSize);
	void addInt(int32_t i);
	virtual void clear();
	virtual $ints* getArray();
	int32_t getCellIndex(int32_t cellIndex);
	int32_t getInt(int32_t cellIndex);
	int32_t getNextCellIndex();
	int32_t getNextIndex();
	int32_t getSize();
	virtual $ints* getSizedArray();
	virtual void growArray();
	$ints* array = nullptr;
	int32_t size = 0;
	int32_t cellSize = 0;
};

		} // xr
	} // java2d
} // sun

#endif // _sun_java2d_xr_GrowableIntArray_h_