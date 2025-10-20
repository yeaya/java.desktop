#include <sun/awt/util/IdentityArrayList.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $RandomAccess = ::java::util::RandomAccess;

namespace sun {
	namespace awt {
		namespace util {

$FieldInfo _IdentityArrayList_FieldInfo_[] = {
	{"elementData", "[Ljava/lang/Object;", nullptr, $PRIVATE | $TRANSIENT, $field(IdentityArrayList, elementData)},
	{"size", "I", nullptr, $PRIVATE, $field(IdentityArrayList, size$)},
	{}
};

$MethodInfo _IdentityArrayList_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(IdentityArrayList::*)(int32_t)>(&IdentityArrayList::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IdentityArrayList::*)()>(&IdentityArrayList::init$))},
	{"<init>", "(Ljava/util/Collection;)V", "(Ljava/util/Collection<+TE;>;)V", $PUBLIC, $method(static_cast<void(IdentityArrayList::*)($Collection*)>(&IdentityArrayList::init$))},
	{"add", "(Ljava/lang/Object;)Z", "(TE;)Z", $PUBLIC},
	{"add", "(ILjava/lang/Object;)V", "(ITE;)V", $PUBLIC},
	{"addAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<+TE;>;)Z", $PUBLIC},
	{"addAll", "(ILjava/util/Collection;)Z", "(ILjava/util/Collection<+TE;>;)Z", $PUBLIC},
	{"clear", "()V", nullptr, $PUBLIC},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"ensureCapacity", "(I)V", nullptr, $PUBLIC},
	{"fastRemove", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(IdentityArrayList::*)(int32_t)>(&IdentityArrayList::fastRemove))},
	{"get", "(I)Ljava/lang/Object;", "(I)TE;", $PUBLIC},
	{"indexOf", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"lastIndexOf", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{"outOfBoundsMsg", "(I)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(IdentityArrayList::*)(int32_t)>(&IdentityArrayList::outOfBoundsMsg))},
	{"rangeCheck", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(IdentityArrayList::*)(int32_t)>(&IdentityArrayList::rangeCheck))},
	{"rangeCheckForAdd", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(IdentityArrayList::*)(int32_t)>(&IdentityArrayList::rangeCheckForAdd))},
	{"remove", "(I)Ljava/lang/Object;", "(I)TE;", $PUBLIC},
	{"remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"removeRange", "(II)V", nullptr, $PROTECTED},
	{"set", "(ILjava/lang/Object;)Ljava/lang/Object;", "(ITE;)TE;", $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{"toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", "<T:Ljava/lang/Object;>([TT;)[TT;", $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"trimToSize", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _IdentityArrayList_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.util.IdentityArrayList",
	"java.util.AbstractList",
	"java.util.RandomAccess",
	_IdentityArrayList_FieldInfo_,
	_IdentityArrayList_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/util/AbstractList<TE;>;Ljava/util/List<TE;>;Ljava/util/RandomAccess;"
};

$Object* allocate$IdentityArrayList($Class* clazz) {
	return $of($alloc(IdentityArrayList));
}

bool IdentityArrayList::equals(Object$* arg0) {
	 return this->$AbstractList::equals(arg0);
}

int32_t IdentityArrayList::hashCode() {
	 return this->$AbstractList::hashCode();
}

$String* IdentityArrayList::toString() {
	 return this->$AbstractList::toString();
}

$Object* IdentityArrayList::clone() {
	 return this->$AbstractList::clone();
}

void IdentityArrayList::finalize() {
	this->$AbstractList::finalize();
}

void IdentityArrayList::init$(int32_t initialCapacity) {
	$useLocalCurrentObjectStackCache();
	$AbstractList::init$();
	if (initialCapacity < 0) {
		$throwNew($IllegalArgumentException, $$str({"Illegal Capacity: "_s, $$str(initialCapacity)}));
	}
	$set(this, elementData, $new($ObjectArray, initialCapacity));
}

void IdentityArrayList::init$() {
	IdentityArrayList::init$(10);
}

void IdentityArrayList::init$($Collection* c) {
	$AbstractList::init$();
	$set(this, elementData, $nc(c)->toArray());
	this->size$ = $nc(this->elementData)->length;
	$load($ObjectArray);
	if ($nc($of(this->elementData))->getClass() != $getClass($ObjectArray)) {
		$set(this, elementData, $Arrays::copyOf(this->elementData, this->size$, $getClass($ObjectArray)));
	}
}

void IdentityArrayList::trimToSize() {
	++this->modCount;
	int32_t oldCapacity = $nc(this->elementData)->length;
	if (this->size$ < oldCapacity) {
		$set(this, elementData, $Arrays::copyOf(this->elementData, this->size$));
	}
}

void IdentityArrayList::ensureCapacity(int32_t minCapacity) {
	++this->modCount;
	int32_t oldCapacity = $nc(this->elementData)->length;
	if (minCapacity > oldCapacity) {
		$var($ObjectArray, oldData, this->elementData);
		int32_t newCapacity = (oldCapacity * 3) / 2 + 1;
		if (newCapacity < minCapacity) {
			newCapacity = minCapacity;
		}
		$set(this, elementData, $Arrays::copyOf(this->elementData, newCapacity));
	}
}

int32_t IdentityArrayList::size() {
	return this->size$;
}

bool IdentityArrayList::isEmpty() {
	return this->size$ == 0;
}

bool IdentityArrayList::contains(Object$* o) {
	return indexOf(o) >= 0;
}

int32_t IdentityArrayList::indexOf(Object$* o) {
	for (int32_t i = 0; i < this->size$; ++i) {
		if ($equals(o, $nc(this->elementData)->get(i))) {
			return i;
		}
	}
	return -1;
}

int32_t IdentityArrayList::lastIndexOf(Object$* o) {
	for (int32_t i = this->size$ - 1; i >= 0; --i) {
		if ($equals(o, $nc(this->elementData)->get(i))) {
			return i;
		}
	}
	return -1;
}

$ObjectArray* IdentityArrayList::toArray() {
	return $Arrays::copyOf(this->elementData, this->size$);
}

$ObjectArray* IdentityArrayList::toArray($ObjectArray* a) {
	if ($nc(a)->length < this->size$) {
		return $Arrays::copyOf(this->elementData, this->size$, $of(a)->getClass());
	}
	$System::arraycopy(this->elementData, 0, a, 0, this->size$);
	if ($nc(a)->length > this->size$) {
		a->set(this->size$, nullptr);
	}
	return a;
}

$Object* IdentityArrayList::get(int32_t index) {
	rangeCheck(index);
	$var($Object, rv, $nc(this->elementData)->get(index));
	return $of(rv);
}

$Object* IdentityArrayList::set(int32_t index, Object$* element) {
	rangeCheck(index);
	$var($Object, oldValue, $nc(this->elementData)->get(index));
	$nc(this->elementData)->set(index, element);
	return $of(oldValue);
}

bool IdentityArrayList::add(Object$* e) {
	ensureCapacity(this->size$ + 1);
	$nc(this->elementData)->set(this->size$++, e);
	return true;
}

void IdentityArrayList::add(int32_t index, Object$* element) {
	rangeCheckForAdd(index);
	ensureCapacity(this->size$ + 1);
	$System::arraycopy(this->elementData, index, this->elementData, index + 1, this->size$ - index);
	$nc(this->elementData)->set(index, element);
	++this->size$;
}

$Object* IdentityArrayList::remove(int32_t index) {
	rangeCheck(index);
	++this->modCount;
	$var($Object, oldValue, $nc(this->elementData)->get(index));
	int32_t numMoved = this->size$ - index - 1;
	if (numMoved > 0) {
		$System::arraycopy(this->elementData, index + 1, this->elementData, index, numMoved);
	}
	$nc(this->elementData)->set(--this->size$, nullptr);
	return $of(oldValue);
}

bool IdentityArrayList::remove(Object$* o) {
	for (int32_t index = 0; index < this->size$; ++index) {
		if ($equals(o, $nc(this->elementData)->get(index))) {
			fastRemove(index);
			return true;
		}
	}
	return false;
}

void IdentityArrayList::fastRemove(int32_t index) {
	++this->modCount;
	int32_t numMoved = this->size$ - index - 1;
	if (numMoved > 0) {
		$System::arraycopy(this->elementData, index + 1, this->elementData, index, numMoved);
	}
	$nc(this->elementData)->set(--this->size$, nullptr);
}

void IdentityArrayList::clear() {
	++this->modCount;
	for (int32_t i = 0; i < this->size$; ++i) {
		$nc(this->elementData)->set(i, nullptr);
	}
	this->size$ = 0;
}

bool IdentityArrayList::addAll($Collection* c) {
	$var($ObjectArray, a, $nc(c)->toArray());
	int32_t numNew = $nc(a)->length;
	ensureCapacity(this->size$ + numNew);
	$System::arraycopy(a, 0, this->elementData, this->size$, numNew);
	this->size$ += numNew;
	return numNew != 0;
}

bool IdentityArrayList::addAll(int32_t index, $Collection* c) {
	rangeCheckForAdd(index);
	$var($ObjectArray, a, $nc(c)->toArray());
	int32_t numNew = $nc(a)->length;
	ensureCapacity(this->size$ + numNew);
	int32_t numMoved = this->size$ - index;
	if (numMoved > 0) {
		$System::arraycopy(this->elementData, index, this->elementData, index + numNew, numMoved);
	}
	$System::arraycopy(a, 0, this->elementData, index, numNew);
	this->size$ += numNew;
	return numNew != 0;
}

void IdentityArrayList::removeRange(int32_t fromIndex, int32_t toIndex) {
	++this->modCount;
	int32_t numMoved = this->size$ - toIndex;
	$System::arraycopy(this->elementData, toIndex, this->elementData, fromIndex, numMoved);
	int32_t newSize = this->size$ - (toIndex - fromIndex);
	while (this->size$ != newSize) {
		$nc(this->elementData)->set(--this->size$, nullptr);
	}
}

void IdentityArrayList::rangeCheck(int32_t index) {
	if (index >= this->size$) {
		$throwNew($IndexOutOfBoundsException, $(outOfBoundsMsg(index)));
	}
}

void IdentityArrayList::rangeCheckForAdd(int32_t index) {
	if (index > this->size$ || index < 0) {
		$throwNew($IndexOutOfBoundsException, $(outOfBoundsMsg(index)));
	}
}

$String* IdentityArrayList::outOfBoundsMsg(int32_t index) {
	$useLocalCurrentObjectStackCache();
	return $str({"Index: "_s, $$str(index), ", Size: "_s, $$str(this->size$)});
}

IdentityArrayList::IdentityArrayList() {
}

$Class* IdentityArrayList::load$($String* name, bool initialize) {
	$loadClass(IdentityArrayList, name, initialize, &_IdentityArrayList_ClassInfo_, allocate$IdentityArrayList);
	return class$;
}

$Class* IdentityArrayList::class$ = nullptr;

		} // util
	} // awt
} // sun