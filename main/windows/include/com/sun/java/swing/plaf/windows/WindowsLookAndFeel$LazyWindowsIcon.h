#ifndef _com_sun_java_swing_plaf_windows_WindowsLookAndFeel$LazyWindowsIcon_h_
#define _com_sun_java_swing_plaf_windows_WindowsLookAndFeel$LazyWindowsIcon_h_
//$ class com.sun.java.swing.plaf.windows.WindowsLookAndFeel$LazyWindowsIcon
//$ extends javax.swing.UIDefaults$LazyValue

#include <javax/swing/UIDefaults$LazyValue.h>

namespace javax {
	namespace swing {
		class UIDefaults;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $import WindowsLookAndFeel$LazyWindowsIcon : public ::javax::swing::UIDefaults$LazyValue {
	$class(WindowsLookAndFeel$LazyWindowsIcon, $NO_CLASS_INIT, ::javax::swing::UIDefaults$LazyValue)
public:
	WindowsLookAndFeel$LazyWindowsIcon();
	void init$($String* nativeImage, $String* resource);
	virtual $Object* createValue(::javax::swing::UIDefaults* table) override;
	$String* nativeImage = nullptr;
	$String* resource = nullptr;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsLookAndFeel$LazyWindowsIcon_h_