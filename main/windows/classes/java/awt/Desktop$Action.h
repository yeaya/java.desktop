#ifndef _java_awt_Desktop$Action_h_
#define _java_awt_Desktop$Action_h_
//$ class java.awt.Desktop$Action
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("APP_ABOUT")
#undef APP_ABOUT
#pragma push_macro("APP_EVENT_FOREGROUND")
#undef APP_EVENT_FOREGROUND
#pragma push_macro("APP_EVENT_HIDDEN")
#undef APP_EVENT_HIDDEN
#pragma push_macro("APP_EVENT_REOPENED")
#undef APP_EVENT_REOPENED
#pragma push_macro("APP_EVENT_SCREEN_SLEEP")
#undef APP_EVENT_SCREEN_SLEEP
#pragma push_macro("APP_EVENT_SYSTEM_SLEEP")
#undef APP_EVENT_SYSTEM_SLEEP
#pragma push_macro("APP_EVENT_USER_SESSION")
#undef APP_EVENT_USER_SESSION
#pragma push_macro("APP_HELP_VIEWER")
#undef APP_HELP_VIEWER
#pragma push_macro("APP_MENU_BAR")
#undef APP_MENU_BAR
#pragma push_macro("APP_OPEN_FILE")
#undef APP_OPEN_FILE
#pragma push_macro("APP_OPEN_URI")
#undef APP_OPEN_URI
#pragma push_macro("APP_PREFERENCES")
#undef APP_PREFERENCES
#pragma push_macro("APP_PRINT_FILE")
#undef APP_PRINT_FILE
#pragma push_macro("APP_QUIT_HANDLER")
#undef APP_QUIT_HANDLER
#pragma push_macro("APP_QUIT_STRATEGY")
#undef APP_QUIT_STRATEGY
#pragma push_macro("APP_REQUEST_FOREGROUND")
#undef APP_REQUEST_FOREGROUND
#pragma push_macro("APP_SUDDEN_TERMINATION")
#undef APP_SUDDEN_TERMINATION
#pragma push_macro("BROWSE")
#undef BROWSE
#pragma push_macro("BROWSE_FILE_DIR")
#undef BROWSE_FILE_DIR
#pragma push_macro("EDIT")
#undef EDIT
#pragma push_macro("MAIL")
#undef MAIL
#pragma push_macro("MOVE_TO_TRASH")
#undef MOVE_TO_TRASH
#pragma push_macro("OPEN")
#undef OPEN
#pragma push_macro("PRINT")
#undef PRINT

namespace java {
	namespace awt {

class $export Desktop$Action : public ::java::lang::Enum {
	$class(Desktop$Action, 0, ::java::lang::Enum)
public:
	Desktop$Action();
	static $Array<::java::awt::Desktop$Action>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::java::awt::Desktop$Action* valueOf($String* name);
	static $Array<::java::awt::Desktop$Action>* values();
	static ::java::awt::Desktop$Action* OPEN;
	static ::java::awt::Desktop$Action* EDIT;
	static ::java::awt::Desktop$Action* PRINT;
	static ::java::awt::Desktop$Action* MAIL;
	static ::java::awt::Desktop$Action* BROWSE;
	static ::java::awt::Desktop$Action* APP_EVENT_FOREGROUND;
	static ::java::awt::Desktop$Action* APP_EVENT_HIDDEN;
	static ::java::awt::Desktop$Action* APP_EVENT_REOPENED;
	static ::java::awt::Desktop$Action* APP_EVENT_SCREEN_SLEEP;
	static ::java::awt::Desktop$Action* APP_EVENT_SYSTEM_SLEEP;
	static ::java::awt::Desktop$Action* APP_EVENT_USER_SESSION;
	static ::java::awt::Desktop$Action* APP_ABOUT;
	static ::java::awt::Desktop$Action* APP_PREFERENCES;
	static ::java::awt::Desktop$Action* APP_OPEN_FILE;
	static ::java::awt::Desktop$Action* APP_PRINT_FILE;
	static ::java::awt::Desktop$Action* APP_OPEN_URI;
	static ::java::awt::Desktop$Action* APP_QUIT_HANDLER;
	static ::java::awt::Desktop$Action* APP_QUIT_STRATEGY;
	static ::java::awt::Desktop$Action* APP_SUDDEN_TERMINATION;
	static ::java::awt::Desktop$Action* APP_REQUEST_FOREGROUND;
	static ::java::awt::Desktop$Action* APP_HELP_VIEWER;
	static ::java::awt::Desktop$Action* APP_MENU_BAR;
	static ::java::awt::Desktop$Action* BROWSE_FILE_DIR;
	static ::java::awt::Desktop$Action* MOVE_TO_TRASH;
	static $Array<::java::awt::Desktop$Action>* $VALUES;
};

	} // awt
} // java

#pragma pop_macro("APP_ABOUT")
#pragma pop_macro("APP_EVENT_FOREGROUND")
#pragma pop_macro("APP_EVENT_HIDDEN")
#pragma pop_macro("APP_EVENT_REOPENED")
#pragma pop_macro("APP_EVENT_SCREEN_SLEEP")
#pragma pop_macro("APP_EVENT_SYSTEM_SLEEP")
#pragma pop_macro("APP_EVENT_USER_SESSION")
#pragma pop_macro("APP_HELP_VIEWER")
#pragma pop_macro("APP_MENU_BAR")
#pragma pop_macro("APP_OPEN_FILE")
#pragma pop_macro("APP_OPEN_URI")
#pragma pop_macro("APP_PREFERENCES")
#pragma pop_macro("APP_PRINT_FILE")
#pragma pop_macro("APP_QUIT_HANDLER")
#pragma pop_macro("APP_QUIT_STRATEGY")
#pragma pop_macro("APP_REQUEST_FOREGROUND")
#pragma pop_macro("APP_SUDDEN_TERMINATION")
#pragma pop_macro("BROWSE")
#pragma pop_macro("BROWSE_FILE_DIR")
#pragma pop_macro("EDIT")
#pragma pop_macro("MAIL")
#pragma pop_macro("MOVE_TO_TRASH")
#pragma pop_macro("OPEN")
#pragma pop_macro("PRINT")

#endif // _java_awt_Desktop$Action_h_