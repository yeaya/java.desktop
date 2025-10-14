#ifndef _bug8037575$2_h_
#define _bug8037575$2_h_
//$ class bug8037575$2
//$ extends javax.swing.AbstractAction

#include <javax/swing/AbstractAction.h>

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}

class bug8037575$2 : public ::javax::swing::AbstractAction {
	$class(bug8037575$2, $NO_CLASS_INIT, ::javax::swing::AbstractAction)
public:
	bug8037575$2();
	void init$();
	virtual void actionPerformed(::java::awt::event::ActionEvent* ae) override;
};

#endif // _bug8037575$2_h_