#ifndef _java_beans_beancontext_BeanContextServiceAvailableEvent_h_
#define _java_beans_beancontext_BeanContextServiceAvailableEvent_h_
//$ class java.beans.beancontext.BeanContextServiceAvailableEvent
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
	namespace util {
		class Iterator;
	}
}

namespace java {
	namespace beans {
		namespace beancontext {

class $export BeanContextServiceAvailableEvent : public ::java::beans::beancontext::BeanContextEvent {
	$class(BeanContextServiceAvailableEvent, $NO_CLASS_INIT, ::java::beans::beancontext::BeanContextEvent)
public:
	BeanContextServiceAvailableEvent();
	void init$(::java::beans::beancontext::BeanContextServices* bcs, $Class* sc);
	virtual ::java::util::Iterator* getCurrentServiceSelectors();
	virtual $Class* getServiceClass();
	virtual ::java::beans::beancontext::BeanContextServices* getSourceAsBeanContextServices();
	static const int64_t serialVersionUID = (int64_t)0xB5F9E0329D038876;
	$Class* serviceClass = nullptr;
};

		} // beancontext
	} // beans
} // java

#endif // _java_beans_beancontext_BeanContextServiceAvailableEvent_h_