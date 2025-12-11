#include <java/beans/beancontext/BeanContextServiceProviderBeanInfo.h>

#include <java/beans/BeanInfo.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {
		namespace beancontext {

$MethodInfo _BeanContextServiceProviderBeanInfo_MethodInfo_[] = {
	{"getServicesBeanInfo", "()[Ljava/beans/BeanInfo;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _BeanContextServiceProviderBeanInfo_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.beans.beancontext.BeanContextServiceProviderBeanInfo",
	nullptr,
	"java.beans.BeanInfo",
	nullptr,
	_BeanContextServiceProviderBeanInfo_MethodInfo_
};

$Object* allocate$BeanContextServiceProviderBeanInfo($Class* clazz) {
	return $of($alloc(BeanContextServiceProviderBeanInfo));
}

$Class* BeanContextServiceProviderBeanInfo::load$($String* name, bool initialize) {
	$loadClass(BeanContextServiceProviderBeanInfo, name, initialize, &_BeanContextServiceProviderBeanInfo_ClassInfo_, allocate$BeanContextServiceProviderBeanInfo);
	return class$;
}

$Class* BeanContextServiceProviderBeanInfo::class$ = nullptr;

		} // beancontext
	} // beans
} // java