#ifndef _com_sun_java_swing_plaf_motif_MotifRadioButtonUI_h_
#define _com_sun_java_swing_plaf_motif_MotifRadioButtonUI_h_
//$ class com.sun.java.swing.plaf.motif.MotifRadioButtonUI
//$ extends javax.swing.plaf.basic.BasicRadioButtonUI

#include <javax/swing/plaf/basic/BasicRadioButtonUI.h>

#pragma push_macro("MOTIF_RADIO_BUTTON_UI_KEY")
#undef MOTIF_RADIO_BUTTON_UI_KEY

namespace java {
	namespace awt {
		class Color;
		class Dimension;
		class Graphics;
		class Rectangle;
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

class $export MotifRadioButtonUI : public ::javax::swing::plaf::basic::BasicRadioButtonUI {
	$class(MotifRadioButtonUI, 0, ::javax::swing::plaf::basic::BasicRadioButtonUI)
public:
	MotifRadioButtonUI();
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual ::java::awt::Color* getFocusColor();
	virtual void installDefaults(::javax::swing::AbstractButton* b) override;
	using ::javax::swing::plaf::basic::BasicRadioButtonUI::paintFocus;
	virtual void paintFocus(::java::awt::Graphics* g, ::java::awt::Rectangle* t, ::java::awt::Dimension* d) override;
	using ::javax::swing::plaf::basic::BasicRadioButtonUI::paintIcon;
	virtual void uninstallDefaults(::javax::swing::AbstractButton* b) override;
	static $Object* MOTIF_RADIO_BUTTON_UI_KEY;
	::java::awt::Color* focusColor = nullptr;
	bool defaults_initialized = false;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#pragma pop_macro("MOTIF_RADIO_BUTTON_UI_KEY")

#endif // _com_sun_java_swing_plaf_motif_MotifRadioButtonUI_h_