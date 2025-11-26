#ifndef _javax_swing_plaf_metal_MetalTextFieldUI_h_
#define _javax_swing_plaf_metal_MetalTextFieldUI_h_
//$ class javax.swing.plaf.metal.MetalTextFieldUI
//$ extends javax.swing.plaf.basic.BasicTextFieldUI

#include <javax/swing/plaf/basic/BasicTextFieldUI.h>

namespace java {
	namespace beans {
		class PropertyChangeEvent;
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

class $import MetalTextFieldUI : public ::javax::swing::plaf::basic::BasicTextFieldUI {
	$class(MetalTextFieldUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicTextFieldUI)
public:
	MetalTextFieldUI();
	using ::javax::swing::plaf::basic::BasicTextFieldUI::create;
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* evt) override;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalTextFieldUI_h_