#ifndef _javax_swing_plaf_metal_MetalCheckBoxUI_h_
#define _javax_swing_plaf_metal_MetalCheckBoxUI_h_
//$ class javax.swing.plaf.metal.MetalCheckBoxUI
//$ extends javax.swing.plaf.metal.MetalRadioButtonUI

#include <javax/swing/plaf/metal/MetalRadioButtonUI.h>

#pragma push_macro("METAL_CHECK_BOX_UI_KEY")
#undef METAL_CHECK_BOX_UI_KEY

namespace javax {
	namespace swing {
		class AbstractButton;
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

class $export MetalCheckBoxUI : public ::javax::swing::plaf::metal::MetalRadioButtonUI {
	$class(MetalCheckBoxUI, 0, ::javax::swing::plaf::metal::MetalRadioButtonUI)
public:
	MetalCheckBoxUI();
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* b);
	virtual $String* getPropertyPrefix() override;
	virtual void installDefaults(::javax::swing::AbstractButton* b) override;
	using ::javax::swing::plaf::metal::MetalRadioButtonUI::paintFocus;
	using ::javax::swing::plaf::metal::MetalRadioButtonUI::paintIcon;
	virtual void uninstallDefaults(::javax::swing::AbstractButton* b) override;
	static $Object* METAL_CHECK_BOX_UI_KEY;
	static $String* propertyPrefix;
	bool defaults_initialized = false;
};

			} // metal
		} // plaf
	} // swing
} // javax

#pragma pop_macro("METAL_CHECK_BOX_UI_KEY")

#endif // _javax_swing_plaf_metal_MetalCheckBoxUI_h_