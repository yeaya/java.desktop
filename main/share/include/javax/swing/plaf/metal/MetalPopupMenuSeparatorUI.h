#ifndef _javax_swing_plaf_metal_MetalPopupMenuSeparatorUI_h_
#define _javax_swing_plaf_metal_MetalPopupMenuSeparatorUI_h_
//$ class javax.swing.plaf.metal.MetalPopupMenuSeparatorUI
//$ extends javax.swing.plaf.metal.MetalSeparatorUI

#include <javax/swing/plaf/metal/MetalSeparatorUI.h>

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
			namespace metal {

class $import MetalPopupMenuSeparatorUI : public ::javax::swing::plaf::metal::MetalSeparatorUI {
	$class(MetalPopupMenuSeparatorUI, $NO_CLASS_INIT, ::javax::swing::plaf::metal::MetalSeparatorUI)
public:
	MetalPopupMenuSeparatorUI();
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual ::java::awt::Dimension* getPreferredSize(::javax::swing::JComponent* c) override;
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalPopupMenuSeparatorUI_h_