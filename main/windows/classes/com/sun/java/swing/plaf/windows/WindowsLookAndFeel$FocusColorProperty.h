#ifndef _com_sun_java_swing_plaf_windows_WindowsLookAndFeel$FocusColorProperty_h_
#define _com_sun_java_swing_plaf_windows_WindowsLookAndFeel$FocusColorProperty_h_
//$ class com.sun.java.swing.plaf.windows.WindowsLookAndFeel$FocusColorProperty
//$ extends com.sun.java.swing.plaf.windows.WindowsDesktopProperty

#include <com/sun/java/swing/plaf/windows/WindowsDesktopProperty.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $export WindowsLookAndFeel$FocusColorProperty : public ::com::sun::java::swing::plaf::windows::WindowsDesktopProperty {
	$class(WindowsLookAndFeel$FocusColorProperty, $NO_CLASS_INIT, ::com::sun::java::swing::plaf::windows::WindowsDesktopProperty)
public:
	WindowsLookAndFeel$FocusColorProperty();
	void init$();
	virtual $Object* configureValue(Object$* value) override;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsLookAndFeel$FocusColorProperty_h_