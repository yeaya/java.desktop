#include <javax/swing/AbstractListModel.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventListener.h>
#include <javax/swing/ListModel.h>
#include <javax/swing/event/EventListenerList.h>
#include <javax/swing/event/ListDataEvent.h>
#include <javax/swing/event/ListDataListener.h>
#include <jcpp.h>

#undef CONTENTS_CHANGED
#undef INTERVAL_ADDED
#undef INTERVAL_REMOVED

using $EventListenerArray = $Array<::java::util::EventListener>;
using $ListDataListenerArray = $Array<::javax::swing::event::ListDataListener>;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;
using $ListModel = ::javax::swing::ListModel;
using $EventListenerList = ::javax::swing::event::EventListenerList;
using $ListDataEvent = ::javax::swing::event::ListDataEvent;
using $ListDataListener = ::javax::swing::event::ListDataListener;

namespace javax {
	namespace swing {

$FieldInfo _AbstractListModel_FieldInfo_[] = {
	{"listenerList", "Ljavax/swing/event/EventListenerList;", nullptr, $PROTECTED, $field(AbstractListModel, listenerList)},
	{}
};

$MethodInfo _AbstractListModel_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(AbstractListModel::*)()>(&AbstractListModel::init$))},
	{"addListDataListener", "(Ljavax/swing/event/ListDataListener;)V", nullptr, $PUBLIC},
	{"fireContentsChanged", "(Ljava/lang/Object;II)V", nullptr, $PROTECTED},
	{"fireIntervalAdded", "(Ljava/lang/Object;II)V", nullptr, $PROTECTED},
	{"fireIntervalRemoved", "(Ljava/lang/Object;II)V", nullptr, $PROTECTED},
	{"getListDataListeners", "()[Ljavax/swing/event/ListDataListener;", nullptr, $PUBLIC},
	{"getListeners", "(Ljava/lang/Class;)[Ljava/util/EventListener;", "<T::Ljava/util/EventListener;>(Ljava/lang/Class<TT;>;)[TT;", $PUBLIC},
	{"removeListDataListener", "(Ljavax/swing/event/ListDataListener;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AbstractListModel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.AbstractListModel",
	"java.lang.Object",
	"javax.swing.ListModel,java.io.Serializable",
	_AbstractListModel_FieldInfo_,
	_AbstractListModel_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/lang/Object;Ljavax/swing/ListModel<TE;>;Ljava/io/Serializable;"
};

$Object* allocate$AbstractListModel($Class* clazz) {
	return $of($alloc(AbstractListModel));
}

int32_t AbstractListModel::hashCode() {
	 return this->$ListModel::hashCode();
}

bool AbstractListModel::equals(Object$* arg0) {
	 return this->$ListModel::equals(arg0);
}

$Object* AbstractListModel::clone() {
	 return this->$ListModel::clone();
}

$String* AbstractListModel::toString() {
	 return this->$ListModel::toString();
}

void AbstractListModel::finalize() {
	this->$ListModel::finalize();
}

void AbstractListModel::init$() {
	$set(this, listenerList, $new($EventListenerList));
}

void AbstractListModel::addListDataListener($ListDataListener* l) {
	$load($ListDataListener);
	$nc(this->listenerList)->add($ListDataListener::class$, l);
}

void AbstractListModel::removeListDataListener($ListDataListener* l) {
	$load($ListDataListener);
	$nc(this->listenerList)->remove($ListDataListener::class$, l);
}

$ListDataListenerArray* AbstractListModel::getListDataListeners() {
	$load($ListDataListener);
	return $fcast($ListDataListenerArray, $nc(this->listenerList)->getListeners($ListDataListener::class$));
}

void AbstractListModel::fireContentsChanged(Object$* source, int32_t index0, int32_t index1) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	$var($ListDataEvent, e, nullptr);
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($ListDataListener);
		if ($equals(listeners->get(i), $ListDataListener::class$)) {
			if (e == nullptr) {
				$assign(e, $new($ListDataEvent, source, $ListDataEvent::CONTENTS_CHANGED, index0, index1));
			}
			$nc(($cast($ListDataListener, listeners->get(i + 1))))->contentsChanged(e);
		}
	}
}

void AbstractListModel::fireIntervalAdded(Object$* source, int32_t index0, int32_t index1) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	$var($ListDataEvent, e, nullptr);
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($ListDataListener);
		if ($equals(listeners->get(i), $ListDataListener::class$)) {
			if (e == nullptr) {
				$assign(e, $new($ListDataEvent, source, $ListDataEvent::INTERVAL_ADDED, index0, index1));
			}
			$nc(($cast($ListDataListener, listeners->get(i + 1))))->intervalAdded(e);
		}
	}
}

void AbstractListModel::fireIntervalRemoved(Object$* source, int32_t index0, int32_t index1) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	$var($ListDataEvent, e, nullptr);
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($ListDataListener);
		if ($equals(listeners->get(i), $ListDataListener::class$)) {
			if (e == nullptr) {
				$assign(e, $new($ListDataEvent, source, $ListDataEvent::INTERVAL_REMOVED, index0, index1));
			}
			$nc(($cast($ListDataListener, listeners->get(i + 1))))->intervalRemoved(e);
		}
	}
}

$EventListenerArray* AbstractListModel::getListeners($Class* listenerType) {
	return $nc(this->listenerList)->getListeners(listenerType);
}

AbstractListModel::AbstractListModel() {
}

$Class* AbstractListModel::load$($String* name, bool initialize) {
	$loadClass(AbstractListModel, name, initialize, &_AbstractListModel_ClassInfo_, allocate$AbstractListModel);
	return class$;
}

$Class* AbstractListModel::class$ = nullptr;

	} // swing
} // javax