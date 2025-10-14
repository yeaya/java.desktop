#ifndef _javax_swing_plaf_basic_BasicTextFieldUI_h_
#define _javax_swing_plaf_basic_BasicTextFieldUI_h_
//$ class javax.swing.plaf.basic.BasicTextFieldUI
//$ extends javax.swing.plaf.basic.BasicTextUI

#include <javax/swing/plaf/basic/BasicTextUI.h>

namespace java {
	namespace awt {
		class Component$BaselineResizeBehavior;
	}
}
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

class $export BasicTextFieldUI : public ::javax::swing::plaf::basic::BasicTextUI {
	$class(BasicTextFieldUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicTextUI)
public:
	BasicTextFieldUI();
	using ::javax::swing::plaf::basic::BasicTextUI::create;
	void init$();
	virtual ::javax::swing::text::View* create(::javax::swing::text::Element* elem) override;
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual int32_t getBaseline(::javax::swing::JComponent* c, int32_t width, int32_t height) override;
	virtual ::java::awt::Component$BaselineResizeBehavior* getBaselineResizeBehavior(::javax::swing::JComponent* c) override;
	virtual $String* getPropertyPrefix() override;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicTextFieldUI_h_