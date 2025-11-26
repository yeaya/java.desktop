#ifndef _javax_swing_plaf_basic_BasicPasswordFieldUI_h_
#define _javax_swing_plaf_basic_BasicPasswordFieldUI_h_
//$ class javax.swing.plaf.basic.BasicPasswordFieldUI
//$ extends javax.swing.plaf.basic.BasicTextFieldUI

#include <javax/swing/plaf/basic/BasicTextFieldUI.h>

namespace javax {
	namespace swing {
		class ActionMap;
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
		namespace text {
			class Element;
			class View;
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $import BasicPasswordFieldUI : public ::javax::swing::plaf::basic::BasicTextFieldUI {
	$class(BasicPasswordFieldUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicTextFieldUI)
public:
	BasicPasswordFieldUI();
	using ::javax::swing::plaf::basic::BasicTextFieldUI::create;
	void init$();
	virtual ::javax::swing::text::View* create(::javax::swing::text::Element* elem) override;
	virtual ::javax::swing::ActionMap* createActionMap() override;
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual $String* getPropertyPrefix() override;
	virtual void installDefaults() override;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicPasswordFieldUI_h_