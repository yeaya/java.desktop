#ifndef _javax_swing_plaf_basic_BasicInternalFrameUI$ComponentHandler_h_
#define _javax_swing_plaf_basic_BasicInternalFrameUI$ComponentHandler_h_
//$ class javax.swing.plaf.basic.BasicInternalFrameUI$ComponentHandler
//$ extends java.awt.event.ComponentListener

#include <java/awt/event/ComponentListener.h>

namespace java {
	namespace awt {
		namespace event {
			class ComponentEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicInternalFrameUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicInternalFrameUI$ComponentHandler : public ::java::awt::event::ComponentListener {
	$class(BasicInternalFrameUI$ComponentHandler, $NO_CLASS_INIT, ::java::awt::event::ComponentListener)
public:
	BasicInternalFrameUI$ComponentHandler();
	void init$(::javax::swing::plaf::basic::BasicInternalFrameUI* this$0);
	virtual void componentHidden(::java::awt::event::ComponentEvent* e) override;
	virtual void componentMoved(::java::awt::event::ComponentEvent* e) override;
	virtual void componentResized(::java::awt::event::ComponentEvent* e) override;
	virtual void componentShown(::java::awt::event::ComponentEvent* e) override;
	::javax::swing::plaf::basic::BasicInternalFrameUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicInternalFrameUI$ComponentHandler_h_