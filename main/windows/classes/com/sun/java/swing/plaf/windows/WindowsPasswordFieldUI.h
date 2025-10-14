#ifndef _com_sun_java_swing_plaf_windows_WindowsPasswordFieldUI_h_
#define _com_sun_java_swing_plaf_windows_WindowsPasswordFieldUI_h_
//$ class com.sun.java.swing.plaf.windows.WindowsPasswordFieldUI
//$ extends javax.swing.plaf.basic.BasicPasswordFieldUI

#include <javax/swing/plaf/basic/BasicPasswordFieldUI.h>

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

class $export WindowsPasswordFieldUI : public ::javax::swing::plaf::basic::BasicPasswordFieldUI {
	$class(WindowsPasswordFieldUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicPasswordFieldUI)
public:
	WindowsPasswordFieldUI();
	using ::javax::swing::plaf::basic::BasicPasswordFieldUI::create;
	void init$();
	virtual ::javax::swing::text::Caret* createCaret() override;
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsPasswordFieldUI_h_