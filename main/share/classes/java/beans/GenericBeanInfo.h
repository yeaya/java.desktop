#ifndef _java_beans_GenericBeanInfo_h_
#define _java_beans_GenericBeanInfo_h_
//$ class java.beans.GenericBeanInfo
//$ extends java.beans.SimpleBeanInfo

#include <java/beans/SimpleBeanInfo.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Image;
	}
}
namespace java {
	namespace beans {
		class BeanDescriptor;
		class BeanInfo;
		class EventSetDescriptor;
		class MethodDescriptor;
		class PropertyDescriptor;
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class Reference;
		}
	}
}

namespace java {
	namespace beans {

class GenericBeanInfo : public ::java::beans::SimpleBeanInfo {
	$class(GenericBeanInfo, $NO_CLASS_INIT, ::java::beans::SimpleBeanInfo)
public:
	GenericBeanInfo();
	void init$(::java::beans::BeanDescriptor* beanDescriptor, $Array<::java::beans::EventSetDescriptor>* events, int32_t defaultEvent, $Array<::java::beans::PropertyDescriptor>* properties, int32_t defaultProperty, $Array<::java::beans::MethodDescriptor>* methods, ::java::beans::BeanInfo* targetBeanInfo);
	void init$(::java::beans::GenericBeanInfo* old);
	virtual ::java::beans::BeanDescriptor* getBeanDescriptor() override;
	virtual int32_t getDefaultEventIndex() override;
	virtual int32_t getDefaultPropertyIndex() override;
	virtual $Array<::java::beans::EventSetDescriptor>* getEventSetDescriptors() override;
	virtual ::java::awt::Image* getIcon(int32_t iconKind) override;
	virtual $Array<::java::beans::MethodDescriptor>* getMethodDescriptors() override;
	virtual $Array<::java::beans::PropertyDescriptor>* getPropertyDescriptors() override;
	::java::beans::BeanInfo* getTargetBeanInfo();
	::java::beans::BeanDescriptor* beanDescriptor = nullptr;
	$Array<::java::beans::EventSetDescriptor>* events = nullptr;
	int32_t defaultEvent = 0;
	$Array<::java::beans::PropertyDescriptor>* properties = nullptr;
	int32_t defaultProperty = 0;
	$Array<::java::beans::MethodDescriptor>* methods = nullptr;
	::java::lang::ref::Reference* targetBeanInfoRef = nullptr;
};

	} // beans
} // java

#endif // _java_beans_GenericBeanInfo_h_