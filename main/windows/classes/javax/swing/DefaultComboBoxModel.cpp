#include <javax/swing/DefaultComboBoxModel.h>

#include <java/lang/Array.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Collection.h>
#include <java/util/Vector.h>
#include <javax/swing/AbstractListModel.h>
#include <javax/swing/event/ListDataListener.h>
#include <jcpp.h>

using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collection = ::java::util::Collection;
using $Vector = ::java::util::Vector;
using $AbstractListModel = ::javax::swing::AbstractListModel;
using $MutableComboBoxModel = ::javax::swing::MutableComboBoxModel;
using $ListDataListener = ::javax::swing::event::ListDataListener;

namespace javax {
	namespace swing {

$FieldInfo _DefaultComboBoxModel_FieldInfo_[] = {
	{"objects", "Ljava/util/Vector;", "Ljava/util/Vector<TE;>;", 0, $field(DefaultComboBoxModel, objects)},
	{"selectedObject", "Ljava/lang/Object;", nullptr, 0, $field(DefaultComboBoxModel, selectedObject)},
	{}
};

$MethodInfo _DefaultComboBoxModel_MethodInfo_[] = {
	{"*addListDataListener", "(Ljavax/swing/event/ListDataListener;)V", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultComboBoxModel::*)()>(&DefaultComboBoxModel::init$))},
	{"<init>", "([Ljava/lang/Object;)V", "([TE;)V", $PUBLIC, $method(static_cast<void(DefaultComboBoxModel::*)($ObjectArray*)>(&DefaultComboBoxModel::init$))},
	{"<init>", "(Ljava/util/Vector;)V", "(Ljava/util/Vector<TE;>;)V", $PUBLIC, $method(static_cast<void(DefaultComboBoxModel::*)($Vector*)>(&DefaultComboBoxModel::init$))},
	{"addAll", "(Ljava/util/Collection;)V", "(Ljava/util/Collection<+TE;>;)V", $PUBLIC},
	{"addAll", "(ILjava/util/Collection;)V", "(ILjava/util/Collection<+TE;>;)V", $PUBLIC},
	{"addElement", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC},
	{"getElementAt", "(I)Ljava/lang/Object;", "(I)TE;", $PUBLIC},
	{"getIndexOf", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{"getSelectedItem", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC},
	{"insertElementAt", "(Ljava/lang/Object;I)V", "(TE;I)V", $PUBLIC},
	{"removeAllElements", "()V", nullptr, $PUBLIC},
	{"removeElement", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"removeElementAt", "(I)V", nullptr, $PUBLIC},
	{"*removeListDataListener", "(Ljavax/swing/event/ListDataListener;)V", nullptr, $PUBLIC},
	{"setSelectedItem", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DefaultComboBoxModel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.DefaultComboBoxModel",
	"javax.swing.AbstractListModel",
	"javax.swing.MutableComboBoxModel",
	_DefaultComboBoxModel_FieldInfo_,
	_DefaultComboBoxModel_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljavax/swing/AbstractListModel<TE;>;Ljavax/swing/MutableComboBoxModel<TE;>;Ljava/io/Serializable;"
};

$Object* allocate$DefaultComboBoxModel($Class* clazz) {
	return $of($alloc(DefaultComboBoxModel));
}

void DefaultComboBoxModel::addListDataListener($ListDataListener* l) {
	this->$AbstractListModel::addListDataListener(l);
}

void DefaultComboBoxModel::removeListDataListener($ListDataListener* l) {
	this->$AbstractListModel::removeListDataListener(l);
}

int32_t DefaultComboBoxModel::hashCode() {
	 return this->$AbstractListModel::hashCode();
}

bool DefaultComboBoxModel::equals(Object$* arg0) {
	 return this->$AbstractListModel::equals(arg0);
}

$Object* DefaultComboBoxModel::clone() {
	 return this->$AbstractListModel::clone();
}

$String* DefaultComboBoxModel::toString() {
	 return this->$AbstractListModel::toString();
}

void DefaultComboBoxModel::finalize() {
	this->$AbstractListModel::finalize();
}

void DefaultComboBoxModel::init$() {
	$AbstractListModel::init$();
	$set(this, objects, $new($Vector));
}

void DefaultComboBoxModel::init$($ObjectArray* items) {
	$AbstractListModel::init$();
	$set(this, objects, $new($Vector, $nc(items)->length));
	int32_t i = 0;
	int32_t c = 0;
	for (i = 0, c = $nc(items)->length; i < c; ++i) {
		$nc(this->objects)->addElement(items->get(i));
	}
	if (getSize() > 0) {
		$set(this, selectedObject, getElementAt(0));
	}
}

void DefaultComboBoxModel::init$($Vector* v) {
	$AbstractListModel::init$();
	$set(this, objects, v);
	if (getSize() > 0) {
		$set(this, selectedObject, getElementAt(0));
	}
}

void DefaultComboBoxModel::setSelectedItem(Object$* anObject) {
	if ((this->selectedObject != nullptr && !$nc($of(this->selectedObject))->equals(anObject)) || this->selectedObject == nullptr && anObject != nullptr) {
		$set(this, selectedObject, anObject);
		fireContentsChanged(this, -1, -1);
	}
}

$Object* DefaultComboBoxModel::getSelectedItem() {
	return $of(this->selectedObject);
}

int32_t DefaultComboBoxModel::getSize() {
	return $nc(this->objects)->size();
}

$Object* DefaultComboBoxModel::getElementAt(int32_t index) {
	if (index >= 0 && index < $nc(this->objects)->size()) {
		return $of($nc(this->objects)->elementAt(index));
	} else {
		return $of(nullptr);
	}
}

int32_t DefaultComboBoxModel::getIndexOf(Object$* anObject) {
	return $nc(this->objects)->indexOf(anObject);
}

void DefaultComboBoxModel::addElement(Object$* anObject) {
	$nc(this->objects)->addElement(anObject);
	int32_t var$0 = $nc(this->objects)->size() - 1;
	fireIntervalAdded(this, var$0, $nc(this->objects)->size() - 1);
	if ($nc(this->objects)->size() == 1 && this->selectedObject == nullptr && anObject != nullptr) {
		setSelectedItem(anObject);
	}
}

void DefaultComboBoxModel::insertElementAt(Object$* anObject, int32_t index) {
	$nc(this->objects)->insertElementAt(anObject, index);
	fireIntervalAdded(this, index, index);
}

void DefaultComboBoxModel::removeElementAt(int32_t index) {
	if ($equals(getElementAt(index), this->selectedObject)) {
		if (index == 0) {
			setSelectedItem(getSize() == 1 ? ($Object*)nullptr : $(getElementAt(index + 1)));
		} else {
			setSelectedItem($(getElementAt(index - 1)));
		}
	}
	$nc(this->objects)->removeElementAt(index);
	fireIntervalRemoved(this, index, index);
}

void DefaultComboBoxModel::removeElement(Object$* anObject) {
	int32_t index = $nc(this->objects)->indexOf(anObject);
	if (index != -1) {
		removeElementAt(index);
	}
}

void DefaultComboBoxModel::removeAllElements() {
	if ($nc(this->objects)->size() > 0) {
		int32_t firstIndex = 0;
		int32_t lastIndex = $nc(this->objects)->size() - 1;
		$nc(this->objects)->removeAllElements();
		$set(this, selectedObject, nullptr);
		fireIntervalRemoved(this, firstIndex, lastIndex);
	} else {
		$set(this, selectedObject, nullptr);
	}
}

void DefaultComboBoxModel::addAll($Collection* c) {
	if ($nc(c)->isEmpty()) {
		return;
	}
	int32_t startIndex = getSize();
	$nc(this->objects)->addAll(c);
	fireIntervalAdded(this, startIndex, getSize() - 1);
}

void DefaultComboBoxModel::addAll(int32_t index, $Collection* c) {
	if (index < 0 || index > getSize()) {
		$throwNew($ArrayIndexOutOfBoundsException, $$str({"index out of range: "_s, $$str(index)}));
	}
	if ($nc(c)->isEmpty()) {
		return;
	}
	$nc(this->objects)->addAll(index, c);
	fireIntervalAdded(this, index, index + $nc(c)->size() - 1);
}

DefaultComboBoxModel::DefaultComboBoxModel() {
}

$Class* DefaultComboBoxModel::load$($String* name, bool initialize) {
	$loadClass(DefaultComboBoxModel, name, initialize, &_DefaultComboBoxModel_ClassInfo_, allocate$DefaultComboBoxModel);
	return class$;
}

$Class* DefaultComboBoxModel::class$ = nullptr;

	} // swing
} // javax