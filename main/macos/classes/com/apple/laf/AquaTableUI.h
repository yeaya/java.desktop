#ifndef _com_apple_laf_AquaTableUI_h_
#define _com_apple_laf_AquaTableUI_h_
//$ class com.apple.laf.AquaTableUI
//$ extends javax.swing.plaf.basic.BasicTableUI

#include <javax/swing/plaf/basic/BasicTableUI.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaFocusHandler;
		}
	}
}
namespace java {
	namespace awt {
		namespace event {
			class FocusListener;
		}
	}
}
namespace javax {
	namespace swing {
		class JComponent;
		class JTable;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class MouseInputListener;
		}
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

class AquaTableUI : public ::javax::swing::plaf::basic::BasicTableUI {
	$class(AquaTableUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicTableUI)
public:
	AquaTableUI();
	void init$();
	virtual ::java::awt::event::FocusListener* createFocusListener() override;
	virtual ::javax::swing::event::MouseInputListener* createMouseInputListener() override;
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual ::javax::swing::JTable* getComponent();
	virtual void installListeners() override;
	virtual void uninstallListeners() override;
	::com::apple::laf::AquaFocusHandler* focusHandler = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaTableUI_h_