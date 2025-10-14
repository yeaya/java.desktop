#ifndef _com_sun_java_swing_plaf_windows_WindowsInternalFrameUI_h_
#define _com_sun_java_swing_plaf_windows_WindowsInternalFrameUI_h_
//$ class com.sun.java.swing.plaf.windows.WindowsInternalFrameUI
//$ extends javax.swing.plaf.basic.BasicInternalFrameUI

#include <javax/swing/plaf/basic/BasicInternalFrameUI.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {
						class XPStyle;
					}
				}
			}
		}
	}
}
namespace javax {
	namespace swing {
		class DesktopManager;
		class JComponent;
		class JInternalFrame;
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
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $import WindowsInternalFrameUI : public ::javax::swing::plaf::basic::BasicInternalFrameUI {
	$class(WindowsInternalFrameUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicInternalFrameUI)
public:
	WindowsInternalFrameUI();
	void init$(::javax::swing::JInternalFrame* w);
	static ::javax::swing::JInternalFrame* access$000(::com::sun::java::swing::plaf::windows::WindowsInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$100(::com::sun::java::swing::plaf::windows::WindowsInternalFrameUI* x0);
	static ::javax::swing::JInternalFrame* access$200(::com::sun::java::swing::plaf::windows::WindowsInternalFrameUI* x0);
	static ::javax::swing::plaf::basic::BasicInternalFrameTitlePane* access$300(::com::sun::java::swing::plaf::windows::WindowsInternalFrameUI* x0);
	static ::javax::swing::plaf::basic::BasicInternalFrameTitlePane* access$400(::com::sun::java::swing::plaf::windows::WindowsInternalFrameUI* x0);
	virtual ::javax::swing::DesktopManager* createDesktopManager() override;
	virtual ::javax::swing::JComponent* createNorthPane(::javax::swing::JInternalFrame* w) override;
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* b);
	virtual void installDefaults() override;
	virtual void installUI(::javax::swing::JComponent* c) override;
	virtual void uninstallDefaults() override;
	::com::sun::java::swing::plaf::windows::XPStyle* xp = nullptr;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsInternalFrameUI_h_