#ifndef _bug4760494$PassedListener_h_
#define _bug4760494$PassedListener_h_
//$ class bug4760494$PassedListener
//$ extends java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}

class $export bug4760494$PassedListener : public ::java::awt::event::ActionListener {
	$class(bug4760494$PassedListener, $NO_CLASS_INIT, ::java::awt::event::ActionListener)
public:
	bug4760494$PassedListener();
	void init$();
	virtual void actionPerformed(::java::awt::event::ActionEvent* ev) override;
};

#endif // _bug4760494$PassedListener_h_