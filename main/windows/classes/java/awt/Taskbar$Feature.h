#ifndef _java_awt_Taskbar$Feature_h_
#define _java_awt_Taskbar$Feature_h_
//$ class java.awt.Taskbar$Feature
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ICON_BADGE_IMAGE_WINDOW")
#undef ICON_BADGE_IMAGE_WINDOW
#pragma push_macro("ICON_BADGE_NUMBER")
#undef ICON_BADGE_NUMBER
#pragma push_macro("ICON_BADGE_TEXT")
#undef ICON_BADGE_TEXT
#pragma push_macro("ICON_IMAGE")
#undef ICON_IMAGE
#pragma push_macro("MENU")
#undef MENU
#pragma push_macro("PROGRESS_STATE_WINDOW")
#undef PROGRESS_STATE_WINDOW
#pragma push_macro("PROGRESS_VALUE")
#undef PROGRESS_VALUE
#pragma push_macro("PROGRESS_VALUE_WINDOW")
#undef PROGRESS_VALUE_WINDOW
#pragma push_macro("USER_ATTENTION")
#undef USER_ATTENTION
#pragma push_macro("USER_ATTENTION_WINDOW")
#undef USER_ATTENTION_WINDOW

namespace java {
	namespace awt {

class $export Taskbar$Feature : public ::java::lang::Enum {
	$class(Taskbar$Feature, 0, ::java::lang::Enum)
public:
	Taskbar$Feature();
	static $Array<::java::awt::Taskbar$Feature>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::java::awt::Taskbar$Feature* valueOf($String* name);
	static $Array<::java::awt::Taskbar$Feature>* values();
	static ::java::awt::Taskbar$Feature* ICON_BADGE_TEXT;
	static ::java::awt::Taskbar$Feature* ICON_BADGE_NUMBER;
	static ::java::awt::Taskbar$Feature* ICON_BADGE_IMAGE_WINDOW;
	static ::java::awt::Taskbar$Feature* ICON_IMAGE;
	static ::java::awt::Taskbar$Feature* MENU;
	static ::java::awt::Taskbar$Feature* PROGRESS_STATE_WINDOW;
	static ::java::awt::Taskbar$Feature* PROGRESS_VALUE;
	static ::java::awt::Taskbar$Feature* PROGRESS_VALUE_WINDOW;
	static ::java::awt::Taskbar$Feature* USER_ATTENTION;
	static ::java::awt::Taskbar$Feature* USER_ATTENTION_WINDOW;
	static $Array<::java::awt::Taskbar$Feature>* $VALUES;
};

	} // awt
} // java

#pragma pop_macro("ICON_BADGE_IMAGE_WINDOW")
#pragma pop_macro("ICON_BADGE_NUMBER")
#pragma pop_macro("ICON_BADGE_TEXT")
#pragma pop_macro("ICON_IMAGE")
#pragma pop_macro("MENU")
#pragma pop_macro("PROGRESS_STATE_WINDOW")
#pragma pop_macro("PROGRESS_VALUE")
#pragma pop_macro("PROGRESS_VALUE_WINDOW")
#pragma pop_macro("USER_ATTENTION")
#pragma pop_macro("USER_ATTENTION_WINDOW")

#endif // _java_awt_Taskbar$Feature_h_