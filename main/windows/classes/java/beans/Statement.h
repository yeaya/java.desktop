#ifndef _java_beans_Statement_h_
#define _java_beans_Statement_h_
//$ class java.beans.Statement
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace beans {
		class ExceptionListener;
	}
}
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

class $export Statement : public ::java::lang::Object {
	$class(Statement, 0, ::java::lang::Object)
public:
	Statement();
	void init$(Object$* target, $String* methodName, $ObjectArray* arguments);
	virtual void execute();
	virtual $ObjectArray* getArguments();
	static ::java::lang::reflect::Method* getMethod($Class* type, $String* name, $ClassArray* args);
	virtual $String* getMethodName();
	virtual $Object* getTarget();
	virtual $String* instanceName(Object$* instance);
	virtual $Object* invoke();
	$Object* invokeInternal();
	virtual $String* toString() override;
	static $ObjectArray* emptyArray;
	static ::java::beans::ExceptionListener* defaultExceptionListener;
	::java::security::AccessControlContext* acc = nullptr;
	$Object* target = nullptr;
	$String* methodName = nullptr;
	$ObjectArray* arguments = nullptr;
	::java::lang::ClassLoader* loader = nullptr;
};

	} // beans
} // java

#endif // _java_beans_Statement_h_