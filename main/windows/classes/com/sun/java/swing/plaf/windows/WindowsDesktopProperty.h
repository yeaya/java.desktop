#ifndef _com_sun_java_swing_plaf_windows_WindowsDesktopProperty_h_
#define _com_sun_java_swing_plaf_windows_WindowsDesktopProperty_h_
//$ class com.sun.java.swing.plaf.windows.WindowsDesktopProperty
//$ extends sun.swing.plaf.DesktopProperty

#include <sun/swing/plaf/DesktopProperty.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $export WindowsDesktopProperty : public ::sun::swing::plaf::DesktopProperty {
	$class(WindowsDesktopProperty, $NO_CLASS_INIT, ::sun::swing::plaf::DesktopProperty)
public:
	WindowsDesktopProperty();
	void init$($String* key, Object$* fallback);
	virtual void updateAllUIs() override;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsDesktopProperty_h_