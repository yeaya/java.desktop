#ifndef _java_beans_Statement$1_h_
#define _java_beans_Statement$1_h_
//$ class java.beans.Statement$1
//$ extends java.beans.ExceptionListener

#include <java/beans/ExceptionListener.h>

namespace java {
	namespace lang {
		class Exception;
	}
}

namespace java {
	namespace beans {

class Statement$1 : public ::java::beans::ExceptionListener {
	$class(Statement$1, $NO_CLASS_INIT, ::java::beans::ExceptionListener)
public:
	Statement$1();
	void init$();
	virtual void exceptionThrown(::java::lang::Exception* e) override;
};

	} // beans
} // java

#endif // _java_beans_Statement$1_h_