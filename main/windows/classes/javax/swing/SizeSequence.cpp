#include <javax/swing/SizeSequence.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {

$FieldInfo _SizeSequence_FieldInfo_[] = {
	{"emptyArray", "[I", nullptr, $PRIVATE | $STATIC, $staticField(SizeSequence, emptyArray)},
	{"a", "[I", nullptr, $PRIVATE, $field(SizeSequence, a)},
	{}
};

$MethodInfo _SizeSequence_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SizeSequence::*)()>(&SizeSequence::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(SizeSequence::*)(int32_t)>(&SizeSequence::init$))},
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(SizeSequence::*)(int32_t,int32_t)>(&SizeSequence::init$))},
	{"<init>", "([I)V", nullptr, $PUBLIC, $method(static_cast<void(SizeSequence::*)($ints*)>(&SizeSequence::init$))},
	{"changeSize", "(IIII)V", nullptr, $PRIVATE, $method(static_cast<void(SizeSequence::*)(int32_t,int32_t,int32_t,int32_t)>(&SizeSequence::changeSize))},
	{"getIndex", "(I)I", nullptr, $PUBLIC},
	{"getIndex", "(III)I", nullptr, $PRIVATE, $method(static_cast<int32_t(SizeSequence::*)(int32_t,int32_t,int32_t)>(&SizeSequence::getIndex))},
	{"getPosition", "(I)I", nullptr, $PUBLIC},
	{"getPosition", "(III)I", nullptr, $PRIVATE, $method(static_cast<int32_t(SizeSequence::*)(int32_t,int32_t,int32_t)>(&SizeSequence::getPosition))},
	{"getSize", "(I)I", nullptr, $PUBLIC},
	{"getSizes", "()[I", nullptr, $PUBLIC},
	{"getSizes", "(II[I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(SizeSequence::*)(int32_t,int32_t,$ints*)>(&SizeSequence::getSizes))},
	{"insertEntries", "(III)V", nullptr, $PUBLIC},
	{"removeEntries", "(II)V", nullptr, $PUBLIC},
	{"setSize", "(II)V", nullptr, $PUBLIC},
	{"setSizes", "(II)V", nullptr, 0},
	{"setSizes", "(III)I", nullptr, $PRIVATE, $method(static_cast<int32_t(SizeSequence::*)(int32_t,int32_t,int32_t)>(&SizeSequence::setSizes))},
	{"setSizes", "([I)V", nullptr, $PUBLIC},
	{"setSizes", "(II[I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(SizeSequence::*)(int32_t,int32_t,$ints*)>(&SizeSequence::setSizes))},
	{}
};

$ClassInfo _SizeSequence_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.SizeSequence",
	"java.lang.Object",
	nullptr,
	_SizeSequence_FieldInfo_,
	_SizeSequence_MethodInfo_
};

$Object* allocate$SizeSequence($Class* clazz) {
	return $of($alloc(SizeSequence));
}

$ints* SizeSequence::emptyArray = nullptr;

void SizeSequence::init$() {
	$set(this, a, SizeSequence::emptyArray);
}

void SizeSequence::init$(int32_t numEntries) {
	SizeSequence::init$(numEntries, 0);
}

void SizeSequence::init$(int32_t numEntries, int32_t value) {
	SizeSequence::init$();
	insertEntries(0, numEntries, value);
}

void SizeSequence::init$($ints* sizes) {
	SizeSequence::init$();
	setSizes(sizes);
}

void SizeSequence::setSizes(int32_t length, int32_t size) {
	if ($nc(this->a)->length != length) {
		$set(this, a, $new($ints, length));
	}
	setSizes(0, length, size);
}

int32_t SizeSequence::setSizes(int32_t from, int32_t to, int32_t size) {
	if (to <= from) {
		return 0;
	}
	int32_t m = (from + to) / 2;
	$nc(this->a)->set(m, size + setSizes(from, m, size));
	return $nc(this->a)->get(m) + setSizes(m + 1, to, size);
}

void SizeSequence::setSizes($ints* sizes) {
	if ($nc(this->a)->length != $nc(sizes)->length) {
		$set(this, a, $new($ints, sizes->length));
	}
	setSizes(0, $nc(this->a)->length, sizes);
}

