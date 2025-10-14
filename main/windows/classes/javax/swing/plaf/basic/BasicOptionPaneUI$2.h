#ifndef _javax_swing_plaf_basic_BasicOptionPaneUI$2_h_
#define _javax_swing_plaf_basic_BasicOptionPaneUI$2_h_
//$ class javax.swing.plaf.basic.BasicOptionPaneUI$2
//$ extends java.awt.event.HierarchyListener

#include <java/awt/event/HierarchyListener.h>

namespace java {
	namespace awt {
		namespace event {
			class HierarchyEvent;
		}
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

class BasicOptionPaneUI$2 : public ::java::awt::event::HierarchyListener {
	$class(BasicOptionPaneUI$2, $NO_CLASS_INIT, ::java::awt::event::HierarchyListener)
public:
	BasicOptionPaneUI$2();
	void init$(::javax::swing::plaf::basic::BasicOptionPaneUI* this$0);
	virtual void hierarchyChanged(::java::awt::event::HierarchyEvent* e) override;
	::javax::swing::plaf::basic::BasicOptionPaneUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicOptionPaneUI$2_h_