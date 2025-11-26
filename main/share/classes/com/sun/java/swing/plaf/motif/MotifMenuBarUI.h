#ifndef _com_sun_java_swing_plaf_motif_MotifMenuBarUI_h_
#define _com_sun_java_swing_plaf_motif_MotifMenuBarUI_h_
//$ class com.sun.java.swing.plaf.motif.MotifMenuBarUI
//$ extends javax.swing.plaf.basic.BasicMenuBarUI

#include <javax/swing/plaf/basic/BasicMenuBarUI.h>

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

class $export MotifMenuBarUI : public ::javax::swing::plaf::basic::BasicMenuBarUI {
	$class(MotifMenuBarUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicMenuBarUI)
public:
	MotifMenuBarUI();
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* x);
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_motif_MotifMenuBarUI_h_