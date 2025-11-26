#ifndef _javax_swing_plaf_basic_BasicSplitPaneDivider$OneTouchActionHandler_h_
#define _javax_swing_plaf_basic_BasicSplitPaneDivider$OneTouchActionHandler_h_
//$ class javax.swing.plaf.basic.BasicSplitPaneDivider$OneTouchActionHandler
//$ extends java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
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

class BasicSplitPaneDivider$OneTouchActionHandler : public ::java::awt::event::ActionListener {
	$class(BasicSplitPaneDivider$OneTouchActionHandler, $NO_CLASS_INIT, ::java::awt::event::ActionListener)
public:
	BasicSplitPaneDivider$OneTouchActionHandler();
	void init$(::javax::swing::plaf::basic::BasicSplitPaneDivider* this$0, bool toMinimum);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	::javax::swing::plaf::basic::BasicSplitPaneDivider* this$0 = nullptr;
	bool toMinimum = false;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicSplitPaneDivider$OneTouchActionHandler_h_