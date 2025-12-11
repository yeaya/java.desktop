#include <java/beans/beancontext/BeanContextServiceAvailableEvent.h>

#include <java/beans/beancontext/BeanContext.h>
#include <java/beans/beancontext/BeanContextEvent.h>
#include <java/beans/beancontext/BeanContextServices.h>
#include <java/util/EventObject.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $BeanContext = ::java::beans::beancontext::BeanContext;
using $BeanContextEvent = ::java::beans::beancontext::BeanContextEvent;
using $BeanContextServices = ::java::beans::beancontext::BeanContextServices;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;

namespace java {
	namespace beans {
		namespace beancontext {

$FieldInfo _BeanContextServiceAvailableEvent_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BeanContextServiceAvailableEvent, serialVersionUID)},
	{"serviceClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PROTECTED, $field(BeanContextServiceAvailableEvent, serviceClass)},
	{}
};

$MethodInfo _BeanContextServiceAvailableEvent_MethodInfo_[] = {
	{"<init>", "(Ljava/beans/beancontext/BeanContextServices;Ljava/lang/Class;)V", "(Ljava/beans/beancontext/BeanContextServices;Ljava/lang/Class<*>;)V", $PUBLIC, $method(static_cast<void(BeanContextServiceAvailableEvent::*)($BeanContextServices*,$Class*)>(&BeanContextServiceAvailableEvent::init$))},
	{"getCurrentServiceSelectors", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<*>;", $PUBLIC},
	{"getServiceClass", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC},
	{"getSourceAsBeanContextServices", "()Ljava/beans/beancontext/BeanContextServices;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _BeanContextServiceAvailableEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.beans.beancontext.BeanContextServiceAvailableEvent",
	"java.beans.beancontext.BeanContextEvent",
	nullptr,
	_BeanContextServiceAvailableEvent_FieldInfo_,
	_BeanContextServiceAvailableEvent_MethodInfo_
};

$Object* allocate$BeanContextServiceAvailableEvent($Class* clazz) {
	return $of($alloc(BeanContextServiceAvailableEvent));
}

void BeanContextServiceAvailableEvent::init$($BeanContextServices* bcs, $Class* sc) {
	$BeanContextEvent::init$(static_cast<$BeanContext*>(bcs));
	$set(this, serviceClass, sc);
}

$BeanContextServices* BeanContextServiceAvailableEvent::getSourceAsBeanContextServices() {
	return $cast($BeanContextServices, getBeanContext());
}

$Class* BeanContextServiceAvailableEvent::getServiceClass() {
	return this->serviceClass;
}

$Iterator* BeanContextServiceAvailableEvent::getCurrentServiceSelectors() {
	return $nc(($cast($BeanContextServices, $(getSource()))))->getCurrentServiceSelectors(this->serviceClass);
}

BeanContextServiceAvailableEvent::BeanContextServiceAvailableEvent() {
}

$Class* BeanContextServiceAvailableEvent::load$($String* name, bool initialize) {
	$loadClass(BeanContextServiceAvailableEvent, name, initialize, &_BeanContextServiceAvailableEvent_ClassInfo_, allocate$BeanContextServiceAvailableEvent);
	return class$;
}

$Class* BeanContextServiceAvailableEvent::class$ = nullptr;

		} // beancontext
	} // beans
} // java