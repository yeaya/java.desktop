#ifndef _com_sun_java_swing_plaf_motif_MotifCheckBoxMenuItemUI_h_
#define _com_sun_java_swing_plaf_motif_MotifCheckBoxMenuItemUI_h_
//$ class com.sun.java.swing.plaf.motif.MotifCheckBoxMenuItemUI
//$ extends javax.swing.plaf.basic.BasicCheckBoxMenuItemUI

#include <javax/swing/plaf/basic/BasicCheckBoxMenuItemUI.h>

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

class $export MotifCheckBoxMenuItemUI : public ::javax::swing::plaf::basic::BasicCheckBoxMenuItemUI {
	$class(MotifCheckBoxMenuItemUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicCheckBoxMenuItemUI)
public:
	MotifCheckBoxMenuItemUI();
	void init$();
	virtual ::javax::swing::event::ChangeListener* createChangeListener(::javax::swing::JComponent* c);
	virtual ::javax::swing::event::MouseInputListener* createMouseInputListener(::javax::swing::JComponent* c) override;
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* b);
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

#endif // _com_sun_java_swing_plaf_motif_MotifCheckBoxMenuItemUI_h_