#ifndef _com_sun_java_swing_plaf_windows_WindowsScrollBarUI$1_h_
#define _com_sun_java_swing_plaf_windows_WindowsScrollBarUI$1_h_
//$ class com.sun.java.swing.plaf.windows.WindowsScrollBarUI$1
//$ extends javax.swing.plaf.basic.BasicScrollBarUI$ArrowButtonListener

#include <javax/swing/plaf/basic/BasicScrollBarUI$ArrowButtonListener.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {
						class WindowsScrollBarUI;
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

class $import WindowsScrollBarUI$1 : public ::javax::swing::plaf::basic::BasicScrollBarUI$ArrowButtonListener {
	$class(WindowsScrollBarUI$1, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicScrollBarUI$ArrowButtonListener)
public:
	WindowsScrollBarUI$1();
	void init$(::com::sun::java::swing::plaf::windows::WindowsScrollBarUI* this$0);
	virtual void mouseEntered(::java::awt::event::MouseEvent* evt) override;
	virtual void mouseExited(::java::awt::event::MouseEvent* evt) override;
	void repaint();
	::com::sun::java::swing::plaf::windows::WindowsScrollBarUI* this$0 = nullptr;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsScrollBarUI$1_h_