#ifndef _java_awt_desktop_UserSessionEvent$Reason_h_
#define _java_awt_desktop_UserSessionEvent$Reason_h_
//$ class java.awt.desktop.UserSessionEvent$Reason
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("CONSOLE")
#undef CONSOLE
#pragma push_macro("LOCK")
#undef LOCK
#pragma push_macro("REMOTE")
#undef REMOTE
#pragma push_macro("UNSPECIFIED")
#undef UNSPECIFIED

namespace java {
	namespace awt {
		namespace desktop {

class $export UserSessionEvent$Reason : public ::java::lang::Enum {
	$class(UserSessionEvent$Reason, 0, ::java::lang::Enum)
public:
	UserSessionEvent$Reason();
	static $Array<::java::awt::desktop::UserSessionEvent$Reason>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::java::awt::desktop::UserSessionEvent$Reason* valueOf($String* name);
	static $Array<::java::awt::desktop::UserSessionEvent$Reason>* values();
	static ::java::awt::desktop::UserSessionEvent$Reason* UNSPECIFIED;
	static ::java::awt::desktop::UserSessionEvent$Reason* CONSOLE;
	static ::java::awt::desktop::UserSessionEvent$Reason* REMOTE;
	static ::java::awt::desktop::UserSessionEvent$Reason* LOCK;
	static $Array<::java::awt::desktop::UserSessionEvent$Reason>* $VALUES;
};

		} // desktop
	} // awt
} // java

#pragma pop_macro("CONSOLE")
#pragma pop_macro("LOCK")
#pragma pop_macro("REMOTE")
#pragma pop_macro("UNSPECIFIED")

#endif // _java_awt_desktop_UserSessionEvent$Reason_h_