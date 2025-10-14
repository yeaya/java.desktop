#ifndef _javax_swing_plaf_basic_BasicToolBarUI$ToolBarFocusListener_h_
#define _javax_swing_plaf_basic_BasicToolBarUI$ToolBarFocusListener_h_
//$ class javax.swing.plaf.basic.BasicToolBarUI$ToolBarFocusListener
//$ extends java.awt.event.FocusListener

#include <java/awt/event/FocusListener.h>

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
				class BasicToolBarUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicToolBarUI$ToolBarFocusListener : public ::java::awt::event::FocusListener {
	$class(BasicToolBarUI$ToolBarFocusListener, $NO_CLASS_INIT, ::java::awt::event::FocusListener)
public:
	BasicToolBarUI$ToolBarFocusListener();
	void init$(::javax::swing::plaf::basic::BasicToolBarUI* this$0);
	virtual void focusGained(::java::awt::event::FocusEvent* e) override;
	virtual void focusLost(::java::awt::event::FocusEvent* e) override;
	::javax::swing::plaf::basic::BasicToolBarUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicToolBarUI$ToolBarFocusListener_h_