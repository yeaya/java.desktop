#ifndef _javax_swing_plaf_basic_BasicToolBarUI$PropertyListener_h_
#define _javax_swing_plaf_basic_BasicToolBarUI$PropertyListener_h_
//$ class javax.swing.plaf.basic.BasicToolBarUI$PropertyListener
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
				class BasicToolBarUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $import BasicToolBarUI$PropertyListener : public ::java::beans::PropertyChangeListener {
	$class(BasicToolBarUI$PropertyListener, $NO_CLASS_INIT, ::java::beans::PropertyChangeListener)
public:
	BasicToolBarUI$PropertyListener();
	void init$(::javax::swing::plaf::basic::BasicToolBarUI* this$0);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	::javax::swing::plaf::basic::BasicToolBarUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicToolBarUI$PropertyListener_h_