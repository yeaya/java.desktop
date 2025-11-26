#ifndef _javax_swing_plaf_basic_BasicScrollBarUI$ArrowButtonListener_h_
#define _javax_swing_plaf_basic_BasicScrollBarUI$ArrowButtonListener_h_
//$ class javax.swing.plaf.basic.BasicScrollBarUI$ArrowButtonListener
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
				class BasicScrollBarUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicScrollBarUI$ArrowButtonListener : public ::java::awt::event::MouseAdapter {
	$class(BasicScrollBarUI$ArrowButtonListener, $NO_CLASS_INIT, ::java::awt::event::MouseAdapter)
public:
	BasicScrollBarUI$ArrowButtonListener();
	void init$(::javax::swing::plaf::basic::BasicScrollBarUI* this$0);
	virtual void mousePressed(::java::awt::event::MouseEvent* e) override;
	virtual void mouseReleased(::java::awt::event::MouseEvent* e) override;
	::javax::swing::plaf::basic::BasicScrollBarUI* this$0 = nullptr;
	bool handledEvent = false;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicScrollBarUI$ArrowButtonListener_h_