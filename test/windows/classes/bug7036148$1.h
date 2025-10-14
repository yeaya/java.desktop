#ifndef _bug7036148$1_h_
#define _bug7036148$1_h_
//$ class bug7036148$1
//$ extends javax.swing.AbstractAction

#include <javax/swing/AbstractAction.h>

class bug7036148;
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class Icon;
	}
}

class bug7036148$1 : public ::javax::swing::AbstractAction {
	$class(bug7036148$1, $NO_CLASS_INIT, ::javax::swing::AbstractAction)
public:
	bug7036148$1();
	void init$(::bug7036148* this$0, $String* arg0, ::javax::swing::Icon* arg1);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	::bug7036148* this$0 = nullptr;
};

#endif // _bug7036148$1_h_