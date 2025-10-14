#ifndef _com_sun_java_swing_plaf_windows_WindowsMenuBarUI$TakeFocus_h_
#define _com_sun_java_swing_plaf_windows_WindowsMenuBarUI$TakeFocus_h_
//$ class com.sun.java.swing.plaf.windows.WindowsMenuBarUI$TakeFocus
//$ extends javax.swing.AbstractAction

#include <javax/swing/AbstractAction.h>

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $export WindowsMenuBarUI$TakeFocus : public ::javax::swing::AbstractAction {
	$class(WindowsMenuBarUI$TakeFocus, $NO_CLASS_INIT, ::javax::swing::AbstractAction)
public:
	WindowsMenuBarUI$TakeFocus();
	void init$();
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsMenuBarUI$TakeFocus_h_