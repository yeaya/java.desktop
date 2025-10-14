#ifndef _TestUI$1_h_
#define _TestUI$1_h_
//$ class TestUI$1
//$ extends java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>

class TestUI;
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}

class TestUI$1 : public ::java::awt::event::ActionListener {
	$class(TestUI$1, $NO_CLASS_INIT, ::java::awt::event::ActionListener)
public:
	TestUI$1();
	void init$(::TestUI* this$0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	::TestUI* this$0 = nullptr;
};

#endif // _TestUI$1_h_