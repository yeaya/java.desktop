#ifndef _AbstractActionBug_h_
#define _AbstractActionBug_h_
//$ class AbstractActionBug
//$ extends javax.swing.AbstractAction

#include <java/lang/Array.h>
#include <javax/swing/AbstractAction.h>

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}

class $export AbstractActionBug : public ::javax::swing::AbstractAction {
	$class(AbstractActionBug, $NO_CLASS_INIT, ::javax::swing::AbstractAction)
public:
	AbstractActionBug();
	void init$($String* name);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	static void main($StringArray* args);
};

#endif // _AbstractActionBug_h_