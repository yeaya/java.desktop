#ifndef _com_sun_java_swing_plaf_motif_MotifProgressBarUI_h_
#define _com_sun_java_swing_plaf_motif_MotifProgressBarUI_h_
//$ class com.sun.java.swing.plaf.motif.MotifProgressBarUI
//$ extends javax.swing.plaf.basic.BasicProgressBarUI

#include <javax/swing/plaf/basic/BasicProgressBarUI.h>

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

class $export MotifProgressBarUI : public ::javax::swing::plaf::basic::BasicProgressBarUI {
	$class(MotifProgressBarUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicProgressBarUI)
public:
	MotifProgressBarUI();
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* x);
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_motif_MotifProgressBarUI_h_