#ifndef _javax_swing_plaf_basic_BasicToolBarUI$Handler_h_
#define _javax_swing_plaf_basic_BasicToolBarUI$Handler_h_
//$ class javax.swing.plaf.basic.BasicToolBarUI$Handler
//$ extends java.awt.event.ContainerListener
//$ implements java.awt.event.FocusListener,javax.swing.event.MouseInputListener,java.beans.PropertyChangeListener

#include <java/awt/event/ContainerListener.h>
#include <java/awt/event/FocusListener.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/event/MouseInputListener.h>

namespace java {
	namespace awt {
		class Point;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ContainerEvent;
			class FocusEvent;
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

class BasicToolBarUI$Handler : public ::java::awt::event::ContainerListener, public ::java::awt::event::FocusListener, public ::javax::swing::event::MouseInputListener, public ::java::beans::PropertyChangeListener {
	$class(BasicToolBarUI$Handler, $NO_CLASS_INIT, ::java::awt::event::ContainerListener, ::java::awt::event::FocusListener, ::javax::swing::event::MouseInputListener, ::java::beans::PropertyChangeListener)
public:
	BasicToolBarUI$Handler();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::plaf::basic::BasicToolBarUI* this$0);
	virtual void componentAdded(::java::awt::event::ContainerEvent* evt) override;
	virtual void componentRemoved(::java::awt::event::ContainerEvent* evt) override;
	virtual void focusGained(::java::awt::event::FocusEvent* evt) override;
	virtual void focusLost(::java::awt::event::FocusEvent* evt) override;
	virtual void mouseClicked(::java::awt::event::MouseEvent* evt) override;
	virtual void mouseDragged(::java::awt::event::MouseEvent* evt) override;
	virtual void mouseEntered(::java::awt::event::MouseEvent* evt) override;
	virtual void mouseExited(::java::awt::event::MouseEvent* evt) override;
	virtual void mouseMoved(::java::awt::event::MouseEvent* evt) override;
	virtual void mousePressed(::java::awt::event::MouseEvent* evt) override;
	virtual void mouseReleased(::java::awt::event::MouseEvent* evt) override;
	virtual void propertyChange(::java::beans::PropertyChangeEvent* evt) override;
	virtual $String* toString() override;
	::javax::swing::plaf::basic::BasicToolBarUI* this$0 = nullptr;
	::javax::swing::JToolBar* tb = nullptr;
	bool isDragging = false;
	::java::awt::Point* origin = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicToolBarUI$Handler_h_