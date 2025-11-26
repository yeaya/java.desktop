#ifndef _java_beans_EventHandler$1_h_
#define _java_beans_EventHandler$1_h_
//$ class java.beans.EventHandler$1
//$ extends java.security.PrivilegedAction

#include <java/lang/Array.h>
#include <java/security/PrivilegedAction.h>

namespace java {
	namespace beans {
		class EventHandler;
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Method;
		}
	}
}

namespace java {
	namespace beans {

class EventHandler$1 : public ::java::security::PrivilegedAction {
	$class(EventHandler$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	EventHandler$1();
	void init$(::java::beans::EventHandler* this$0, Object$* val$proxy, ::java::lang::reflect::Method* val$method, $ObjectArray* val$arguments);
	virtual $Object* run() override;
	::java::beans::EventHandler* this$0 = nullptr;
	$ObjectArray* val$arguments = nullptr;
	::java::lang::reflect::Method* val$method = nullptr;
	$Object* val$proxy = nullptr;
};

	} // beans
} // java

#endif // _java_beans_EventHandler$1_h_