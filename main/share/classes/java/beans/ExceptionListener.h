#ifndef _java_beans_ExceptionListener_h_
#define _java_beans_ExceptionListener_h_
//$ interface java.beans.ExceptionListener
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class Exception;
	}
}

namespace java {
	namespace beans {

class $export ExceptionListener : public ::java::lang::Object {
	$interface(ExceptionListener, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void exceptionThrown(::java::lang::Exception* e) {}
};

	} // beans
} // java

#endif // _java_beans_ExceptionListener_h_