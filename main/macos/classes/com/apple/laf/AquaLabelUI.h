#ifndef _com_apple_laf_AquaLabelUI_h_
#define _com_apple_laf_AquaLabelUI_h_
//$ class com.apple.laf.AquaLabelUI
//$ extends javax.swing.plaf.basic.BasicLabelUI

#include <javax/swing/plaf/basic/BasicLabelUI.h>

#pragma push_macro("DISABLED_COLOR_KEY")
#undef DISABLED_COLOR_KEY

namespace com {
	namespace apple {
		namespace laf {
			class AquaUtils$RecyclableSingleton;
		}
	}
}
namespace java {
	namespace awt {
		class Color;
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

namespace com {
	namespace apple {
		namespace laf {

class AquaLabelUI : public ::javax::swing::plaf::basic::BasicLabelUI {
	$class(AquaLabelUI, 0, ::javax::swing::plaf::basic::BasicLabelUI)
public:
	AquaLabelUI();
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual ::java::awt::Color* getDisabledLabelColor(::javax::swing::JLabel* label);
	virtual void installListeners(::javax::swing::JLabel* c) override;
	virtual void paintDisabledText(::javax::swing::JLabel* l, ::java::awt::Graphics* g, $String* s, int32_t textX, int32_t textY) override;
	virtual void paintEnabledText(::javax::swing::JLabel* l, ::java::awt::Graphics* g, $String* s, int32_t textX, int32_t textY) override;
	virtual void uninstallListeners(::javax::swing::JLabel* c) override;
	static ::com::apple::laf::AquaUtils$RecyclableSingleton* aquaLabelUI;
	static $String* DISABLED_COLOR_KEY;
};

		} // laf
	} // apple
} // com

#pragma pop_macro("DISABLED_COLOR_KEY")

#endif // _com_apple_laf_AquaLabelUI_h_