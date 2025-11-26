#ifndef _TestDialog4bug8037575$3_h_
#define _TestDialog4bug8037575$3_h_
//$ class TestDialog4bug8037575$3
//$ extends java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>

class TestDialog4bug8037575;
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}

class TestDialog4bug8037575$3 : public ::java::awt::event::ActionListener {
	$class(TestDialog4bug8037575$3, $NO_CLASS_INIT, ::java::awt::event::ActionListener)
public:
	TestDialog4bug8037575$3();
	void init$(::TestDialog4bug8037575* this$0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* ae) override;
	::TestDialog4bug8037575* this$0 = nullptr;
};

#endif // _TestDialog4bug8037575$3_h_