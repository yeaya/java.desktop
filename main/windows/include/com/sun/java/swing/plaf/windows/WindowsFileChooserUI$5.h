#ifndef _com_sun_java_swing_plaf_windows_WindowsFileChooserUI$5_h_
#define _com_sun_java_swing_plaf_windows_WindowsFileChooserUI$5_h_
//$ class com.sun.java.swing.plaf.windows.WindowsFileChooserUI$5
//$ extends javax.swing.event.PopupMenuListener

#include <javax/swing/event/PopupMenuListener.h>

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
namespace javax {
	namespace swing {
		class JButton;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class PopupMenuEvent;
		}
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $import WindowsFileChooserUI$5 : public ::javax::swing::event::PopupMenuListener {
	$class(WindowsFileChooserUI$5, $NO_CLASS_INIT, ::javax::swing::event::PopupMenuListener)
public:
	WindowsFileChooserUI$5();
	void init$(::com::sun::java::swing::plaf::windows::WindowsFileChooserUI* this$0, ::javax::swing::JButton* val$viewMenuButton);
	virtual void popupMenuCanceled(::javax::swing::event::PopupMenuEvent* e) override;
	virtual void popupMenuWillBecomeInvisible(::javax::swing::event::PopupMenuEvent* e) override;
	virtual void popupMenuWillBecomeVisible(::javax::swing::event::PopupMenuEvent* e) override;
	::com::sun::java::swing::plaf::windows::WindowsFileChooserUI* this$0 = nullptr;
	::javax::swing::JButton* val$viewMenuButton = nullptr;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsFileChooserUI$5_h_