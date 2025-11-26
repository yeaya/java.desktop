#ifndef _javax_swing_plaf_basic_BasicCheckBoxUI_h_
#define _javax_swing_plaf_basic_BasicCheckBoxUI_h_
//$ class javax.swing.plaf.basic.BasicCheckBoxUI
//$ extends javax.swing.plaf.basic.BasicRadioButtonUI

#include <javax/swing/plaf/basic/BasicRadioButtonUI.h>

#pragma push_macro("BASIC_CHECK_BOX_UI_KEY")
#undef BASIC_CHECK_BOX_UI_KEY

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
		namespace plaf {
			namespace basic {

class $export BasicCheckBoxUI : public ::javax::swing::plaf::basic::BasicRadioButtonUI {
	$class(BasicCheckBoxUI, 0, ::javax::swing::plaf::basic::BasicRadioButtonUI)
public:
	BasicCheckBoxUI();
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* b);
	virtual $String* getPropertyPrefix() override;
	using ::javax::swing::plaf::basic::BasicRadioButtonUI::paintFocus;
	using ::javax::swing::plaf::basic::BasicRadioButtonUI::paintIcon;
	static $Object* BASIC_CHECK_BOX_UI_KEY;
	static $String* propertyPrefix;
};

			} // basic
		} // plaf
	} // swing
} // javax

#pragma pop_macro("BASIC_CHECK_BOX_UI_KEY")

#endif // _javax_swing_plaf_basic_BasicCheckBoxUI_h_