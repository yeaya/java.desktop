#ifndef _javax_swing_plaf_basic_BasicPopupMenuUI$BasicPopupMenuListener_h_
#define _javax_swing_plaf_basic_BasicPopupMenuUI$BasicPopupMenuListener_h_
//$ class javax.swing.plaf.basic.BasicPopupMenuUI$BasicPopupMenuListener
//$ extends javax.swing.event.PopupMenuListener

#include <javax/swing/event/PopupMenuListener.h>

namespace javax {
	namespace swing {
		namespace event {
			class PopupMenuEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicPopupMenuUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class BasicPopupMenuUI$BasicPopupMenuListener : public ::javax::swing::event::PopupMenuListener {
	$class(BasicPopupMenuUI$BasicPopupMenuListener, $NO_CLASS_INIT, ::javax::swing::event::PopupMenuListener)
public:
	BasicPopupMenuUI$BasicPopupMenuListener();
	void init$(::javax::swing::plaf::basic::BasicPopupMenuUI* this$0);
	virtual void popupMenuCanceled(::javax::swing::event::PopupMenuEvent* e) override;
	virtual void popupMenuWillBecomeInvisible(::javax::swing::event::PopupMenuEvent* e) override;
	virtual void popupMenuWillBecomeVisible(::javax::swing::event::PopupMenuEvent* e) override;
	::javax::swing::plaf::basic::BasicPopupMenuUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicPopupMenuUI$BasicPopupMenuListener_h_