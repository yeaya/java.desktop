#ifndef _javax_swing_plaf_basic_BasicComboPopup$ListSelectionHandler_h_
#define _javax_swing_plaf_basic_BasicComboPopup$ListSelectionHandler_h_
//$ class javax.swing.plaf.basic.BasicComboPopup$ListSelectionHandler
//$ extends javax.swing.event.ListSelectionListener

#include <javax/swing/event/ListSelectionListener.h>

namespace javax {
	namespace swing {
		namespace event {
			class ListSelectionEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicComboPopup;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicComboPopup$ListSelectionHandler : public ::javax::swing::event::ListSelectionListener {
	$class(BasicComboPopup$ListSelectionHandler, $NO_CLASS_INIT, ::javax::swing::event::ListSelectionListener)
public:
	BasicComboPopup$ListSelectionHandler();
	void init$(::javax::swing::plaf::basic::BasicComboPopup* this$0);
	virtual void valueChanged(::javax::swing::event::ListSelectionEvent* e) override;
	::javax::swing::plaf::basic::BasicComboPopup* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicComboPopup$ListSelectionHandler_h_