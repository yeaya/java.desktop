#ifndef _java_beans_BeanInfo_h_
#define _java_beans_BeanInfo_h_
//$ interface java.beans.BeanInfo
//$ extends java.lang.Object

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

class $import BeanInfo : public ::java::lang::Object {
	$interface(BeanInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Array<::java::beans::BeanInfo>* getAdditionalBeanInfo() {return nullptr;}
	virtual ::java::beans::BeanDescriptor* getBeanDescriptor() {return nullptr;}
	virtual int32_t getDefaultEventIndex() {return 0;}
	virtual int32_t getDefaultPropertyIndex() {return 0;}
	virtual $Array<::java::beans::EventSetDescriptor>* getEventSetDescriptors() {return nullptr;}
	virtual ::java::awt::Image* getIcon(int32_t iconKind) {return nullptr;}
	virtual $Array<::java::beans::MethodDescriptor>* getMethodDescriptors() {return nullptr;}
	virtual $Array<::java::beans::PropertyDescriptor>* getPropertyDescriptors() {return nullptr;}
	static const int32_t ICON_COLOR_16x16 = 1;
	static const int32_t ICON_COLOR_32x32 = 2;
	static const int32_t ICON_MONO_16x16 = 3;
	static const int32_t ICON_MONO_32x32 = 4;
};

	} // beans
} // java

#endif // _java_beans_BeanInfo_h_