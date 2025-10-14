#ifndef _java_awt_EventFilter$FilterAction_h_
#define _java_awt_EventFilter$FilterAction_h_
//$ class java.awt.EventFilter$FilterAction
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ACCEPT")
#undef ACCEPT
#pragma push_macro("ACCEPT_IMMEDIATELY")
#undef ACCEPT_IMMEDIATELY
#pragma push_macro("REJECT")
#undef REJECT

namespace java {
	namespace awt {

class EventFilter$FilterAction : public ::java::lang::Enum {
	$class(EventFilter$FilterAction, 0, ::java::lang::Enum)
public:
	EventFilter$FilterAction();
	static $Array<::java::awt::EventFilter$FilterAction>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::java::awt::EventFilter$FilterAction* valueOf($String* name);
	static $Array<::java::awt::EventFilter$FilterAction>* values();
	static ::java::awt::EventFilter$FilterAction* ACCEPT;
	static ::java::awt::EventFilter$FilterAction* REJECT;
	static ::java::awt::EventFilter$FilterAction* ACCEPT_IMMEDIATELY;
	static $Array<::java::awt::EventFilter$FilterAction>* $VALUES;
};

	} // awt
} // java

#pragma pop_macro("ACCEPT")
#pragma pop_macro("ACCEPT_IMMEDIATELY")
#pragma pop_macro("REJECT")

#endif // _java_awt_EventFilter$FilterAction_h_