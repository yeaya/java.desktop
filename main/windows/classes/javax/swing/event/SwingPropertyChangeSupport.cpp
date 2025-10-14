#include <javax/swing/event/SwingPropertyChangeSupport.h>

#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeSupport.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/event/SwingPropertyChangeSupport$1.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeSupport = ::java::beans::PropertyChangeSupport;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $SwingPropertyChangeSupport$1 = ::javax::swing::event::SwingPropertyChangeSupport$1;

namespace javax {
	namespace swing {
		namespace event {

$FieldInfo _SwingPropertyChangeSupport_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SwingPropertyChangeSupport, serialVersionUID)},
	{"notifyOnEDT", "Z", nullptr, $PRIVATE | $FINAL, $field(SwingPropertyChangeSupport, notifyOnEDT)},
	{}
};

$MethodInfo _SwingPropertyChangeSupport_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(SwingPropertyChangeSupport::*)(Object$*)>(&SwingPropertyChangeSupport::init$))},
	{"<init>", "(Ljava/lang/Object;Z)V", nullptr, $PUBLIC, $method(static_cast<void(SwingPropertyChangeSupport::*)(Object$*,bool)>(&SwingPropertyChangeSupport::init$))},
	{"firePropertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"isNotifyOnEDT", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(SwingPropertyChangeSupport::*)()>(&SwingPropertyChangeSupport::isNotifyOnEDT))},
	{}
};

$InnerClassInfo _SwingPropertyChangeSupport_InnerClassesInfo_[] = {
	{"javax.swing.event.SwingPropertyChangeSupport$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SwingPropertyChangeSupport_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.swing.event.SwingPropertyChangeSupport",
	"java.beans.PropertyChangeSupport",
	nullptr,
	_SwingPropertyChangeSupport_FieldInfo_,
	_SwingPropertyChangeSupport_MethodInfo_,
	nullptr,
	nullptr,
	_SwingPropertyChangeSupport_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.event.SwingPropertyChangeSupport$1"
};

$Object* allocate$SwingPropertyChangeSupport($Class* clazz) {
	return $of($alloc(SwingPropertyChangeSupport));
}

void SwingPropertyChangeSupport::init$(Object$* sourceBean) {
	SwingPropertyChangeSupport::init$(sourceBean, false);
}

void SwingPropertyChangeSupport::init$(Object$* sourceBean, bool notifyOnEDT) {
	$PropertyChangeSupport::init$(sourceBean);
	this->notifyOnEDT = notifyOnEDT;
}

void SwingPropertyChangeSupport::firePropertyChange($PropertyChangeEvent* evt) {
	if (evt == nullptr) {
		$throwNew($NullPointerException);
	}
	bool var$0 = !isNotifyOnEDT();
	if (var$0 || $SwingUtilities::isEventDispatchThread()) {
		$PropertyChangeSupport::firePropertyChange(evt);
	} else {
		$SwingUtilities::invokeLater($$new($SwingPropertyChangeSupport$1, this, evt));
	}
}

bool SwingPropertyChangeSupport::isNotifyOnEDT() {
	return this->notifyOnEDT;
}

SwingPropertyChangeSupport::SwingPropertyChangeSupport() {
}

$Class* SwingPropertyChangeSupport::load$($String* name, bool initialize) {
	$loadClass(SwingPropertyChangeSupport, name, initialize, &_SwingPropertyChangeSupport_ClassInfo_, allocate$SwingPropertyChangeSupport);
	return class$;
}

$Class* SwingPropertyChangeSupport::class$ = nullptr;

		} // event
	} // swing
} // javax