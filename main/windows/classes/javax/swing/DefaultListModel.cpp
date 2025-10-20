#include <javax/swing/DefaultListModel.h>

#include <java/lang/Array.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Collection.h>
#include <java/util/Enumeration.h>
#include <java/util/Vector.h>
#include <javax/swing/AbstractListModel.h>
#include <jcpp.h>

using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collection = ::java::util::Collection;
using $Enumeration = ::java::util::Enumeration;
using $Vector = ::java::util::Vector;
using $AbstractListModel = ::javax::swing::AbstractListModel;

namespace javax {
	namespace swing {

$FieldInfo _DefaultListModel_FieldInfo_[] = {
	{"delegate", "Ljava/util/Vector;", "Ljava/util/Vector<TE;>;", $PRIVATE, $field(DefaultListModel, delegate)},
	{}
};

$MethodInfo _DefaultListModel_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultListModel::*)()>(&DefaultListModel::init$))},
	{"add", "(ILjava/lang/Object;)V", "(ITE;)V", $PUBLIC},
	{"addAll", "(Ljava/util/Collection;)V", "(Ljava/util/Collection<+TE;>;)V", $PUBLIC},
	{"addAll", "(ILjava/util/Collection;)V", "(ILjava/util/Collection<+TE;>;)V", $PUBLIC},
	{"addElement", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC},
	{"capacity", "()I", nullptr, $PUBLIC},
	{"clear", "()V", nullptr, $PUBLIC},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"copyInto", "([Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"elementAt", "(I)Ljava/lang/Object;", "(I)TE;", $PUBLIC},
	{"elements", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<TE;>;", $PUBLIC},
	{"ensureCapacity", "(I)V", nullptr, $PUBLIC},
	{"firstElement", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"get", "(I)Ljava/lang/Object;", "(I)TE;", $PUBLIC},
	{"getElementAt", "(I)Ljava/lang/Object;", "(I)TE;", $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC},
	{"indexOf", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{"indexOf", "(Ljava/lang/Object;I)I", nullptr, $PUBLIC},
	{"insertElementAt", "(Ljava/lang/Object;I)V", "(TE;I)V", $PUBLIC},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"lastElement", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"lastIndexOf", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{"lastIndexOf", "(Ljava/lang/Object;I)I", nullptr, $PUBLIC},
	{"remove", "(I)Ljava/lang/Object;", "(I)TE;", $PUBLIC},
	{"removeAllElements", "()V", nullptr, $PUBLIC},
	{"removeElement", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"removeElementAt", "(I)V", nullptr, $PUBLIC},
	{"removeRange", "(II)V", nullptr, $PUBLIC},
	{"set", "(ILjava/lang/Object;)Ljava/lang/Object;", "(ITE;)TE;", $PUBLIC},
	{"setElementAt", "(Ljava/lang/Object;I)V", "(TE;I)V", $PUBLIC},
	{"setSize", "(I)V", nullptr, $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{"toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"trimToSize", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DefaultListModel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.DefaultListModel",
	"javax.swing.AbstractListModel",
	nullptr,
	_DefaultListModel_FieldInfo_,
	_DefaultListModel_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljavax/swing/AbstractListModel<TE;>;"
};

$Object* allocate$DefaultListModel($Class* clazz) {
	return $of($alloc(DefaultListModel));
}

void DefaultListModel::init$() {
	$AbstractListModel::init$();
	$set(this, delegate, $new($Vector));
}

int32_t DefaultListModel::getSize() {
	return $nc(this->delegate)->size();
}

$Object* DefaultListModel::getElementAt(int32_t index) {
	return $of($nc(this->delegate)->elementAt(index));
}

void DefaultListModel::copyInto($ObjectArray* anArray) {
	$nc(this->delegate)->copyInto(anArray);
}

void DefaultListModel::trimToSize() {
	$nc(this->delegate)->trimToSize();
}

void DefaultListModel::ensureCapacity(int32_t minCapacity) {
	$nc(this->delegate)->ensureCapacity(minCapacity);
}

void DefaultListModel::setSize(int32_t newSize) {
	int32_t oldSize = $nc(this->delegate)->size();
	$nc(this->delegate)->setSize(newSize);
	if (oldSize > newSize) {
		fireIntervalRemoved(this, newSize, oldSize - 1);
	} else if (oldSize < newSize) {
		fireIntervalAdded(this, oldSize, newSize - 1);
	}
}

int32_t DefaultListModel::capacity() {
	return $nc(this->delegate)->capacity();
}

int32_t DefaultListModel::size() {
	return $nc(this->delegate)->size();
}

bool DefaultListModel::isEmpty() {
	return $nc(this->delegate)->isEmpty();
}

$Enumeration* DefaultListModel::elements() {
	return $nc(this->delegate)->elements();
}

bool DefaultListModel::contains(Object$* elem) {
	return $nc(this->delegate)->contains(elem);
}

int32_t DefaultListModel::indexOf(Object$* elem) {
	return $nc(this->delegate)->indexOf(elem);
}

int32_t DefaultListModel::indexOf(Object$* elem, int32_t index) {
	return $nc(this->delegate)->indexOf(elem, index);
}

int32_t DefaultListModel::lastIndexOf(Object$* elem) {
	return $nc(this->delegate)->lastIndexOf(elem);
}

int32_t DefaultListModel::lastIndexOf(Object$* elem, int32_t index) {
	return $nc(this->delegate)->lastIndexOf(elem, index);
}

$Object* DefaultListModel::elementAt(int32_t index) {
	return $of($nc(this->delegate)->elementAt(index));
}

$Object* DefaultListModel::firstElement() {
	return $of($nc(this->delegate)->firstElement());
}

$Object* DefaultListModel::lastElement() {
	return $of($nc(this->delegate)->lastElement());
}

void DefaultListModel::setElementAt(Object$* element, int32_t index) {
	$nc(this->delegate)->setElementAt(element, index);
	fireContentsChanged(this, index, index);
}

void DefaultListModel::removeElementAt(int32_t index) {
	$nc(this->delegate)->removeElementAt(index);
	fireIntervalRemoved(this, index, index);
}

void DefaultListModel::insertElementAt(Object$* element, int32_t index) {
	$nc(this->delegate)->insertElementAt(element, index);
	fireIntervalAdded(this, index, index);
}

void DefaultListModel::addElement(Object$* element) {
	int32_t index = $nc(this->delegate)->size();
	$nc(this->delegate)->addElement(element);
	fireIntervalAdded(this, index, index);
}

bool DefaultListModel::removeElement(Object$* obj) {
	int32_t index = indexOf(obj);
	bool rv = $nc(this->delegate)->removeElement(obj);
	if (index >= 0) {
		fireIntervalRemoved(this, index, index);
	}
	return rv;
}

void DefaultListModel::removeAllElements() {
	int32_t index1 = $nc(this->delegate)->size() - 1;
	$nc(this->delegate)->removeAllElements();
	if (index1 >= 0) {
		fireIntervalRemoved(this, 0, index1);
	}
}

$String* DefaultListModel::toString() {
	return $nc(this->delegate)->toString();
}

$ObjectArray* DefaultListModel::toArray() {
	$var($ObjectArray, rv, $new($ObjectArray, $nc(this->delegate)->size()));
	$nc(this->delegate)->copyInto(rv);
	return rv;
}

$Object* DefaultListModel::get(int32_t index) {
	return $of($nc(this->delegate)->elementAt(index));
}

$Object* DefaultListModel::set(int32_t index, Object$* element) {
	$var($Object, rv, $nc(this->delegate)->elementAt(index));
	$nc(this->delegate)->setElementAt(element, index);
	fireContentsChanged(this, index, index);
	return $of(rv);
}

void DefaultListModel::add(int32_t index, Object$* element) {
	$nc(this->delegate)->insertElementAt(element, index);
	fireIntervalAdded(this, index, index);
}

$Object* DefaultListModel::remove(int32_t index) {
	$var($Object, rv, $nc(this->delegate)->elementAt(index));
	$nc(this->delegate)->removeElementAt(index);
	fireIntervalRemoved(this, index, index);
	return $of(rv);
}

void DefaultListModel::clear() {
	int32_t index1 = $nc(this->delegate)->size() - 1;
	$nc(this->delegate)->removeAllElements();
	if (index1 >= 0) {
		fireIntervalRemoved(this, 0, index1);
	}
}

void DefaultListModel::removeRange(int32_t fromIndex, int32_t toIndex) {
	if (fromIndex > toIndex) {
		$throwNew($IllegalArgumentException, "fromIndex must be <= toIndex"_s);
	}
	for (int32_t i = toIndex; i >= fromIndex; --i) {
		$nc(this->delegate)->removeElementAt(i);
	}
	fireIntervalRemoved(this, fromIndex, toIndex);
}

void DefaultListModel::addAll($Collection* c) {
	if ($nc(c)->isEmpty()) {
		return;
	}
	int32_t startIndex = getSize();
	$nc(this->delegate)->addAll(c);
	fireIntervalAdded(this, startIndex, getSize() - 1);
}

void DefaultListModel::addAll(int32_t index, $Collection* c) {
	$useLocalCurrentObjectStackCache();
	if (index < 0 || index > getSize()) {
		$throwNew($ArrayIndexOutOfBoundsException, $$str({"index out of range: "_s, $$str(index)}));
	}
	if ($nc(c)->isEmpty()) {
		return;
	}
	$nc(this->delegate)->addAll(index, c);
	fireIntervalAdded(this, index, index + $nc(c)->size() - 1);
}

DefaultListModel::DefaultListModel() {
}

$Class* DefaultListModel::load$($String* name, bool initialize) {
	$loadClass(DefaultListModel, name, initialize, &_DefaultListModel_ClassInfo_, allocate$DefaultListModel);
	return class$;
}

$Class* DefaultListModel::class$ = nullptr;

	} // swing
} // javax