#ifndef _java_beans_EventHandler$2_h_
#define _java_beans_EventHandler$2_h_
//$ class java.beans.EventHandler$2
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
		class ClassLoader;
	}
}

namespace java {
	namespace beans {

class EventHandler$2 : public ::java::security::PrivilegedAction {
	$class(EventHandler$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	EventHandler$2();
	void init$(::java::lang::ClassLoader* val$loader, $ClassArray* val$interfaces, ::java::beans::EventHandler* val$handler);
	virtual $Object* run() override;
	::java::beans::EventHandler* val$handler = nullptr;
	$ClassArray* val$interfaces = nullptr;
	::java::lang::ClassLoader* val$loader = nullptr;
};

	} // beans
} // java

#endif // _java_beans_EventHandler$2_h_