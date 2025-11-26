#ifndef _javax_swing_plaf_basic_BasicComboPopup$InvocationKeyHandler_h_
#define _javax_swing_plaf_basic_BasicComboPopup$InvocationKeyHandler_h_
//$ class javax.swing.plaf.basic.BasicComboPopup$InvocationKeyHandler
//$ extends java.awt.event.KeyAdapter

#include <java/awt/event/KeyAdapter.h>

namespace java {
	namespace awt {
		namespace event {
			class KeyEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicComboPopup;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicComboPopup$InvocationKeyHandler : public ::java::awt::event::KeyAdapter {
	$class(BasicComboPopup$InvocationKeyHandler, $NO_CLASS_INIT, ::java::awt::event::KeyAdapter)
public:
	BasicComboPopup$InvocationKeyHandler();
	void init$(::javax::swing::plaf::basic::BasicComboPopup* this$0);
	virtual void keyReleased(::java::awt::event::KeyEvent* e) override;
	::javax::swing::plaf::basic::BasicComboPopup* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicComboPopup$InvocationKeyHandler_h_