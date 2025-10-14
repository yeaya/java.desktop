#ifndef _com_sun_java_swing_plaf_windows_WindowsToolBarUI_h_
#define _com_sun_java_swing_plaf_windows_WindowsToolBarUI_h_
//$ class com.sun.java.swing.plaf.windows.WindowsToolBarUI
//$ extends javax.swing.plaf.basic.BasicToolBarUI

#include <javax/swing/plaf/basic/BasicToolBarUI.h>

namespace java {
	namespace awt {
		class Graphics;
	}
}
namespace javax {
	namespace swing {
		class AbstractButton;
		class JComponent;
	}
}
namespace javax {
	namespace swing {
		namespace border {
			class Border;
		}
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

class $import WindowsToolBarUI : public ::javax::swing::plaf::basic::BasicToolBarUI {
	$class(WindowsToolBarUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicToolBarUI)
public:
	WindowsToolBarUI();
	void init$();
	virtual ::javax::swing::border::Border* createNonRolloverBorder() override;
	virtual ::javax::swing::border::Border* createRolloverBorder() override;
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual ::javax::swing::border::Border* getRolloverBorder(::javax::swing::AbstractButton* b) override;
	virtual void installDefaults() override;
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsToolBarUI_h_