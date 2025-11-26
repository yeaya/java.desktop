#ifndef _Util$4_h_
#define _Util$4_h_
//$ class Util$4
//$ extends java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JDialog;
	}
}

class Util$4 : public ::java::awt::event::ActionListener {
	$class(Util$4, $NO_CLASS_INIT, ::java::awt::event::ActionListener)
public:
	Util$4();
	void init$(::javax::swing::JDialog* val$retDialog, $String* val$failString);
	virtual void actionPerformed(::java::awt::event::ActionEvent* ae) override;
	$String* val$failString = nullptr;
	::javax::swing::JDialog* val$retDialog = nullptr;
};

#endif // _Util$4_h_