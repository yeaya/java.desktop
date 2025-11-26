#ifndef _com_sun_java_swing_plaf_motif_MotifToggleButtonUI_h_
#define _com_sun_java_swing_plaf_motif_MotifToggleButtonUI_h_
//$ class com.sun.java.swing.plaf.motif.MotifToggleButtonUI
//$ extends javax.swing.plaf.basic.BasicToggleButtonUI

#include <javax/swing/plaf/basic/BasicToggleButtonUI.h>

#pragma push_macro("MOTIF_TOGGLE_BUTTON_UI_KEY")
#undef MOTIF_TOGGLE_BUTTON_UI_KEY

namespace java {
	namespace awt {
		class Color;
		class Graphics;
		class Insets;
	}
}
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

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

class $import MotifToggleButtonUI : public ::javax::swing::plaf::basic::BasicToggleButtonUI {
	$class(MotifToggleButtonUI, 0, ::javax::swing::plaf::basic::BasicToggleButtonUI)
public:
	MotifToggleButtonUI();
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* b);
	virtual ::java::awt::Insets* getInsets(::javax::swing::JComponent* c);
	virtual ::java::awt::Color* getSelectColor();
	virtual void installDefaults(::javax::swing::AbstractButton* b) override;
	virtual void paintButtonPressed(::java::awt::Graphics* g, ::javax::swing::AbstractButton* b) override;
	using ::javax::swing::plaf::basic::BasicToggleButtonUI::paintIcon;
	virtual void uninstallDefaults(::javax::swing::AbstractButton* b) override;
	static $Object* MOTIF_TOGGLE_BUTTON_UI_KEY;
	::java::awt::Color* selectColor = nullptr;
	bool defaults_initialized = false;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#pragma pop_macro("MOTIF_TOGGLE_BUTTON_UI_KEY")

#endif // _com_sun_java_swing_plaf_motif_MotifToggleButtonUI_h_