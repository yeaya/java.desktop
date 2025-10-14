#ifndef _javax_swing_FocusManager_h_
#define _javax_swing_FocusManager_h_
//$ class javax.swing.FocusManager
//$ extends java.awt.DefaultKeyboardFocusManager

#include <java/awt/DefaultKeyboardFocusManager.h>

#pragma push_macro("FOCUS_MANAGER_CLASS_PROPERTY")
#undef FOCUS_MANAGER_CLASS_PROPERTY

namespace javax {
	namespace swing {

class $export FocusManager : public ::java::awt::DefaultKeyboardFocusManager {
	$class(FocusManager, 0, ::java::awt::DefaultKeyboardFocusManager)
public:
	FocusManager();
	using ::java::awt::DefaultKeyboardFocusManager::focusPreviousComponent;
	using ::java::awt::DefaultKeyboardFocusManager::focusNextComponent;
	using ::java::awt::DefaultKeyboardFocusManager::downFocusCycle;
	void init$();
	static void disableSwingFocusManager();
	static ::javax::swing::FocusManager* getCurrentManager();
	static bool isFocusManagerEnabled();
	static void setCurrentManager(::javax::swing::FocusManager* aFocusManager);
	using ::java::awt::DefaultKeyboardFocusManager::upFocusCycle;
	static $String* FOCUS_MANAGER_CLASS_PROPERTY;
	static bool enabled;
};

	} // swing
} // javax

#pragma pop_macro("FOCUS_MANAGER_CLASS_PROPERTY")

#endif // _javax_swing_FocusManager_h_