#ifndef _com_sun_java_swing_plaf_windows_WindowsPopupMenuSeparatorUI_h_
#define _com_sun_java_swing_plaf_windows_WindowsPopupMenuSeparatorUI_h_
//$ class com.sun.java.swing.plaf.windows.WindowsPopupMenuSeparatorUI
//$ extends javax.swing.plaf.basic.BasicPopupMenuSeparatorUI

#include <javax/swing/plaf/basic/BasicPopupMenuSeparatorUI.h>

namespace java {
	namespace awt {
		class Dimension;
		class Graphics;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class ComponentUI;
		}
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $export WindowsPopupMenuSeparatorUI : public ::javax::swing::plaf::basic::BasicPopupMenuSeparatorUI {
	$class(WindowsPopupMenuSeparatorUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicPopupMenuSeparatorUI)
public:
	WindowsPopupMenuSeparatorUI();
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual ::java::awt::Dimension* getPreferredSize(::javax::swing::JComponent* c) override;
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsPopupMenuSeparatorUI_h_