#ifndef _com_sun_java_swing_plaf_windows_WindowsToolBarSeparatorUI_h_
#define _com_sun_java_swing_plaf_windows_WindowsToolBarSeparatorUI_h_
//$ class com.sun.java.swing.plaf.windows.WindowsToolBarSeparatorUI
//$ extends javax.swing.plaf.basic.BasicToolBarSeparatorUI

#include <javax/swing/plaf/basic/BasicToolBarSeparatorUI.h>

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

class $export WindowsToolBarSeparatorUI : public ::javax::swing::plaf::basic::BasicToolBarSeparatorUI {
	$class(WindowsToolBarSeparatorUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicToolBarSeparatorUI)
public:
	WindowsToolBarSeparatorUI();
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual ::java::awt::Dimension* getMaximumSize(::javax::swing::JComponent* c) override;
	virtual ::java::awt::Dimension* getPreferredSize(::javax::swing::JComponent* c) override;
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsToolBarSeparatorUI_h_