#ifndef _com_sun_java_swing_plaf_motif_MotifRadioButtonMenuItemUI_h_
#define _com_sun_java_swing_plaf_motif_MotifRadioButtonMenuItemUI_h_
//$ class com.sun.java.swing.plaf.motif.MotifRadioButtonMenuItemUI
//$ extends javax.swing.plaf.basic.BasicRadioButtonMenuItemUI

#include <javax/swing/plaf/basic/BasicRadioButtonMenuItemUI.h>

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

class $export MotifRadioButtonMenuItemUI : public ::javax::swing::plaf::basic::BasicRadioButtonMenuItemUI {
	$class(MotifRadioButtonMenuItemUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicRadioButtonMenuItemUI)
public:
	MotifRadioButtonMenuItemUI();
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

#endif // _com_sun_java_swing_plaf_motif_MotifRadioButtonMenuItemUI_h_