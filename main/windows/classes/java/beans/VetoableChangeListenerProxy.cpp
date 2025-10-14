#include <java/beans/VetoableChangeListenerProxy.h>

#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/VetoableChangeListener.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventListener.h>
#include <java/util/EventListenerProxy.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $VetoableChangeListener = ::java::beans::VetoableChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;
using $EventListenerProxy = ::java::util::EventListenerProxy;

namespace java {
	namespace beans {

$FieldInfo _VetoableChangeListenerProxy_FieldInfo_[] = {
	{"propertyName", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(VetoableChangeListenerProxy, propertyName)},
	{}
};

$MethodInfo _VetoableChangeListenerProxy_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/String;Ljava/beans/VetoableChangeListener;)V", nullptr, $PUBLIC, $method(static_cast<void(VetoableChangeListenerProxy::*)($String*,$VetoableChangeListener*)>(&VetoableChangeListenerProxy::init$))},
	{"getPropertyName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"vetoableChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, nullptr, "java.beans.PropertyVetoException"},
	{}
};

$ClassInfo _VetoableChangeListenerProxy_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.beans.VetoableChangeListenerProxy",
	"java.util.EventListenerProxy",
	"java.beans.VetoableChangeListener",
	_VetoableChangeListenerProxy_FieldInfo_,
	_VetoableChangeListenerProxy_MethodInfo_,
	"Ljava/util/EventListenerProxy<Ljava/beans/VetoableChangeListener;>;Ljava/beans/VetoableChangeListener;"
};

$Object* allocate$VetoableChangeListenerProxy($Class* clazz) {
	return $of($alloc(VetoableChangeListenerProxy));
}

int32_t VetoableChangeListenerProxy::hashCode() {
	 return this->$EventListenerProxy::hashCode();
}

bool VetoableChangeListenerProxy::equals(Object$* arg0) {
	 return this->$EventListenerProxy::equals(arg0);
}

$Object* VetoableChangeListenerProxy::clone() {
	 return this->$EventListenerProxy::clone();
}

$String* VetoableChangeListenerProxy::toString() {
	 return this->$EventListenerProxy::toString();
}

void VetoableChangeListenerProxy::finalize() {
	this->$EventListenerProxy::finalize();
}

void VetoableChangeListenerProxy::init$($String* propertyName, $VetoableChangeListener* listener) {
	$EventListenerProxy::init$(listener);
	$set(this, propertyName, propertyName);
}

void VetoableChangeListenerProxy::vetoableChange($PropertyChangeEvent* event) {
	$nc(($cast($VetoableChangeListener, $(getListener()))))->vetoableChange(event);
}

$String* VetoableChangeListenerProxy::getPropertyName() {
	return this->propertyName;
}

VetoableChangeListenerProxy::VetoableChangeListenerProxy() {
}

$Class* VetoableChangeListenerProxy::load$($String* name, bool initialize) {
	$loadClass(VetoableChangeListenerProxy, name, initialize, &_VetoableChangeListenerProxy_ClassInfo_, allocate$VetoableChangeListenerProxy);
	return class$;
}

$Class* VetoableChangeListenerProxy::class$ = nullptr;

	} // beans
} // java