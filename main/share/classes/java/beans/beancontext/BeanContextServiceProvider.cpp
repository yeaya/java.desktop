#include <java/beans/beancontext/BeanContextServiceProvider.h>

#include <java/beans/beancontext/BeanContextServices.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {
		namespace beancontext {

$MethodInfo _BeanContextServiceProvider_MethodInfo_[] = {
	{"getCurrentServiceSelectors", "(Ljava/beans/beancontext/BeanContextServices;Ljava/lang/Class;)Ljava/util/Iterator;", "(Ljava/beans/beancontext/BeanContextServices;Ljava/lang/Class<*>;)Ljava/util/Iterator<*>;", $PUBLIC | $ABSTRACT},
	{"getService", "(Ljava/beans/beancontext/BeanContextServices;Ljava/lang/Object;Ljava/lang/Class;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljava/beans/beancontext/BeanContextServices;Ljava/lang/Object;Ljava/lang/Class<*>;Ljava/lang/Object;)Ljava/lang/Object;", $PUBLIC | $ABSTRACT},
	{"releaseService", "(Ljava/beans/beancontext/BeanContextServices;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _BeanContextServiceProvider_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.beans.beancontext.BeanContextServiceProvider",
	nullptr,
	nullptr,
	nullptr,
	_BeanContextServiceProvider_MethodInfo_
};

$Object* allocate$BeanContextServiceProvider($Class* clazz) {
	return $of($alloc(BeanContextServiceProvider));
}

$Class* BeanContextServiceProvider::load$($String* name, bool initialize) {
	$loadClass(BeanContextServiceProvider, name, initialize, &_BeanContextServiceProvider_ClassInfo_, allocate$BeanContextServiceProvider);
	return class$;
}

$Class* BeanContextServiceProvider::class$ = nullptr;

		} // beancontext
	} // beans
} // java