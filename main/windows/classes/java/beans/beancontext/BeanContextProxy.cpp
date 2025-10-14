#include <java/beans/beancontext/BeanContextProxy.h>

#include <java/beans/beancontext/BeanContextChild.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $BeanContextChild = ::java::beans::beancontext::BeanContextChild;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {
		namespace beancontext {

$MethodInfo _BeanContextProxy_MethodInfo_[] = {
	{"getBeanContextProxy", "()Ljava/beans/beancontext/BeanContextChild;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _BeanContextProxy_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.beans.beancontext.BeanContextProxy",
	nullptr,
	nullptr,
	nullptr,
	_BeanContextProxy_MethodInfo_
};

$Object* allocate$BeanContextProxy($Class* clazz) {
	return $of($alloc(BeanContextProxy));
}

$Class* BeanContextProxy::load$($String* name, bool initialize) {
	$loadClass(BeanContextProxy, name, initialize, &_BeanContextProxy_ClassInfo_, allocate$BeanContextProxy);
	return class$;
}

$Class* BeanContextProxy::class$ = nullptr;

		} // beancontext
	} // beans
} // java