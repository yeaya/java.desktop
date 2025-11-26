#ifndef _java_beans_beancontext_BeanContextServicesListener_h_
#define _java_beans_beancontext_BeanContextServicesListener_h_
//$ interface java.beans.beancontext.BeanContextServicesListener
//$ extends java.beans.beancontext.BeanContextServiceRevokedListener

#include <java/beans/beancontext/BeanContextServiceRevokedListener.h>

namespace java {
	namespace beans {
		namespace beancontext {
			class BeanContextServiceAvailableEvent;
		}
	}
}

namespace java {
	namespace beans {
		namespace beancontext {

class $export BeanContextServicesListener : public ::java::beans::beancontext::BeanContextServiceRevokedListener {
	$interface(BeanContextServicesListener, $NO_CLASS_INIT, ::java::beans::beancontext::BeanContextServiceRevokedListener)
public:
	virtual void serviceAvailable(::java::beans::beancontext::BeanContextServiceAvailableEvent* bcsae) {}
};

		} // beancontext
	} // beans
} // java

#endif // _java_beans_beancontext_BeanContextServicesListener_h_