#ifndef _com_sun_java_swing_plaf_motif_MotifLabelUI_h_
#define _com_sun_java_swing_plaf_motif_MotifLabelUI_h_
//$ class com.sun.java.swing.plaf.motif.MotifLabelUI
//$ extends javax.swing.plaf.basic.BasicLabelUI

#include <javax/swing/plaf/basic/BasicLabelUI.h>

#pragma push_macro("MOTIF_LABEL_UI_KEY")
#undef MOTIF_LABEL_UI_KEY

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
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

class $import MotifLabelUI : public ::javax::swing::plaf::basic::BasicLabelUI {
	$class(MotifLabelUI, 0, ::javax::swing::plaf::basic::BasicLabelUI)
public:
	MotifLabelUI();
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	static $Object* MOTIF_LABEL_UI_KEY;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#pragma pop_macro("MOTIF_LABEL_UI_KEY")

#endif // _com_sun_java_swing_plaf_motif_MotifLabelUI_h_