#ifndef _TestDialog4bug8037575$2_h_
#define _TestDialog4bug8037575$2_h_
//$ class TestDialog4bug8037575$2
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

class TestDialog4bug8037575$2 : public ::java::awt::event::ActionListener {
	$class(TestDialog4bug8037575$2, $NO_CLASS_INIT, ::java::awt::event::ActionListener)
public:
	TestDialog4bug8037575$2();
	void init$(::TestDialog4bug8037575* this$0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* ae) override;
	::TestDialog4bug8037575* this$0 = nullptr;
};

#endif // _TestDialog4bug8037575$2_h_