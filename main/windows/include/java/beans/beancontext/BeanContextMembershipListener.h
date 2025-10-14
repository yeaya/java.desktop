#ifndef _java_beans_beancontext_BeanContextMembershipListener_h_
#define _java_beans_beancontext_BeanContextMembershipListener_h_
//$ interface java.beans.beancontext.BeanContextMembershipListener
//$ extends java.util.EventListener

#include <java/util/EventListener.h>

namespace java {
	namespace beans {
		namespace beancontext {
			class BeanContextMembershipEvent;
		}
	}
}

namespace java {
	namespace beans {
		namespace beancontext {

class $import BeanContextMembershipListener : public ::java::util::EventListener {
	$interface(BeanContextMembershipListener, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	virtual void childrenAdded(::java::beans::beancontext::BeanContextMembershipEvent* bcme) {}
	virtual void childrenRemoved(::java::beans::beancontext::BeanContextMembershipEvent* bcme) {}
};

		} // beancontext
	} // beans
} // java

#endif // _java_beans_beancontext_BeanContextMembershipListener_h_