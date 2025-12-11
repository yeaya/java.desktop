#include <java/beans/beancontext/BeanContextChildComponentProxy.h>

#include <java/awt/Component.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {
		namespace beancontext {

$MethodInfo _BeanContextChildComponentProxy_MethodInfo_[] = {
	{"getComponent", "()Ljava/awt/Component;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _BeanContextChildComponentProxy_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.beans.beancontext.BeanContextChildComponentProxy",
	nullptr,
	nullptr,
	nullptr,
	_BeanContextChildComponentProxy_MethodInfo_
};

$Object* allocate$BeanContextChildComponentProxy($Class* clazz) {
	return $of($alloc(BeanContextChildComponentProxy));
}

$Class* BeanContextChildComponentProxy::load$($String* name, bool initialize) {
	$loadClass(BeanContextChildComponentProxy, name, initialize, &_BeanContextChildComponentProxy_ClassInfo_, allocate$BeanContextChildComponentProxy);
	return class$;
}

$Class* BeanContextChildComponentProxy::class$ = nullptr;

		} // beancontext
	} // beans
} // java