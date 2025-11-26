#ifndef _javax_swing_plaf_metal_MetalLabelUI_h_
#define _javax_swing_plaf_metal_MetalLabelUI_h_
//$ class javax.swing.plaf.metal.MetalLabelUI
//$ extends javax.swing.plaf.basic.BasicLabelUI

#include <javax/swing/plaf/basic/BasicLabelUI.h>

#pragma push_macro("METAL_LABEL_UI_KEY")
#undef METAL_LABEL_UI_KEY

namespace java {
	namespace awt {
		class Graphics;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
		class JLabel;
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

class $export MetalLabelUI : public ::javax::swing::plaf::basic::BasicLabelUI {
	$class(MetalLabelUI, 0, ::javax::swing::plaf::basic::BasicLabelUI)
public:
	MetalLabelUI();
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual void paintDisabledText(::javax::swing::JLabel* l, ::java::awt::Graphics* g, $String* s, int32_t textX, int32_t textY) override;
	static ::javax::swing::plaf::metal::MetalLabelUI* metalLabelUI;
	static $Object* METAL_LABEL_UI_KEY;
};

			} // metal
		} // plaf
	} // swing
} // javax

#pragma pop_macro("METAL_LABEL_UI_KEY")

#endif // _javax_swing_plaf_metal_MetalLabelUI_h_