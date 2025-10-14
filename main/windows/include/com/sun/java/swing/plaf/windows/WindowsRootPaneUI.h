#ifndef _com_sun_java_swing_plaf_windows_WindowsRootPaneUI_h_
#define _com_sun_java_swing_plaf_windows_WindowsRootPaneUI_h_
//$ class com.sun.java.swing.plaf.windows.WindowsRootPaneUI
//$ extends javax.swing.plaf.basic.BasicRootPaneUI

#include <javax/swing/plaf/basic/BasicRootPaneUI.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {
						class WindowsRootPaneUI$AltProcessor;
					}
				}
			}
		}
	}
}
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

class $import WindowsRootPaneUI : public ::javax::swing::plaf::basic::BasicRootPaneUI {
	$class(WindowsRootPaneUI, 0, ::javax::swing::plaf::basic::BasicRootPaneUI)
public:
	WindowsRootPaneUI();
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	static ::com::sun::java::swing::plaf::windows::WindowsRootPaneUI* windowsRootPaneUI;
	static ::com::sun::java::swing::plaf::windows::WindowsRootPaneUI$AltProcessor* altProcessor;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsRootPaneUI_h_