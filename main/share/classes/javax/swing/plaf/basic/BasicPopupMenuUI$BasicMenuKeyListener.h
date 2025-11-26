#ifndef _javax_swing_plaf_basic_BasicPopupMenuUI$BasicMenuKeyListener_h_
#define _javax_swing_plaf_basic_BasicPopupMenuUI$BasicMenuKeyListener_h_
//$ class javax.swing.plaf.basic.BasicPopupMenuUI$BasicMenuKeyListener
//$ extends javax.swing.event.MenuKeyListener

#include <javax/swing/event/MenuKeyListener.h>

namespace javax {
	namespace swing {
		class MenuElement;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class MenuKeyEvent;
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

class BasicPopupMenuUI$BasicMenuKeyListener : public ::javax::swing::event::MenuKeyListener {
	$class(BasicPopupMenuUI$BasicMenuKeyListener, $NO_CLASS_INIT, ::javax::swing::event::MenuKeyListener)
public:
	BasicPopupMenuUI$BasicMenuKeyListener();
	void init$(::javax::swing::plaf::basic::BasicPopupMenuUI* this$0);
	char16_t lower(char16_t keyChar);
	char16_t lower(int32_t mnemonic);
	virtual void menuKeyPressed(::javax::swing::event::MenuKeyEvent* e) override;
	virtual void menuKeyReleased(::javax::swing::event::MenuKeyEvent* e) override;
	virtual void menuKeyTyped(::javax::swing::event::MenuKeyEvent* e) override;
	::javax::swing::plaf::basic::BasicPopupMenuUI* this$0 = nullptr;
	::javax::swing::MenuElement* menuToOpen = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicPopupMenuUI$BasicMenuKeyListener_h_