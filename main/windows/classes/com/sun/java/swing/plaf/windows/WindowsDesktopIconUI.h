#ifndef _com_sun_java_swing_plaf_windows_WindowsDesktopIconUI_h_
#define _com_sun_java_swing_plaf_windows_WindowsDesktopIconUI_h_
//$ class com.sun.java.swing.plaf.windows.WindowsDesktopIconUI
//$ extends javax.swing.plaf.basic.BasicDesktopIconUI

#include <javax/swing/plaf/basic/BasicDesktopIconUI.h>

namespace java {
	namespace awt {
		class Dimension;
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

class $export WindowsDesktopIconUI : public ::javax::swing::plaf::basic::BasicDesktopIconUI {
	$class(WindowsDesktopIconUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicDesktopIconUI)
public:
	WindowsDesktopIconUI();
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual ::java::awt::Dimension* getMinimumSize(::javax::swing::JComponent* c) override;
	virtual ::java::awt::Dimension* getPreferredSize(::javax::swing::JComponent* c) override;
	virtual void installComponents() override;
	virtual void installDefaults() override;
	virtual void installUI(::javax::swing::JComponent* c) override;
	virtual void uninstallUI(::javax::swing::JComponent* c) override;
	int32_t width = 0;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsDesktopIconUI_h_