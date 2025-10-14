#ifndef _javax_swing_plaf_basic_BasicListUI$Handler_h_
#define _javax_swing_plaf_basic_BasicListUI$Handler_h_
//$ class javax.swing.plaf.basic.BasicListUI$Handler
//$ extends java.awt.event.FocusListener
//$ implements java.awt.event.KeyListener,javax.swing.event.ListDataListener,javax.swing.event.ListSelectionListener,javax.swing.event.MouseInputListener,java.beans.PropertyChangeListener,javax.swing.plaf.basic.DragRecognitionSupport$BeforeDrag

#include <java/awt/event/FocusListener.h>
#include <java/awt/event/KeyListener.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/event/ListDataListener.h>
#include <javax/swing/event/ListSelectionListener.h>
#include <javax/swing/event/MouseInputListener.h>
#include <javax/swing/plaf/basic/DragRecognitionSupport$BeforeDrag.h>

namespace java {
	namespace awt {
		namespace event {
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
		class JList$DropLocation;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ListDataEvent;
			class ListSelectionEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicListUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class BasicListUI$Handler : public ::java::awt::event::FocusListener, public ::java::awt::event::KeyListener, public ::javax::swing::event::ListDataListener, public ::javax::swing::event::ListSelectionListener, public ::javax::swing::event::MouseInputListener, public ::java::beans::PropertyChangeListener, public ::javax::swing::plaf::basic::DragRecognitionSupport$BeforeDrag {
	$class(BasicListUI$Handler, $NO_CLASS_INIT, ::java::awt::event::FocusListener, ::java::awt::event::KeyListener, ::javax::swing::event::ListDataListener, ::javax::swing::event::ListSelectionListener, ::javax::swing::event::MouseInputListener, ::java::beans::PropertyChangeListener, ::javax::swing::plaf::basic::DragRecognitionSupport$BeforeDrag)
public:
	BasicListUI$Handler();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::plaf::basic::BasicListUI* this$0);
	void adjustSelection(::java::awt::event::MouseEvent* e);
	virtual void contentsChanged(::javax::swing::event::ListDataEvent* e) override;
	virtual void dragStarting(::java::awt::event::MouseEvent* me) override;
	virtual void focusGained(::java::awt::event::FocusEvent* e) override;
	virtual void focusLost(::java::awt::event::FocusEvent* e) override;
	virtual void intervalAdded(::javax::swing::event::ListDataEvent* e) override;
	virtual void intervalRemoved(::javax::swing::event::ListDataEvent* e) override;
	bool isNavigationKey(::java::awt::event::KeyEvent* event);
	virtual void keyPressed(::java::awt::event::KeyEvent* e) override;
	virtual void keyReleased(::java::awt::event::KeyEvent* e) override;
	virtual void keyTyped(::java::awt::event::KeyEvent* e) override;
	virtual void mouseClicked(::java::awt::event::MouseEvent* e) override;
	virtual void mouseDragged(::java::awt::event::MouseEvent* e) override;
	virtual void mouseEntered(::java::awt::event::MouseEvent* e) override;
	virtual void mouseExited(::java::awt::event::MouseEvent* e) override;
	virtual void mouseMoved(::java::awt::event::MouseEvent* e) override;
	virtual void mousePressed(::java::awt::event::MouseEvent* e) override;
	virtual void mouseReleased(::java::awt::event::MouseEvent* e) override;
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	virtual void repaintCellFocus();
	void repaintDropLocation(::javax::swing::JList$DropLocation* loc);
	virtual $String* toString() override;
	virtual void valueChanged(::javax::swing::event::ListSelectionEvent* e) override;
	::javax::swing::plaf::basic::BasicListUI* this$0 = nullptr;
	$String* prefix = nullptr;
	$String* typedString = nullptr;
	int64_t lastTime = 0;
	bool dragPressDidSelection = false;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicListUI$Handler_h_