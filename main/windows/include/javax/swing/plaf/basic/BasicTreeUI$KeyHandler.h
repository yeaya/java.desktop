#ifndef _javax_swing_plaf_basic_BasicTreeUI$KeyHandler_h_
#define _javax_swing_plaf_basic_BasicTreeUI$KeyHandler_h_
//$ class javax.swing.plaf.basic.BasicTreeUI$KeyHandler
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
		class Action;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicTreeUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $import BasicTreeUI$KeyHandler : public ::java::awt::event::KeyAdapter {
	$class(BasicTreeUI$KeyHandler, $NO_CLASS_INIT, ::java::awt::event::KeyAdapter)
public:
	BasicTreeUI$KeyHandler();
	void init$(::javax::swing::plaf::basic::BasicTreeUI* this$0);
	virtual void keyPressed(::java::awt::event::KeyEvent* e) override;
	virtual void keyReleased(::java::awt::event::KeyEvent* e) override;
	virtual void keyTyped(::java::awt::event::KeyEvent* e) override;
	::javax::swing::plaf::basic::BasicTreeUI* this$0 = nullptr;
	::javax::swing::Action* repeatKeyAction = nullptr;
	bool isKeyDown = false;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicTreeUI$KeyHandler_h_