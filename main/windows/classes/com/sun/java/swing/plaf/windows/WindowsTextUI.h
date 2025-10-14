#ifndef _com_sun_java_swing_plaf_windows_WindowsTextUI_h_
#define _com_sun_java_swing_plaf_windows_WindowsTextUI_h_
//$ class com.sun.java.swing.plaf.windows.WindowsTextUI
//$ extends javax.swing.plaf.basic.BasicTextUI

#include <javax/swing/plaf/basic/BasicTextUI.h>

namespace javax {
	namespace swing {
		namespace text {
			class Caret;
			class LayeredHighlighter$LayerPainter;
		}
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $export WindowsTextUI : public ::javax::swing::plaf::basic::BasicTextUI {
	$class(WindowsTextUI, 0, ::javax::swing::plaf::basic::BasicTextUI)
public:
	WindowsTextUI();
	void init$();
	virtual ::javax::swing::text::Caret* createCaret() override;
	static ::javax::swing::text::LayeredHighlighter$LayerPainter* WindowsPainter;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsTextUI_h_