#ifndef _bug7160604$1_h_
#define _bug7160604$1_h_
//$ class bug7160604$1
//$ extends javax.swing.AbstractAction

#include <javax/swing/AbstractAction.h>

class bug7160604;
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}

class bug7160604$1 : public ::javax::swing::AbstractAction {
	$class(bug7160604$1, $NO_CLASS_INIT, ::javax::swing::AbstractAction)
public:
	bug7160604$1();
	void init$(::bug7160604* this$0, $String* arg0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	::bug7160604* this$0 = nullptr;
};

#endif // _bug7160604$1_h_