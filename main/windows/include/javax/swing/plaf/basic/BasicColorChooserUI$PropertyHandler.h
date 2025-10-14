#ifndef _javax_swing_plaf_basic_BasicColorChooserUI$PropertyHandler_h_
#define _javax_swing_plaf_basic_BasicColorChooserUI$PropertyHandler_h_
//$ class javax.swing.plaf.basic.BasicColorChooserUI$PropertyHandler
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
				class BasicColorChooserUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $import BasicColorChooserUI$PropertyHandler : public ::java::beans::PropertyChangeListener {
	$class(BasicColorChooserUI$PropertyHandler, $NO_CLASS_INIT, ::java::beans::PropertyChangeListener)
public:
	BasicColorChooserUI$PropertyHandler();
	void init$(::javax::swing::plaf::basic::BasicColorChooserUI* this$0);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	::javax::swing::plaf::basic::BasicColorChooserUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicColorChooserUI$PropertyHandler_h_