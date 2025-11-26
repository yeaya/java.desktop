#ifndef _javax_swing_plaf_basic_BasicMenuUI$Handler_h_
#define _javax_swing_plaf_basic_BasicMenuUI$Handler_h_
//$ class javax.swing.plaf.basic.BasicMenuUI$Handler
//$ extends javax.swing.plaf.basic.BasicMenuItemUI$Handler
//$ implements javax.swing.event.MenuKeyListener

#include <javax/swing/event/MenuKeyListener.h>
#include <javax/swing/plaf/basic/BasicMenuItemUI$Handler.h>

namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
	}
}
namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class MenuDragMouseEvent;
			class MenuKeyEvent;
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

class BasicMenuUI$Handler : public ::javax::swing::plaf::basic::BasicMenuItemUI$Handler, public ::javax::swing::event::MenuKeyListener {
	$class(BasicMenuUI$Handler, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicMenuItemUI$Handler, ::javax::swing::event::MenuKeyListener)
public:
	BasicMenuUI$Handler();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::plaf::basic::BasicMenuUI* this$0);
	virtual void menuDragMouseDragged(::javax::swing::event::MenuDragMouseEvent* e) override;
	virtual void menuDragMouseEntered(::javax::swing::event::MenuDragMouseEvent* e) override;
	virtual void menuDragMouseExited(::javax::swing::event::MenuDragMouseEvent* e) override;
	virtual void menuDragMouseReleased(::javax::swing::event::MenuDragMouseEvent* e) override;
	virtual void menuKeyPressed(::javax::swing::event::MenuKeyEvent* e) override;
	virtual void menuKeyReleased(::javax::swing::event::MenuKeyEvent* e) override;
	virtual void menuKeyTyped(::javax::swing::event::MenuKeyEvent* e) override;
	virtual void mouseClicked(::java::awt::event::MouseEvent* e) override;
	virtual void mouseDragged(::java::awt::event::MouseEvent* e) override;
	virtual void mouseEntered(::java::awt::event::MouseEvent* e) override;
	virtual void mouseExited(::java::awt::event::MouseEvent* e) override;
	virtual void mouseMoved(::java::awt::event::MouseEvent* e) override;
	virtual void mousePressed(::java::awt::event::MouseEvent* e) override;
	virtual void mouseReleased(::java::awt::event::MouseEvent* e) override;
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	virtual $String* toString() override;
	::javax::swing::plaf::basic::BasicMenuUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicMenuUI$Handler_h_