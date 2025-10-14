#ifndef _com_sun_java_swing_plaf_windows_WindowsLookAndFeel$TriggerDesktopProperty_h_
#define _com_sun_java_swing_plaf_windows_WindowsLookAndFeel$TriggerDesktopProperty_h_
//$ class com.sun.java.swing.plaf.windows.WindowsLookAndFeel$TriggerDesktopProperty
//$ extends com.sun.java.swing.plaf.windows.WindowsDesktopProperty

#include <com/sun/java/swing/plaf/windows/WindowsDesktopProperty.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {
						class WindowsLookAndFeel;
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

class $import WindowsLookAndFeel$TriggerDesktopProperty : public ::com::sun::java::swing::plaf::windows::WindowsDesktopProperty {
	$class(WindowsLookAndFeel$TriggerDesktopProperty, $NO_CLASS_INIT, ::com::sun::java::swing::plaf::windows::WindowsDesktopProperty)
public:
	WindowsLookAndFeel$TriggerDesktopProperty();
	void init$(::com::sun::java::swing::plaf::windows::WindowsLookAndFeel* this$0, $String* key);
	virtual void updateUI() override;
	::com::sun::java::swing::plaf::windows::WindowsLookAndFeel* this$0 = nullptr;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsLookAndFeel$TriggerDesktopProperty_h_