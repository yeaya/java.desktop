#ifndef _javax_swing_plaf_basic_BasicMenuBarUI_h_
#define _javax_swing_plaf_basic_BasicMenuBarUI_h_
//$ class javax.swing.plaf.basic.BasicMenuBarUI
//$ extends javax.swing.plaf.MenuBarUI

#include <javax/swing/plaf/MenuBarUI.h>

namespace java {
	namespace awt {
		class Dimension;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ContainerListener;
		}
	}
}
namespace javax {
	namespace swing {
		class InputMap;
		class JComponent;
		class JMenuBar;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ChangeListener;
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
				class BasicMenuBarUI$Handler;
				class LazyActionMap;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicMenuBarUI : public ::javax::swing::plaf::MenuBarUI {
	$class(BasicMenuBarUI, $NO_CLASS_INIT, ::javax::swing::plaf::MenuBarUI)
public:
	BasicMenuBarUI();
	void init$();
	virtual ::javax::swing::event::ChangeListener* createChangeListener();
	virtual ::java::awt::event::ContainerListener* createContainerListener();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* x);
	::javax::swing::plaf::basic::BasicMenuBarUI$Handler* getHandler();
	virtual ::javax::swing::InputMap* getInputMap(int32_t condition);
	virtual ::java::awt::Dimension* getMaximumSize(::javax::swing::JComponent* c) override;
	virtual ::java::awt::Dimension* getMinimumSize(::javax::swing::JComponent* c) override;
	virtual void installDefaults();
	virtual void installKeyboardActions();
	virtual void installListeners();
	virtual void installUI(::javax::swing::JComponent* c) override;
	static void loadActionMap(::javax::swing::plaf::basic::LazyActionMap* map);
	virtual void uninstallDefaults();
	virtual void uninstallKeyboardActions();
	virtual void uninstallListeners();
	virtual void uninstallUI(::javax::swing::JComponent* c) override;
	::javax::swing::JMenuBar* menuBar = nullptr;
	::java::awt::event::ContainerListener* containerListener = nullptr;
	::javax::swing::event::ChangeListener* changeListener = nullptr;
	::javax::swing::plaf::basic::BasicMenuBarUI$Handler* handler = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicMenuBarUI_h_