int32_t SizeSequence::setSizes(int32_t from, int32_t to, $ints* sizes) {
	if (to <= from) {
		return 0;
	}
	int32_t m = (from + to) / 2;
	$nc(this->a)->set(m, $nc(sizes)->get(m) + setSizes(from, m, sizes));
	return $nc(this->a)->get(m) + setSizes(m + 1, to, sizes);
}

$ints* SizeSequence::getSizes() {
	int32_t n = $nc(this->a)->length;
	$var($ints, sizes, $new($ints, n));
	getSizes(0, n, sizes);
	return sizes;
}

int32_t SizeSequence::getSizes(int32_t from, int32_t to, $ints* sizes) {
	if (to <= from) {
		return 0;
	}
	int32_t m = (from + to) / 2;
	$nc(sizes)->set(m, $nc(this->a)->get(m) - getSizes(from, m, sizes));
	return $nc(this->a)->get(m) + getSizes(m + 1, to, sizes);
}

int32_t SizeSequence::getPosition(int32_t index) {
	return getPosition(0, $nc(this->a)->length, index);
}

int32_t SizeSequence::getPosition(int32_t from, int32_t to, int32_t index) {
	if (to <= from) {
		return 0;
	}
	int32_t m = (from + to) / 2;
	if (index <= m) {
		return getPosition(from, m, index);
	} else {
		return $nc(this->a)->get(m) + getPosition(m + 1, to, index);
	}
}

int32_t SizeSequence::getIndex(int32_t position) {
	return getIndex(0, $nc(this->a)->length, position);
}

int32_t SizeSequence::getIndex(int32_t from, int32_t to, int32_t position) {
	if (to <= from) {
		return from;
	}
	int32_t m = (from + to) / 2;
	int32_t pivot = $nc(this->a)->get(m);
	if (position < pivot) {
		return getIndex(from, m, position);
	} else {
		return getIndex(m + 1, to, position - pivot);
	}
}

int32_t SizeSequence::getSize(int32_t index) {
	int32_t var$0 = getPosition(index + 1);
	return var$0 - getPosition(index);
}

void SizeSequence::setSize(int32_t index, int32_t size) {
	changeSize(0, $nc(this->a)->length, index, size - getSize(index));
}

void SizeSequence::changeSize(int32_t from, int32_t to, int32_t index, int32_t delta) {
	if (to <= from) {
		return;
	}
	int32_t m = (from + to) / 2;
	if (index <= m) {
		(*$nc(this->a))[m] += delta;
		changeSize(from, m, index, delta);
	} else {
		changeSize(m + 1, to, index, delta);
	}
}

void SizeSequence::insertEntries(int32_t start, int32_t length, int32_t value) {
	$var($ints, sizes, getSizes());
	int32_t end = start + length;
	int32_t n = $nc(this->a)->length + length;
	$set(this, a, $new($ints, n));
	for (int32_t i = 0; i < start; ++i) {
		$nc(this->a)->set(i, $nc(sizes)->get(i));
	}
	for (int32_t i = start; i < end; ++i) {
		$nc(this->a)->set(i, value);
	}
	for (int32_t i = end; i < n; ++i) {
		$nc(this->a)->set(i, $nc(sizes)->get(i - length));
	}
	setSizes(this->a);
}

void SizeSequence::removeEntries(int32_t start, int32_t length) {
	$var($ints, sizes, getSizes());
	int32_t end = start + length;
	int32_t n = $nc(this->a)->length - length;
	$set(this, a, $new($ints, n));
	for (int32_t i = 0; i < start; ++i) {
		$nc(this->a)->set(i, $nc(sizes)->get(i));
	}
	for (int32_t i = start; i < n; ++i) {
		$nc(this->a)->set(i, $nc(sizes)->get(i + length));
	}
	setSizes(this->a);
}

void clinit$SizeSequence($Class* class$) {
	$assignStatic(SizeSequence::emptyArray, $new($ints, 0));
}

SizeSequence::SizeSequence() {
}

$Class* SizeSequence::load$($String* name, bool initialize) {
	$loadClass(SizeSequence, name, initialize, &_SizeSequence_ClassInfo_, clinit$SizeSequence, allocate$SizeSequence);
	return class$;
}

$Class* SizeSequence::class$ = nullptr;

	} // swing
} // javax