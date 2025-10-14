#ifndef _com_sun_java_swing_plaf_windows_WindowsMenuUI_h_
#define _com_sun_java_swing_plaf_windows_WindowsMenuUI_h_
//$ class com.sun.java.swing.plaf.windows.WindowsMenuUI
//$ extends javax.swing.plaf.basic.BasicMenuUI

#include <javax/swing/plaf/basic/BasicMenuUI.h>

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
		class Dimension;
		class Graphics;
		class Rectangle;
	}
}
namespace java {
	namespace lang {
		class Integer;
	}
}
namespace javax {
	namespace swing {
		class Icon;
		class JComponent;
		class JMenuItem;
	}
}
namespace javax {
	namespace swing {
		namespace event {
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

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $export WindowsMenuUI : public ::javax::swing::plaf::basic::BasicMenuUI {
	$class(WindowsMenuUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicMenuUI)
public:
	WindowsMenuUI();
	void init$();
	static ::javax::swing::JMenuItem* access$000(::com::sun::java::swing::plaf::windows::WindowsMenuUI* x0);
	static ::javax::swing::JMenuItem* access$100(::com::sun::java::swing::plaf::windows::WindowsMenuUI* x0);
	static ::javax::swing::JMenuItem* access$200(::com::sun::java::swing::plaf::windows::WindowsMenuUI* x0);
	virtual ::javax::swing::event::MouseInputListener* createMouseInputListener(::javax::swing::JComponent* c) override;
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* x);
	virtual ::java::awt::Dimension* getPreferredMenuItemSize(::javax::swing::JComponent* c, ::javax::swing::Icon* checkIcon, ::javax::swing::Icon* arrowIcon, int32_t defaultTextIconGap) override;
	virtual void installDefaults() override;
	virtual void paintBackground(::java::awt::Graphics* g, ::javax::swing::JMenuItem* menuItem, ::java::awt::Color* bgColor) override;
	virtual void paintText(::java::awt::Graphics* g, ::javax::swing::JMenuItem* menuItem, ::java::awt::Rectangle* textRect, $String* text) override;
	::java::lang::Integer* menuBarHeight = nullptr;
	bool hotTrackingOn = false;
	::com::sun::java::swing::plaf::windows::WindowsMenuItemUIAccessor* accessor = nullptr;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsMenuUI_h_