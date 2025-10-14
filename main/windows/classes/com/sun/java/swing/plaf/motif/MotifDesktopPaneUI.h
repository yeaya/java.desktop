#ifndef _com_sun_java_swing_plaf_motif_MotifDesktopPaneUI_h_
#define _com_sun_java_swing_plaf_motif_MotifDesktopPaneUI_h_
//$ class com.sun.java.swing.plaf.motif.MotifDesktopPaneUI
//$ extends javax.swing.plaf.basic.BasicDesktopPaneUI

#include <javax/swing/plaf/basic/BasicDesktopPaneUI.h>

namespace java {
	namespace awt {
		class Insets;
	}
}
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

class $export MotifDesktopPaneUI : public ::javax::swing::plaf::basic::BasicDesktopPaneUI {
	$class(MotifDesktopPaneUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicDesktopPaneUI)
public:
	MotifDesktopPaneUI();
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* d);
	virtual ::java::awt::Insets* getInsets(::javax::swing::JComponent* c);
	virtual void installDesktopManager() override;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_motif_MotifDesktopPaneUI_h_