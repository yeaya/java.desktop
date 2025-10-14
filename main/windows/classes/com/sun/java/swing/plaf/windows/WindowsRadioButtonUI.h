#ifndef _com_sun_java_swing_plaf_windows_WindowsRadioButtonUI_h_
#define _com_sun_java_swing_plaf_windows_WindowsRadioButtonUI_h_
//$ class com.sun.java.swing.plaf.windows.WindowsRadioButtonUI
//$ extends javax.swing.plaf.basic.BasicRadioButtonUI

#include <javax/swing/plaf/basic/BasicRadioButtonUI.h>

#pragma push_macro("WINDOWS_RADIO_BUTTON_UI_KEY")
#undef WINDOWS_RADIO_BUTTON_UI_KEY

namespace java {
	namespace awt {
		class Color;
		class Dimension;
		class Graphics;
		class Rectangle;
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

class $export WindowsRadioButtonUI : public ::javax::swing::plaf::basic::BasicRadioButtonUI {
	$class(WindowsRadioButtonUI, 0, ::javax::swing::plaf::basic::BasicRadioButtonUI)
public:
	WindowsRadioButtonUI();
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual ::java::awt::Color* getFocusColor();
	virtual ::java::awt::Dimension* getPreferredSize(::javax::swing::JComponent* c) override;
	virtual void installDefaults(::javax::swing::AbstractButton* b) override;
	using ::javax::swing::plaf::basic::BasicRadioButtonUI::paintFocus;
	virtual void paintFocus(::java::awt::Graphics* g, ::java::awt::Rectangle* textRect, ::java::awt::Dimension* d) override;
	using ::javax::swing::plaf::basic::BasicRadioButtonUI::paintIcon;
	using ::javax::swing::plaf::basic::BasicRadioButtonUI::paintText;
	virtual void paintText(::java::awt::Graphics* g, ::javax::swing::AbstractButton* b, ::java::awt::Rectangle* textRect, $String* text) override;
	virtual void uninstallDefaults(::javax::swing::AbstractButton* b) override;
	static $Object* WINDOWS_RADIO_BUTTON_UI_KEY;
	int32_t dashedRectGapX = 0;
	int32_t dashedRectGapY = 0;
	int32_t dashedRectGapWidth = 0;
	int32_t dashedRectGapHeight = 0;
	::java::awt::Color* focusColor = nullptr;
	bool initialized = false;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#pragma pop_macro("WINDOWS_RADIO_BUTTON_UI_KEY")

#endif // _com_sun_java_swing_plaf_windows_WindowsRadioButtonUI_h_