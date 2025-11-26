#ifndef _javax_swing_plaf_basic_BasicComboBoxUI$PropertyChangeHandler_h_
#define _javax_swing_plaf_basic_BasicComboBoxUI$PropertyChangeHandler_h_
//$ class javax.swing.plaf.basic.BasicComboBoxUI$PropertyChangeHandler
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
				class BasicComboBoxUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $import BasicComboBoxUI$PropertyChangeHandler : public ::java::beans::PropertyChangeListener {
	$class(BasicComboBoxUI$PropertyChangeHandler, $NO_CLASS_INIT, ::java::beans::PropertyChangeListener)
public:
	BasicComboBoxUI$PropertyChangeHandler();
	void init$(::javax::swing::plaf::basic::BasicComboBoxUI* this$0);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	::javax::swing::plaf::basic::BasicComboBoxUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicComboBoxUI$PropertyChangeHandler_h_