#ifndef _com_sun_java_swing_plaf_windows_WindowsLookAndFeel$FontDesktopProperty_h_
#define _com_sun_java_swing_plaf_windows_WindowsLookAndFeel$FontDesktopProperty_h_
//$ class com.sun.java.swing.plaf.windows.WindowsLookAndFeel$FontDesktopProperty
//$ extends com.sun.java.swing.plaf.windows.WindowsLookAndFeel$TriggerDesktopProperty

#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$TriggerDesktopProperty.h>

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

class $import WindowsLookAndFeel$FontDesktopProperty : public ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel$TriggerDesktopProperty {
	$class(WindowsLookAndFeel$FontDesktopProperty, $NO_CLASS_INIT, ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel$TriggerDesktopProperty)
public:
	WindowsLookAndFeel$FontDesktopProperty();
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

#endif // _com_sun_java_swing_plaf_windows_WindowsLookAndFeel$FontDesktopProperty_h_