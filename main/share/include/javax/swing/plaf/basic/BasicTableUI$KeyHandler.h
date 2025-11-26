#ifndef _javax_swing_plaf_basic_BasicTableUI$KeyHandler_h_
#define _javax_swing_plaf_basic_BasicTableUI$KeyHandler_h_
//$ class javax.swing.plaf.basic.BasicTableUI$KeyHandler
//$ extends java.awt.event.KeyListener

#include <java/awt/event/KeyListener.h>

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
				class BasicTableUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $import BasicTableUI$KeyHandler : public ::java::awt::event::KeyListener {
	$class(BasicTableUI$KeyHandler, $NO_CLASS_INIT, ::java::awt::event::KeyListener)
public:
	BasicTableUI$KeyHandler();
	void init$(::javax::swing::plaf::basic::BasicTableUI* this$0);
	virtual void keyPressed(::java::awt::event::KeyEvent* e) override;
	virtual void keyReleased(::java::awt::event::KeyEvent* e) override;
	virtual void keyTyped(::java::awt::event::KeyEvent* e) override;
	::javax::swing::plaf::basic::BasicTableUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicTableUI$KeyHandler_h_