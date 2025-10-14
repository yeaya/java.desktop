#ifndef _com_sun_java_swing_plaf_windows_WindowsComboBoxUI$1_h_
#define _com_sun_java_swing_plaf_windows_WindowsComboBoxUI$1_h_
//$ class com.sun.java.swing.plaf.windows.WindowsComboBoxUI$1
//$ extends java.awt.event.MouseAdapter

#include <java/awt/event/MouseAdapter.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {
						class WindowsComboBoxUI;
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
namespace javax {
	namespace swing {
		class JComboBox;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $import WindowsComboBoxUI$1 : public ::java::awt::event::MouseAdapter {
	$class(WindowsComboBoxUI$1, $NO_CLASS_INIT, ::java::awt::event::MouseAdapter)
public:
	WindowsComboBoxUI$1();
	void init$();
	::javax::swing::JComboBox* getComboBox(::java::awt::event::MouseEvent* event);
	::com::sun::java::swing::plaf::windows::WindowsComboBoxUI* getWindowsComboBoxUI(::java::awt::event::MouseEvent* event);
	void handleRollover(::java::awt::event::MouseEvent* e, bool isRollover);
	virtual void mouseEntered(::java::awt::event::MouseEvent* e) override;
	virtual void mouseExited(::java::awt::event::MouseEvent* e) override;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsComboBoxUI$1_h_