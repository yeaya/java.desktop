#ifndef _javax_swing_ToolTipManager$1_h_
#define _javax_swing_ToolTipManager$1_h_
//$ class javax.swing.ToolTipManager$1
//$ extends java.awt.event.FocusAdapter

#include <java/awt/event/FocusAdapter.h>

namespace java {
	namespace awt {
		namespace event {
			class FocusEvent;
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

class ToolTipManager$1 : public ::java::awt::event::FocusAdapter {
	$class(ToolTipManager$1, $NO_CLASS_INIT, ::java::awt::event::FocusAdapter)
public:
	ToolTipManager$1();
	void init$(::javax::swing::ToolTipManager* this$0);
	virtual void focusLost(::java::awt::event::FocusEvent* evt) override;
	::javax::swing::ToolTipManager* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_ToolTipManager$1_h_