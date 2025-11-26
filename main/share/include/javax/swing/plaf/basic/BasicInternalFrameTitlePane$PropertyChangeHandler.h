#ifndef _javax_swing_plaf_basic_BasicInternalFrameTitlePane$PropertyChangeHandler_h_
#define _javax_swing_plaf_basic_BasicInternalFrameTitlePane$PropertyChangeHandler_h_
//$ class javax.swing.plaf.basic.BasicInternalFrameTitlePane$PropertyChangeHandler
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
				class BasicInternalFrameTitlePane;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $import BasicInternalFrameTitlePane$PropertyChangeHandler : public ::java::beans::PropertyChangeListener {
	$class(BasicInternalFrameTitlePane$PropertyChangeHandler, $NO_CLASS_INIT, ::java::beans::PropertyChangeListener)
public:
	BasicInternalFrameTitlePane$PropertyChangeHandler();
	void init$(::javax::swing::plaf::basic::BasicInternalFrameTitlePane* this$0);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* evt) override;
	::javax::swing::plaf::basic::BasicInternalFrameTitlePane* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicInternalFrameTitlePane$PropertyChangeHandler_h_