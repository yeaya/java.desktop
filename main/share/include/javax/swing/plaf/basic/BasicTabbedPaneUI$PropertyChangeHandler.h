#ifndef _javax_swing_plaf_basic_BasicTabbedPaneUI$PropertyChangeHandler_h_
#define _javax_swing_plaf_basic_BasicTabbedPaneUI$PropertyChangeHandler_h_
//$ class javax.swing.plaf.basic.BasicTabbedPaneUI$PropertyChangeHandler
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
				class BasicTabbedPaneUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $import BasicTabbedPaneUI$PropertyChangeHandler : public ::java::beans::PropertyChangeListener {
	$class(BasicTabbedPaneUI$PropertyChangeHandler, $NO_CLASS_INIT, ::java::beans::PropertyChangeListener)
public:
	BasicTabbedPaneUI$PropertyChangeHandler();
	void init$(::javax::swing::plaf::basic::BasicTabbedPaneUI* this$0);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	::javax::swing::plaf::basic::BasicTabbedPaneUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicTabbedPaneUI$PropertyChangeHandler_h_