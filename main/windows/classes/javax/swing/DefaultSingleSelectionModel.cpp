#include <javax/swing/DefaultSingleSelectionModel.h>

#include <java/util/EventListener.h>
#include <javax/swing/SingleSelectionModel.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/event/EventListenerList.h>
#include <jcpp.h>

using $EventListenerArray = $Array<::java::util::EventListener>;
using $ChangeListenerArray = $Array<::javax::swing::event::ChangeListener>;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;
using $SingleSelectionModel = ::javax::swing::SingleSelectionModel;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $EventListenerList = ::javax::swing::event::EventListenerList;

namespace javax {
	namespace swing {

$FieldInfo _DefaultSingleSelectionModel_FieldInfo_[] = {
	{"changeEvent", "Ljavax/swing/event/ChangeEvent;", nullptr, $PROTECTED | $TRANSIENT, $field(DefaultSingleSelectionModel, changeEvent)},
	{"listenerList", "Ljavax/swing/event/EventListenerList;", nullptr, $PROTECTED, $field(DefaultSingleSelectionModel, listenerList)},
	{"index", "I", nullptr, $PRIVATE, $field(DefaultSingleSelectionModel, index)},
	{}
};

$MethodInfo _DefaultSingleSelectionModel_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultSingleSelectionModel::*)()>(&DefaultSingleSelectionModel::init$))},
	{"addChangeListener", "(Ljavax/swing/event/ChangeListener;)V", nullptr, $PUBLIC},
	{"clearSelection", "()V", nullptr, $PUBLIC},
	{"fireStateChanged", "()V", nullptr, $PROTECTED},
	{"getChangeListeners", "()[Ljavax/swing/event/ChangeListener;", nullptr, $PUBLIC},
	{"getListeners", "(Ljava/lang/Class;)[Ljava/util/EventListener;", "<T::Ljava/util/EventListener;>(Ljava/lang/Class<TT;>;)[TT;", $PUBLIC},
	{"getSelectedIndex", "()I", nullptr, $PUBLIC},
	{"isSelected", "()Z", nullptr, $PUBLIC},
	{"removeChangeListener", "(Ljavax/swing/event/ChangeListener;)V", nullptr, $PUBLIC},
	{"setSelectedIndex", "(I)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DefaultSingleSelectionModel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.DefaultSingleSelectionModel",
	"java.lang.Object",
	"javax.swing.SingleSelectionModel,java.io.Serializable",
	_DefaultSingleSelectionModel_FieldInfo_,
	_DefaultSingleSelectionModel_MethodInfo_
};

$Object* allocate$DefaultSingleSelectionModel($Class* clazz) {
	return $of($alloc(DefaultSingleSelectionModel));
}

int32_t DefaultSingleSelectionModel::hashCode() {
	 return this->$SingleSelectionModel::hashCode();
}

bool DefaultSingleSelectionModel::equals(Object$* arg0) {
	 return this->$SingleSelectionModel::equals(arg0);
}

$Object* DefaultSingleSelectionModel::clone() {
	 return this->$SingleSelectionModel::clone();
}

$String* DefaultSingleSelectionModel::toString() {
	 return this->$SingleSelectionModel::toString();
}

void DefaultSingleSelectionModel::finalize() {
	this->$SingleSelectionModel::finalize();
}

void DefaultSingleSelectionModel::init$() {
	$set(this, changeEvent, nullptr);
	$set(this, listenerList, $new($EventListenerList));
	this->index = -1;
}

int32_t DefaultSingleSelectionModel::getSelectedIndex() {
	return this->index;
}

void DefaultSingleSelectionModel::setSelectedIndex(int32_t index) {
	if (this->index != index) {
		this->index = index;
		fireStateChanged();
	}
}

void DefaultSingleSelectionModel::clearSelection() {
	setSelectedIndex(-1);
}

bool DefaultSingleSelectionModel::isSelected() {
	bool ret = false;
	if (getSelectedIndex() != -1) {
		ret = true;
	}
	return ret;
}

void DefaultSingleSelectionModel::addChangeListener($ChangeListener* l) {
	$load($ChangeListener);
	$nc(this->listenerList)->add($ChangeListener::class$, l);
}

void DefaultSingleSelectionModel::removeChangeListener($ChangeListener* l) {
	$load($ChangeListener);
	$nc(this->listenerList)->remove($ChangeListener::class$, l);
}

$ChangeListenerArray* DefaultSingleSelectionModel::getChangeListeners() {
	$load($ChangeListener);
	return $fcast($ChangeListenerArray, $nc(this->listenerList)->getListeners($ChangeListener::class$));
}

void DefaultSingleSelectionModel::fireStateChanged() {
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($ChangeListener);
		if ($equals(listeners->get(i), $ChangeListener::class$)) {
			if (this->changeEvent == nullptr) {
				$set(this, changeEvent, $new($ChangeEvent, this));
			}
			$nc(($cast($ChangeListener, listeners->get(i + 1))))->stateChanged(this->changeEvent);
		}
	}
}

$EventListenerArray* DefaultSingleSelectionModel::getListeners($Class* listenerType) {
	return $nc(this->listenerList)->getListeners(listenerType);
}

DefaultSingleSelectionModel::DefaultSingleSelectionModel() {
}

$Class* DefaultSingleSelectionModel::load$($String* name, bool initialize) {
	$loadClass(DefaultSingleSelectionModel, name, initialize, &_DefaultSingleSelectionModel_ClassInfo_, allocate$DefaultSingleSelectionModel);
	return class$;
}

$Class* DefaultSingleSelectionModel::class$ = nullptr;

	} // swing
} // javax