#ifndef _javax_swing_plaf_basic_BasicTabbedPaneUI$MouseHandler_h_
#define _javax_swing_plaf_basic_BasicTabbedPaneUI$MouseHandler_h_
//$ class javax.swing.plaf.basic.BasicTabbedPaneUI$MouseHandler
//$ extends java.awt.event.MouseAdapter

#include <java/awt/event/MouseAdapter.h>

namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
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

class $export BasicTabbedPaneUI$MouseHandler : public ::java::awt::event::MouseAdapter {
	$class(BasicTabbedPaneUI$MouseHandler, $NO_CLASS_INIT, ::java::awt::event::MouseAdapter)
public:
	BasicTabbedPaneUI$MouseHandler();
	void init$(::javax::swing::plaf::basic::BasicTabbedPaneUI* this$0);
	virtual void mousePressed(::java::awt::event::MouseEvent* e) override;
	::javax::swing::plaf::basic::BasicTabbedPaneUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicTabbedPaneUI$MouseHandler_h_