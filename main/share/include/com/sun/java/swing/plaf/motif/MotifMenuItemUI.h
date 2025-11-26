#ifndef _com_sun_java_swing_plaf_motif_MotifMenuItemUI_h_
#define _com_sun_java_swing_plaf_motif_MotifMenuItemUI_h_
//$ class com.sun.java.swing.plaf.motif.MotifMenuItemUI
//$ extends javax.swing.plaf.basic.BasicMenuItemUI

#include <javax/swing/plaf/basic/BasicMenuItemUI.h>

namespace javax {
	namespace swing {
		class JComponent;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ChangeListener;
			class MouseInputListener;
		}
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

class $import MotifMenuItemUI : public ::javax::swing::plaf::basic::BasicMenuItemUI {
	$class(MotifMenuItemUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicMenuItemUI)
public:
	MotifMenuItemUI();
	void init$();
	virtual ::javax::swing::event::ChangeListener* createChangeListener(::javax::swing::JComponent* c);
	virtual ::javax::swing::event::MouseInputListener* createMouseInputListener(::javax::swing::JComponent* c) override;
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual void installListeners() override;
	virtual void uninstallListeners() override;
	::javax::swing::event::ChangeListener* changeListener = nullptr;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_motif_MotifMenuItemUI_h_