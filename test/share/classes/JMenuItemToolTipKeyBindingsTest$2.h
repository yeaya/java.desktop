#ifndef _JMenuItemToolTipKeyBindingsTest$2_h_
#define _JMenuItemToolTipKeyBindingsTest$2_h_
//$ class JMenuItemToolTipKeyBindingsTest$2
//$ extends java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}

class JMenuItemToolTipKeyBindingsTest$2 : public ::java::awt::event::ActionListener {
	$class(JMenuItemToolTipKeyBindingsTest$2, $NO_CLASS_INIT, ::java::awt::event::ActionListener)
public:
	JMenuItemToolTipKeyBindingsTest$2();
	void init$();
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
};

#endif // _JMenuItemToolTipKeyBindingsTest$2_h_