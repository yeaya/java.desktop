#ifndef _java_beans_Statement$2_h_
#define _java_beans_Statement$2_h_
//$ class java.beans.Statement$2
//$ extends java.security.PrivilegedExceptionAction

#include <java/security/PrivilegedExceptionAction.h>

namespace java {
	namespace beans {
		class Statement;
	}
}

namespace java {
	namespace beans {

class Statement$2 : public ::java::security::PrivilegedExceptionAction {
	$class(Statement$2, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	Statement$2();
	void init$(::java::beans::Statement* this$0);
	virtual $Object* run() override;
	::java::beans::Statement* this$0 = nullptr;
};

	} // beans
} // java

#endif // _java_beans_Statement$2_h_