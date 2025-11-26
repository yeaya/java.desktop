#ifndef _java_beans_beancontext_BeanContextServiceProviderBeanInfo_h_
#define _java_beans_beancontext_BeanContextServiceProviderBeanInfo_h_
//$ interface java.beans.beancontext.BeanContextServiceProviderBeanInfo
//$ extends java.beans.BeanInfo

#include <java/beans/BeanInfo.h>
#include <java/lang/Array.h>

namespace java {
	namespace beans {
		namespace beancontext {

class $export BeanContextServiceProviderBeanInfo : public ::java::beans::BeanInfo {
	$interface(BeanContextServiceProviderBeanInfo, $NO_CLASS_INIT, ::java::beans::BeanInfo)
public:
	virtual $Array<::java::beans::BeanInfo>* getServicesBeanInfo() {return nullptr;}
};

		} // beancontext
	} // beans
} // java

#endif // _java_beans_beancontext_BeanContextServiceProviderBeanInfo_h_