#ifndef _JMenuItemToolTipKeyBindingsTest$1_h_
#define _JMenuItemToolTipKeyBindingsTest$1_h_
//$ class JMenuItemToolTipKeyBindingsTest$1
//$ extends java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}

class JMenuItemToolTipKeyBindingsTest$1 : public ::java::awt::event::ActionListener {
	$class(JMenuItemToolTipKeyBindingsTest$1, $NO_CLASS_INIT, ::java::awt::event::ActionListener)
public:
	JMenuItemToolTipKeyBindingsTest$1();
	void init$();
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
};

#endif // _JMenuItemToolTipKeyBindingsTest$1_h_