#ifndef _java_awt_event_FocusEvent$Cause_h_
#define _java_awt_event_FocusEvent$Cause_h_
//$ class java.awt.event.FocusEvent$Cause
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ACTIVATION")
#undef ACTIVATION
#pragma push_macro("CLEAR_GLOBAL_FOCUS_OWNER")
#undef CLEAR_GLOBAL_FOCUS_OWNER
#pragma push_macro("MOUSE_EVENT")
#undef MOUSE_EVENT
#pragma push_macro("ROLLBACK")
#undef ROLLBACK
#pragma push_macro("TRAVERSAL")
#undef TRAVERSAL
#pragma push_macro("TRAVERSAL_BACKWARD")
#undef TRAVERSAL_BACKWARD
#pragma push_macro("TRAVERSAL_DOWN")
#undef TRAVERSAL_DOWN
#pragma push_macro("TRAVERSAL_FORWARD")
#undef TRAVERSAL_FORWARD
#pragma push_macro("TRAVERSAL_UP")
#undef TRAVERSAL_UP
#pragma push_macro("UNEXPECTED")
#undef UNEXPECTED
#pragma push_macro("UNKNOWN")
#undef UNKNOWN

namespace java {
	namespace awt {
		namespace event {

class $export FocusEvent$Cause : public ::java::lang::Enum {
	$class(FocusEvent$Cause, 0, ::java::lang::Enum)
public:
	FocusEvent$Cause();
	static $Array<::java::awt::event::FocusEvent$Cause>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::java::awt::event::FocusEvent$Cause* valueOf($String* name);
	static $Array<::java::awt::event::FocusEvent$Cause>* values();
	static ::java::awt::event::FocusEvent$Cause* UNKNOWN;
	static ::java::awt::event::FocusEvent$Cause* MOUSE_EVENT;
	static ::java::awt::event::FocusEvent$Cause* TRAVERSAL;
	static ::java::awt::event::FocusEvent$Cause* TRAVERSAL_UP;
	static ::java::awt::event::FocusEvent$Cause* TRAVERSAL_DOWN;
	static ::java::awt::event::FocusEvent$Cause* TRAVERSAL_FORWARD;
	static ::java::awt::event::FocusEvent$Cause* TRAVERSAL_BACKWARD;
	static ::java::awt::event::FocusEvent$Cause* ROLLBACK;
	static ::java::awt::event::FocusEvent$Cause* UNEXPECTED;
	static ::java::awt::event::FocusEvent$Cause* ACTIVATION;
	static ::java::awt::event::FocusEvent$Cause* CLEAR_GLOBAL_FOCUS_OWNER;
	static $Array<::java::awt::event::FocusEvent$Cause>* $VALUES;
};

		} // event
	} // awt
} // java

#pragma pop_macro("ACTIVATION")
#pragma pop_macro("CLEAR_GLOBAL_FOCUS_OWNER")
#pragma pop_macro("MOUSE_EVENT")
#pragma pop_macro("ROLLBACK")
#pragma pop_macro("TRAVERSAL")
#pragma pop_macro("TRAVERSAL_BACKWARD")
#pragma pop_macro("TRAVERSAL_DOWN")
#pragma pop_macro("TRAVERSAL_FORWARD")
#pragma pop_macro("TRAVERSAL_UP")
#pragma pop_macro("UNEXPECTED")
#pragma pop_macro("UNKNOWN")

#endif // _java_awt_event_FocusEvent$Cause_h_