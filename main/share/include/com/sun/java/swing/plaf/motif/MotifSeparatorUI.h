#ifndef _com_sun_java_swing_plaf_motif_MotifSeparatorUI_h_
#define _com_sun_java_swing_plaf_motif_MotifSeparatorUI_h_
//$ class com.sun.java.swing.plaf.motif.MotifSeparatorUI
//$ extends javax.swing.plaf.basic.BasicSeparatorUI

#include <javax/swing/plaf/basic/BasicSeparatorUI.h>

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

class $import MotifSeparatorUI : public ::javax::swing::plaf::basic::BasicSeparatorUI {
	$class(MotifSeparatorUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicSeparatorUI)
public:
	MotifSeparatorUI();
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_motif_MotifSeparatorUI_h_