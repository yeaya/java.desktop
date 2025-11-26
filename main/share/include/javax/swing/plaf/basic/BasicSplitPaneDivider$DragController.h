#ifndef _javax_swing_plaf_basic_BasicSplitPaneDivider$DragController_h_
#define _javax_swing_plaf_basic_BasicSplitPaneDivider$DragController_h_
//$ class javax.swing.plaf.basic.BasicSplitPaneDivider$DragController
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class $import BasicSplitPaneDivider$DragController : public ::java::lang::Object {
	$class(BasicSplitPaneDivider$DragController, $NO_CLASS_INIT, ::java::lang::Object)
public:
	BasicSplitPaneDivider$DragController();
	void init$(::javax::swing::plaf::basic::BasicSplitPaneDivider* this$0, ::java::awt::event::MouseEvent* e);
	virtual void completeDrag(int32_t x, int32_t y);
	virtual void completeDrag(::java::awt::event::MouseEvent* e);
	virtual void continueDrag(int32_t newX, int32_t newY);
	virtual void continueDrag(::java::awt::event::MouseEvent* e);
	virtual int32_t getNeededLocation(int32_t x, int32_t y);
	virtual bool isValid();
	virtual int32_t positionForMouseEvent(::java::awt::event::MouseEvent* e);
	::javax::swing::plaf::basic::BasicSplitPaneDivider* this$0 = nullptr;
	int32_t initialX = 0;
	int32_t maxX = 0;
	int32_t minX = 0;
	int32_t offset = 0;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicSplitPaneDivider$DragController_h_