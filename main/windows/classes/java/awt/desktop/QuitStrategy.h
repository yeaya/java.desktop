#ifndef _java_awt_desktop_QuitStrategy_h_
#define _java_awt_desktop_QuitStrategy_h_
//$ class java.awt.desktop.QuitStrategy
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("CLOSE_ALL_WINDOWS")
#undef CLOSE_ALL_WINDOWS
#pragma push_macro("NORMAL_EXIT")
#undef NORMAL_EXIT

namespace java {
	namespace awt {
		namespace desktop {

class $export QuitStrategy : public ::java::lang::Enum {
	$class(QuitStrategy, 0, ::java::lang::Enum)
public:
	QuitStrategy();
	static $Array<::java::awt::desktop::QuitStrategy>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::java::awt::desktop::QuitStrategy* valueOf($String* name);
	static $Array<::java::awt::desktop::QuitStrategy>* values();
	static ::java::awt::desktop::QuitStrategy* NORMAL_EXIT;
	static ::java::awt::desktop::QuitStrategy* CLOSE_ALL_WINDOWS;
	static $Array<::java::awt::desktop::QuitStrategy>* $VALUES;
};

		} // desktop
	} // awt
} // java

#pragma pop_macro("CLOSE_ALL_WINDOWS")
#pragma pop_macro("NORMAL_EXIT")

#endif // _java_awt_desktop_QuitStrategy_h_