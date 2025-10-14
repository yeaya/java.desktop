#include <javax/swing/AbstractSpinnerModel.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventListener.h>
#include <javax/swing/SpinnerModel.h>
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
using $SpinnerModel = ::javax::swing::SpinnerModel;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $EventListenerList = ::javax::swing::event::EventListenerList;

namespace javax {
	namespace swing {

$FieldInfo _AbstractSpinnerModel_FieldInfo_[] = {
	{"changeEvent", "Ljavax/swing/event/ChangeEvent;", nullptr, $PRIVATE | $TRANSIENT, $field(AbstractSpinnerModel, changeEvent)},
	{"listenerList", "Ljavax/swing/event/EventListenerList;", nullptr, $PROTECTED, $field(AbstractSpinnerModel, listenerList)},
	{}
};

$MethodInfo _AbstractSpinnerModel_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(AbstractSpinnerModel::*)()>(&AbstractSpinnerModel::init$))},
	{"addChangeListener", "(Ljavax/swing/event/ChangeListener;)V", nullptr, $PUBLIC},
	{"fireStateChanged", "()V", nullptr, $PROTECTED},
	{"getChangeListeners", "()[Ljavax/swing/event/ChangeListener;", nullptr, $PUBLIC},
	{"getListeners", "(Ljava/lang/Class;)[Ljava/util/EventListener;", "<T::Ljava/util/EventListener;>(Ljava/lang/Class<TT;>;)[TT;", $PUBLIC},
	{"removeChangeListener", "(Ljavax/swing/event/ChangeListener;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AbstractSpinnerModel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.AbstractSpinnerModel",
	"java.lang.Object",
	"javax.swing.SpinnerModel,java.io.Serializable",
	_AbstractSpinnerModel_FieldInfo_,
	_AbstractSpinnerModel_MethodInfo_
};

$Object* allocate$AbstractSpinnerModel($Class* clazz) {
	return $of($alloc(AbstractSpinnerModel));
}

int32_t AbstractSpinnerModel::hashCode() {
	 return this->$SpinnerModel::hashCode();
}

bool AbstractSpinnerModel::equals(Object$* arg0) {
	 return this->$SpinnerModel::equals(arg0);
}

$Object* AbstractSpinnerModel::clone() {
	 return this->$SpinnerModel::clone();
}

$String* AbstractSpinnerModel::toString() {
	 return this->$SpinnerModel::toString();
}

void AbstractSpinnerModel::finalize() {
	this->$SpinnerModel::finalize();
}

void AbstractSpinnerModel::init$() {
	$set(this, changeEvent, nullptr);
	$set(this, listenerList, $new($EventListenerList));
}

void AbstractSpinnerModel::addChangeListener($ChangeListener* l) {
	$load($ChangeListener);
	$nc(this->listenerList)->add($ChangeListener::class$, l);
}

void AbstractSpinnerModel::removeChangeListener($ChangeListener* l) {
	$load($ChangeListener);
	$nc(this->listenerList)->remove($ChangeListener::class$, l);
}

$ChangeListenerArray* AbstractSpinnerModel::getChangeListeners() {
	$load($ChangeListener);
	return $fcast($ChangeListenerArray, $nc(this->listenerList)->getListeners($ChangeListener::class$));
}

void AbstractSpinnerModel::fireStateChanged() {
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

$EventListenerArray* AbstractSpinnerModel::getListeners($Class* listenerType) {
	return $nc(this->listenerList)->getListeners(listenerType);
}

AbstractSpinnerModel::AbstractSpinnerModel() {
}

$Class* AbstractSpinnerModel::load$($String* name, bool initialize) {
	$loadClass(AbstractSpinnerModel, name, initialize, &_AbstractSpinnerModel_ClassInfo_, allocate$AbstractSpinnerModel);
	return class$;
}

$Class* AbstractSpinnerModel::class$ = nullptr;

	} // swing
} // javax