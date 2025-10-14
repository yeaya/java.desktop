#ifndef _javax_swing_plaf_metal_MetalToggleButtonUI_h_
#define _javax_swing_plaf_metal_MetalToggleButtonUI_h_
//$ class javax.swing.plaf.metal.MetalToggleButtonUI
//$ extends javax.swing.plaf.basic.BasicToggleButtonUI

#include <javax/swing/plaf/basic/BasicToggleButtonUI.h>

#pragma push_macro("METAL_TOGGLE_BUTTON_UI_KEY")
#undef METAL_TOGGLE_BUTTON_UI_KEY

namespace java {
	namespace awt {
		class Color;
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

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class $export MetalToggleButtonUI : public ::javax::swing::plaf::basic::BasicToggleButtonUI {
	$class(MetalToggleButtonUI, 0, ::javax::swing::plaf::basic::BasicToggleButtonUI)
public:
	MetalToggleButtonUI();
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* b);
	virtual ::java::awt::Color* getDisabledTextColor();
	virtual ::java::awt::Color* getFocusColor();
	virtual ::java::awt::Color* getSelectColor();
	virtual void installDefaults(::javax::swing::AbstractButton* b) override;
	virtual void paintButtonPressed(::java::awt::Graphics* g, ::javax::swing::AbstractButton* b) override;
	virtual void paintFocus(::java::awt::Graphics* g, ::javax::swing::AbstractButton* b, ::java::awt::Rectangle* viewRect, ::java::awt::Rectangle* textRect, ::java::awt::Rectangle* iconRect) override;
	using ::javax::swing::plaf::basic::BasicToggleButtonUI::paintIcon;
	virtual void paintIcon(::java::awt::Graphics* g, ::javax::swing::AbstractButton* b, ::java::awt::Rectangle* iconRect) override;
	using ::javax::swing::plaf::basic::BasicToggleButtonUI::paintText;
	virtual void paintText(::java::awt::Graphics* g, ::javax::swing::JComponent* c, ::java::awt::Rectangle* textRect, $String* text) override;
	virtual void uninstallDefaults(::javax::swing::AbstractButton* b) override;
	virtual void update(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	static $Object* METAL_TOGGLE_BUTTON_UI_KEY;
	::java::awt::Color* focusColor = nullptr;
	::java::awt::Color* selectColor = nullptr;
	::java::awt::Color* disabledTextColor = nullptr;
	bool defaults_initialized = false;
};

			} // metal
		} // plaf
	} // swing
} // javax

#pragma pop_macro("METAL_TOGGLE_BUTTON_UI_KEY")

#endif // _javax_swing_plaf_metal_MetalToggleButtonUI_h_