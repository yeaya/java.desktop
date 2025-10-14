#ifndef _javax_swing_plaf_metal_MetalButtonUI_h_
#define _javax_swing_plaf_metal_MetalButtonUI_h_
//$ class javax.swing.plaf.metal.MetalButtonUI
//$ extends javax.swing.plaf.basic.BasicButtonUI

#include <javax/swing/plaf/basic/BasicButtonUI.h>

#pragma push_macro("METAL_BUTTON_UI_KEY")
#undef METAL_BUTTON_UI_KEY

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
			namespace basic {
				class BasicButtonListener;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class $import MetalButtonUI : public ::javax::swing::plaf::basic::BasicButtonUI {
	$class(MetalButtonUI, 0, ::javax::swing::plaf::basic::BasicButtonUI)
public:
	MetalButtonUI();
	void init$();
	virtual ::javax::swing::plaf::basic::BasicButtonListener* createButtonListener(::javax::swing::AbstractButton* b) override;
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual ::java::awt::Color* getDisabledTextColor();
	virtual ::java::awt::Color* getFocusColor();
	virtual ::java::awt::Color* getSelectColor();
	virtual void installDefaults(::javax::swing::AbstractButton* b) override;
	virtual void paintButtonPressed(::java::awt::Graphics* g, ::javax::swing::AbstractButton* b) override;
	virtual void paintFocus(::java::awt::Graphics* g, ::javax::swing::AbstractButton* b, ::java::awt::Rectangle* viewRect, ::java::awt::Rectangle* textRect, ::java::awt::Rectangle* iconRect) override;
	using ::javax::swing::plaf::basic::BasicButtonUI::paintText;
	virtual void paintText(::java::awt::Graphics* g, ::javax::swing::JComponent* c, ::java::awt::Rectangle* textRect, $String* text) override;
	virtual void uninstallDefaults(::javax::swing::AbstractButton* b) override;
	virtual void update(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	::java::awt::Color* focusColor = nullptr;
	::java::awt::Color* selectColor = nullptr;
	::java::awt::Color* disabledTextColor = nullptr;
	static $Object* METAL_BUTTON_UI_KEY;
};

			} // metal
		} // plaf
	} // swing
} // javax

#pragma pop_macro("METAL_BUTTON_UI_KEY")

#endif // _javax_swing_plaf_metal_MetalButtonUI_h_