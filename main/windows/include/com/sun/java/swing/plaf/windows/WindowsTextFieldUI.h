#ifndef _com_sun_java_swing_plaf_windows_WindowsTextFieldUI_h_
#define _com_sun_java_swing_plaf_windows_WindowsTextFieldUI_h_
//$ class com.sun.java.swing.plaf.windows.WindowsTextFieldUI
//$ extends javax.swing.plaf.basic.BasicTextFieldUI

#include <javax/swing/plaf/basic/BasicTextFieldUI.h>

namespace java {
	namespace awt {
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
namespace javax {
	namespace swing {
		namespace text {
			class Caret;
		}
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $import WindowsTextFieldUI : public ::javax::swing::plaf::basic::BasicTextFieldUI {
	$class(WindowsTextFieldUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicTextFieldUI)
public:
	WindowsTextFieldUI();
	using ::javax::swing::plaf::basic::BasicTextFieldUI::create;
	void init$();
	virtual ::javax::swing::text::Caret* createCaret() override;
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual void paintBackground(::java::awt::Graphics* g) override;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsTextFieldUI_h_