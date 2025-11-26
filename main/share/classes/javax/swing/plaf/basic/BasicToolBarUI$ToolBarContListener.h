#ifndef _javax_swing_plaf_basic_BasicToolBarUI$ToolBarContListener_h_
#define _javax_swing_plaf_basic_BasicToolBarUI$ToolBarContListener_h_
//$ class javax.swing.plaf.basic.BasicToolBarUI$ToolBarContListener
//$ extends java.awt.event.ContainerListener

#include <java/awt/event/ContainerListener.h>

namespace java {
	namespace awt {
		namespace event {
			class ContainerEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicToolBarUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicToolBarUI$ToolBarContListener : public ::java::awt::event::ContainerListener {
	$class(BasicToolBarUI$ToolBarContListener, $NO_CLASS_INIT, ::java::awt::event::ContainerListener)
public:
	BasicToolBarUI$ToolBarContListener();
	void init$(::javax::swing::plaf::basic::BasicToolBarUI* this$0);
	virtual void componentAdded(::java::awt::event::ContainerEvent* e) override;
	virtual void componentRemoved(::java::awt::event::ContainerEvent* e) override;
	::javax::swing::plaf::basic::BasicToolBarUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicToolBarUI$ToolBarContListener_h_