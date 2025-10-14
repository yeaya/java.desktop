#ifndef _javax_swing_plaf_basic_BasicTableUI$Handler_h_
#define _javax_swing_plaf_basic_BasicTableUI$Handler_h_
//$ class javax.swing.plaf.basic.BasicTableUI$Handler
//$ extends java.awt.event.FocusListener
//$ implements javax.swing.event.MouseInputListener,java.beans.PropertyChangeListener,javax.swing.event.ListSelectionListener,java.awt.event.ActionListener,javax.swing.plaf.basic.DragRecognitionSupport$BeforeDrag

#include <java/awt/event/ActionListener.h>
#include <java/awt/event/FocusListener.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/event/ListSelectionListener.h>
#include <javax/swing/event/MouseInputListener.h>
#include <javax/swing/plaf/basic/DragRecognitionSupport$BeforeDrag.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
			class FocusEvent;
			class KeyEvent;
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
		class JTable$DropLocation;
		class Timer;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ListSelectionEvent;
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

class BasicTableUI$Handler : public ::java::awt::event::FocusListener, public ::javax::swing::event::MouseInputListener, public ::java::beans::PropertyChangeListener, public ::javax::swing::event::ListSelectionListener, public ::java::awt::event::ActionListener, public ::javax::swing::plaf::basic::DragRecognitionSupport$BeforeDrag {
	$class(BasicTableUI$Handler, $NO_CLASS_INIT, ::java::awt::event::FocusListener, ::javax::swing::event::MouseInputListener, ::java::beans::PropertyChangeListener, ::javax::swing::event::ListSelectionListener, ::java::awt::event::ActionListener, ::javax::swing::plaf::basic::DragRecognitionSupport$BeforeDrag)
public:
	BasicTableUI$Handler();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::plaf::basic::BasicTableUI* this$0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* ae) override;
	void adjustSelection(::java::awt::event::MouseEvent* e);
	bool canStartDrag();
	virtual void dragStarting(::java::awt::event::MouseEvent* me) override;
	virtual void focusGained(::java::awt::event::FocusEvent* e) override;
	virtual void focusLost(::java::awt::event::FocusEvent* e) override;
	virtual void keyPressed(::java::awt::event::KeyEvent* e);
	virtual void keyReleased(::java::awt::event::KeyEvent* e);
	virtual void keyTyped(::java::awt::event::KeyEvent* e);
	void maybeStartTimer();
	virtual void mouseClicked(::java::awt::event::MouseEvent* e) override;
	virtual void mouseDragged(::java::awt::event::MouseEvent* e) override;
	virtual void mouseEntered(::java::awt::event::MouseEvent* e) override;
	virtual void mouseExited(::java::awt::event::MouseEvent* e) override;
	virtual void mouseMoved(::java::awt::event::MouseEvent* e) override;
	virtual void mousePressed(::java::awt::event::MouseEvent* e) override;
	void mousePressedDND(::java::awt::event::MouseEvent* e);
	virtual void mouseReleased(::java::awt::event::MouseEvent* e) override;
	void mouseReleasedDND(::java::awt::event::MouseEvent* e);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* event) override;
	void repaintDropLocation(::javax::swing::JTable$DropLocation* loc);
	void repaintLeadCell();
	bool repostEvent(::java::awt::event::MouseEvent* e);
	void setDispatchComponent(::java::awt::event::MouseEvent* e);
	void setValueIsAdjusting(bool flag);
	virtual $String* toString() override;
	virtual void valueChanged(::javax::swing::event::ListSelectionEvent* e) override;
	::javax::swing::plaf::basic::BasicTableUI* this$0 = nullptr;
	::java::awt::Component* dispatchComponent = nullptr;
	int32_t pressedRow = 0;
	int32_t pressedCol = 0;
	::java::awt::event::MouseEvent* pressedEvent = nullptr;
	bool dragPressDidSelection = false;
	bool dragStarted = false;
	bool shouldStartTimer = false;
	bool outsidePrefSize = false;
	::javax::swing::Timer* timer = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicTableUI$Handler_h_