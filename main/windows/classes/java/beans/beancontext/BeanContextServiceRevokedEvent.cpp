#include <java/beans/beancontext/BeanContextServiceRevokedEvent.h>

#include <java/beans/beancontext/BeanContext.h>
#include <java/beans/beancontext/BeanContextEvent.h>
#include <java/beans/beancontext/BeanContextServices.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $BeanContext = ::java::beans::beancontext::BeanContext;
using $BeanContextEvent = ::java::beans::beancontext::BeanContextEvent;
using $BeanContextServices = ::java::beans::beancontext::BeanContextServices;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {
		namespace beancontext {

$FieldInfo _BeanContextServiceRevokedEvent_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BeanContextServiceRevokedEvent, serialVersionUID)},
	{"serviceClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PROTECTED, $field(BeanContextServiceRevokedEvent, serviceClass)},
	{"invalidateRefs", "Z", nullptr, $PRIVATE, $field(BeanContextServiceRevokedEvent, invalidateRefs)},
	{}
};

$MethodInfo _BeanContextServiceRevokedEvent_MethodInfo_[] = {
	{"<init>", "(Ljava/beans/beancontext/BeanContextServices;Ljava/lang/Class;Z)V", "(Ljava/beans/beancontext/BeanContextServices;Ljava/lang/Class<*>;Z)V", $PUBLIC, $method(static_cast<void(BeanContextServiceRevokedEvent::*)($BeanContextServices*,$Class*,bool)>(&BeanContextServiceRevokedEvent::init$))},
	{"getServiceClass", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC},
	{"getSourceAsBeanContextServices", "()Ljava/beans/beancontext/BeanContextServices;", nullptr, $PUBLIC},
	{"isCurrentServiceInvalidNow", "()Z", nullptr, $PUBLIC},
	{"isServiceClass", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;)Z", $PUBLIC},
	{}
};

$ClassInfo _BeanContextServiceRevokedEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.beans.beancontext.BeanContextServiceRevokedEvent",
	"java.beans.beancontext.BeanContextEvent",
	nullptr,
	_BeanContextServiceRevokedEvent_FieldInfo_,
	_BeanContextServiceRevokedEvent_MethodInfo_
};

$Object* allocate$BeanContextServiceRevokedEvent($Class* clazz) {
	return $of($alloc(BeanContextServiceRevokedEvent));
}

void BeanContextServiceRevokedEvent::init$($BeanContextServices* bcs, $Class* sc, bool invalidate) {
	$BeanContextEvent::init$(static_cast<$BeanContext*>(bcs));
	$set(this, serviceClass, sc);
	this->invalidateRefs = invalidate;
}

$BeanContextServices* BeanContextServiceRevokedEvent::getSourceAsBeanContextServices() {
	return $cast($BeanContextServices, getBeanContext());
}

$Class* BeanContextServiceRevokedEvent::getServiceClass() {
	return this->serviceClass;
}

bool BeanContextServiceRevokedEvent::isServiceClass($Class* service) {
	return $nc($of(this->serviceClass))->equals(service);
}

bool BeanContextServiceRevokedEvent::isCurrentServiceInvalidNow() {
	return this->invalidateRefs;
}

BeanContextServiceRevokedEvent::BeanContextServiceRevokedEvent() {
}

$Class* BeanContextServiceRevokedEvent::load$($String* name, bool initialize) {
	$loadClass(BeanContextServiceRevokedEvent, name, initialize, &_BeanContextServiceRevokedEvent_ClassInfo_, allocate$BeanContextServiceRevokedEvent);
	return class$;
}

$Class* BeanContextServiceRevokedEvent::class$ = nullptr;

		} // beancontext
	} // beans
} // java