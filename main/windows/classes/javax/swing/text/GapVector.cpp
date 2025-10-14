#include <javax/swing/text/GapVector.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _GapVector_FieldInfo_[] = {
	{"array", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(GapVector, array)},
	{"g0", "I", nullptr, $PRIVATE, $field(GapVector, g0)},
	{"g1", "I", nullptr, $PRIVATE, $field(GapVector, g1)},
	{}
};

$MethodInfo _GapVector_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GapVector::*)()>(&GapVector::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(GapVector::*)(int32_t)>(&GapVector::init$))},
	{"allocateArray", "(I)Ljava/lang/Object;", nullptr, $PROTECTED | $ABSTRACT},
	{"close", "(II)V", nullptr, 0},
	{"getArray", "()Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $method(static_cast<$Object*(GapVector::*)()>(&GapVector::getArray))},
	{"getArrayLength", "()I", nullptr, $PROTECTED | $ABSTRACT},
	{"getGapEnd", "()I", nullptr, $PROTECTED | $FINAL, $method(static_cast<int32_t(GapVector::*)()>(&GapVector::getGapEnd))},
	{"getGapStart", "()I", nullptr, $PROTECTED | $FINAL, $method(static_cast<int32_t(GapVector::*)()>(&GapVector::getGapStart))},
	{"getNewArraySize", "(I)I", nullptr, 0},
	{"open", "(II)I", nullptr, 0},
	{"replace", "(IILjava/lang/Object;I)V", nullptr, $PROTECTED},
	{"resize", "(I)V", nullptr, 0},
	{"shiftEnd", "(I)V", nullptr, $PROTECTED},
	{"shiftGap", "(I)V", nullptr, $PROTECTED},
	{"shiftGapEndUp", "(I)V", nullptr, $PROTECTED},
	{"shiftGapStartDown", "(I)V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _GapVector_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"javax.swing.text.GapVector",
	"java.lang.Object",
	"java.io.Serializable",
	_GapVector_FieldInfo_,
	_GapVector_MethodInfo_
};

$Object* allocate$GapVector($Class* clazz) {
	return $of($alloc(GapVector));
}

void GapVector::init$() {
	GapVector::init$(10);
}

void GapVector::init$(int32_t initialLength) {
	$set(this, array, allocateArray(initialLength));
	this->g0 = 0;
	this->g1 = initialLength;
}

$Object* GapVector::getArray() {
	return $of(this->array);
}

int32_t GapVector::getGapStart() {
	return this->g0;
}

int32_t GapVector::getGapEnd() {
	return this->g1;
}

void GapVector::replace(int32_t position, int32_t rmSize, Object$* addItems, int32_t addSize) {
	int32_t addOffset = 0;
	if (addSize == 0) {
		close(position, rmSize);
		return;
	} else if (rmSize > addSize) {
		close(position + addSize, rmSize - addSize);
	} else {
		int32_t endSize = addSize - rmSize;
		int32_t end = open(position + rmSize, endSize);
		$System::arraycopy(addItems, rmSize, this->array, end, endSize);
		addSize = rmSize;
	}
	$System::arraycopy(addItems, addOffset, this->array, position, addSize);
}

void GapVector::close(int32_t position, int32_t nItems) {
	if (nItems == 0) {
		return;
	}
	int32_t end = position + nItems;
	int32_t new_gs = (this->g1 - this->g0) + nItems;
	if (end <= this->g0) {
		if (this->g0 != end) {
			shiftGap(end);
		}
		shiftGapStartDown(this->g0 - nItems);
	} else if (position >= this->g0) {
		if (this->g0 != position) {
			shiftGap(position);
		}
		shiftGapEndUp(this->g0 + new_gs);
	} else {
		shiftGapStartDown(position);
		shiftGapEndUp(this->g0 + new_gs);
	}
}

int32_t GapVector::open(int32_t position, int32_t nItems) {
	int32_t gapSize = this->g1 - this->g0;
	if (nItems == 0) {
		if (position > this->g0) {
			position += gapSize;
		}
		return position;
	}
	shiftGap(position);
	if (nItems >= gapSize) {
		shiftEnd(getArrayLength() - gapSize + nItems);
		gapSize = this->g1 - this->g0;
	}
	this->g0 = this->g0 + nItems;
	return position;
}

void GapVector::resize(int32_t nsize) {
	$var($Object, narray, allocateArray(nsize));
	$System::arraycopy(this->array, 0, narray, 0, $Math::min(nsize, getArrayLength()));
	$set(this, array, narray);
}

void GapVector::shiftEnd(int32_t newSize) {
	int32_t oldSize = getArrayLength();
	int32_t oldGapEnd = this->g1;
	int32_t upperSize = oldSize - oldGapEnd;
	int32_t arrayLength = getNewArraySize(newSize);
	int32_t newGapEnd = arrayLength - upperSize;
	resize(arrayLength);
	this->g1 = newGapEnd;
	if (upperSize != 0) {
		$System::arraycopy(this->array, oldGapEnd, this->array, newGapEnd, upperSize);
	}
}

int32_t GapVector::getNewArraySize(int32_t reqSize) {
	return (reqSize + 1) * 2;
}

void GapVector::shiftGap(int32_t newGapStart) {
	if (newGapStart == this->g0) {
		return;
	}
	int32_t oldGapStart = this->g0;
	int32_t dg = newGapStart - oldGapStart;
	int32_t oldGapEnd = this->g1;
	int32_t newGapEnd = oldGapEnd + dg;
	int32_t gapSize = oldGapEnd - oldGapStart;
	this->g0 = newGapStart;
	this->g1 = newGapEnd;
	if (dg > 0) {
		$System::arraycopy(this->array, oldGapEnd, this->array, oldGapStart, dg);
	} else if (dg < 0) {
		$System::arraycopy(this->array, newGapStart, this->array, newGapEnd, -dg);
	}
}

void GapVector::shiftGapStartDown(int32_t newGapStart) {
	this->g0 = newGapStart;
}

void GapVector::shiftGapEndUp(int32_t newGapEnd) {
	this->g1 = newGapEnd;
}

GapVector::GapVector() {
}

$Class* GapVector::load$($String* name, bool initialize) {
	$loadClass(GapVector, name, initialize, &_GapVector_ClassInfo_, allocate$GapVector);
	return class$;
}

$Class* GapVector::class$ = nullptr;

		} // text
	} // swing
} // javax