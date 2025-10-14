#ifndef _com_sun_java_swing_plaf_windows_WindowsMenuBarUI$1_h_
#define _com_sun_java_swing_plaf_windows_WindowsMenuBarUI$1_h_
//$ class com.sun.java.swing.plaf.windows.WindowsMenuBarUI$1
//$ extends java.awt.event.WindowAdapter

#include <java/awt/event/WindowAdapter.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {
						class WindowsMenuBarUI;
					}
				}
			}
		}
	}
}
namespace java {
	namespace awt {
		namespace event {
			class WindowEvent;
		}
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $export WindowsMenuBarUI$1 : public ::java::awt::event::WindowAdapter {
	$class(WindowsMenuBarUI$1, $NO_CLASS_INIT, ::java::awt::event::WindowAdapter)
public:
	WindowsMenuBarUI$1();
	void init$(::com::sun::java::swing::plaf::windows::WindowsMenuBarUI* this$0);
	virtual void windowActivated(::java::awt::event::WindowEvent* e) override;
	virtual void windowDeactivated(::java::awt::event::WindowEvent* e) override;
	::com::sun::java::swing::plaf::windows::WindowsMenuBarUI* this$0 = nullptr;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsMenuBarUI$1_h_