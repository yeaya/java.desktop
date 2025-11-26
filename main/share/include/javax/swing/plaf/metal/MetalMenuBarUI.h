#ifndef _javax_swing_plaf_metal_MetalMenuBarUI_h_
#define _javax_swing_plaf_metal_MetalMenuBarUI_h_
//$ class javax.swing.plaf.metal.MetalMenuBarUI
//$ extends javax.swing.plaf.basic.BasicMenuBarUI

#include <javax/swing/plaf/basic/BasicMenuBarUI.h>

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

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class $import MetalMenuBarUI : public ::javax::swing::plaf::basic::BasicMenuBarUI {
	$class(MetalMenuBarUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicMenuBarUI)
public:
	MetalMenuBarUI();
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* x);
	virtual void installUI(::javax::swing::JComponent* c) override;
	virtual void uninstallUI(::javax::swing::JComponent* c) override;
	virtual void update(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalMenuBarUI_h_