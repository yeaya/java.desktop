#ifndef _javax_swing_plaf_basic_BasicInternalFrameUI_h_
#define _javax_swing_plaf_basic_BasicInternalFrameUI_h_
//$ class javax.swing.plaf.basic.BasicInternalFrameUI
//$ extends javax.swing.plaf.InternalFrameUI

#include <javax/swing/plaf/InternalFrameUI.h>

namespace java {
	namespace awt {
		class Dimension;
		class LayoutManager;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ComponentListener;
			class WindowFocusListener;
		}
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
		class JInternalFrame;
		class KeyStroke;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class InternalFrameListener;
			class MouseInputAdapter;
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
				class BasicInternalFrameTitlePane;
				class BasicInternalFrameUI$Handler;
				class LazyActionMap;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $import BasicInternalFrameUI : public ::javax::swing::plaf::InternalFrameUI {
	$class(BasicInternalFrameUI, $NO_CLASS_INIT, ::javax::swing::plaf::InternalFrameUI)
public:
	BasicInternalFrameUI();
	void init$(::javax::swing::JInternalFrame* b);
	virtual void activateFrame(::javax::swing::JInternalFrame* f);
	void cancelResize();
	virtual void closeFrame(::javax::swing::JInternalFrame* f);
	virtual ::javax::swing::event::MouseInputAdapter* createBorderListener(::javax::swing::JInternalFrame* w);
	virtual ::java::awt::event::ComponentListener* createComponentListener();
	virtual ::javax::swing::DesktopManager* createDesktopManager();
	virtual ::javax::swing::JComponent* createEastPane(::javax::swing::JInternalFrame* w);
	virtual ::javax::swing::event::MouseInputListener* createGlassPaneDispatcher();
	virtual ::javax::swing::InputMap* createInputMap(int32_t condition);
	virtual void createInternalFrameListener();
	virtual ::java::awt::LayoutManager* createLayoutManager();
	virtual ::javax::swing::JComponent* createNorthPane(::javax::swing::JInternalFrame* w);
	virtual ::java::beans::PropertyChangeListener* createPropertyChangeListener();
	virtual ::javax::swing::JComponent* createSouthPane(::javax::swing::JInternalFrame* w);
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* b);
	virtual ::javax::swing::JComponent* createWestPane(::javax::swing::JInternalFrame* w);
	virtual void deactivateFrame(::javax::swing::JInternalFrame* f);
	virtual void deiconifyFrame(::javax::swing::JInternalFrame* f);
	virtual void deinstallMouseHandlers(::javax::swing::JComponent* c);
	virtual ::javax::swing::DesktopManager* getDesktopManager();
	virtual ::javax::swing::JComponent* getEastPane();
	::javax::swing::plaf::basic::BasicInternalFrameUI$Handler* getHandler();
	virtual ::javax::swing::InputMap* getInputMap(int32_t condition);
	virtual ::java::awt::Dimension* getMaximumSize(::javax::swing::JComponent* x) override;
	virtual ::java::awt::Dimension* getMinimumSize(::javax::swing::JComponent* x) override;
	virtual ::javax::swing::JComponent* getNorthPane();
	virtual ::java::awt::Dimension* getPreferredSize(::javax::swing::JComponent* x) override;
	virtual ::javax::swing::JComponent* getSouthPane();
	virtual ::javax::swing::JComponent* getWestPane();
	::java::awt::event::WindowFocusListener* getWindowFocusListener();
	virtual void iconifyFrame(::javax::swing::JInternalFrame* f);
	virtual void installComponents();
	virtual void installDefaults();
	virtual void installKeyboardActions();
	virtual void installListeners();
	virtual void installMouseHandlers(::javax::swing::JComponent* c);
	virtual void installUI(::javax::swing::JComponent* c) override;
	bool isKeyBindingActive();
	bool isKeyBindingRegistered();
	static void loadActionMap(::javax::swing::plaf::basic::LazyActionMap* map);
	virtual void maximizeFrame(::javax::swing::JInternalFrame* f);
	virtual void minimizeFrame(::javax::swing::JInternalFrame* f);
	virtual void replacePane(::javax::swing::JComponent* currentPane, ::javax::swing::JComponent* newPane);
	virtual void setEastPane(::javax::swing::JComponent* c);
	void setKeyBindingActive(bool b);
	void setKeyBindingRegistered(bool b);
	virtual void setNorthPane(::javax::swing::JComponent* c);
	virtual void setSouthPane(::javax::swing::JComponent* c);
	virtual void setWestPane(::javax::swing::JComponent* c);
	virtual void setupMenuCloseKey();
	virtual void setupMenuOpenKey();
	virtual void uninstallComponents();
	virtual void uninstallDefaults();
	virtual void uninstallKeyboardActions();
	virtual void uninstallListeners();
	virtual void uninstallUI(::javax::swing::JComponent* c) override;
	virtual void updateFrameCursor();
	::javax::swing::JInternalFrame* frame = nullptr;
	::javax::swing::plaf::basic::BasicInternalFrameUI$Handler* handler = nullptr;
	::javax::swing::event::MouseInputAdapter* borderListener = nullptr;
	::java::beans::PropertyChangeListener* propertyChangeListener = nullptr;
	::java::awt::LayoutManager* internalFrameLayout = nullptr;
	::java::awt::event::ComponentListener* componentListener = nullptr;
	::javax::swing::event::MouseInputListener* glassPaneDispatcher = nullptr;
	::javax::swing::event::InternalFrameListener* internalFrameListener = nullptr;
	::javax::swing::JComponent* northPane = nullptr;
	::javax::swing::JComponent* southPane = nullptr;
	::javax::swing::JComponent* westPane = nullptr;
	::javax::swing::JComponent* eastPane = nullptr;
	::javax::swing::plaf::basic::BasicInternalFrameTitlePane* titlePane = nullptr;
	static ::javax::swing::DesktopManager* sharedDesktopManager;
	bool componentListenerAdded = false;
	::java::awt::Rectangle* parentBounds = nullptr;
	bool dragging = false;
	bool resizing = false;
	::javax::swing::KeyStroke* openMenuKey = nullptr;
	bool keyBindingRegistered = false;
	bool keyBindingActive = false;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicInternalFrameUI_h_