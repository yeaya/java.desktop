#ifndef _com_apple_laf_AquaPanelUI_h_
#define _com_apple_laf_AquaPanelUI_h_
//$ class com.apple.laf.AquaPanelUI
//$ extends javax.swing.plaf.basic.BasicPanelUI

#include <javax/swing/plaf/basic/BasicPanelUI.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaUtils$RecyclableSingleton;
		}
	}
}
namespace java {
	namespace awt {
		class Graphics;
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

class AquaPanelUI : public ::javax::swing::plaf::basic::BasicPanelUI {
	$class(AquaPanelUI, 0, ::javax::swing::plaf::basic::BasicPanelUI)
public:
	AquaPanelUI();
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual void update(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	static ::com::apple::laf::AquaUtils$RecyclableSingleton* instance;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaPanelUI_h_