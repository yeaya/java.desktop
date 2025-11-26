#ifndef _javax_swing_plaf_basic_BasicToggleButtonUI_h_
#define _javax_swing_plaf_basic_BasicToggleButtonUI_h_
//$ class javax.swing.plaf.basic.BasicToggleButtonUI
//$ extends javax.swing.plaf.basic.BasicButtonUI

#include <javax/swing/plaf/basic/BasicButtonUI.h>

#pragma push_macro("BASIC_TOGGLE_BUTTON_UI_KEY")
#undef BASIC_TOGGLE_BUTTON_UI_KEY

namespace java {
	namespace awt {
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

class $import BasicToggleButtonUI : public ::javax::swing::plaf::basic::BasicButtonUI {
	$class(BasicToggleButtonUI, 0, ::javax::swing::plaf::basic::BasicButtonUI)
public:
	BasicToggleButtonUI();
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* b);
	virtual $String* getPropertyPrefix() override;
	virtual int32_t getTextShiftOffset() override;
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	using ::javax::swing::plaf::basic::BasicButtonUI::paintIcon;
	virtual void paintIcon(::java::awt::Graphics* g, ::javax::swing::AbstractButton* b, ::java::awt::Rectangle* iconRect);
	static $Object* BASIC_TOGGLE_BUTTON_UI_KEY;
	static $String* propertyPrefix;
};

			} // basic
		} // plaf
	} // swing
} // javax

#pragma pop_macro("BASIC_TOGGLE_BUTTON_UI_KEY")

#endif // _javax_swing_plaf_basic_BasicToggleButtonUI_h_