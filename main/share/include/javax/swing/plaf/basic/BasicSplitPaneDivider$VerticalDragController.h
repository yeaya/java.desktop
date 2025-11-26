#ifndef _javax_swing_plaf_basic_BasicSplitPaneDivider$VerticalDragController_h_
#define _javax_swing_plaf_basic_BasicSplitPaneDivider$VerticalDragController_h_
//$ class javax.swing.plaf.basic.BasicSplitPaneDivider$VerticalDragController
//$ extends javax.swing.plaf.basic.BasicSplitPaneDivider$DragController

#include <javax/swing/plaf/basic/BasicSplitPaneDivider$DragController.h>

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
				class BasicSplitPaneDivider;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $import BasicSplitPaneDivider$VerticalDragController : public ::javax::swing::plaf::basic::BasicSplitPaneDivider$DragController {
	$class(BasicSplitPaneDivider$VerticalDragController, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicSplitPaneDivider$DragController)
public:
	BasicSplitPaneDivider$VerticalDragController();
	void init$(::javax::swing::plaf::basic::BasicSplitPaneDivider* this$0, ::java::awt::event::MouseEvent* e);
	virtual int32_t getNeededLocation(int32_t x, int32_t y) override;
	virtual int32_t positionForMouseEvent(::java::awt::event::MouseEvent* e) override;
	::javax::swing::plaf::basic::BasicSplitPaneDivider* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicSplitPaneDivider$VerticalDragController_h_