#ifndef _javax_swing_plaf_basic_BasicScrollBarUI$ModelListener_h_
#define _javax_swing_plaf_basic_BasicScrollBarUI$ModelListener_h_
//$ class javax.swing.plaf.basic.BasicScrollBarUI$ModelListener
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
				class BasicScrollBarUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $import BasicScrollBarUI$ModelListener : public ::javax::swing::event::ChangeListener {
	$class(BasicScrollBarUI$ModelListener, $NO_CLASS_INIT, ::javax::swing::event::ChangeListener)
public:
	BasicScrollBarUI$ModelListener();
	void init$(::javax::swing::plaf::basic::BasicScrollBarUI* this$0);
	virtual void stateChanged(::javax::swing::event::ChangeEvent* e) override;
	::javax::swing::plaf::basic::BasicScrollBarUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicScrollBarUI$ModelListener_h_