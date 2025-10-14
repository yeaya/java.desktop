#ifndef _com_sun_java_swing_plaf_windows_WindowsLookAndFeel$ActiveWindowsIcon_h_
#define _com_sun_java_swing_plaf_windows_WindowsLookAndFeel$ActiveWindowsIcon_h_
//$ class com.sun.java.swing.plaf.windows.WindowsLookAndFeel$ActiveWindowsIcon
//$ extends javax.swing.UIDefaults$ActiveValue

#include <javax/swing/UIDefaults$ActiveValue.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {
						class WindowsDesktopProperty;
						class WindowsLookAndFeel;
					}
				}
			}
		}
	}
}
namespace javax {
	namespace swing {
		class Icon;
		class UIDefaults;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $export WindowsLookAndFeel$ActiveWindowsIcon : public ::javax::swing::UIDefaults$ActiveValue {
	$class(WindowsLookAndFeel$ActiveWindowsIcon, $NO_CLASS_INIT, ::javax::swing::UIDefaults$ActiveValue)
public:
	WindowsLookAndFeel$ActiveWindowsIcon();
	void init$(::com::sun::java::swing::plaf::windows::WindowsLookAndFeel* this$0, $String* desktopPropertyName, $String* nativeImageName, $String* fallbackName);
	virtual $Object* createValue(::javax::swing::UIDefaults* table) override;
	::com::sun::java::swing::plaf::windows::WindowsLookAndFeel* this$0 = nullptr;
	::javax::swing::Icon* icon = nullptr;
	$String* nativeImageName = nullptr;
	$String* fallbackName = nullptr;
	::com::sun::java::swing::plaf::windows::WindowsDesktopProperty* desktopProperty = nullptr;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsLookAndFeel$ActiveWindowsIcon_h_