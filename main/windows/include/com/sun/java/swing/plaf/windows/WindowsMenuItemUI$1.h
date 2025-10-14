#ifndef _com_sun_java_swing_plaf_windows_WindowsMenuItemUI$1_h_
#define _com_sun_java_swing_plaf_windows_WindowsMenuItemUI$1_h_
//$ class com.sun.java.swing.plaf.windows.WindowsMenuItemUI$1
//$ extends com.sun.java.swing.plaf.windows.WindowsMenuItemUIAccessor

#include <com/sun/java/swing/plaf/windows/WindowsMenuItemUIAccessor.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {
						class TMSchema$Part;
						class TMSchema$State;
						class WindowsMenuItemUI;
					}
				}
			}
		}
	}
}
namespace javax {
	namespace swing {
		class JMenuItem;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $import WindowsMenuItemUI$1 : public ::com::sun::java::swing::plaf::windows::WindowsMenuItemUIAccessor {
	$class(WindowsMenuItemUI$1, $NO_CLASS_INIT, ::com::sun::java::swing::plaf::windows::WindowsMenuItemUIAccessor)
public:
	WindowsMenuItemUI$1();
	void init$(::com::sun::java::swing::plaf::windows::WindowsMenuItemUI* this$0);
	virtual ::javax::swing::JMenuItem* getMenuItem() override;
	virtual ::com::sun::java::swing::plaf::windows::TMSchema$Part* getPart(::javax::swing::JMenuItem* menuItem) override;
	virtual ::com::sun::java::swing::plaf::windows::TMSchema$State* getState(::javax::swing::JMenuItem* menuItem) override;
	::com::sun::java::swing::plaf::windows::WindowsMenuItemUI* this$0 = nullptr;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsMenuItemUI$1_h_