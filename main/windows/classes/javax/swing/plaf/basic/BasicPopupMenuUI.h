#ifndef _javax_swing_plaf_basic_BasicPopupMenuUI_h_
#define _javax_swing_plaf_basic_BasicPopupMenuUI_h_
//$ class javax.swing.plaf.basic.BasicPopupMenuUI
//$ extends javax.swing.plaf.PopupMenuUI

#include <java/lang/Array.h>
#include <javax/swing/plaf/PopupMenuUI.h>

#pragma push_macro("MENU_KEYBOARD_HELPER_KEY")
#undef MENU_KEYBOARD_HELPER_KEY
#pragma push_macro("MOUSE_GRABBER_KEY")
#undef MOUSE_GRABBER_KEY

namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
	}
}
namespace java {
	namespace lang {
		class StringBuilder;
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace swing {
		class ActionMap;
		class InputMap;
		class JComponent;
		class JPopupMenu;
		class MenuElement;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class MenuKeyListener;
			class PopupMenuListener;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class ComponentUI;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class LazyActionMap;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicPopupMenuUI : public ::javax::swing::plaf::PopupMenuUI {
	$class(BasicPopupMenuUI, 0, ::javax::swing::plaf::PopupMenuUI)
public:
	BasicPopupMenuUI();
	void init$();
	static bool checkInvokerEqual(::javax::swing::MenuElement* present, ::javax::swing::MenuElement* last);
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* x);
	static ::javax::swing::MenuElement* findEnabledChild($Array<::javax::swing::MenuElement>* e, int32_t fromIndex, bool forward);
	static ::javax::swing::MenuElement* findEnabledChild($Array<::javax::swing::MenuElement>* e, ::javax::swing::MenuElement* elem, bool forward);
	static ::javax::swing::ActionMap* getActionMap();
	static ::javax::swing::MenuElement* getFirstPopup();
	static ::javax::swing::InputMap* getInputMap(::javax::swing::JPopupMenu* popup, ::javax::swing::JComponent* c);
	static ::javax::swing::JPopupMenu* getLastPopup();
	static ::java::util::List* getPopups();
	virtual void installDefaults();
	virtual void installKeyboardActions();
	virtual void installListeners();
	virtual void installUI(::javax::swing::JComponent* c) override;
	virtual bool isPopupTrigger(::java::awt::event::MouseEvent* e) override;
	static void loadActionMap(::javax::swing::plaf::basic::LazyActionMap* map);
	static ::javax::swing::MenuElement* nextEnabledChild($Array<::javax::swing::MenuElement>* e, int32_t fromIndex, int32_t toIndex);
	static ::javax::swing::MenuElement* previousEnabledChild($Array<::javax::swing::MenuElement>* e, int32_t fromIndex, int32_t toIndex);
	virtual void uninstallDefaults();
	virtual void uninstallKeyboardActions();
	virtual void uninstallListeners();
	virtual void uninstallUI(::javax::swing::JComponent* c) override;
	static ::java::lang::StringBuilder* MOUSE_GRABBER_KEY;
	static ::java::lang::StringBuilder* MENU_KEYBOARD_HELPER_KEY;
	::javax::swing::JPopupMenu* popupMenu = nullptr;
	::javax::swing::event::PopupMenuListener* popupMenuListener = nullptr;
	::javax::swing::event::MenuKeyListener* menuKeyListener = nullptr;
	static bool checkedUnpostPopup;
	static bool unpostPopup;
};

			} // basic
		} // plaf
	} // swing
} // javax

#pragma pop_macro("MENU_KEYBOARD_HELPER_KEY")
#pragma pop_macro("MOUSE_GRABBER_KEY")

#endif // _javax_swing_plaf_basic_BasicPopupMenuUI_h_