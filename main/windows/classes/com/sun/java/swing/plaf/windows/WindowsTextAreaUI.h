#ifndef _com_sun_java_swing_plaf_windows_WindowsTextAreaUI_h_
#define _com_sun_java_swing_plaf_windows_WindowsTextAreaUI_h_
//$ class com.sun.java.swing.plaf.windows.WindowsTextAreaUI
//$ extends javax.swing.plaf.basic.BasicTextAreaUI

#include <javax/swing/plaf/basic/BasicTextAreaUI.h>

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

class $export WindowsTextAreaUI : public ::javax::swing::plaf::basic::BasicTextAreaUI {
	$class(WindowsTextAreaUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicTextAreaUI)
public:
	WindowsTextAreaUI();
	using ::javax::swing::plaf::basic::BasicTextAreaUI::create;
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

#endif // _com_sun_java_swing_plaf_windows_WindowsTextAreaUI_h_