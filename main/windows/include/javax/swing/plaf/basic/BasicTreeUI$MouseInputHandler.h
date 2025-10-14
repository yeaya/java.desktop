#ifndef _javax_swing_plaf_basic_BasicTreeUI$MouseInputHandler_h_
#define _javax_swing_plaf_basic_BasicTreeUI$MouseInputHandler_h_
//$ class javax.swing.plaf.basic.BasicTreeUI$MouseInputHandler
//$ extends javax.swing.event.MouseInputListener

#include <javax/swing/event/MouseInputListener.h>

namespace java {
	namespace awt {
		class Component;
	}
}
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
				class BasicTreeUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $import BasicTreeUI$MouseInputHandler : public ::javax::swing::event::MouseInputListener {
	$class(BasicTreeUI$MouseInputHandler, $NO_CLASS_INIT, ::javax::swing::event::MouseInputListener)
public:
	BasicTreeUI$MouseInputHandler();
	void init$(::javax::swing::plaf::basic::BasicTreeUI* this$0, ::java::awt::Component* source, ::java::awt::Component* destination, ::java::awt::event::MouseEvent* event);
	void init$(::javax::swing::plaf::basic::BasicTreeUI* this$0, ::java::awt::Component* source, ::java::awt::Component* destination, ::java::awt::event::MouseEvent* event, ::java::awt::Component* focusComponent);
	virtual void mouseClicked(::java::awt::event::MouseEvent* e) override;
	virtual void mouseDragged(::java::awt::event::MouseEvent* e) override;
	virtual void mouseEntered(::java::awt::event::MouseEvent* e) override;
	virtual void mouseExited(::java::awt::event::MouseEvent* e) override;
	virtual void mouseMoved(::java::awt::event::MouseEvent* e) override;
	virtual void mousePressed(::java::awt::event::MouseEvent* e) override;
	virtual void mouseReleased(::java::awt::event::MouseEvent* e) override;
	virtual void removeFromSource();
	::javax::swing::plaf::basic::BasicTreeUI* this$0 = nullptr;
	::java::awt::Component* source = nullptr;
	::java::awt::Component* destination = nullptr;
	::java::awt::Component* focusComponent = nullptr;
	bool dispatchedEvent = false;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicTreeUI$MouseInputHandler_h_