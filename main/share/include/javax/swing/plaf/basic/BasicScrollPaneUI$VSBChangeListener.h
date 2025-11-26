#ifndef _javax_swing_plaf_basic_BasicScrollPaneUI$VSBChangeListener_h_
#define _javax_swing_plaf_basic_BasicScrollPaneUI$VSBChangeListener_h_
//$ class javax.swing.plaf.basic.BasicScrollPaneUI$VSBChangeListener
//$ extends javax.swing.event.ChangeListener

#include <javax/swing/event/ChangeListener.h>

namespace javax {
	namespace swing {
		namespace event {
			class ChangeEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicScrollPaneUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $import BasicScrollPaneUI$VSBChangeListener : public ::javax::swing::event::ChangeListener {
	$class(BasicScrollPaneUI$VSBChangeListener, $NO_CLASS_INIT, ::javax::swing::event::ChangeListener)
public:
	BasicScrollPaneUI$VSBChangeListener();
	void init$(::javax::swing::plaf::basic::BasicScrollPaneUI* this$0);
	virtual void stateChanged(::javax::swing::event::ChangeEvent* e) override;
	::javax::swing::plaf::basic::BasicScrollPaneUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicScrollPaneUI$VSBChangeListener_h_