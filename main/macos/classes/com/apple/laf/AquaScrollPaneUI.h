#ifndef _com_apple_laf_AquaScrollPaneUI_h_
#define _com_apple_laf_AquaScrollPaneUI_h_
//$ class com.apple.laf.AquaScrollPaneUI
//$ extends javax.swing.plaf.basic.BasicScrollPaneUI

#include <javax/swing/plaf/basic/BasicScrollPaneUI.h>

namespace java {
	namespace awt {
		namespace event {
			class MouseWheelListener;
		}
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

namespace com {
	namespace apple {
		namespace laf {

class AquaScrollPaneUI : public ::javax::swing::plaf::basic::BasicScrollPaneUI {
	$class(AquaScrollPaneUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicScrollPaneUI)
public:
	AquaScrollPaneUI();
	void init$();
	virtual ::java::awt::event::MouseWheelListener* createMouseWheelListener() override;
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* x);
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaScrollPaneUI_h_