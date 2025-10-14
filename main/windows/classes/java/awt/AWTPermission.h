#ifndef _java_awt_AWTPermission_h_
#define _java_awt_AWTPermission_h_
//$ class java.awt.AWTPermission
//$ extends java.security.BasicPermission

#include <java/security/BasicPermission.h>

namespace java {
	namespace awt {

class $export AWTPermission : public ::java::security::BasicPermission {
	$class(AWTPermission, $NO_CLASS_INIT, ::java::security::BasicPermission)
public:
	AWTPermission();
	void init$($String* name);
	void init$($String* name, $String* actions);
	static const int64_t serialVersionUID = (int64_t)0x7B6104C96E234C81;
};

	} // awt
} // java

#endif // _java_awt_AWTPermission_h_