#include <java/beans/beancontext/BeanContextServiceRevokedListener.h>

#include <java/beans/beancontext/BeanContextServiceRevokedEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {
		namespace beancontext {

$MethodInfo _BeanContextServiceRevokedListener_MethodInfo_[] = {
	{"serviceRevoked", "(Ljava/beans/beancontext/BeanContextServiceRevokedEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _BeanContextServiceRevokedListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.beans.beancontext.BeanContextServiceRevokedListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_BeanContextServiceRevokedListener_MethodInfo_
};

$Object* allocate$BeanContextServiceRevokedListener($Class* clazz) {
	return $of($alloc(BeanContextServiceRevokedListener));
}

$Class* BeanContextServiceRevokedListener::load$($String* name, bool initialize) {
	$loadClass(BeanContextServiceRevokedListener, name, initialize, &_BeanContextServiceRevokedListener_ClassInfo_, allocate$BeanContextServiceRevokedListener);
	return class$;
}

$Class* BeanContextServiceRevokedListener::class$ = nullptr;

		} // beancontext
	} // beans
} // java