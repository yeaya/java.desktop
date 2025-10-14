#ifndef _JTreeFocusTest$1_h_
#define _JTreeFocusTest$1_h_
//$ class JTreeFocusTest$1
//$ extends java.awt.event.FocusAdapter

#include <java/awt/event/FocusAdapter.h>

class JTreeFocusTest;
namespace java {
	namespace awt {
		namespace event {
			class FocusEvent;
		}
	}
}

class JTreeFocusTest$1 : public ::java::awt::event::FocusAdapter {
	$class(JTreeFocusTest$1, $NO_CLASS_INIT, ::java::awt::event::FocusAdapter)
public:
	JTreeFocusTest$1();
	void init$(::JTreeFocusTest* this$0);
	virtual void focusGained(::java::awt::event::FocusEvent* e) override;
	::JTreeFocusTest* this$0 = nullptr;
};

#endif // _JTreeFocusTest$1_h_