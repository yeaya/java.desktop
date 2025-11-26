#include <java/beans/beancontext/BeanContextServicesSupport$BCSSProxyServiceProvider.h>

#include <java/beans/beancontext/BeanContext.h>
#include <java/beans/beancontext/BeanContextChild.h>
#include <java/beans/beancontext/BeanContextServiceProvider.h>
#include <java/beans/beancontext/BeanContextServiceRevokedEvent.h>
#include <java/beans/beancontext/BeanContextServiceRevokedListener.h>
#include <java/beans/beancontext/BeanContextServices.h>
#include <java/beans/beancontext/BeanContextServicesSupport$BCSSChild.h>
#include <java/beans/beancontext/BeanContextServicesSupport.h>
#include <java/util/Iterator.h>
#include <java/util/TooManyListenersException.h>
#include <jcpp.h>

using $BeanContext = ::java::beans::beancontext::BeanContext;
using $BeanContextChild = ::java::beans::beancontext::BeanContextChild;
using $BeanContextServiceProvider = ::java::beans::beancontext::BeanContextServiceProvider;
using $BeanContextServiceRevokedEvent = ::java::beans::beancontext::BeanContextServiceRevokedEvent;
using $BeanContextServiceRevokedListener = ::java::beans::beancontext::BeanContextServiceRevokedListener;
using $BeanContextServices = ::java::beans::beancontext::BeanContextServices;
using $BeanContextServicesSupport = ::java::beans::beancontext::BeanContextServicesSupport;
using $BeanContextServicesSupport$BCSSChild = ::java::beans::beancontext::BeanContextServicesSupport$BCSSChild;
using $BeanContextSupport = ::java::beans::beancontext::BeanContextSupport;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $TooManyListenersException = ::java::util::TooManyListenersException;

