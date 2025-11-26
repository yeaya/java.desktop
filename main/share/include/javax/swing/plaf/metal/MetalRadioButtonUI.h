#ifndef _javax_swing_plaf_metal_MetalRadioButtonUI_h_
#define _javax_swing_plaf_metal_MetalRadioButtonUI_h_
//$ class javax.swing.plaf.metal.MetalRadioButtonUI
//$ extends javax.swing.plaf.basic.BasicRadioButtonUI

#include <javax/swing/plaf/basic/BasicRadioButtonUI.h>

#pragma push_macro("METAL_RADIO_BUTTON_UI_KEY")
#undef METAL_RADIO_BUTTON_UI_KEY

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

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class $import MetalRadioButtonUI : public ::javax::swing::plaf::basic::BasicRadioButtonUI {
	$class(MetalRadioButtonUI, 0, ::javax::swing::plaf::basic::BasicRadioButtonUI)
public:
	MetalRadioButtonUI();
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual ::java::awt::Color* getDisabledTextColor();
	virtual ::java::awt::Color* getFocusColor();
	virtual ::java::awt::Color* getSelectColor();
	virtual void installDefaults(::javax::swing::AbstractButton* b) override;
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	using ::javax::swing::plaf::basic::BasicRadioButtonUI::paintFocus;
	virtual void paintFocus(::java::awt::Graphics* g, ::java::awt::Rectangle* t, ::java::awt::Dimension* d) override;
	using ::javax::swing::plaf::basic::BasicRadioButtonUI::paintIcon;
	virtual void uninstallDefaults(::javax::swing::AbstractButton* b) override;
	static $Object* METAL_RADIO_BUTTON_UI_KEY;
	::java::awt::Color* focusColor = nullptr;
	::java::awt::Color* selectColor = nullptr;
	::java::awt::Color* disabledTextColor = nullptr;
	bool defaults_initialized = false;
};

			} // metal
		} // plaf
	} // swing
} // javax

#pragma pop_macro("METAL_RADIO_BUTTON_UI_KEY")

#endif // _javax_swing_plaf_metal_MetalRadioButtonUI_h_