#ifndef _com_sun_java_swing_plaf_windows_WindowsIconFactory_h_
#define _com_sun_java_swing_plaf_windows_WindowsIconFactory_h_
//$ class com.sun.java.swing.plaf.windows.WindowsIconFactory
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {
						class WindowsIconFactory$VistaMenuItemCheckIconFactory;
					}
				}
			}
		}
	}
}
namespace javax {
	namespace swing {
		class Icon;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $import WindowsIconFactory : public ::java::io::Serializable {
	$class(WindowsIconFactory, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	WindowsIconFactory();
	void init$();
	static ::javax::swing::Icon* createFrameCloseIcon();
	static ::javax::swing::Icon* createFrameIconifyIcon();
	static ::javax::swing::Icon* createFrameMaximizeIcon();
	static ::javax::swing::Icon* createFrameMinimizeIcon();
	static ::javax::swing::Icon* createFrameResizeIcon();
	static ::javax::swing::Icon* getCheckBoxIcon();
	static ::javax::swing::Icon* getCheckBoxMenuItemIcon();
	static ::javax::swing::Icon* getMenuArrowIcon();
	static ::javax::swing::Icon* getMenuItemArrowIcon();
	static ::javax::swing::Icon* getMenuItemCheckIcon();
	static ::com::sun::java::swing::plaf::windows::WindowsIconFactory$VistaMenuItemCheckIconFactory* getMenuItemCheckIconFactory();
	static ::javax::swing::Icon* getRadioButtonIcon();
	static ::javax::swing::Icon* getRadioButtonMenuItemIcon();
	static ::javax::swing::Icon* frame_closeIcon;
	static ::javax::swing::Icon* frame_iconifyIcon;
	static ::javax::swing::Icon* frame_maxIcon;
	static ::javax::swing::Icon* frame_minIcon;
	static ::javax::swing::Icon* frame_resizeIcon;
	static ::javax::swing::Icon* checkBoxIcon;
	static ::javax::swing::Icon* radioButtonIcon;
	static ::javax::swing::Icon* checkBoxMenuItemIcon;
	static ::javax::swing::Icon* radioButtonMenuItemIcon;
	static ::javax::swing::Icon* menuItemCheckIcon;
	static ::javax::swing::Icon* menuItemArrowIcon;
	static ::javax::swing::Icon* menuArrowIcon;
	static ::com::sun::java::swing::plaf::windows::WindowsIconFactory$VistaMenuItemCheckIconFactory* menuItemCheckIconFactory;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsIconFactory_h_