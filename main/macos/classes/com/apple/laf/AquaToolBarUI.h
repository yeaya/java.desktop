#ifndef _com_apple_laf_AquaToolBarUI_h_
#define _com_apple_laf_AquaToolBarUI_h_
//$ class com.apple.laf.AquaToolBarUI
//$ extends javax.swing.plaf.basic.BasicToolBarUI

#include <javax/swing/plaf/basic/BasicToolBarUI.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaUtils$RecyclableSingleton;
		}
	}
}
namespace java {
	namespace awt {
		class Component;
		class Graphics;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
		class JToolBar;
		class RootPaneContainer;
	}
}
namespace javax {
	namespace swing {
		namespace border {
			class Border;
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

class AquaToolBarUI : public ::javax::swing::plaf::basic::BasicToolBarUI {
	$class(AquaToolBarUI, 0, ::javax::swing::plaf::basic::BasicToolBarUI)
public:
	AquaToolBarUI();
	void init$();
	virtual ::javax::swing::RootPaneContainer* createFloatingWindow(::javax::swing::JToolBar* toolbar) override;
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	static ::javax::swing::border::Border* getToolBarBorder();
	virtual void setBorderToNonRollover(::java::awt::Component* c) override;
	virtual void setBorderToNormal(::java::awt::Component* c) override;
	virtual void setBorderToRollover(::java::awt::Component* c) override;
	virtual void update(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	static ::com::apple::laf::AquaUtils$RecyclableSingleton* toolBarBorder;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaToolBarUI_h_