#ifndef _com_sun_java_swing_plaf_motif_MotifTextFieldUI_h_
#define _com_sun_java_swing_plaf_motif_MotifTextFieldUI_h_
//$ class com.sun.java.swing.plaf.motif.MotifTextFieldUI
//$ extends javax.swing.plaf.basic.BasicTextFieldUI

#include <javax/swing/plaf/basic/BasicTextFieldUI.h>

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
		namespace text {
			class Caret;
		}
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

class $export MotifTextFieldUI : public ::javax::swing::plaf::basic::BasicTextFieldUI {
	$class(MotifTextFieldUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicTextFieldUI)
public:
	MotifTextFieldUI();
	using ::javax::swing::plaf::basic::BasicTextFieldUI::create;
	void init$();
	virtual ::javax::swing::text::Caret* createCaret() override;
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_motif_MotifTextFieldUI_h_