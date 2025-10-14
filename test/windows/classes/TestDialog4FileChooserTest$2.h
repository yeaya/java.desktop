#ifndef _TestDialog4FileChooserTest$2_h_
#define _TestDialog4FileChooserTest$2_h_
//$ class TestDialog4FileChooserTest$2
//$ extends java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>

class TestDialog4FileChooserTest;
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}

class TestDialog4FileChooserTest$2 : public ::java::awt::event::ActionListener {
	$class(TestDialog4FileChooserTest$2, $NO_CLASS_INIT, ::java::awt::event::ActionListener)
public:
	TestDialog4FileChooserTest$2();
	void init$(::TestDialog4FileChooserTest* this$0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* ae) override;
	::TestDialog4FileChooserTest* this$0 = nullptr;
};

#endif // _TestDialog4FileChooserTest$2_h_