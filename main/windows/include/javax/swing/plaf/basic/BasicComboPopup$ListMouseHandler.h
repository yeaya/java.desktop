#ifndef _javax_swing_plaf_basic_BasicComboPopup$ListMouseHandler_h_
#define _javax_swing_plaf_basic_BasicComboPopup$ListMouseHandler_h_
//$ class javax.swing.plaf.basic.BasicComboPopup$ListMouseHandler
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
				class BasicComboPopup;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $import BasicComboPopup$ListMouseHandler : public ::java::awt::event::MouseAdapter {
	$class(BasicComboPopup$ListMouseHandler, $NO_CLASS_INIT, ::java::awt::event::MouseAdapter)
public:
	BasicComboPopup$ListMouseHandler();
	void init$(::javax::swing::plaf::basic::BasicComboPopup* this$0);
	virtual void mousePressed(::java::awt::event::MouseEvent* e) override;
	virtual void mouseReleased(::java::awt::event::MouseEvent* anEvent) override;
	::javax::swing::plaf::basic::BasicComboPopup* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicComboPopup$ListMouseHandler_h_