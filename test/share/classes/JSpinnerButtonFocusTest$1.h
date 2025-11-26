#ifndef _JSpinnerButtonFocusTest$1_h_
#define _JSpinnerButtonFocusTest$1_h_
//$ class JSpinnerButtonFocusTest$1
//$ extends java.awt.event.FocusAdapter

#include <java/awt/event/FocusAdapter.h>

namespace java {
	namespace awt {
		namespace event {
			class FocusEvent;
		}
	}
}

class JSpinnerButtonFocusTest$1 : public ::java::awt::event::FocusAdapter {
	$class(JSpinnerButtonFocusTest$1, $NO_CLASS_INIT, ::java::awt::event::FocusAdapter)
public:
	JSpinnerButtonFocusTest$1();
	void init$();
	virtual void focusGained(::java::awt::event::FocusEvent* e) override;
};

#endif // _JSpinnerButtonFocusTest$1_h_