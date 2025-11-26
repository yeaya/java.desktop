#ifndef _javax_swing_text_JTextComponent$MutableCaretEvent_h_
#define _javax_swing_text_JTextComponent$MutableCaretEvent_h_
//$ class javax.swing.text.JTextComponent$MutableCaretEvent
//$ extends javax.swing.event.CaretEvent
//$ implements javax.swing.event.ChangeListener,java.awt.event.FocusListener,java.awt.event.MouseListener

#include <java/awt/event/FocusListener.h>
#include <java/awt/event/MouseListener.h>
#include <javax/swing/event/CaretEvent.h>
#include <javax/swing/event/ChangeListener.h>

namespace java {
	namespace awt {
		namespace event {
			class FocusEvent;
			class MouseEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ChangeEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class JTextComponent;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import JTextComponent$MutableCaretEvent : public ::javax::swing::event::CaretEvent, public ::javax::swing::event::ChangeListener, public ::java::awt::event::FocusListener, public ::java::awt::event::MouseListener {
	$class(JTextComponent$MutableCaretEvent, $NO_CLASS_INIT, ::javax::swing::event::CaretEvent, ::javax::swing::event::ChangeListener, ::java::awt::event::FocusListener, ::java::awt::event::MouseListener)
public:
	JTextComponent$MutableCaretEvent();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::text::JTextComponent* c);
	void fire();
	virtual void focusGained(::java::awt::event::FocusEvent* fe) override;
	virtual void focusLost(::java::awt::event::FocusEvent* fe) override;
	virtual int32_t getDot() override;
	virtual int32_t getMark() override;
	virtual void mouseClicked(::java::awt::event::MouseEvent* e) override;
	virtual void mouseEntered(::java::awt::event::MouseEvent* e) override;
	virtual void mouseExited(::java::awt::event::MouseEvent* e) override;
	virtual void mousePressed(::java::awt::event::MouseEvent* e) override;
	virtual void mouseReleased(::java::awt::event::MouseEvent* e) override;
	virtual void stateChanged(::javax::swing::event::ChangeEvent* e) override;
	virtual $String* toString() override;
	bool dragActive = false;
	int32_t dot = 0;
	int32_t mark = 0;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_JTextComponent$MutableCaretEvent_h_