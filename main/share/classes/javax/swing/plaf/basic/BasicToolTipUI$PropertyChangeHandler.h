#ifndef _javax_swing_plaf_basic_BasicToolTipUI$PropertyChangeHandler_h_
#define _javax_swing_plaf_basic_BasicToolTipUI$PropertyChangeHandler_h_
//$ class javax.swing.plaf.basic.BasicToolTipUI$PropertyChangeHandler
//$ extends java.beans.PropertyChangeListener

#include <java/beans/PropertyChangeListener.h>

namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class BasicToolTipUI$PropertyChangeHandler : public ::java::beans::PropertyChangeListener {
	$class(BasicToolTipUI$PropertyChangeHandler, $NO_CLASS_INIT, ::java::beans::PropertyChangeListener)
public:
	BasicToolTipUI$PropertyChangeHandler();
	void init$();
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicToolTipUI$PropertyChangeHandler_h_