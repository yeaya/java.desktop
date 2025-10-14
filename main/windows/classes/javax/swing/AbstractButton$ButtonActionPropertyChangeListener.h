#ifndef _javax_swing_AbstractButton$ButtonActionPropertyChangeListener_h_
#define _javax_swing_AbstractButton$ButtonActionPropertyChangeListener_h_
//$ class javax.swing.AbstractButton$ButtonActionPropertyChangeListener
//$ extends javax.swing.ActionPropertyChangeListener

#include <javax/swing/ActionPropertyChangeListener.h>

namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace javax {
	namespace swing {
		class AbstractButton;
		class Action;
		class JComponent;
	}
}

namespace javax {
	namespace swing {

class AbstractButton$ButtonActionPropertyChangeListener : public ::javax::swing::ActionPropertyChangeListener {
	$class(AbstractButton$ButtonActionPropertyChangeListener, $NO_CLASS_INIT, ::javax::swing::ActionPropertyChangeListener)
public:
	AbstractButton$ButtonActionPropertyChangeListener();
	void init$(::javax::swing::AbstractButton* b, ::javax::swing::Action* a);
	virtual void actionPropertyChanged(::javax::swing::AbstractButton* button, ::javax::swing::Action* action, ::java::beans::PropertyChangeEvent* e);
	virtual void actionPropertyChanged(::javax::swing::JComponent* button, ::javax::swing::Action* action, ::java::beans::PropertyChangeEvent* e) override;
};

	} // swing
} // javax

#endif // _javax_swing_AbstractButton$ButtonActionPropertyChangeListener_h_