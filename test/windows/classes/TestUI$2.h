#ifndef _TestUI$2_h_
#define _TestUI$2_h_
//$ class TestUI$2
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

class TestUI$2 : public ::java::awt::event::ActionListener {
	$class(TestUI$2, $NO_CLASS_INIT, ::java::awt::event::ActionListener)
public:
	TestUI$2();
	void init$(::TestUI* this$0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	::TestUI* this$0 = nullptr;
};

#endif // _TestUI$2_h_