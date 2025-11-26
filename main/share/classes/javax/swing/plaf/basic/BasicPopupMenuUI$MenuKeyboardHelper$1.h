#ifndef _javax_swing_plaf_basic_BasicPopupMenuUI$MenuKeyboardHelper$1_h_
#define _javax_swing_plaf_basic_BasicPopupMenuUI$MenuKeyboardHelper$1_h_
//$ class javax.swing.plaf.basic.BasicPopupMenuUI$MenuKeyboardHelper$1
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
		namespace plaf {
			namespace basic {
				class BasicPopupMenuUI$MenuKeyboardHelper;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class BasicPopupMenuUI$MenuKeyboardHelper$1 : public ::java::awt::event::FocusAdapter {
	$class(BasicPopupMenuUI$MenuKeyboardHelper$1, $NO_CLASS_INIT, ::java::awt::event::FocusAdapter)
public:
	BasicPopupMenuUI$MenuKeyboardHelper$1();
	void init$(::javax::swing::plaf::basic::BasicPopupMenuUI$MenuKeyboardHelper* this$0);
	virtual void focusGained(::java::awt::event::FocusEvent* ev) override;
	::javax::swing::plaf::basic::BasicPopupMenuUI$MenuKeyboardHelper* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicPopupMenuUI$MenuKeyboardHelper$1_h_