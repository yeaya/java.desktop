#ifndef _TestNimbusOverride$1_h_
#define _TestNimbusOverride$1_h_
//$ class TestNimbusOverride$1
//$ extends javax.swing.AbstractAction

#include <javax/swing/AbstractAction.h>

class TestNimbusOverride;
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}

class TestNimbusOverride$1 : public ::javax::swing::AbstractAction {
	$class(TestNimbusOverride$1, $NO_CLASS_INIT, ::javax::swing::AbstractAction)
public:
	TestNimbusOverride$1();
	void init$(::TestNimbusOverride* this$0, $String* arg0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	::TestNimbusOverride* this$0 = nullptr;
};

#endif // _TestNimbusOverride$1_h_