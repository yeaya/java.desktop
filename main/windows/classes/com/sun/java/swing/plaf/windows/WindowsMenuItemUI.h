#ifndef _com_sun_java_swing_plaf_windows_WindowsMenuItemUI_h_
#define _com_sun_java_swing_plaf_windows_WindowsMenuItemUI_h_
//$ class com.sun.java.swing.plaf.windows.WindowsMenuItemUI
//$ extends javax.swing.plaf.basic.BasicMenuItemUI

#include <javax/swing/plaf/basic/BasicMenuItemUI.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {
						class TMSchema$Part;
						class TMSchema$State;
						class WindowsMenuItemUIAccessor;
						class XPStyle;
					}
				}
			}
		}
	}
}
namespace java {
	namespace awt {
		class Color;
		class Graphics;
		class Rectangle;
	}
}
namespace java {
	namespace beans {
		class PropertyChangeListener;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
		class JMenuItem;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class ComponentUI;
		}
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $export WindowsMenuItemUI : public ::javax::swing::plaf::basic::BasicMenuItemUI {
	$class(WindowsMenuItemUI, 0, ::javax::swing::plaf::basic::BasicMenuItemUI)
public:
	WindowsMenuItemUI();
	void init$();
	static ::javax::swing::JMenuItem* access$000(::com::sun::java::swing::plaf::windows::WindowsMenuItemUI* x0);
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	static ::com::sun::java::swing::plaf::windows::TMSchema$Part* getPart(::com::sun::java::swing::plaf::windows::WindowsMenuItemUIAccessor* menuItemUI, ::javax::swing::JMenuItem* menuItem);
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* getState(::com::sun::java::swing::plaf::windows::WindowsMenuItemUIAccessor* menuItemUI, ::javax::swing::JMenuItem* menuItem);
	virtual void installListeners() override;
	static bool isVistaPainting(::com::sun::java::swing::plaf::windows::XPStyle* xp);
	static bool isVistaPainting();
	virtual void paintBackground(::java::awt::Graphics* g, ::javax::swing::JMenuItem* menuItem, ::java::awt::Color* bgColor) override;
	static void paintBackground(::com::sun::java::swing::plaf::windows::WindowsMenuItemUIAccessor* menuItemUI, ::java::awt::Graphics* g, ::javax::swing::JMenuItem* menuItem, ::java::awt::Color* bgColor);
	virtual void paintText(::java::awt::Graphics* g, ::javax::swing::JMenuItem* menuItem, ::java::awt::Rectangle* textRect, $String* text) override;
	static void paintText(::com::sun::java::swing::plaf::windows::WindowsMenuItemUIAccessor* menuItemUI, ::java::awt::Graphics* g, ::javax::swing::JMenuItem* menuItem, ::java::awt::Rectangle* textRect, $String* text);
	virtual void uninstallListeners() override;
	void updateCheckIcon();
	static bool $assertionsDisabled;
	::java::beans::PropertyChangeListener* changeListener = nullptr;
	::com::sun::java::swing::plaf::windows::WindowsMenuItemUIAccessor* accessor = nullptr;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsMenuItemUI_h_