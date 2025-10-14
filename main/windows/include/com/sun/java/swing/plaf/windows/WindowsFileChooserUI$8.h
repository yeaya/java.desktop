#ifndef _com_sun_java_swing_plaf_windows_WindowsFileChooserUI$8_h_
#define _com_sun_java_swing_plaf_windows_WindowsFileChooserUI$8_h_
//$ class com.sun.java.swing.plaf.windows.WindowsFileChooserUI$8
//$ extends java.awt.event.FocusAdapter

#include <java/awt/event/FocusAdapter.h>

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
			class FocusEvent;
		}
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $import WindowsFileChooserUI$8 : public ::java::awt::event::FocusAdapter {
	$class(WindowsFileChooserUI$8, $NO_CLASS_INIT, ::java::awt::event::FocusAdapter)
public:
	WindowsFileChooserUI$8();
	void init$(::com::sun::java::swing::plaf::windows::WindowsFileChooserUI* this$0);
	virtual void focusGained(::java::awt::event::FocusEvent* e) override;
	::com::sun::java::swing::plaf::windows::WindowsFileChooserUI* this$0 = nullptr;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsFileChooserUI$8_h_