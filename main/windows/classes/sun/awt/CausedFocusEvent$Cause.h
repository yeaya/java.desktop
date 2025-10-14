#ifndef _sun_awt_CausedFocusEvent$Cause_h_
#define _sun_awt_CausedFocusEvent$Cause_h_
//$ class sun.awt.CausedFocusEvent$Cause
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ACTIVATION")
#undef ACTIVATION
#pragma push_macro("AUTOMATIC_TRAVERSE")
#undef AUTOMATIC_TRAVERSE
#pragma push_macro("CLEAR_GLOBAL_FOCUS_OWNER")
#undef CLEAR_GLOBAL_FOCUS_OWNER
#pragma push_macro("MANUAL_REQUEST")
#undef MANUAL_REQUEST
#pragma push_macro("MOUSE_EVENT")
#undef MOUSE_EVENT
#pragma push_macro("NATIVE_SYSTEM")
#undef NATIVE_SYSTEM
#pragma push_macro("RETARGETED")
#undef RETARGETED
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
#pragma push_macro("UNKNOWN")
#undef UNKNOWN

namespace sun {
	namespace awt {

class CausedFocusEvent$Cause : public ::java::lang::Enum {
	$class(CausedFocusEvent$Cause, 0, ::java::lang::Enum)
public:
	CausedFocusEvent$Cause();
	static $Array<::sun::awt::CausedFocusEvent$Cause>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::sun::awt::CausedFocusEvent$Cause* valueOf($String* name);
	static $Array<::sun::awt::CausedFocusEvent$Cause>* values();
	static ::sun::awt::CausedFocusEvent$Cause* UNKNOWN;
	static ::sun::awt::CausedFocusEvent$Cause* MOUSE_EVENT;
	static ::sun::awt::CausedFocusEvent$Cause* TRAVERSAL;
	static ::sun::awt::CausedFocusEvent$Cause* TRAVERSAL_UP;
	static ::sun::awt::CausedFocusEvent$Cause* TRAVERSAL_DOWN;
	static ::sun::awt::CausedFocusEvent$Cause* TRAVERSAL_FORWARD;
	static ::sun::awt::CausedFocusEvent$Cause* TRAVERSAL_BACKWARD;
	static ::sun::awt::CausedFocusEvent$Cause* MANUAL_REQUEST;
	static ::sun::awt::CausedFocusEvent$Cause* AUTOMATIC_TRAVERSE;
	static ::sun::awt::CausedFocusEvent$Cause* ROLLBACK;
	static ::sun::awt::CausedFocusEvent$Cause* NATIVE_SYSTEM;
	static ::sun::awt::CausedFocusEvent$Cause* ACTIVATION;
	static ::sun::awt::CausedFocusEvent$Cause* CLEAR_GLOBAL_FOCUS_OWNER;
	static ::sun::awt::CausedFocusEvent$Cause* RETARGETED;
	static $Array<::sun::awt::CausedFocusEvent$Cause>* $VALUES;
};

	} // awt
} // sun

#pragma pop_macro("ACTIVATION")
#pragma pop_macro("AUTOMATIC_TRAVERSE")
#pragma pop_macro("CLEAR_GLOBAL_FOCUS_OWNER")
#pragma pop_macro("MANUAL_REQUEST")
#pragma pop_macro("MOUSE_EVENT")
#pragma pop_macro("NATIVE_SYSTEM")
#pragma pop_macro("RETARGETED")
#pragma pop_macro("ROLLBACK")
#pragma pop_macro("TRAVERSAL")
#pragma pop_macro("TRAVERSAL_BACKWARD")
#pragma pop_macro("TRAVERSAL_DOWN")
#pragma pop_macro("TRAVERSAL_FORWARD")
#pragma pop_macro("TRAVERSAL_UP")
#pragma pop_macro("UNKNOWN")

#endif // _sun_awt_CausedFocusEvent$Cause_h_