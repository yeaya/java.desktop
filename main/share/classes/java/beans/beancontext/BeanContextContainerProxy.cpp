#include <java/beans/beancontext/BeanContextContainerProxy.h>

#include <java/awt/Container.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {
		namespace beancontext {

$MethodInfo _BeanContextContainerProxy_MethodInfo_[] = {
	{"getContainer", "()Ljava/awt/Container;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _BeanContextContainerProxy_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.beans.beancontext.BeanContextContainerProxy",
	nullptr,
	nullptr,
	nullptr,
	_BeanContextContainerProxy_MethodInfo_
};

$Object* allocate$BeanContextContainerProxy($Class* clazz) {
	return $of($alloc(BeanContextContainerProxy));
}

$Class* BeanContextContainerProxy::load$($String* name, bool initialize) {
	$loadClass(BeanContextContainerProxy, name, initialize, &_BeanContextContainerProxy_ClassInfo_, allocate$BeanContextContainerProxy);
	return class$;
}

$Class* BeanContextContainerProxy::class$ = nullptr;

		} // beancontext
	} // beans
} // java