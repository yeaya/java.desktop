#ifndef _javax_swing_plaf_basic_BasicMenuUI$ChangeHandler_h_
#define _javax_swing_plaf_basic_BasicMenuUI$ChangeHandler_h_
//$ class javax.swing.plaf.basic.BasicMenuUI$ChangeHandler
//$ extends javax.swing.event.ChangeListener

#include <javax/swing/event/ChangeListener.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace javax {
	namespace swing {
		class JMenu;
	}
}
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
				class BasicMenuUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $import BasicMenuUI$ChangeHandler : public ::javax::swing::event::ChangeListener {
	$class(BasicMenuUI$ChangeHandler, $NO_CLASS_INIT, ::javax::swing::event::ChangeListener)
public:
	BasicMenuUI$ChangeHandler();
	void init$(::javax::swing::plaf::basic::BasicMenuUI* this$0, ::javax::swing::JMenu* m, ::javax::swing::plaf::basic::BasicMenuUI* ui);
	virtual void stateChanged(::javax::swing::event::ChangeEvent* e) override;
	::javax::swing::plaf::basic::BasicMenuUI* this$0 = nullptr;
	::javax::swing::JMenu* menu = nullptr;
	::javax::swing::plaf::basic::BasicMenuUI* ui = nullptr;
	bool isSelected = false;
	::java::awt::Component* wasFocused = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicMenuUI$ChangeHandler_h_