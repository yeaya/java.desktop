#ifndef _javax_swing_plaf_basic_BasicToolBarUI$DockingListener_h_
#define _javax_swing_plaf_basic_BasicToolBarUI$DockingListener_h_
//$ class javax.swing.plaf.basic.BasicToolBarUI$DockingListener
//$ extends javax.swing.event.MouseInputListener

#include <javax/swing/event/MouseInputListener.h>

namespace java {
	namespace awt {
		class Point;
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
		class JToolBar;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicToolBarUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $import BasicToolBarUI$DockingListener : public ::javax::swing::event::MouseInputListener {
	$class(BasicToolBarUI$DockingListener, $NO_CLASS_INIT, ::javax::swing::event::MouseInputListener)
public:
	BasicToolBarUI$DockingListener();
	void init$(::javax::swing::plaf::basic::BasicToolBarUI* this$0, ::javax::swing::JToolBar* t);
	virtual void mouseClicked(::java::awt::event::MouseEvent* e) override;
	virtual void mouseDragged(::java::awt::event::MouseEvent* e) override;
	virtual void mouseEntered(::java::awt::event::MouseEvent* e) override;
	virtual void mouseExited(::java::awt::event::MouseEvent* e) override;
	virtual void mouseMoved(::java::awt::event::MouseEvent* e) override;
	virtual void mousePressed(::java::awt::event::MouseEvent* e) override;
	virtual void mouseReleased(::java::awt::event::MouseEvent* e) override;
	::javax::swing::plaf::basic::BasicToolBarUI* this$0 = nullptr;
	::javax::swing::JToolBar* toolBar = nullptr;
	bool isDragging = false;
	::java::awt::Point* origin = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicToolBarUI$DockingListener_h_