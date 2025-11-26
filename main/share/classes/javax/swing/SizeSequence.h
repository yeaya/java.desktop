#ifndef _javax_swing_SizeSequence_h_
#define _javax_swing_SizeSequence_h_
//$ class javax.swing.SizeSequence
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {

class $export SizeSequence : public ::java::lang::Object {
	$class(SizeSequence, 0, ::java::lang::Object)
public:
	SizeSequence();
	void init$();
	void init$(int32_t numEntries);
	void init$(int32_t numEntries, int32_t value);
	void init$($ints* sizes);
	void changeSize(int32_t from, int32_t to, int32_t index, int32_t delta);
	virtual int32_t getIndex(int32_t position);
	int32_t getIndex(int32_t from, int32_t to, int32_t position);
	virtual int32_t getPosition(int32_t index);
	int32_t getPosition(int32_t from, int32_t to, int32_t index);
	virtual int32_t getSize(int32_t index);
	virtual $ints* getSizes();
	int32_t getSizes(int32_t from, int32_t to, $ints* sizes);
	virtual void insertEntries(int32_t start, int32_t length, int32_t value);
	virtual void removeEntries(int32_t start, int32_t length);
	virtual void setSize(int32_t index, int32_t size);
	virtual void setSizes(int32_t length, int32_t size);
	int32_t setSizes(int32_t from, int32_t to, int32_t size);
	virtual void setSizes($ints* sizes);
	int32_t setSizes(int32_t from, int32_t to, $ints* sizes);
	static $ints* emptyArray;
	$ints* a = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_SizeSequence_h_