#ifndef _javax_swing_plaf_basic_BasicComboBoxUI$KeyHandler_h_
#define _javax_swing_plaf_basic_BasicComboBoxUI$KeyHandler_h_
//$ class javax.swing.plaf.basic.BasicComboBoxUI$KeyHandler
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
				class BasicComboBoxUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicComboBoxUI$KeyHandler : public ::java::awt::event::KeyAdapter {
	$class(BasicComboBoxUI$KeyHandler, $NO_CLASS_INIT, ::java::awt::event::KeyAdapter)
public:
	BasicComboBoxUI$KeyHandler();
	void init$(::javax::swing::plaf::basic::BasicComboBoxUI* this$0);
	virtual void keyPressed(::java::awt::event::KeyEvent* e) override;
	::javax::swing::plaf::basic::BasicComboBoxUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicComboBoxUI$KeyHandler_h_