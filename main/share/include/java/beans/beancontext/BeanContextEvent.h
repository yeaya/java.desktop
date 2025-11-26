#ifndef _java_beans_beancontext_BeanContextEvent_h_
#define _java_beans_beancontext_BeanContextEvent_h_
//$ class java.beans.beancontext.BeanContextEvent
//$ extends java.util.EventObject

#include <java/util/EventObject.h>

namespace java {
	namespace beans {
		namespace beancontext {
			class BeanContext;
		}
	}
}

namespace java {
	namespace beans {
		namespace beancontext {

class $import BeanContextEvent : public ::java::util::EventObject {
	$class(BeanContextEvent, $NO_CLASS_INIT, ::java::util::EventObject)
public:
	BeanContextEvent();
	void init$(::java::beans::beancontext::BeanContext* bc);
	virtual ::java::beans::beancontext::BeanContext* getBeanContext();
	virtual ::java::beans::beancontext::BeanContext* getPropagatedFrom();
	virtual bool isPropagated();
	virtual void setPropagatedFrom(::java::beans::beancontext::BeanContext* bc);
	static const int64_t serialVersionUID = (int64_t)0x64DD1DBD8B4E6A3C;
	::java::beans::beancontext::BeanContext* propagatedFrom = nullptr;
};

		} // beancontext
	} // beans
} // java

#endif // _java_beans_beancontext_BeanContextEvent_h_