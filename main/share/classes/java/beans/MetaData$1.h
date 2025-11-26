#ifndef _java_beans_MetaData$1_h_
#define _java_beans_MetaData$1_h_
//$ class java.beans.MetaData$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace beans {

class MetaData$1 : public ::java::security::PrivilegedAction {
	$class(MetaData$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	MetaData$1();
	void init$($String* val$className, $String* val$fieldName);
	virtual $Object* run() override;
	$String* val$fieldName = nullptr;
	$String* val$className = nullptr;
};

	} // beans
} // java

#endif // _java_beans_MetaData$1_h_