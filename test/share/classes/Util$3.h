#ifndef _Util$3_h_
#define _Util$3_h_
//$ class Util$3
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

class Util$3 : public ::java::awt::event::ActionListener {
	$class(Util$3, $NO_CLASS_INIT, ::java::awt::event::ActionListener)
public:
	Util$3();
	void init$(::javax::swing::JDialog* val$retDialog);
	virtual void actionPerformed(::java::awt::event::ActionEvent* ae) override;
	::javax::swing::JDialog* val$retDialog = nullptr;
};

#endif // _Util$3_h_