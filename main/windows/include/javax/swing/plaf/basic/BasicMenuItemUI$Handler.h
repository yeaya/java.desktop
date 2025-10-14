#ifndef _javax_swing_plaf_basic_BasicMenuItemUI$Handler_h_
#define _javax_swing_plaf_basic_BasicMenuItemUI$Handler_h_
//$ class javax.swing.plaf.basic.BasicMenuItemUI$Handler
//$ extends javax.swing.event.MenuDragMouseListener
//$ implements javax.swing.event.MouseInputListener,java.beans.PropertyChangeListener

#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/event/MenuDragMouseListener.h>
#include <javax/swing/event/MouseInputListener.h>

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
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicMenuItemUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $import BasicMenuItemUI$Handler : public ::javax::swing::event::MenuDragMouseListener, public ::javax::swing::event::MouseInputListener, public ::java::beans::PropertyChangeListener {
	$class(BasicMenuItemUI$Handler, $NO_CLASS_INIT, ::javax::swing::event::MenuDragMouseListener, ::javax::swing::event::MouseInputListener, ::java::beans::PropertyChangeListener)
public:
	BasicMenuItemUI$Handler();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::plaf::basic::BasicMenuItemUI* this$0);
	virtual void menuDragMouseDragged(::javax::swing::event::MenuDragMouseEvent* e) override;
	virtual void menuDragMouseEntered(::javax::swing::event::MenuDragMouseEvent* e) override;
	virtual void menuDragMouseExited(::javax::swing::event::MenuDragMouseEvent* e) override;
	virtual void menuDragMouseReleased(::javax::swing::event::MenuDragMouseEvent* e) override;
	virtual void mouseClicked(::java::awt::event::MouseEvent* e) override;
	virtual void mouseDragged(::java::awt::event::MouseEvent* e) override;
	virtual void mouseEntered(::java::awt::event::MouseEvent* e) override;
	virtual void mouseExited(::java::awt::event::MouseEvent* e) override;
	virtual void mouseMoved(::java::awt::event::MouseEvent* e) override;
	virtual void mousePressed(::java::awt::event::MouseEvent* e) override;
	virtual void mouseReleased(::java::awt::event::MouseEvent* e) override;
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	virtual $String* toString() override;
	::javax::swing::plaf::basic::BasicMenuItemUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicMenuItemUI$Handler_h_