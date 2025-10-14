#ifndef _com_sun_java_swing_plaf_windows_WindowsBorders_h_
#define _com_sun_java_swing_plaf_windows_WindowsBorders_h_
//$ class com.sun.java.swing.plaf.windows.WindowsBorders
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace swing {
		namespace border {
			class Border;
		}
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $import WindowsBorders : public ::java::lang::Object {
	$class(WindowsBorders, $NO_CLASS_INIT, ::java::lang::Object)
public:
	WindowsBorders();
	void init$();
	static ::javax::swing::border::Border* getFocusCellHighlightBorder();
	static ::javax::swing::border::Border* getInternalFrameBorder();
	static ::javax::swing::border::Border* getProgressBarBorder();
	static ::javax::swing::border::Border* getTableHeaderBorder();
	static ::javax::swing::border::Border* getToolBarBorder();
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsBorders_h_