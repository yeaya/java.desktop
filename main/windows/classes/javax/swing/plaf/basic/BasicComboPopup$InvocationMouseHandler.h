#ifndef _javax_swing_plaf_basic_BasicComboPopup$InvocationMouseHandler_h_
#define _javax_swing_plaf_basic_BasicComboPopup$InvocationMouseHandler_h_
//$ class javax.swing.plaf.basic.BasicComboPopup$InvocationMouseHandler
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

class $export BasicComboPopup$InvocationMouseHandler : public ::java::awt::event::MouseAdapter {
	$class(BasicComboPopup$InvocationMouseHandler, $NO_CLASS_INIT, ::java::awt::event::MouseAdapter)
public:
	BasicComboPopup$InvocationMouseHandler();
	void init$(::javax::swing::plaf::basic::BasicComboPopup* this$0);
	virtual void mousePressed(::java::awt::event::MouseEvent* e) override;
	virtual void mouseReleased(::java::awt::event::MouseEvent* e) override;
	::javax::swing::plaf::basic::BasicComboPopup* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicComboPopup$InvocationMouseHandler_h_