#include <java/beans/beancontext/BeanContextServiceRevokedListener.h>

#include <java/beans/beancontext/BeanContextServiceRevokedEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $BeanContextServiceRevokedEvent = ::java::beans::beancontext::BeanContextServiceRevokedEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;

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