#ifndef _javax_swing_plaf_basic_BasicListUI$ListSelectionHandler_h_
#define _javax_swing_plaf_basic_BasicListUI$ListSelectionHandler_h_
//$ class javax.swing.plaf.basic.BasicListUI$ListSelectionHandler
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
				class BasicListUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicListUI$ListSelectionHandler : public ::javax::swing::event::ListSelectionListener {
	$class(BasicListUI$ListSelectionHandler, $NO_CLASS_INIT, ::javax::swing::event::ListSelectionListener)
public:
	BasicListUI$ListSelectionHandler();
	void init$(::javax::swing::plaf::basic::BasicListUI* this$0);
	virtual void valueChanged(::javax::swing::event::ListSelectionEvent* e) override;
	::javax::swing::plaf::basic::BasicListUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicListUI$ListSelectionHandler_h_