#ifndef _java_beans_beancontext_BeanContextChildComponentProxy_h_
#define _java_beans_beancontext_BeanContextChildComponentProxy_h_
//$ interface java.beans.beancontext.BeanContextChildComponentProxy
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Component;
	}
}

namespace java {
	namespace beans {
		namespace beancontext {

class $import BeanContextChildComponentProxy : public ::java::lang::Object {
	$interface(BeanContextChildComponentProxy, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::awt::Component* getComponent() {return nullptr;}
};

		} // beancontext
	} // beans
} // java

#endif // _java_beans_beancontext_BeanContextChildComponentProxy_h_