#ifndef _javax_accessibility_AccessibleAction_h_
#define _javax_accessibility_AccessibleAction_h_
//$ interface javax.accessibility.AccessibleAction
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("CLICK")
#undef CLICK
#pragma push_macro("DECREMENT")
#undef DECREMENT
#pragma push_macro("INCREMENT")
#undef INCREMENT
#pragma push_macro("TOGGLE_EXPAND")
#undef TOGGLE_EXPAND
#pragma push_macro("TOGGLE_POPUP")
#undef TOGGLE_POPUP

namespace javax {
	namespace accessibility {

class $import AccessibleAction : public ::java::lang::Object {
	$interface(AccessibleAction, 0, ::java::lang::Object)
public:
	virtual bool doAccessibleAction(int32_t i) {return false;}
	virtual int32_t getAccessibleActionCount() {return 0;}
	virtual $String* getAccessibleActionDescription(int32_t i) {return nullptr;}
	static $String* TOGGLE_EXPAND;
	static $String* INCREMENT;
	static $String* DECREMENT;
	static $String* CLICK;
	static $String* TOGGLE_POPUP;
};

	} // accessibility
} // javax

#pragma pop_macro("CLICK")
#pragma pop_macro("DECREMENT")
#pragma pop_macro("INCREMENT")
#pragma pop_macro("TOGGLE_EXPAND")
#pragma pop_macro("TOGGLE_POPUP")

#endif // _javax_accessibility_AccessibleAction_h_