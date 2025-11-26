#ifndef _java_beans_SimpleBeanInfo_h_
#define _java_beans_SimpleBeanInfo_h_
//$ class java.beans.SimpleBeanInfo
//$ extends java.beans.BeanInfo

#include <java/beans/BeanInfo.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Image;
	}
}
namespace java {
	namespace beans {
		class BeanDescriptor;
		class EventSetDescriptor;
		class MethodDescriptor;
		class PropertyDescriptor;
	}
}

namespace java {
	namespace beans {

class $import SimpleBeanInfo : public ::java::beans::BeanInfo {
	$class(SimpleBeanInfo, $NO_CLASS_INIT, ::java::beans::BeanInfo)
public:
	SimpleBeanInfo();
	void init$();
	virtual $Array<::java::beans::BeanInfo>* getAdditionalBeanInfo() override;
	virtual ::java::beans::BeanDescriptor* getBeanDescriptor() override;
	virtual int32_t getDefaultEventIndex() override;
	virtual int32_t getDefaultPropertyIndex() override;
	virtual $Array<::java::beans::EventSetDescriptor>* getEventSetDescriptors() override;
	virtual ::java::awt::Image* getIcon(int32_t iconKind) override;
	virtual $Array<::java::beans::MethodDescriptor>* getMethodDescriptors() override;
	virtual $Array<::java::beans::PropertyDescriptor>* getPropertyDescriptors() override;
	::java::awt::Image* lambda$loadStandardImage$0($String* resourceName);
	::java::awt::Image* loadImage($String* resourceName, $String* suffix);
	virtual ::java::awt::Image* loadImage($String* resourceName);
	::java::awt::Image* loadStandardImage($String* resourceName);
};

	} // beans
} // java

#endif // _java_beans_SimpleBeanInfo_h_