#ifndef _javax_swing_plaf_basic_BasicPopupMenuSeparatorUI_h_
#define _javax_swing_plaf_basic_BasicPopupMenuSeparatorUI_h_
//$ class javax.swing.plaf.basic.BasicPopupMenuSeparatorUI
//$ extends javax.swing.plaf.basic.BasicSeparatorUI

#include <javax/swing/plaf/basic/BasicSeparatorUI.h>

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

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $import BasicPopupMenuSeparatorUI : public ::javax::swing::plaf::basic::BasicSeparatorUI {
	$class(BasicPopupMenuSeparatorUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicSeparatorUI)
public:
	BasicPopupMenuSeparatorUI();
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual ::java::awt::Dimension* getPreferredSize(::javax::swing::JComponent* c) override;
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicPopupMenuSeparatorUI_h_