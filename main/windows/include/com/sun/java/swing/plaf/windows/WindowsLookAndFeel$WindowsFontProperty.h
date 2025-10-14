#ifndef _com_sun_java_swing_plaf_windows_WindowsLookAndFeel$WindowsFontProperty_h_
#define _com_sun_java_swing_plaf_windows_WindowsLookAndFeel$WindowsFontProperty_h_
//$ class com.sun.java.swing.plaf.windows.WindowsLookAndFeel$WindowsFontProperty
//$ extends com.sun.java.swing.plaf.windows.WindowsDesktopProperty

#include <com/sun/java/swing/plaf/windows/WindowsDesktopProperty.h>

namespace javax {
	namespace swing {
		class LookAndFeel;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $import WindowsLookAndFeel$WindowsFontProperty : public ::com::sun::java::swing::plaf::windows::WindowsDesktopProperty {
	$class(WindowsLookAndFeel$WindowsFontProperty, $NO_CLASS_INIT, ::com::sun::java::swing::plaf::windows::WindowsDesktopProperty)
public:
	WindowsLookAndFeel$WindowsFontProperty();
	void init$($String* key, Object$* backup);
	virtual $Object* configureValue(Object$* value) override;
	using ::com::sun::java::swing::plaf::windows::WindowsDesktopProperty::invalidate;
	virtual void invalidate(::javax::swing::LookAndFeel* laf) override;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsLookAndFeel$WindowsFontProperty_h_