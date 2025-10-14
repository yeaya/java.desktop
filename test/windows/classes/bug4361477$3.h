#ifndef _bug4361477$3_h_
#define _bug4361477$3_h_
//$ class bug4361477$3
//$ extends javax.swing.event.ChangeListener

#include <javax/swing/event/ChangeListener.h>

namespace javax {
	namespace swing {
		namespace event {
			class ChangeEvent;
		}
	}
}

class bug4361477$3 : public ::javax::swing::event::ChangeListener {
	$class(bug4361477$3, $NO_CLASS_INIT, ::javax::swing::event::ChangeListener)
public:
	bug4361477$3();
	void init$();
	virtual void stateChanged(::javax::swing::event::ChangeEvent* pick) override;
};

#endif // _bug4361477$3_h_