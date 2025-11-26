#ifndef _javax_swing_plaf_basic_BasicComboPopup$ListMouseMotionHandler_h_
#define _javax_swing_plaf_basic_BasicComboPopup$ListMouseMotionHandler_h_
//$ class javax.swing.plaf.basic.BasicComboPopup$ListMouseMotionHandler
//$ extends java.awt.event.MouseMotionAdapter

#include <java/awt/event/MouseMotionAdapter.h>

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
				class BasicComboPopup;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicComboPopup$ListMouseMotionHandler : public ::java::awt::event::MouseMotionAdapter {
	$class(BasicComboPopup$ListMouseMotionHandler, $NO_CLASS_INIT, ::java::awt::event::MouseMotionAdapter)
public:
	BasicComboPopup$ListMouseMotionHandler();
	void init$(::javax::swing::plaf::basic::BasicComboPopup* this$0);
	virtual void mouseMoved(::java::awt::event::MouseEvent* anEvent) override;
	::javax::swing::plaf::basic::BasicComboPopup* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicComboPopup$ListMouseMotionHandler_h_