#ifndef _javax_swing_plaf_basic_BasicSpinnerUI$ArrowButtonHandler_h_
#define _javax_swing_plaf_basic_BasicSpinnerUI$ArrowButtonHandler_h_
//$ class javax.swing.plaf.basic.BasicSpinnerUI$ArrowButtonHandler
//$ extends javax.swing.AbstractAction
//$ implements java.awt.event.FocusListener,java.awt.event.MouseListener,javax.swing.plaf.UIResource

#include <java/awt/event/FocusListener.h>
#include <java/awt/event/MouseListener.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/plaf/UIResource.h>

namespace java {
	namespace awt {
		class AWTEvent;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
			class FocusEvent;
			class MouseEvent;
		}
	}
}
namespace java {
	namespace text {
		class AttributedCharacterIterator;
		class DateFormat$Field;
	}
}
namespace javax {
	namespace swing {
		class JButton;
		class JFormattedTextField;
		class JSpinner;
		class Timer;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class BasicSpinnerUI$ArrowButtonHandler : public ::javax::swing::AbstractAction, public ::java::awt::event::FocusListener, public ::java::awt::event::MouseListener, public ::javax::swing::plaf::UIResource {
	$class(BasicSpinnerUI$ArrowButtonHandler, $NO_CLASS_INIT, ::javax::swing::AbstractAction, ::java::awt::event::FocusListener, ::java::awt::event::MouseListener, ::javax::swing::plaf::UIResource)
public:
	BasicSpinnerUI$ArrowButtonHandler();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* name, bool isNext);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	::javax::swing::JSpinner* eventToSpinner(::java::awt::AWTEvent* e);
	virtual void focusGained(::java::awt::event::FocusEvent* e) override;
	virtual void focusLost(::java::awt::event::FocusEvent* e) override;
	void focusSpinnerIfNecessary();
	int32_t getCalendarField(::javax::swing::JSpinner* spinner);
	virtual void mouseClicked(::java::awt::event::MouseEvent* e) override;
	virtual void mouseEntered(::java::awt::event::MouseEvent* e) override;
	virtual void mouseExited(::java::awt::event::MouseEvent* e) override;
	virtual void mousePressed(::java::awt::event::MouseEvent* e) override;
	virtual void mouseReleased(::java::awt::event::MouseEvent* e) override;
	void select(::javax::swing::JSpinner* spinner);
	bool select(::javax::swing::JFormattedTextField* ftf, ::java::text::AttributedCharacterIterator* iterator, ::java::text::DateFormat$Field* field);
	virtual $String* toString() override;
	::javax::swing::Timer* autoRepeatTimer = nullptr;
	bool isNext = false;
	::javax::swing::JSpinner* spinner = nullptr;
	::javax::swing::JButton* arrowButton = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicSpinnerUI$ArrowButtonHandler_h_