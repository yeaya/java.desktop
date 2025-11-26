#ifndef _javax_swing_plaf_PopupMenuUI_h_
#define _javax_swing_plaf_PopupMenuUI_h_
//$ class javax.swing.plaf.PopupMenuUI
//$ extends javax.swing.plaf.ComponentUI

#include <javax/swing/plaf/ComponentUI.h>

namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JPopupMenu;
		class Popup;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {

class $export PopupMenuUI : public ::javax::swing::plaf::ComponentUI {
	$class(PopupMenuUI, $NO_CLASS_INIT, ::javax::swing::plaf::ComponentUI)
public:
	PopupMenuUI();
	void init$();
	virtual ::javax::swing::Popup* getPopup(::javax::swing::JPopupMenu* popup, int32_t x, int32_t y);
	virtual bool isPopupTrigger(::java::awt::event::MouseEvent* e);
};

		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_PopupMenuUI_h_