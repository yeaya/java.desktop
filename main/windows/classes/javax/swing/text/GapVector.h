#ifndef _javax_swing_text_GapVector_h_
#define _javax_swing_text_GapVector_h_
//$ class javax.swing.text.GapVector
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

namespace javax {
	namespace swing {
		namespace text {

class $export GapVector : public ::java::io::Serializable {
	$class(GapVector, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	GapVector();
	void init$();
	void init$(int32_t initialLength);
	virtual $Object* allocateArray(int32_t len) {return nullptr;}
	virtual void close(int32_t position, int32_t nItems);
	$Object* getArray();
	virtual int32_t getArrayLength() {return 0;}
	int32_t getGapEnd();
	int32_t getGapStart();
	virtual int32_t getNewArraySize(int32_t reqSize);
	virtual int32_t open(int32_t position, int32_t nItems);
	virtual void replace(int32_t position, int32_t rmSize, Object$* addItems, int32_t addSize);
	virtual void resize(int32_t nsize);
	virtual void shiftEnd(int32_t newSize);
	virtual void shiftGap(int32_t newGapStart);
	virtual void shiftGapEndUp(int32_t newGapEnd);
	virtual void shiftGapStartDown(int32_t newGapStart);
	$Object* array = nullptr;
	int32_t g0 = 0;
	int32_t g1 = 0;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_GapVector_h_