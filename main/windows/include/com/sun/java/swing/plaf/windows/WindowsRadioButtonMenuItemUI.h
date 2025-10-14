#ifndef _com_sun_java_swing_plaf_windows_WindowsRadioButtonMenuItemUI_h_
#define _com_sun_java_swing_plaf_windows_WindowsRadioButtonMenuItemUI_h_
//$ class com.sun.java.swing.plaf.windows.WindowsRadioButtonMenuItemUI
//$ extends javax.swing.plaf.basic.BasicRadioButtonMenuItemUI

#include <javax/swing/plaf/basic/BasicRadioButtonMenuItemUI.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {
						class WindowsMenuItemUIAccessor;
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

class $import WindowsRadioButtonMenuItemUI : public ::javax::swing::plaf::basic::BasicRadioButtonMenuItemUI {
	$class(WindowsRadioButtonMenuItemUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicRadioButtonMenuItemUI)
public:
	WindowsRadioButtonMenuItemUI();
	void init$();
	static ::javax::swing::JMenuItem* access$000(::com::sun::java::swing::plaf::windows::WindowsRadioButtonMenuItemUI* x0);
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* b);
	virtual void paintBackground(::java::awt::Graphics* g, ::javax::swing::JMenuItem* menuItem, ::java::awt::Color* bgColor) override;
	virtual void paintText(::java::awt::Graphics* g, ::javax::swing::JMenuItem* menuItem, ::java::awt::Rectangle* textRect, $String* text) override;
	::com::sun::java::swing::plaf::windows::WindowsMenuItemUIAccessor* accessor = nullptr;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsRadioButtonMenuItemUI_h_