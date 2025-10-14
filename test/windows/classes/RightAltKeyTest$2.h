#ifndef _RightAltKeyTest$2_h_
#define _RightAltKeyTest$2_h_
//$ class RightAltKeyTest$2
//$ extends java.awt.event.FocusListener

#include <java/awt/event/FocusListener.h>

class RightAltKeyTest;
namespace java {
	namespace awt {
		namespace event {
			class FocusEvent;
		}
	}
}

class RightAltKeyTest$2 : public ::java::awt::event::FocusListener {
	$class(RightAltKeyTest$2, $NO_CLASS_INIT, ::java::awt::event::FocusListener)
public:
	RightAltKeyTest$2();
	void init$(::RightAltKeyTest* this$0);
	virtual void focusGained(::java::awt::event::FocusEvent* e) override;
	virtual void focusLost(::java::awt::event::FocusEvent* e) override;
	::RightAltKeyTest* this$0 = nullptr;
};

#endif // _RightAltKeyTest$2_h_