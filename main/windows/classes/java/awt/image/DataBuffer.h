#ifndef _java_awt_image_DataBuffer_h_
#define _java_awt_image_DataBuffer_h_
//$ class java.awt.image.DataBuffer
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("TYPE_BYTE")
#undef TYPE_BYTE
#pragma push_macro("TYPE_DOUBLE")
#undef TYPE_DOUBLE
#pragma push_macro("TYPE_FLOAT")
#undef TYPE_FLOAT
#pragma push_macro("TYPE_INT")
#undef TYPE_INT
#pragma push_macro("TYPE_SHORT")
#undef TYPE_SHORT
#pragma push_macro("TYPE_UNDEFINED")
#undef TYPE_UNDEFINED
#pragma push_macro("TYPE_USHORT")
#undef TYPE_USHORT

namespace sun {
	namespace java2d {
		class StateTrackable$State;
		class StateTrackableDelegate;
	}
}

namespace java {
	namespace awt {
		namespace image {

class $export DataBuffer : public ::java::lang::Object {
	$class(DataBuffer, 0, ::java::lang::Object)
public:
	DataBuffer();
	void init$(int32_t dataType, int32_t size);
	void init$(::sun::java2d::StateTrackable$State* initialState, int32_t dataType, int32_t size);
	void init$(int32_t dataType, int32_t size, int32_t numBanks);
	void init$(::sun::java2d::StateTrackable$State* initialState, int32_t dataType, int32_t size, int32_t numBanks);
	void init$(int32_t dataType, int32_t size, int32_t numBanks, int32_t offset);
	void init$(::sun::java2d::StateTrackable$State* initialState, int32_t dataType, int32_t size, int32_t numBanks, int32_t offset);
	void init$(int32_t dataType, int32_t size, int32_t numBanks, $ints* offsets);
	void init$(::sun::java2d::StateTrackable$State* initialState, int32_t dataType, int32_t size, int32_t numBanks, $ints* offsets);
	virtual int32_t getDataType();
	static int32_t getDataTypeSize(int32_t type);
	virtual int32_t getElem(int32_t i);
	virtual int32_t getElem(int32_t bank, int32_t i) {return 0;}
	virtual double getElemDouble(int32_t i);
	virtual double getElemDouble(int32_t bank, int32_t i);
	virtual float getElemFloat(int32_t i);
	virtual float getElemFloat(int32_t bank, int32_t i);
	virtual int32_t getNumBanks();
	virtual int32_t getOffset();
	virtual $ints* getOffsets();
	virtual int32_t getSize();
	virtual void setElem(int32_t i, int32_t val);
	virtual void setElem(int32_t bank, int32_t i, int32_t val) {}
	virtual void setElemDouble(int32_t i, double val);
	virtual void setElemDouble(int32_t bank, int32_t i, double val);
	virtual void setElemFloat(int32_t i, float val);
	virtual void setElemFloat(int32_t bank, int32_t i, float val);
	static $ints* toIntArray(Object$* obj);
	static const int32_t TYPE_BYTE = 0;
	static const int32_t TYPE_USHORT = 1;
	static const int32_t TYPE_SHORT = 2;
	static const int32_t TYPE_INT = 3;
	static const int32_t TYPE_FLOAT = 4;
	static const int32_t TYPE_DOUBLE = 5;
	static const int32_t TYPE_UNDEFINED = 32;
	int32_t dataType = 0;
	int32_t banks = 0;
	int32_t offset = 0;
	int32_t size = 0;
	$ints* offsets = nullptr;
	::sun::java2d::StateTrackableDelegate* theTrackable = nullptr;
	static $ints* dataTypeSize;
};

		} // image
	} // awt
} // java

#pragma pop_macro("TYPE_BYTE")
#pragma pop_macro("TYPE_DOUBLE")
#pragma pop_macro("TYPE_FLOAT")
#pragma pop_macro("TYPE_INT")
#pragma pop_macro("TYPE_SHORT")
#pragma pop_macro("TYPE_UNDEFINED")
#pragma pop_macro("TYPE_USHORT")

#endif // _java_awt_image_DataBuffer_h_