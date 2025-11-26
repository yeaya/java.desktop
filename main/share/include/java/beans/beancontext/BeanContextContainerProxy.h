#ifndef _java_beans_beancontext_BeanContextContainerProxy_h_
#define _java_beans_beancontext_BeanContextContainerProxy_h_
//$ interface java.beans.beancontext.BeanContextContainerProxy
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Container;
	}
}

namespace java {
	namespace beans {
		namespace beancontext {

class $import BeanContextContainerProxy : public ::java::lang::Object {
	$interface(BeanContextContainerProxy, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::awt::Container* getContainer() {return nullptr;}
};

		} // beancontext
	} // beans
} // java

#endif // _java_beans_beancontext_BeanContextContainerProxy_h_