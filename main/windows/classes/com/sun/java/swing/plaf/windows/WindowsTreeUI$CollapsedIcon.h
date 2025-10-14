#ifndef _com_sun_java_swing_plaf_windows_WindowsTreeUI$CollapsedIcon_h_
#define _com_sun_java_swing_plaf_windows_WindowsTreeUI$CollapsedIcon_h_
//$ class com.sun.java.swing.plaf.windows.WindowsTreeUI$CollapsedIcon
//$ extends com.sun.java.swing.plaf.windows.WindowsTreeUI$ExpandedIcon

#include <com/sun/java/swing/plaf/windows/WindowsTreeUI$ExpandedIcon.h>

namespace java {
	namespace awt {
		class Component;
		class Graphics;
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

class $export WindowsTreeUI$CollapsedIcon : public ::com::sun::java::swing::plaf::windows::WindowsTreeUI$ExpandedIcon {
	$class(WindowsTreeUI$CollapsedIcon, $NO_CLASS_INIT, ::com::sun::java::swing::plaf::windows::WindowsTreeUI$ExpandedIcon)
public:
	WindowsTreeUI$CollapsedIcon();
	void init$();
	static ::javax::swing::Icon* createCollapsedIcon();
	virtual void paintIcon(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y) override;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsTreeUI$CollapsedIcon_h_