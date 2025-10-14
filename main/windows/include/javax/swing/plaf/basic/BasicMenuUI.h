#ifndef _javax_swing_plaf_basic_BasicMenuUI_h_
#define _javax_swing_plaf_basic_BasicMenuUI_h_
//$ class javax.swing.plaf.basic.BasicMenuUI
//$ extends javax.swing.plaf.basic.BasicMenuItemUI

#include <java/lang/Array.h>
#include <javax/swing/plaf/basic/BasicMenuItemUI.h>

#pragma push_macro("DEBUG")
#undef DEBUG
#pragma push_macro("TRACE")
#undef TRACE
#pragma push_macro("VERBOSE")
#undef VERBOSE

namespace java {
	namespace awt {
		class Dimension;
	}
}
namespace java {
	namespace beans {
		class PropertyChangeListener;
	}
}
namespace javax {
	namespace swing {
		class InputMap;
		class JComponent;
		class JMenu;
		class MenuElement;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ChangeListener;
			class MenuDragMouseListener;
			class MenuKeyListener;
			class MenuListener;
			class MouseInputListener;
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
				class BasicMenuItemUI$Handler;
				class LazyActionMap;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $import BasicMenuUI : public ::javax::swing::plaf::basic::BasicMenuItemUI {
	$class(BasicMenuUI, 0, ::javax::swing::plaf::basic::BasicMenuItemUI)
public:
	BasicMenuUI();
	void init$();
	static void appendPath($Array<::javax::swing::MenuElement>* path, ::javax::swing::MenuElement* elem);
	virtual ::javax::swing::event::ChangeListener* createChangeListener(::javax::swing::JComponent* c);
	virtual ::javax::swing::event::MenuDragMouseListener* createMenuDragMouseListener(::javax::swing::JComponent* c) override;
	virtual ::javax::swing::event::MenuKeyListener* createMenuKeyListener(::javax::swing::JComponent* c) override;
	virtual ::javax::swing::event::MenuListener* createMenuListener(::javax::swing::JComponent* c);
	virtual ::javax::swing::event::MouseInputListener* createMouseInputListener(::javax::swing::JComponent* c) override;
	virtual ::java::beans::PropertyChangeListener* createPropertyChangeListener(::javax::swing::JComponent* c) override;
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* x);
	virtual ::javax::swing::plaf::basic::BasicMenuItemUI$Handler* getHandler() override;
	virtual ::java::awt::Dimension* getMaximumSize(::javax::swing::JComponent* c) override;
	virtual ::java::awt::Dimension* getMinimumSize(::javax::swing::JComponent* c) override;
	virtual $String* getPropertyPrefix() override;
	virtual void installDefaults() override;
	virtual void installKeyboardActions() override;
	virtual void installLazyActionMap() override;
	virtual void installListeners() override;
	static void loadActionMap(::javax::swing::plaf::basic::LazyActionMap* map);
	virtual void setupPostTimer(::javax::swing::JMenu* menu);
	virtual void uninstallDefaults() override;
	virtual void uninstallKeyboardActions() override;
	virtual void uninstallListeners() override;
	void updateDefaultBackgroundColor();
	virtual void updateMnemonicBinding();
	::javax::swing::event::ChangeListener* changeListener = nullptr;
	::javax::swing::event::MenuListener* menuListener = nullptr;
	int32_t lastMnemonic = 0;
	::javax::swing::InputMap* selectedWindowInputMap = nullptr;
	static const bool TRACE = false;
	static const bool VERBOSE = false;
	static const bool DEBUG = false;
	static bool crossMenuMnemonic;
};

			} // basic
		} // plaf
	} // swing
} // javax

#pragma pop_macro("DEBUG")
#pragma pop_macro("TRACE")
#pragma pop_macro("VERBOSE")

#endif // _javax_swing_plaf_basic_BasicMenuUI_h_