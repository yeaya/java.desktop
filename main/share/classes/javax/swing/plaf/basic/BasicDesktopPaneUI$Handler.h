#ifndef _javax_swing_plaf_basic_BasicDesktopPaneUI$Handler_h_
#define _javax_swing_plaf_basic_BasicDesktopPaneUI$Handler_h_
//$ class javax.swing.plaf.basic.BasicDesktopPaneUI$Handler
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
				class BasicDesktopPaneUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class BasicDesktopPaneUI$Handler : public ::java::beans::PropertyChangeListener {
	$class(BasicDesktopPaneUI$Handler, $NO_CLASS_INIT, ::java::beans::PropertyChangeListener)
public:
	BasicDesktopPaneUI$Handler();
	void init$(::javax::swing::plaf::basic::BasicDesktopPaneUI* this$0);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* evt) override;
	::javax::swing::plaf::basic::BasicDesktopPaneUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicDesktopPaneUI$Handler_h_