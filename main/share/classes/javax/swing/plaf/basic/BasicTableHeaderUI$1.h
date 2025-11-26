#ifndef _javax_swing_plaf_basic_BasicTableHeaderUI$1_h_
#define _javax_swing_plaf_basic_BasicTableHeaderUI$1_h_
//$ class javax.swing.plaf.basic.BasicTableHeaderUI$1
//$ extends java.awt.event.FocusListener

#include <java/awt/event/FocusListener.h>

namespace java {
	namespace awt {
		namespace event {
			class FocusEvent;
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class BasicTableHeaderUI$1 : public ::java::awt::event::FocusListener {
	$class(BasicTableHeaderUI$1, $NO_CLASS_INIT, ::java::awt::event::FocusListener)
public:
	BasicTableHeaderUI$1();
	void init$();
	virtual void focusGained(::java::awt::event::FocusEvent* e) override;
	virtual void focusLost(::java::awt::event::FocusEvent* e) override;
	void repaintHeader(Object$* source);
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicTableHeaderUI$1_h_