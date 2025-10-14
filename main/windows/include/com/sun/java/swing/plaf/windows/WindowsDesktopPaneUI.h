#ifndef _com_sun_java_swing_plaf_windows_WindowsDesktopPaneUI_h_
#define _com_sun_java_swing_plaf_windows_WindowsDesktopPaneUI_h_
//$ class com.sun.java.swing.plaf.windows.WindowsDesktopPaneUI
//$ extends javax.swing.plaf.basic.BasicDesktopPaneUI

#include <javax/swing/plaf/basic/BasicDesktopPaneUI.h>

namespace javax {
	namespace swing {
		class JComponent;
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

class $import WindowsDesktopPaneUI : public ::javax::swing::plaf::basic::BasicDesktopPaneUI {
	$class(WindowsDesktopPaneUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicDesktopPaneUI)
public:
	WindowsDesktopPaneUI();
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual void installDefaults() override;
	virtual void installDesktopManager() override;
	virtual void installKeyboardActions() override;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsDesktopPaneUI_h_