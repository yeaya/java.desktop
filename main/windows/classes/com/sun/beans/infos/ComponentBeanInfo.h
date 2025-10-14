#ifndef _com_sun_beans_infos_ComponentBeanInfo_h_
#define _com_sun_beans_infos_ComponentBeanInfo_h_
//$ class com.sun.beans.infos.ComponentBeanInfo
//$ extends java.beans.SimpleBeanInfo

#include <java/beans/SimpleBeanInfo.h>
#include <java/lang/Array.h>

namespace java {
	namespace beans {
		class PropertyDescriptor;
	}
}

namespace com {
	namespace sun {
		namespace beans {
			namespace infos {

class ComponentBeanInfo : public ::java::beans::SimpleBeanInfo {
	$class(ComponentBeanInfo, 0, ::java::beans::SimpleBeanInfo)
public:
	ComponentBeanInfo();
	void init$();
	virtual $Array<::java::beans::PropertyDescriptor>* getPropertyDescriptors() override;
	static $Class* beanClass;
};

			} // infos
		} // beans
	} // sun
} // com

#endif // _com_sun_beans_infos_ComponentBeanInfo_h_