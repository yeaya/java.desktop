#ifndef _javax_swing_plaf_basic_BasicSplitPaneUI$PropertyHandler_h_
#define _javax_swing_plaf_basic_BasicSplitPaneUI$PropertyHandler_h_
//$ class javax.swing.plaf.basic.BasicSplitPaneUI$PropertyHandler
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
				class BasicSplitPaneUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicSplitPaneUI$PropertyHandler : public ::java::beans::PropertyChangeListener {
	$class(BasicSplitPaneUI$PropertyHandler, $NO_CLASS_INIT, ::java::beans::PropertyChangeListener)
public:
	BasicSplitPaneUI$PropertyHandler();
	void init$(::javax::swing::plaf::basic::BasicSplitPaneUI* this$0);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	::javax::swing::plaf::basic::BasicSplitPaneUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicSplitPaneUI$PropertyHandler_h_