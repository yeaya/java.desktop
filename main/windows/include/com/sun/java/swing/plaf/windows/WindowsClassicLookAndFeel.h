#ifndef _com_sun_java_swing_plaf_windows_WindowsClassicLookAndFeel_h_
#define _com_sun_java_swing_plaf_windows_WindowsClassicLookAndFeel_h_
//$ class com.sun.java.swing.plaf.windows.WindowsClassicLookAndFeel
//$ extends com.sun.java.swing.plaf.windows.WindowsLookAndFeel

#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $import WindowsClassicLookAndFeel : public ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel {
	$class(WindowsClassicLookAndFeel, $NO_CLASS_INIT, ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel)
public:
	WindowsClassicLookAndFeel();
	void init$();
	virtual $String* getName() override;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsClassicLookAndFeel_h_