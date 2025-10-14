#ifndef _com_sun_java_swing_plaf_windows_WindowsFileChooserUI$3_h_
#define _com_sun_java_swing_plaf_windows_WindowsFileChooserUI$3_h_
//$ class com.sun.java.swing.plaf.windows.WindowsFileChooserUI$3
//$ extends java.awt.event.MouseAdapter

#include <java/awt/event/MouseAdapter.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {
						class WindowsFileChooserUI;
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
		class JButton;
		class JPopupMenu;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $import WindowsFileChooserUI$3 : public ::java::awt::event::MouseAdapter {
	$class(WindowsFileChooserUI$3, $NO_CLASS_INIT, ::java::awt::event::MouseAdapter)
public:
	WindowsFileChooserUI$3();
	void init$(::com::sun::java::swing::plaf::windows::WindowsFileChooserUI* this$0, ::javax::swing::JButton* val$viewMenuButton, ::javax::swing::JPopupMenu* val$viewTypePopupMenu);
	virtual void mousePressed(::java::awt::event::MouseEvent* e) override;
	::com::sun::java::swing::plaf::windows::WindowsFileChooserUI* this$0 = nullptr;
	::javax::swing::JPopupMenu* val$viewTypePopupMenu = nullptr;
	::javax::swing::JButton* val$viewMenuButton = nullptr;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsFileChooserUI$3_h_