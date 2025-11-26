#ifndef _javax_swing_plaf_basic_BasicSplitPaneUI$KeyboardResizeToggleHandler_h_
#define _javax_swing_plaf_basic_BasicSplitPaneUI$KeyboardResizeToggleHandler_h_
//$ class javax.swing.plaf.basic.BasicSplitPaneUI$KeyboardResizeToggleHandler
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
				class BasicSplitPaneUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicSplitPaneUI$KeyboardResizeToggleHandler : public ::java::awt::event::ActionListener {
	$class(BasicSplitPaneUI$KeyboardResizeToggleHandler, $NO_CLASS_INIT, ::java::awt::event::ActionListener)
public:
	BasicSplitPaneUI$KeyboardResizeToggleHandler();
	void init$(::javax::swing::plaf::basic::BasicSplitPaneUI* this$0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* ev) override;
	::javax::swing::plaf::basic::BasicSplitPaneUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicSplitPaneUI$KeyboardResizeToggleHandler_h_