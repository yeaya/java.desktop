#ifndef _java_beans_BeanDescriptor_h_
#define _java_beans_BeanDescriptor_h_
//$ class java.beans.BeanDescriptor
//$ extends java.beans.FeatureDescriptor

#include <java/beans/FeatureDescriptor.h>

namespace java {
	namespace lang {
		class StringBuilder;
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

class $export BeanDescriptor : public ::java::beans::FeatureDescriptor {
	$class(BeanDescriptor, $NO_CLASS_INIT, ::java::beans::FeatureDescriptor)
public:
	BeanDescriptor();
	void init$($Class* beanClass);
	void init$($Class* beanClass, $Class* customizerClass);
	void init$(::java::beans::BeanDescriptor* old);
	virtual void appendTo(::java::lang::StringBuilder* sb) override;
	virtual $Class* getBeanClass();
	virtual $Class* getCustomizerClass();
	::java::lang::ref::Reference* beanClassRef = nullptr;
	::java::lang::ref::Reference* customizerClassRef = nullptr;
};

	} // beans
} // java

#endif // _java_beans_BeanDescriptor_h_