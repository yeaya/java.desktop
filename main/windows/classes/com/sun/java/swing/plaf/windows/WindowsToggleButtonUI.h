#ifndef _com_sun_java_swing_plaf_windows_WindowsToggleButtonUI_h_
#define _com_sun_java_swing_plaf_windows_WindowsToggleButtonUI_h_
//$ class com.sun.java.swing.plaf.windows.WindowsToggleButtonUI
//$ extends javax.swing.plaf.basic.BasicToggleButtonUI

#include <javax/swing/plaf/basic/BasicToggleButtonUI.h>

#pragma push_macro("WINDOWS_TOGGLE_BUTTON_UI_KEY")
#undef WINDOWS_TOGGLE_BUTTON_UI_KEY

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

class $export WindowsToggleButtonUI : public ::javax::swing::plaf::basic::BasicToggleButtonUI {
	$class(WindowsToggleButtonUI, 0, ::javax::swing::plaf::basic::BasicToggleButtonUI)
public:
	WindowsToggleButtonUI();
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* b);
	virtual ::java::awt::Color* getFocusColor();
	virtual ::java::awt::Dimension* getPreferredSize(::javax::swing::JComponent* c) override;
	virtual void installDefaults(::javax::swing::AbstractButton* b) override;
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	virtual void paintButtonPressed(::java::awt::Graphics* g, ::javax::swing::AbstractButton* b) override;
	virtual void paintFocus(::java::awt::Graphics* g, ::javax::swing::AbstractButton* b, ::java::awt::Rectangle* viewRect, ::java::awt::Rectangle* textRect, ::java::awt::Rectangle* iconRect) override;
	using ::javax::swing::plaf::basic::BasicToggleButtonUI::paintIcon;
	using ::javax::swing::plaf::basic::BasicToggleButtonUI::paintText;
	virtual void paintText(::java::awt::Graphics* g, ::javax::swing::AbstractButton* b, ::java::awt::Rectangle* textRect, $String* text) override;
	virtual void uninstallDefaults(::javax::swing::AbstractButton* b) override;
	int32_t dashedRectGapX = 0;
	int32_t dashedRectGapY = 0;
	int32_t dashedRectGapWidth = 0;
	int32_t dashedRectGapHeight = 0;
	::java::awt::Color* focusColor = nullptr;
	static $Object* WINDOWS_TOGGLE_BUTTON_UI_KEY;
	bool defaults_initialized = false;
	::java::awt::Color* cachedSelectedColor = nullptr;
	::java::awt::Color* cachedBackgroundColor = nullptr;
	::java::awt::Color* cachedHighlightColor = nullptr;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#pragma pop_macro("WINDOWS_TOGGLE_BUTTON_UI_KEY")

#endif // _com_sun_java_swing_plaf_windows_WindowsToggleButtonUI_h_