#ifndef _javax_swing_plaf_basic_BasicDesktopPaneUI_h_
#define _javax_swing_plaf_basic_BasicDesktopPaneUI_h_
//$ class javax.swing.plaf.basic.BasicDesktopPaneUI
//$ extends javax.swing.plaf.DesktopPaneUI

#include <javax/swing/plaf/DesktopPaneUI.h>

#pragma push_macro("SHARED_ACTION")
#undef SHARED_ACTION

namespace java {
	namespace awt {
		class Dimension;
		class Graphics;
	}
}
namespace java {
	namespace beans {
		class PropertyChangeListener;
	}
}
namespace javax {
	namespace swing {
		class DesktopManager;
		class InputMap;
		class JComponent;
		class JDesktopPane;
		class KeyStroke;
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
				class BasicDesktopPaneUI$Actions;
				class BasicDesktopPaneUI$Handler;
				class LazyActionMap;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicDesktopPaneUI : public ::javax::swing::plaf::DesktopPaneUI {
	$class(BasicDesktopPaneUI, 0, ::javax::swing::plaf::DesktopPaneUI)
public:
	BasicDesktopPaneUI();
	void init$();
	virtual ::javax::swing::InputMap* createInputMap(int32_t condition);
	virtual ::java::beans::PropertyChangeListener* createPropertyChangeListener();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	::javax::swing::plaf::basic::BasicDesktopPaneUI$Handler* getHandler();
	virtual ::javax::swing::InputMap* getInputMap(int32_t condition);
	virtual ::java::awt::Dimension* getMaximumSize(::javax::swing::JComponent* c) override;
	virtual ::java::awt::Dimension* getMinimumSize(::javax::swing::JComponent* c) override;
	virtual ::java::awt::Dimension* getPreferredSize(::javax::swing::JComponent* c) override;
	virtual void installDefaults();
	virtual void installDesktopManager();
	virtual void installKeyboardActions();
	virtual void installListeners();
	virtual void installUI(::javax::swing::JComponent* c) override;
	static void loadActionMap(::javax::swing::plaf::basic::LazyActionMap* map);
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	virtual void registerKeyboardActions();
	virtual void uninstallDefaults();
	virtual void uninstallDesktopManager();
	virtual void uninstallKeyboardActions();
	virtual void uninstallListeners();
	virtual void uninstallUI(::javax::swing::JComponent* c) override;
	virtual void unregisterKeyboardActions();
	static ::javax::swing::plaf::basic::BasicDesktopPaneUI$Actions* SHARED_ACTION;
	::javax::swing::plaf::basic::BasicDesktopPaneUI$Handler* handler = nullptr;
	::java::beans::PropertyChangeListener* pcl = nullptr;
	::javax::swing::JDesktopPane* desktop = nullptr;
	::javax::swing::DesktopManager* desktopManager = nullptr;
	::javax::swing::KeyStroke* minimizeKey = nullptr;
	::javax::swing::KeyStroke* maximizeKey = nullptr;
	::javax::swing::KeyStroke* closeKey = nullptr;
	::javax::swing::KeyStroke* navigateKey = nullptr;
	::javax::swing::KeyStroke* navigateKey2 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#pragma pop_macro("SHARED_ACTION")

#endif // _javax_swing_plaf_basic_BasicDesktopPaneUI_h_