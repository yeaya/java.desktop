#ifndef _javax_accessibility_AccessibleState_h_
#define _javax_accessibility_AccessibleState_h_
//$ class javax.accessibility.AccessibleState
//$ extends javax.accessibility.AccessibleBundle

#include <javax/accessibility/AccessibleBundle.h>

#pragma push_macro("ACTIVE")
#undef ACTIVE
#pragma push_macro("ARMED")
#undef ARMED
#pragma push_macro("BUSY")
#undef BUSY
#pragma push_macro("CHECKED")
#undef CHECKED
#pragma push_macro("COLLAPSED")
#undef COLLAPSED
#pragma push_macro("EDITABLE")
#undef EDITABLE
#pragma push_macro("ENABLED")
#undef ENABLED
#pragma push_macro("EXPANDABLE")
#undef EXPANDABLE
#pragma push_macro("EXPANDED")
#undef EXPANDED
#pragma push_macro("FOCUSABLE")
#undef FOCUSABLE
#pragma push_macro("FOCUSED")
#undef FOCUSED
#pragma push_macro("HORIZONTAL")
#undef HORIZONTAL
#pragma push_macro("ICONIFIED")
#undef ICONIFIED
#pragma push_macro("INDETERMINATE")
#undef INDETERMINATE
#pragma push_macro("MANAGES_DESCENDANTS")
#undef MANAGES_DESCENDANTS
#pragma push_macro("MODAL")
#undef MODAL
#pragma push_macro("MULTISELECTABLE")
#undef MULTISELECTABLE
#pragma push_macro("MULTI_LINE")
#undef MULTI_LINE
#pragma push_macro("OPAQUE")
#undef OPAQUE
#pragma push_macro("PRESSED")
#undef PRESSED
#pragma push_macro("RESIZABLE")
#undef RESIZABLE
#pragma push_macro("SELECTABLE")
#undef SELECTABLE
#pragma push_macro("SELECTED")
#undef SELECTED
#pragma push_macro("SHOWING")
#undef SHOWING
#pragma push_macro("SINGLE_LINE")
#undef SINGLE_LINE
#pragma push_macro("TRANSIENT")
#undef TRANSIENT
#pragma push_macro("TRUNCATED")
#undef TRUNCATED
#pragma push_macro("VERTICAL")
#undef VERTICAL
#pragma push_macro("VISIBLE")
#undef VISIBLE

namespace javax {
	namespace accessibility {

class $import AccessibleState : public ::javax::accessibility::AccessibleBundle {
	$class(AccessibleState, 0, ::javax::accessibility::AccessibleBundle)
public:
	AccessibleState();
	void init$($String* key);
	static ::javax::accessibility::AccessibleState* ACTIVE;
	static ::javax::accessibility::AccessibleState* PRESSED;
	static ::javax::accessibility::AccessibleState* ARMED;
	static ::javax::accessibility::AccessibleState* BUSY;
	static ::javax::accessibility::AccessibleState* CHECKED;
	static ::javax::accessibility::AccessibleState* EDITABLE;
	static ::javax::accessibility::AccessibleState* EXPANDABLE;
	static ::javax::accessibility::AccessibleState* COLLAPSED;
	static ::javax::accessibility::AccessibleState* EXPANDED;
	static ::javax::accessibility::AccessibleState* ENABLED;
	static ::javax::accessibility::AccessibleState* FOCUSABLE;
	static ::javax::accessibility::AccessibleState* FOCUSED;
	static ::javax::accessibility::AccessibleState* ICONIFIED;
	static ::javax::accessibility::AccessibleState* MODAL;
	static ::javax::accessibility::AccessibleState* OPAQUE;
	static ::javax::accessibility::AccessibleState* RESIZABLE;
	static ::javax::accessibility::AccessibleState* MULTISELECTABLE;
	static ::javax::accessibility::AccessibleState* SELECTABLE;
	static ::javax::accessibility::AccessibleState* SELECTED;
	static ::javax::accessibility::AccessibleState* SHOWING;
	static ::javax::accessibility::AccessibleState* VISIBLE;
	static ::javax::accessibility::AccessibleState* VERTICAL;
	static ::javax::accessibility::AccessibleState* HORIZONTAL;
	static ::javax::accessibility::AccessibleState* SINGLE_LINE;
	static ::javax::accessibility::AccessibleState* MULTI_LINE;
	static ::javax::accessibility::AccessibleState* TRANSIENT;
	static ::javax::accessibility::AccessibleState* MANAGES_DESCENDANTS;
	static ::javax::accessibility::AccessibleState* INDETERMINATE;
	static ::javax::accessibility::AccessibleState* TRUNCATED;
};

	} // accessibility
} // javax

#pragma pop_macro("ACTIVE")
#pragma pop_macro("ARMED")
#pragma pop_macro("BUSY")
#pragma pop_macro("CHECKED")
#pragma pop_macro("COLLAPSED")
#pragma pop_macro("EDITABLE")
#pragma pop_macro("ENABLED")
#pragma pop_macro("EXPANDABLE")
#pragma pop_macro("EXPANDED")
#pragma pop_macro("FOCUSABLE")
#pragma pop_macro("FOCUSED")
#pragma pop_macro("HORIZONTAL")
#pragma pop_macro("ICONIFIED")
#pragma pop_macro("INDETERMINATE")
#pragma pop_macro("MANAGES_DESCENDANTS")
#pragma pop_macro("MODAL")
#pragma pop_macro("MULTISELECTABLE")
#pragma pop_macro("MULTI_LINE")
#pragma pop_macro("OPAQUE")
#pragma pop_macro("PRESSED")
#pragma pop_macro("RESIZABLE")
#pragma pop_macro("SELECTABLE")
#pragma pop_macro("SELECTED")
#pragma pop_macro("SHOWING")
#pragma pop_macro("SINGLE_LINE")
#pragma pop_macro("TRANSIENT")
#pragma pop_macro("TRUNCATED")
#pragma pop_macro("VERTICAL")
#pragma pop_macro("VISIBLE")

#endif // _javax_accessibility_AccessibleState_h_