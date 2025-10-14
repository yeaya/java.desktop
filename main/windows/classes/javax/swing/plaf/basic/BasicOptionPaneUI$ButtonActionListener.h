#ifndef _javax_swing_plaf_basic_BasicOptionPaneUI$ButtonActionListener_h_
#define _javax_swing_plaf_basic_BasicOptionPaneUI$ButtonActionListener_h_
//$ class javax.swing.plaf.basic.BasicOptionPaneUI$ButtonActionListener
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
				class BasicOptionPaneUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicOptionPaneUI$ButtonActionListener : public ::java::awt::event::ActionListener {
	$class(BasicOptionPaneUI$ButtonActionListener, $NO_CLASS_INIT, ::java::awt::event::ActionListener)
public:
	BasicOptionPaneUI$ButtonActionListener();
	void init$(::javax::swing::plaf::basic::BasicOptionPaneUI* this$0, int32_t buttonIndex);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	::javax::swing::plaf::basic::BasicOptionPaneUI* this$0 = nullptr;
	int32_t buttonIndex = 0;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicOptionPaneUI$ButtonActionListener_h_