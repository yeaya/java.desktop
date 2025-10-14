#ifndef _com_sun_java_swing_plaf_motif_MotifMenuUI_h_
#define _com_sun_java_swing_plaf_motif_MotifMenuUI_h_
//$ class com.sun.java.swing.plaf.motif.MotifMenuUI
//$ extends javax.swing.plaf.basic.BasicMenuUI

#include <java/lang/Array.h>
#include <javax/swing/plaf/basic/BasicMenuUI.h>

namespace javax {
	namespace swing {
		class JComponent;
		class JMenu;
		class MenuElement;
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

class $import MotifMenuUI : public ::javax::swing::plaf::basic::BasicMenuUI {
	$class(MotifMenuUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicMenuUI)
public:
	MotifMenuUI();
	void init$();
	virtual ::javax::swing::event::ChangeListener* createChangeListener(::javax::swing::JComponent* c) override;
	virtual ::javax::swing::event::MouseInputListener* createMouseInputListener(::javax::swing::JComponent* c) override;
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* x);
	bool popupIsOpen(::javax::swing::JMenu* m, $Array<::javax::swing::MenuElement>* me);
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_motif_MotifMenuUI_h_