#ifndef _javax_swing_plaf_basic_BasicSplitPaneDivider$MouseHandler_h_
#define _javax_swing_plaf_basic_BasicSplitPaneDivider$MouseHandler_h_
//$ class javax.swing.plaf.basic.BasicSplitPaneDivider$MouseHandler
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
				class BasicSplitPaneDivider;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicSplitPaneDivider$MouseHandler : public ::java::awt::event::MouseAdapter {
	$class(BasicSplitPaneDivider$MouseHandler, $NO_CLASS_INIT, ::java::awt::event::MouseAdapter)
public:
	BasicSplitPaneDivider$MouseHandler();
	void init$(::javax::swing::plaf::basic::BasicSplitPaneDivider* this$0);
	virtual void mouseDragged(::java::awt::event::MouseEvent* e) override;
	virtual void mouseEntered(::java::awt::event::MouseEvent* e) override;
	virtual void mouseExited(::java::awt::event::MouseEvent* e) override;
	virtual void mouseMoved(::java::awt::event::MouseEvent* e) override;
	virtual void mousePressed(::java::awt::event::MouseEvent* e) override;
	virtual void mouseReleased(::java::awt::event::MouseEvent* e) override;
	::javax::swing::plaf::basic::BasicSplitPaneDivider* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicSplitPaneDivider$MouseHandler_h_