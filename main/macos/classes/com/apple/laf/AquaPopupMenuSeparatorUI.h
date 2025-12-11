#ifndef _com_apple_laf_AquaPopupMenuSeparatorUI_h_
#define _com_apple_laf_AquaPopupMenuSeparatorUI_h_
//$ class com.apple.laf.AquaPopupMenuSeparatorUI
//$ extends javax.swing.plaf.basic.BasicSeparatorUI

#include <javax/swing/plaf/basic/BasicSeparatorUI.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaUtils$RecyclableSingletonFromDefaultConstructor;
		}
	}
}
namespace java {
	namespace awt {
		class Dimension;
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

class AquaPopupMenuSeparatorUI : public ::javax::swing::plaf::basic::BasicSeparatorUI {
	$class(AquaPopupMenuSeparatorUI, 0, ::javax::swing::plaf::basic::BasicSeparatorUI)
public:
	AquaPopupMenuSeparatorUI();
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual ::java::awt::Dimension* getPreferredSize(::javax::swing::JComponent* c) override;
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	virtual void update(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	static ::com::apple::laf::AquaUtils$RecyclableSingletonFromDefaultConstructor* instance;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaPopupMenuSeparatorUI_h_