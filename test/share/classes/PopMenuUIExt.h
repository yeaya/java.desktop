#ifndef _PopMenuUIExt_h_
#define _PopMenuUIExt_h_
//$ class PopMenuUIExt
//$ extends javax.swing.plaf.basic.BasicPopupMenuUI

#include <javax/swing/plaf/basic/BasicPopupMenuUI.h>

namespace javax {
	namespace swing {
		class JPopupMenu;
		class Popup;
	}
}

class PopMenuUIExt : public ::javax::swing::plaf::basic::BasicPopupMenuUI {
	$class(PopMenuUIExt, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicPopupMenuUI)
public:
	PopMenuUIExt();
	void init$();
	virtual ::javax::swing::Popup* getPopup(::javax::swing::JPopupMenu* popup, int32_t x, int32_t y) override;
	static ::javax::swing::Popup* getPopup();
	static ::javax::swing::Popup* popUp;
};

#endif // _PopMenuUIExt_h_