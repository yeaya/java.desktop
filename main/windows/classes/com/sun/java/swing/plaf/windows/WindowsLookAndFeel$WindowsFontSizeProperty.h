#ifndef _com_sun_java_swing_plaf_windows_WindowsLookAndFeel$WindowsFontSizeProperty_h_
#define _com_sun_java_swing_plaf_windows_WindowsLookAndFeel$WindowsFontSizeProperty_h_
//$ class com.sun.java.swing.plaf.windows.WindowsLookAndFeel$WindowsFontSizeProperty
//$ extends com.sun.java.swing.plaf.windows.WindowsDesktopProperty

#include <com/sun/java/swing/plaf/windows/WindowsDesktopProperty.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $export WindowsLookAndFeel$WindowsFontSizeProperty : public ::com::sun::java::swing::plaf::windows::WindowsDesktopProperty {
	$class(WindowsLookAndFeel$WindowsFontSizeProperty, $NO_CLASS_INIT, ::com::sun::java::swing::plaf::windows::WindowsDesktopProperty)
public:
	WindowsLookAndFeel$WindowsFontSizeProperty();
	void init$($String* key, $String* fontName, int32_t fontStyle, int32_t fontSize);
	virtual $Object* configureValue(Object$* value) override;
	$String* fontName = nullptr;
	int32_t fontSize = 0;
	int32_t fontStyle = 0;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsLookAndFeel$WindowsFontSizeProperty_h_