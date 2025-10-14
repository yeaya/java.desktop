#ifndef _javax_swing_plaf_basic_BasicFormattedTextFieldUI_h_
#define _javax_swing_plaf_basic_BasicFormattedTextFieldUI_h_
//$ class javax.swing.plaf.basic.BasicFormattedTextFieldUI
//$ extends javax.swing.plaf.basic.BasicTextFieldUI

#include <javax/swing/plaf/basic/BasicTextFieldUI.h>

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

class $export BasicFormattedTextFieldUI : public ::javax::swing::plaf::basic::BasicTextFieldUI {
	$class(BasicFormattedTextFieldUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicTextFieldUI)
public:
	BasicFormattedTextFieldUI();
	using ::javax::swing::plaf::basic::BasicTextFieldUI::create;
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual $String* getPropertyPrefix() override;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicFormattedTextFieldUI_h_