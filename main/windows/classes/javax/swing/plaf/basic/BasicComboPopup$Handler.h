#ifndef _javax_swing_plaf_basic_BasicComboPopup$Handler_h_
#define _javax_swing_plaf_basic_BasicComboPopup$Handler_h_
//$ class javax.swing.plaf.basic.BasicComboPopup$Handler
//$ extends java.awt.event.ItemListener
//$ implements java.awt.event.MouseListener,java.awt.event.MouseMotionListener,java.awt.event.MouseWheelListener,java.beans.PropertyChangeListener,java.io.Serializable

#include <java/awt/event/ItemListener.h>
#include <java/awt/event/MouseListener.h>
#include <java/awt/event/MouseMotionListener.h>
#include <java/awt/event/MouseWheelListener.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/io/Serializable.h>

namespace java {
	namespace awt {
		namespace event {
			class ItemEvent;
			class MouseEvent;
			class MouseWheelEvent;
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
		namespace plaf {
			namespace basic {
				class BasicComboPopup;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class BasicComboPopup$Handler : public ::java::awt::event::ItemListener, public ::java::awt::event::MouseListener, public ::java::awt::event::MouseMotionListener, public ::java::awt::event::MouseWheelListener, public ::java::beans::PropertyChangeListener, public ::java::io::Serializable {
	$class(BasicComboPopup$Handler, $NO_CLASS_INIT, ::java::awt::event::ItemListener, ::java::awt::event::MouseListener, ::java::awt::event::MouseMotionListener, ::java::awt::event::MouseWheelListener, ::java::beans::PropertyChangeListener, ::java::io::Serializable)
public:
	BasicComboPopup$Handler();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::plaf::basic::BasicComboPopup* this$0);
	virtual void itemStateChanged(::java::awt::event::ItemEvent* e) override;
	virtual void mouseClicked(::java::awt::event::MouseEvent* e) override;
	virtual void mouseDragged(::java::awt::event::MouseEvent* e) override;
	virtual void mouseEntered(::java::awt::event::MouseEvent* e) override;
	virtual void mouseExited(::java::awt::event::MouseEvent* e) override;
	virtual void mouseMoved(::java::awt::event::MouseEvent* anEvent) override;
	virtual void mousePressed(::java::awt::event::MouseEvent* e) override;
	virtual void mouseReleased(::java::awt::event::MouseEvent* e) override;
	virtual void mouseWheelMoved(::java::awt::event::MouseWheelEvent* e) override;
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	virtual $String* toString() override;
	::javax::swing::plaf::basic::BasicComboPopup* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicComboPopup$Handler_h_