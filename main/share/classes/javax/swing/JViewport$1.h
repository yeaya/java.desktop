#ifndef _javax_swing_JViewport$1_h_
#define _javax_swing_JViewport$1_h_
//$ class javax.swing.JViewport$1
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
		class JViewport;
	}
}

namespace javax {
	namespace swing {

class JViewport$1 : public ::java::awt::event::ActionListener {
	$class(JViewport$1, $NO_CLASS_INIT, ::java::awt::event::ActionListener)
public:
	JViewport$1();
	void init$(::javax::swing::JViewport* this$0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* ae) override;
	::javax::swing::JViewport* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JViewport$1_h_