#ifndef _TestDialog4bug4666224$HandleAssert_h_
#define _TestDialog4bug4666224$HandleAssert_h_
//$ class TestDialog4bug4666224$HandleAssert
//$ extends java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>

class TestDialog4bug4666224;
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}

class TestDialog4bug4666224$HandleAssert : public ::java::awt::event::ActionListener {
	$class(TestDialog4bug4666224$HandleAssert, $NO_CLASS_INIT, ::java::awt::event::ActionListener)
public:
	TestDialog4bug4666224$HandleAssert();
	void init$(::TestDialog4bug4666224* this$0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* ae) override;
	::TestDialog4bug4666224* this$0 = nullptr;
};

#endif // _TestDialog4bug4666224$HandleAssert_h_