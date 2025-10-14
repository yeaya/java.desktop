#ifndef _java_beans_beancontext_BeanContextServiceRevokedListener_h_
#define _java_beans_beancontext_BeanContextServiceRevokedListener_h_
//$ interface java.beans.beancontext.BeanContextServiceRevokedListener
//$ extends java.util.EventListener

#include <java/util/EventListener.h>

namespace java {
	namespace beans {
		namespace beancontext {
			class BeanContextServiceRevokedEvent;
		}
	}
}

namespace java {
	namespace beans {
		namespace beancontext {

class $import BeanContextServiceRevokedListener : public ::java::util::EventListener {
	$interface(BeanContextServiceRevokedListener, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	virtual void serviceRevoked(::java::beans::beancontext::BeanContextServiceRevokedEvent* bcsre) {}
};

		} // beancontext
	} // beans
} // java

#endif // _java_beans_beancontext_BeanContextServiceRevokedListener_h_