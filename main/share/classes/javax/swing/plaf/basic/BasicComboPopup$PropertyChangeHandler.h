#ifndef _javax_swing_plaf_basic_BasicComboPopup$PropertyChangeHandler_h_
#define _javax_swing_plaf_basic_BasicComboPopup$PropertyChangeHandler_h_
//$ class javax.swing.plaf.basic.BasicComboPopup$PropertyChangeHandler
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
				class BasicComboPopup;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicComboPopup$PropertyChangeHandler : public ::java::beans::PropertyChangeListener {
	$class(BasicComboPopup$PropertyChangeHandler, $NO_CLASS_INIT, ::java::beans::PropertyChangeListener)
public:
	BasicComboPopup$PropertyChangeHandler();
	void init$(::javax::swing::plaf::basic::BasicComboPopup* this$0);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	::javax::swing::plaf::basic::BasicComboPopup* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicComboPopup$PropertyChangeHandler_h_