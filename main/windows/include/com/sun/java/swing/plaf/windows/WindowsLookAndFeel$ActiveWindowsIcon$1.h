#ifndef _com_sun_java_swing_plaf_windows_WindowsLookAndFeel$ActiveWindowsIcon$1_h_
#define _com_sun_java_swing_plaf_windows_WindowsLookAndFeel$ActiveWindowsIcon$1_h_
//$ class com.sun.java.swing.plaf.windows.WindowsLookAndFeel$ActiveWindowsIcon$1
//$ extends com.sun.java.swing.plaf.windows.WindowsLookAndFeel$TriggerDesktopProperty

#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$TriggerDesktopProperty.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {
						class WindowsLookAndFeel;
						class WindowsLookAndFeel$ActiveWindowsIcon;
					}
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $import WindowsLookAndFeel$ActiveWindowsIcon$1 : public ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel$TriggerDesktopProperty {
	$class(WindowsLookAndFeel$ActiveWindowsIcon$1, $NO_CLASS_INIT, ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel$TriggerDesktopProperty)
public:
	WindowsLookAndFeel$ActiveWindowsIcon$1();
	void init$(::com::sun::java::swing::plaf::windows::WindowsLookAndFeel$ActiveWindowsIcon* this$1, $String* key, ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel* val$this$0);
	virtual void updateUI() override;
	::com::sun::java::swing::plaf::windows::WindowsLookAndFeel$ActiveWindowsIcon* this$1 = nullptr;
	::com::sun::java::swing::plaf::windows::WindowsLookAndFeel* val$this$0 = nullptr;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsLookAndFeel$ActiveWindowsIcon$1_h_