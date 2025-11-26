#ifndef _java_beans_beancontext_BeanContextProxy_h_
#define _java_beans_beancontext_BeanContextProxy_h_
//$ interface java.beans.beancontext.BeanContextProxy
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace beans {
		namespace beancontext {
			class BeanContextChild;
		}
	}
}

namespace java {
	namespace beans {
		namespace beancontext {

class $export BeanContextProxy : public ::java::lang::Object {
	$interface(BeanContextProxy, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::beans::beancontext::BeanContextChild* getBeanContextProxy() {return nullptr;}
};

		} // beancontext
	} // beans
} // java

#endif // _java_beans_beancontext_BeanContextProxy_h_