#ifndef _javax_swing_plaf_basic_BasicMenuUI$MouseInputHandler_h_
#define _javax_swing_plaf_basic_BasicMenuUI$MouseInputHandler_h_
//$ class javax.swing.plaf.basic.BasicMenuUI$MouseInputHandler
//$ extends javax.swing.event.MouseInputListener

#include <javax/swing/event/MouseInputListener.h>

namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicMenuUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicMenuUI$MouseInputHandler : public ::javax::swing::event::MouseInputListener {
	$class(BasicMenuUI$MouseInputHandler, $NO_CLASS_INIT, ::javax::swing::event::MouseInputListener)
public:
	BasicMenuUI$MouseInputHandler();
	void init$(::javax::swing::plaf::basic::BasicMenuUI* this$0);
	virtual void mouseClicked(::java::awt::event::MouseEvent* e) override;
	virtual void mouseDragged(::java::awt::event::MouseEvent* e) override;
	virtual void mouseEntered(::java::awt::event::MouseEvent* e) override;
	virtual void mouseExited(::java::awt::event::MouseEvent* e) override;
	virtual void mouseMoved(::java::awt::event::MouseEvent* e) override;
	virtual void mousePressed(::java::awt::event::MouseEvent* e) override;
	virtual void mouseReleased(::java::awt::event::MouseEvent* e) override;
	::javax::swing::plaf::basic::BasicMenuUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicMenuUI$MouseInputHandler_h_