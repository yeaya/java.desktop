#include <java/beans/beancontext/BeanContextServicesListener.h>

#include <java/beans/beancontext/BeanContextServiceAvailableEvent.h>
#include <jcpp.h>

using $BeanContextServiceAvailableEvent = ::java::beans::beancontext::BeanContextServiceAvailableEvent;
using $BeanContextServiceRevokedListener = ::java::beans::beancontext::BeanContextServiceRevokedListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {
		namespace beancontext {

$MethodInfo _BeanContextServicesListener_MethodInfo_[] = {
	{"serviceAvailable", "(Ljava/beans/beancontext/BeanContextServiceAvailableEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _BeanContextServicesListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.beans.beancontext.BeanContextServicesListener",
	nullptr,
	"java.beans.beancontext.BeanContextServiceRevokedListener",
	nullptr,
	_BeanContextServicesListener_MethodInfo_
};

$Object* allocate$BeanContextServicesListener($Class* clazz) {
	return $of($alloc(BeanContextServicesListener));
}

$Class* BeanContextServicesListener::load$($String* name, bool initialize) {
	$loadClass(BeanContextServicesListener, name, initialize, &_BeanContextServicesListener_ClassInfo_, allocate$BeanContextServicesListener);
	return class$;
}

$Class* BeanContextServicesListener::class$ = nullptr;

		} // beancontext
	} // beans
} // java