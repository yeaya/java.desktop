#ifndef _com_apple_laf_AquaToolBarSeparatorUI_h_
#define _com_apple_laf_AquaToolBarSeparatorUI_h_
//$ class com.apple.laf.AquaToolBarSeparatorUI
//$ extends javax.swing.plaf.basic.BasicToolBarSeparatorUI

#include <javax/swing/plaf/basic/BasicToolBarSeparatorUI.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaUtils$RecyclableSingleton;
		}
	}
}
namespace java {
	namespace awt {
		class BasicStroke;
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

class AquaToolBarSeparatorUI : public ::javax::swing::plaf::basic::BasicToolBarSeparatorUI {
	$class(AquaToolBarSeparatorUI, 0, ::javax::swing::plaf::basic::BasicToolBarSeparatorUI)
public:
	AquaToolBarSeparatorUI();
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual ::java::awt::Dimension* getMaximumSize(::javax::swing::JComponent* c) override;
	virtual ::java::awt::Dimension* getMinimumSize(::javax::swing::JComponent* c) override;
	virtual ::java::awt::Dimension* getPreferredSize(::javax::swing::JComponent* c) override;
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	static ::com::apple::laf::AquaUtils$RecyclableSingleton* instance;
	::java::awt::BasicStroke* dashedStroke = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaToolBarSeparatorUI_h_