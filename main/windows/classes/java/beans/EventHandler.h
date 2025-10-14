#ifndef _java_beans_EventHandler_h_
#define _java_beans_EventHandler_h_
//$ class java.beans.EventHandler
//$ extends java.lang.reflect.InvocationHandler

#include <java/lang/Array.h>
#include <java/lang/reflect/InvocationHandler.h>

namespace java {
	namespace lang {
		class ClassLoader;
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
	namespace security {
		class AccessControlContext;
	}
}

namespace java {
	namespace beans {

class $export EventHandler : public ::java::lang::reflect::InvocationHandler {
	$class(EventHandler, $NO_CLASS_INIT, ::java::lang::reflect::InvocationHandler)
public:
	EventHandler();
	void init$(Object$* target, $String* action, $String* eventPropertyName, $String* listenerMethodName);
	$Object* applyGetters(Object$* target, $String* getters);
	static $Object* create($Class* listenerInterface, Object$* target, $String* action);
	static $Object* create($Class* listenerInterface, Object$* target, $String* action, $String* eventPropertyName);
	static $Object* create($Class* listenerInterface, Object$* target, $String* action, $String* eventPropertyName, $String* listenerMethodName);
	virtual $String* getAction();
	static ::java::lang::ClassLoader* getClassLoader($Class* type);
	virtual $String* getEventPropertyName();
	virtual $String* getListenerMethodName();
	virtual $Object* getTarget();
	virtual $Object* invoke(Object$* proxy, ::java::lang::reflect::Method* method, $ObjectArray* arguments) override;
	$Object* invokeInternal(Object$* proxy, ::java::lang::reflect::Method* method, $ObjectArray* arguments);
	$Object* target = nullptr;
	$String* action = nullptr;
	$String* eventPropertyName = nullptr;
	$String* listenerMethodName = nullptr;
	::java::security::AccessControlContext* acc = nullptr;
};

	} // beans
} // java

#endif // _java_beans_EventHandler_h_