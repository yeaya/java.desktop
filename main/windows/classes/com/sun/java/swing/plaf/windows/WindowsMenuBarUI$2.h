#ifndef _com_sun_java_swing_plaf_windows_WindowsMenuBarUI$2_h_
#define _com_sun_java_swing_plaf_windows_WindowsMenuBarUI$2_h_
//$ class com.sun.java.swing.plaf.windows.WindowsMenuBarUI$2
//$ extends java.awt.event.HierarchyListener

#include <java/awt/event/HierarchyListener.h>

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
			class HierarchyEvent;
		}
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $export WindowsMenuBarUI$2 : public ::java::awt::event::HierarchyListener {
	$class(WindowsMenuBarUI$2, $NO_CLASS_INIT, ::java::awt::event::HierarchyListener)
public:
	WindowsMenuBarUI$2();
	void init$(::com::sun::java::swing::plaf::windows::WindowsMenuBarUI* this$0);
	virtual void hierarchyChanged(::java::awt::event::HierarchyEvent* e) override;
	::com::sun::java::swing::plaf::windows::WindowsMenuBarUI* this$0 = nullptr;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsMenuBarUI$2_h_