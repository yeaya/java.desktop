#ifndef _javax_swing_plaf_basic_BasicButtonUI$KeyHandler_h_
#define _javax_swing_plaf_basic_BasicButtonUI$KeyHandler_h_
//$ class javax.swing.plaf.basic.BasicButtonUI$KeyHandler
//$ extends java.awt.event.KeyListener

#include <java/awt/event/KeyListener.h>

namespace java {
	namespace awt {
		class AWTKeyStroke;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class KeyEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JComponent;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicButtonUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class BasicButtonUI$KeyHandler : public ::java::awt::event::KeyListener {
	$class(BasicButtonUI$KeyHandler, $NO_CLASS_INIT, ::java::awt::event::KeyListener)
public:
	BasicButtonUI$KeyHandler();
	void init$(::javax::swing::plaf::basic::BasicButtonUI* this$0);
	bool isFocusTraversalKey(::javax::swing::JComponent* c, int32_t id, ::java::awt::AWTKeyStroke* stroke);
	virtual void keyPressed(::java::awt::event::KeyEvent* e) override;
	virtual void keyReleased(::java::awt::event::KeyEvent* e) override;
	virtual void keyTyped(::java::awt::event::KeyEvent* e) override;
	::javax::swing::plaf::basic::BasicButtonUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicButtonUI$KeyHandler_h_