namespace java {
	namespace beans {
		namespace beancontext {

$FieldInfo _BeanContextServicesSupport$BCSSProxyServiceProvider_FieldInfo_[] = {
	{"this$0", "Ljava/beans/beancontext/BeanContextServicesSupport;", nullptr, $FINAL | $SYNTHETIC, $field(BeanContextServicesSupport$BCSSProxyServiceProvider, this$0)},
	{"nestingCtxt", "Ljava/beans/beancontext/BeanContextServices;", nullptr, $PRIVATE, $field(BeanContextServicesSupport$BCSSProxyServiceProvider, nestingCtxt)},
	{}
};

$MethodInfo _BeanContextServicesSupport$BCSSProxyServiceProvider_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/beans/beancontext/BeanContextServicesSupport;Ljava/beans/beancontext/BeanContextServices;)V", nullptr, 0, $method(static_cast<void(BeanContextServicesSupport$BCSSProxyServiceProvider::*)($BeanContextServicesSupport*,$BeanContextServices*)>(&BeanContextServicesSupport$BCSSProxyServiceProvider::init$))},
	{"getCurrentServiceSelectors", "(Ljava/beans/beancontext/BeanContextServices;Ljava/lang/Class;)Ljava/util/Iterator;", "(Ljava/beans/beancontext/BeanContextServices;Ljava/lang/Class<*>;)Ljava/util/Iterator<*>;", $PUBLIC},
	{"getService", "(Ljava/beans/beancontext/BeanContextServices;Ljava/lang/Object;Ljava/lang/Class;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljava/beans/beancontext/BeanContextServices;Ljava/lang/Object;Ljava/lang/Class<*>;Ljava/lang/Object;)Ljava/lang/Object;", $PUBLIC},
	{"releaseService", "(Ljava/beans/beancontext/BeanContextServices;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"serviceRevoked", "(Ljava/beans/beancontext/BeanContextServiceRevokedEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BeanContextServicesSupport$BCSSProxyServiceProvider_InnerClassesInfo_[] = {
	{"java.beans.beancontext.BeanContextServicesSupport$BCSSProxyServiceProvider", "java.beans.beancontext.BeanContextServicesSupport", "BCSSProxyServiceProvider", $PROTECTED},
	{}
};

$ClassInfo _BeanContextServicesSupport$BCSSProxyServiceProvider_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.beans.beancontext.BeanContextServicesSupport$BCSSProxyServiceProvider",
	"java.lang.Object",
	"java.beans.beancontext.BeanContextServiceProvider,java.beans.beancontext.BeanContextServiceRevokedListener",
	_BeanContextServicesSupport$BCSSProxyServiceProvider_FieldInfo_,
	_BeanContextServicesSupport$BCSSProxyServiceProvider_MethodInfo_,
	nullptr,
	nullptr,
	_BeanContextServicesSupport$BCSSProxyServiceProvider_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.beans.beancontext.BeanContextServicesSupport"
};

$Object* allocate$BeanContextServicesSupport$BCSSProxyServiceProvider($Class* clazz) {
	return $of($alloc(BeanContextServicesSupport$BCSSProxyServiceProvider));
}

int32_t BeanContextServicesSupport$BCSSProxyServiceProvider::hashCode() {
	 return this->$BeanContextServiceProvider::hashCode();
}

bool BeanContextServicesSupport$BCSSProxyServiceProvider::equals(Object$* arg0) {
	 return this->$BeanContextServiceProvider::equals(arg0);
}

$Object* BeanContextServicesSupport$BCSSProxyServiceProvider::clone() {
	 return this->$BeanContextServiceProvider::clone();
}

$String* BeanContextServicesSupport$BCSSProxyServiceProvider::toString() {
	 return this->$BeanContextServiceProvider::toString();
}

void BeanContextServicesSupport$BCSSProxyServiceProvider::finalize() {
	this->$BeanContextServiceProvider::finalize();
}

void BeanContextServicesSupport$BCSSProxyServiceProvider::init$($BeanContextServicesSupport* this$0, $BeanContextServices* bcs) {
	$set(this, this$0, this$0);
	$set(this, nestingCtxt, bcs);
}

$Object* BeanContextServicesSupport$BCSSProxyServiceProvider::getService($BeanContextServices* bcs, Object$* requestor, $Class* serviceClass, Object$* serviceSelector) {
	$var($Object, service, nullptr);
	try {
		$assign(service, $nc(this->nestingCtxt)->getService(bcs, requestor, serviceClass, serviceSelector, this));
	} catch ($TooManyListenersException& tmle) {
		return $of(nullptr);
	}
	return $of(service);
}

void BeanContextServicesSupport$BCSSProxyServiceProvider::releaseService($BeanContextServices* bcs, Object$* requestor, Object$* service) {
	$nc(this->nestingCtxt)->releaseService(bcs, requestor, service);
}

$Iterator* BeanContextServicesSupport$BCSSProxyServiceProvider::getCurrentServiceSelectors($BeanContextServices* bcs, $Class* serviceClass) {
	return $nc(this->nestingCtxt)->getCurrentServiceSelectors(serviceClass);
}

void BeanContextServicesSupport$BCSSProxyServiceProvider::serviceRevoked($BeanContextServiceRevokedEvent* bcsre) {
	$useLocalCurrentObjectStackCache();
	$var($Iterator, i, this->this$0->bcsChildren());
	while ($nc(i)->hasNext()) {
		$Class* var$0 = $nc(bcsre)->getServiceClass();
		$nc(($cast($BeanContextServicesSupport$BCSSChild, $(i->next()))))->revokeService(var$0, true, bcsre->isCurrentServiceInvalidNow());
	}
}

BeanContextServicesSupport$BCSSProxyServiceProvider::BeanContextServicesSupport$BCSSProxyServiceProvider() {
}

$Class* BeanContextServicesSupport$BCSSProxyServiceProvider::load$($String* name, bool initialize) {
	$loadClass(BeanContextServicesSupport$BCSSProxyServiceProvider, name, initialize, &_BeanContextServicesSupport$BCSSProxyServiceProvider_ClassInfo_, allocate$BeanContextServicesSupport$BCSSProxyServiceProvider);
	return class$;
}

$Class* BeanContextServicesSupport$BCSSProxyServiceProvider::class$ = nullptr;

		} // beancontext
	} // beans
} // java