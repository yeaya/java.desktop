#ifndef _javax_swing_plaf_basic_BasicScrollPaneUI$PropertyChangeHandler_h_
#define _javax_swing_plaf_basic_BasicScrollPaneUI$PropertyChangeHandler_h_
//$ class javax.swing.plaf.basic.BasicScrollPaneUI$PropertyChangeHandler
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
				class BasicScrollPaneUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicScrollPaneUI$PropertyChangeHandler : public ::java::beans::PropertyChangeListener {
	$class(BasicScrollPaneUI$PropertyChangeHandler, $NO_CLASS_INIT, ::java::beans::PropertyChangeListener)
public:
	BasicScrollPaneUI$PropertyChangeHandler();
	void init$(::javax::swing::plaf::basic::BasicScrollPaneUI* this$0);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	::javax::swing::plaf::basic::BasicScrollPaneUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicScrollPaneUI$PropertyChangeHandler_h_