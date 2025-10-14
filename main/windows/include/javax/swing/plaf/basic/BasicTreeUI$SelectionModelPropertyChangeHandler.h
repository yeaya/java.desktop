#ifndef _javax_swing_plaf_basic_BasicTreeUI$SelectionModelPropertyChangeHandler_h_
#define _javax_swing_plaf_basic_BasicTreeUI$SelectionModelPropertyChangeHandler_h_
//$ class javax.swing.plaf.basic.BasicTreeUI$SelectionModelPropertyChangeHandler
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
				class BasicTreeUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $import BasicTreeUI$SelectionModelPropertyChangeHandler : public ::java::beans::PropertyChangeListener {
	$class(BasicTreeUI$SelectionModelPropertyChangeHandler, $NO_CLASS_INIT, ::java::beans::PropertyChangeListener)
public:
	BasicTreeUI$SelectionModelPropertyChangeHandler();
	void init$(::javax::swing::plaf::basic::BasicTreeUI* this$0);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* event) override;
	::javax::swing::plaf::basic::BasicTreeUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicTreeUI$SelectionModelPropertyChangeHandler_h_