#ifndef _javax_swing_plaf_basic_BasicScrollPaneUI$MouseWheelHandler_h_
#define _javax_swing_plaf_basic_BasicScrollPaneUI$MouseWheelHandler_h_
//$ class javax.swing.plaf.basic.BasicScrollPaneUI$MouseWheelHandler
//$ extends java.awt.event.MouseWheelListener

#include <java/awt/event/MouseWheelListener.h>

namespace java {
	namespace awt {
		namespace event {
			class MouseWheelEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicScrollPaneUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $import BasicScrollPaneUI$MouseWheelHandler : public ::java::awt::event::MouseWheelListener {
	$class(BasicScrollPaneUI$MouseWheelHandler, $NO_CLASS_INIT, ::java::awt::event::MouseWheelListener)
public:
	BasicScrollPaneUI$MouseWheelHandler();
	void init$(::javax::swing::plaf::basic::BasicScrollPaneUI* this$0);
	virtual void mouseWheelMoved(::java::awt::event::MouseWheelEvent* e) override;
	::javax::swing::plaf::basic::BasicScrollPaneUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicScrollPaneUI$MouseWheelHandler_h_