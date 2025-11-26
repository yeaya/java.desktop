#ifndef _Test8013370$2_h_
#define _Test8013370$2_h_
//$ class Test8013370$2
//$ extends javax.swing.AbstractAction

#include <javax/swing/AbstractAction.h>

class Test8013370;
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}

class Test8013370$2 : public ::javax::swing::AbstractAction {
	$class(Test8013370$2, $NO_CLASS_INIT, ::javax::swing::AbstractAction)
public:
	Test8013370$2();
	void init$(::Test8013370* this$0, $String* arg0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* event) override;
	::Test8013370* this$0 = nullptr;
};

#endif // _Test8013370$2_h_