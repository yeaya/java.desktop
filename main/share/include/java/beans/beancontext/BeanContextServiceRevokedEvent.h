#ifndef _java_beans_beancontext_BeanContextServiceRevokedEvent_h_
#define _java_beans_beancontext_BeanContextServiceRevokedEvent_h_
//$ class java.beans.beancontext.BeanContextServiceRevokedEvent
//$ extends java.beans.beancontext.BeanContextEvent

#include <java/beans/beancontext/BeanContextEvent.h>

namespace java {
	namespace beans {
		namespace beancontext {
			class BeanContextServices;
		}
	}
}

namespace java {
	namespace beans {
		namespace beancontext {

class $import BeanContextServiceRevokedEvent : public ::java::beans::beancontext::BeanContextEvent {
	$class(BeanContextServiceRevokedEvent, $NO_CLASS_INIT, ::java::beans::beancontext::BeanContextEvent)
public:
	BeanContextServiceRevokedEvent();
	void init$(::java::beans::beancontext::BeanContextServices* bcs, $Class* sc, bool invalidate);
	virtual $Class* getServiceClass();
	virtual ::java::beans::beancontext::BeanContextServices* getSourceAsBeanContextServices();
	virtual bool isCurrentServiceInvalidNow();
	virtual bool isServiceClass($Class* service);
	static const int64_t serialVersionUID = (int64_t)0xEE054E5D676E0226;
	$Class* serviceClass = nullptr;
	bool invalidateRefs = false;
};

		} // beancontext
	} // beans
} // java

#endif // _java_beans_beancontext_BeanContextServiceRevokedEvent_h_