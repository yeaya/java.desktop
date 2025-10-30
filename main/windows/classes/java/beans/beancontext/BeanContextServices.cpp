#include <java/beans/beancontext/BeanContextServices.h>

#include <java/beans/beancontext/BeanContext.h>
#include <java/beans/beancontext/BeanContextChild.h>
#include <java/beans/beancontext/BeanContextServiceProvider.h>
#include <java/beans/beancontext/BeanContextServiceRevokedListener.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $BeanContext = ::java::beans::beancontext::BeanContext;
using $BeanContextChild = ::java::beans::beancontext::BeanContextChild;
using $BeanContextServiceProvider = ::java::beans::beancontext::BeanContextServiceProvider;
using $BeanContextServiceRevokedListener = ::java::beans::beancontext::BeanContextServiceRevokedListener;
using $BeanContextServicesListener = ::java::beans::beancontext::BeanContextServicesListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;

namespace java {
	namespace beans {
		namespace beancontext {

$MethodInfo _BeanContextServices_MethodInfo_[] = {
	{"addBeanContextServicesListener", "(Ljava/beans/beancontext/BeanContextServicesListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"addService", "(Ljava/lang/Class;Ljava/beans/beancontext/BeanContextServiceProvider;)Z", "(Ljava/lang/Class<*>;Ljava/beans/beancontext/BeanContextServiceProvider;)Z", $PUBLIC | $ABSTRACT},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"getCurrentServiceClasses", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<*>;", $PUBLIC | $ABSTRACT},
	{"getCurrentServiceSelectors", "(Ljava/lang/Class;)Ljava/util/Iterator;", "(Ljava/lang/Class<*>;)Ljava/util/Iterator<*>;", $PUBLIC | $ABSTRACT},
	{"getService", "(Ljava/beans/beancontext/BeanContextChild;Ljava/lang/Object;Ljava/lang/Class;Ljava/lang/Object;Ljava/beans/beancontext/BeanContextServiceRevokedListener;)Ljava/lang/Object;", "(Ljava/beans/beancontext/BeanContextChild;Ljava/lang/Object;Ljava/lang/Class<*>;Ljava/lang/Object;Ljava/beans/beancontext/BeanContextServiceRevokedListener;)Ljava/lang/Object;", $PUBLIC | $ABSTRACT, nullptr, "java.util.TooManyListenersException"},
	{"hasService", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;)Z", $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"releaseService", "(Ljava/beans/beancontext/BeanContextChild;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"removeBeanContextServicesListener", "(Ljava/beans/beancontext/BeanContextServicesListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"revokeService", "(Ljava/lang/Class;Ljava/beans/beancontext/BeanContextServiceProvider;Z)V", "(Ljava/lang/Class<*>;Ljava/beans/beancontext/BeanContextServiceProvider;Z)V", $PUBLIC | $ABSTRACT},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _BeanContextServices_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.beans.beancontext.BeanContextServices",
	nullptr,
	"java.beans.beancontext.BeanContext,java.beans.beancontext.BeanContextServicesListener",
	nullptr,
	_BeanContextServices_MethodInfo_
};

$Object* allocate$BeanContextServices($Class* clazz) {
	return $of($alloc(BeanContextServices));
}

int32_t BeanContextServices::hashCode() {
	 return this->$BeanContext::hashCode();
}

bool BeanContextServices::equals(Object$* arg0) {
	 return this->$BeanContext::equals(arg0);
}

$Object* BeanContextServices::clone() {
	 return this->$BeanContext::clone();
}

$String* BeanContextServices::toString() {
	 return this->$BeanContext::toString();
}

void BeanContextServices::finalize() {
	this->$BeanContext::finalize();
}

$Class* BeanContextServices::load$($String* name, bool initialize) {
	$loadClass(BeanContextServices, name, initialize, &_BeanContextServices_ClassInfo_, allocate$BeanContextServices);
	return class$;
}

$Class* BeanContextServices::class$ = nullptr;

		} // beancontext
	} // beans
} // java