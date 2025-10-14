#ifndef _com_sun_java_swing_plaf_windows_WindowsLabelUI_h_
#define _com_sun_java_swing_plaf_windows_WindowsLabelUI_h_
//$ class com.sun.java.swing.plaf.windows.WindowsLabelUI
//$ extends javax.swing.plaf.basic.BasicLabelUI

#include <javax/swing/plaf/basic/BasicLabelUI.h>

#pragma push_macro("WINDOWS_LABEL_UI_KEY")
#undef WINDOWS_LABEL_UI_KEY

namespace java {
	namespace awt {
		class Graphics;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
		class JLabel;
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

class $import WindowsLabelUI : public ::javax::swing::plaf::basic::BasicLabelUI {
	$class(WindowsLabelUI, 0, ::javax::swing::plaf::basic::BasicLabelUI)
public:
	WindowsLabelUI();
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual void paintDisabledText(::javax::swing::JLabel* l, ::java::awt::Graphics* g, $String* s, int32_t textX, int32_t textY) override;
	virtual void paintEnabledText(::javax::swing::JLabel* l, ::java::awt::Graphics* g, $String* s, int32_t textX, int32_t textY) override;
	static $Object* WINDOWS_LABEL_UI_KEY;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#pragma pop_macro("WINDOWS_LABEL_UI_KEY")

#endif // _com_sun_java_swing_plaf_windows_WindowsLabelUI_h_