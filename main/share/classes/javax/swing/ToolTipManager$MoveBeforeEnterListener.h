#ifndef _javax_swing_ToolTipManager$MoveBeforeEnterListener_h_
#define _javax_swing_ToolTipManager$MoveBeforeEnterListener_h_
//$ class javax.swing.ToolTipManager$MoveBeforeEnterListener
//$ extends java.awt.event.MouseMotionAdapter

#include <java/awt/event/MouseMotionAdapter.h>

namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class ToolTipManager;
	}
}

namespace javax {
	namespace swing {

class ToolTipManager$MoveBeforeEnterListener : public ::java::awt::event::MouseMotionAdapter {
	$class(ToolTipManager$MoveBeforeEnterListener, $NO_CLASS_INIT, ::java::awt::event::MouseMotionAdapter)
public:
	ToolTipManager$MoveBeforeEnterListener();
	void init$(::javax::swing::ToolTipManager* this$0);
	virtual void mouseMoved(::java::awt::event::MouseEvent* e) override;
	::javax::swing::ToolTipManager* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_ToolTipManager$MoveBeforeEnterListener_h_