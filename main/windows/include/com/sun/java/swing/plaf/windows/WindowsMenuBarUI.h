#ifndef _com_sun_java_swing_plaf_windows_WindowsMenuBarUI_h_
#define _com_sun_java_swing_plaf_windows_WindowsMenuBarUI_h_
//$ class com.sun.java.swing.plaf.windows.WindowsMenuBarUI
//$ extends javax.swing.plaf.basic.BasicMenuBarUI

#include <javax/swing/plaf/basic/BasicMenuBarUI.h>

namespace java {
	namespace awt {
		class Graphics;
		class Window;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class HierarchyListener;
			class WindowListener;
		}
	}
}
namespace javax {
	namespace swing {
		class JComponent;
		class JMenuBar;
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

class $import WindowsMenuBarUI : public ::javax::swing::plaf::basic::BasicMenuBarUI {
	$class(WindowsMenuBarUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicMenuBarUI)
public:
	WindowsMenuBarUI();
	void init$();
	static ::javax::swing::JMenuBar* access$000(::com::sun::java::swing::plaf::windows::WindowsMenuBarUI* x0);
	static ::javax::swing::JMenuBar* access$100(::com::sun::java::swing::plaf::windows::WindowsMenuBarUI* x0);
	static ::javax::swing::JMenuBar* access$200(::com::sun::java::swing::plaf::windows::WindowsMenuBarUI* x0);
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* x);
	virtual void installKeyboardActions() override;
	virtual void installListeners() override;
	void installWindowListener();
	static bool isActive(::javax::swing::JComponent* c);
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	virtual void uninstallListeners() override;
	void uninstallWindowListener();
	::java::awt::event::WindowListener* windowListener = nullptr;
	::java::awt::event::HierarchyListener* hierarchyListener = nullptr;
	::java::awt::Window* window = nullptr;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsMenuBarUI_h_