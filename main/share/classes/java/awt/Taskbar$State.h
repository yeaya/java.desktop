#ifndef _java_awt_Taskbar$State_h_
#define _java_awt_Taskbar$State_h_
//$ class java.awt.Taskbar$State
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ERROR")
#undef ERROR
#pragma push_macro("INDETERMINATE")
#undef INDETERMINATE
#pragma push_macro("NORMAL")
#undef NORMAL
#pragma push_macro("OFF")
#undef OFF
#pragma push_macro("PAUSED")
#undef PAUSED

namespace java {
	namespace awt {

class $export Taskbar$State : public ::java::lang::Enum {
	$class(Taskbar$State, 0, ::java::lang::Enum)
public:
	Taskbar$State();
	static $Array<::java::awt::Taskbar$State>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::java::awt::Taskbar$State* valueOf($String* name);
	static $Array<::java::awt::Taskbar$State>* values();
	static ::java::awt::Taskbar$State* OFF;
	static ::java::awt::Taskbar$State* NORMAL;
	static ::java::awt::Taskbar$State* PAUSED;
	static ::java::awt::Taskbar$State* INDETERMINATE;
	static ::java::awt::Taskbar$State* ERROR;
	static $Array<::java::awt::Taskbar$State>* $VALUES;
};

	} // awt
} // java

#pragma pop_macro("ERROR")
#pragma pop_macro("INDETERMINATE")
#pragma pop_macro("NORMAL")
#pragma pop_macro("OFF")
#pragma pop_macro("PAUSED")

#endif // _java_awt_Taskbar$State_h_