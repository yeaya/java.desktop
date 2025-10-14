#ifndef _com_sun_java_swing_plaf_windows_WindowsMenuUI$WindowsMouseInputHandler_h_
#define _com_sun_java_swing_plaf_windows_WindowsMenuUI$WindowsMouseInputHandler_h_
//$ class com.sun.java.swing.plaf.windows.WindowsMenuUI$WindowsMouseInputHandler
//$ extends javax.swing.plaf.basic.BasicMenuUI$MouseInputHandler

#include <javax/swing/plaf/basic/BasicMenuUI$MouseInputHandler.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {
						class WindowsMenuUI;
					}
				}
			}
		}
	}
}
namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $export WindowsMenuUI$WindowsMouseInputHandler : public ::javax::swing::plaf::basic::BasicMenuUI$MouseInputHandler {
	$class(WindowsMenuUI$WindowsMouseInputHandler, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicMenuUI$MouseInputHandler)
public:
	WindowsMenuUI$WindowsMouseInputHandler();
	void init$(::com::sun::java::swing::plaf::windows::WindowsMenuUI* this$0);
	virtual void mouseEntered(::java::awt::event::MouseEvent* evt) override;
	virtual void mouseExited(::java::awt::event::MouseEvent* evt) override;
	::com::sun::java::swing::plaf::windows::WindowsMenuUI* this$0 = nullptr;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsMenuUI$WindowsMouseInputHandler_h_