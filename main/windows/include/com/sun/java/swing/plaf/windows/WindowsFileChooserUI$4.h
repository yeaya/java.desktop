#ifndef _com_sun_java_swing_plaf_windows_WindowsFileChooserUI$4_h_
#define _com_sun_java_swing_plaf_windows_WindowsFileChooserUI$4_h_
//$ class com.sun.java.swing.plaf.windows.WindowsFileChooserUI$4
//$ extends java.awt.event.KeyAdapter

#include <java/awt/event/KeyAdapter.h>

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
			class KeyEvent;
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

class $import WindowsFileChooserUI$4 : public ::java::awt::event::KeyAdapter {
	$class(WindowsFileChooserUI$4, $NO_CLASS_INIT, ::java::awt::event::KeyAdapter)
public:
	WindowsFileChooserUI$4();
	void init$(::com::sun::java::swing::plaf::windows::WindowsFileChooserUI* this$0, ::javax::swing::JButton* val$viewMenuButton, ::javax::swing::JPopupMenu* val$viewTypePopupMenu);
	virtual void keyPressed(::java::awt::event::KeyEvent* e) override;
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

#endif // _com_sun_java_swing_plaf_windows_WindowsFileChooserUI$4_h_