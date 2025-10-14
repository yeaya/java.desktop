#ifndef _javax_swing_plaf_basic_BasicSliderUI$ComponentHandler_h_
#define _javax_swing_plaf_basic_BasicSliderUI$ComponentHandler_h_
//$ class javax.swing.plaf.basic.BasicSliderUI$ComponentHandler
//$ extends java.awt.event.ComponentAdapter

#include <java/awt/event/ComponentAdapter.h>

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
				class BasicSliderUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicSliderUI$ComponentHandler : public ::java::awt::event::ComponentAdapter {
	$class(BasicSliderUI$ComponentHandler, $NO_CLASS_INIT, ::java::awt::event::ComponentAdapter)
public:
	BasicSliderUI$ComponentHandler();
	void init$(::javax::swing::plaf::basic::BasicSliderUI* this$0);
	virtual void componentResized(::java::awt::event::ComponentEvent* e) override;
	::javax::swing::plaf::basic::BasicSliderUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicSliderUI$ComponentHandler_h_