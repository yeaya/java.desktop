#ifndef _javax_swing_plaf_basic_BasicOptionPaneUI$PropertyChangeHandler_h_
#define _javax_swing_plaf_basic_BasicOptionPaneUI$PropertyChangeHandler_h_
//$ class javax.swing.plaf.basic.BasicOptionPaneUI$PropertyChangeHandler
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
				class BasicOptionPaneUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicOptionPaneUI$PropertyChangeHandler : public ::java::beans::PropertyChangeListener {
	$class(BasicOptionPaneUI$PropertyChangeHandler, $NO_CLASS_INIT, ::java::beans::PropertyChangeListener)
public:
	BasicOptionPaneUI$PropertyChangeHandler();
	void init$(::javax::swing::plaf::basic::BasicOptionPaneUI* this$0);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	::javax::swing::plaf::basic::BasicOptionPaneUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicOptionPaneUI$PropertyChangeHandler_h_