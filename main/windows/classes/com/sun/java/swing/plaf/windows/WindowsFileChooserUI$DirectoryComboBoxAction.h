#ifndef _com_sun_java_swing_plaf_windows_WindowsFileChooserUI$DirectoryComboBoxAction_h_
#define _com_sun_java_swing_plaf_windows_WindowsFileChooserUI$DirectoryComboBoxAction_h_
//$ class com.sun.java.swing.plaf.windows.WindowsFileChooserUI$DirectoryComboBoxAction
//$ extends java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>

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

class $export WindowsFileChooserUI$DirectoryComboBoxAction : public ::java::awt::event::ActionListener {
	$class(WindowsFileChooserUI$DirectoryComboBoxAction, $NO_CLASS_INIT, ::java::awt::event::ActionListener)
public:
	WindowsFileChooserUI$DirectoryComboBoxAction();
	void init$(::com::sun::java::swing::plaf::windows::WindowsFileChooserUI* this$0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	::com::sun::java::swing::plaf::windows::WindowsFileChooserUI* this$0 = nullptr;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsFileChooserUI$DirectoryComboBoxAction_h_