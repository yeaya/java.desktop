#ifndef _com_apple_laf_AquaScrollPaneUI$XYMouseWheelHandler_h_
#define _com_apple_laf_AquaScrollPaneUI$XYMouseWheelHandler_h_
//$ class com.apple.laf.AquaScrollPaneUI$XYMouseWheelHandler
//$ extends javax.swing.plaf.basic.BasicScrollPaneUI$MouseWheelHandler

#include <javax/swing/plaf/basic/BasicScrollPaneUI$MouseWheelHandler.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaScrollPaneUI;
		}
	}
}
namespace java {
	namespace awt {
		namespace event {
			class MouseWheelEvent;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaScrollPaneUI$XYMouseWheelHandler : public ::javax::swing::plaf::basic::BasicScrollPaneUI$MouseWheelHandler {
	$class(AquaScrollPaneUI$XYMouseWheelHandler, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicScrollPaneUI$MouseWheelHandler)
public:
	AquaScrollPaneUI$XYMouseWheelHandler();
	void init$(::com::apple::laf::AquaScrollPaneUI* this$0);
	virtual void mouseWheelMoved(::java::awt::event::MouseWheelEvent* e) override;
	::com::apple::laf::AquaScrollPaneUI* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaScrollPaneUI$XYMouseWheelHandler_h_