#ifndef _java_beans_beancontext_BeanContextMembershipEvent_h_
#define _java_beans_beancontext_BeanContextMembershipEvent_h_
//$ class java.beans.beancontext.BeanContextMembershipEvent
//$ extends java.beans.beancontext.BeanContextEvent

#include <java/beans/beancontext/BeanContextEvent.h>
#include <java/lang/Array.h>

namespace java {
	namespace beans {
		namespace beancontext {
			class BeanContext;
		}
	}
}
namespace java {
	namespace util {
		class Collection;
		class Iterator;
	}
}

namespace java {
	namespace beans {
		namespace beancontext {

class $export BeanContextMembershipEvent : public ::java::beans::beancontext::BeanContextEvent {
	$class(BeanContextMembershipEvent, $NO_CLASS_INIT, ::java::beans::beancontext::BeanContextEvent)
public:
	BeanContextMembershipEvent();
	void init$(::java::beans::beancontext::BeanContext* bc, ::java::util::Collection* changes);
	void init$(::java::beans::beancontext::BeanContext* bc, $ObjectArray* changes);
	virtual bool contains(Object$* child);
	virtual ::java::util::Iterator* iterator();
	virtual int32_t size();
	virtual $ObjectArray* toArray();
	static const int64_t serialVersionUID = (int64_t)0x30902D1C5E7EFFEF;
	::java::util::Collection* children = nullptr;
};

		} // beancontext
	} // beans
} // java

#endif // _java_beans_beancontext_BeanContextMembershipEvent_h_