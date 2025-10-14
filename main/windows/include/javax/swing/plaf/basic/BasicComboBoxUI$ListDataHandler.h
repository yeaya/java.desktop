#ifndef _javax_swing_plaf_basic_BasicComboBoxUI$ListDataHandler_h_
#define _javax_swing_plaf_basic_BasicComboBoxUI$ListDataHandler_h_
//$ class javax.swing.plaf.basic.BasicComboBoxUI$ListDataHandler
//$ extends javax.swing.event.ListDataListener

#include <javax/swing/event/ListDataListener.h>

namespace javax {
	namespace swing {
		namespace event {
			class ListDataEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicComboBoxUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $import BasicComboBoxUI$ListDataHandler : public ::javax::swing::event::ListDataListener {
	$class(BasicComboBoxUI$ListDataHandler, $NO_CLASS_INIT, ::javax::swing::event::ListDataListener)
public:
	BasicComboBoxUI$ListDataHandler();
	void init$(::javax::swing::plaf::basic::BasicComboBoxUI* this$0);
	virtual void contentsChanged(::javax::swing::event::ListDataEvent* e) override;
	virtual void intervalAdded(::javax::swing::event::ListDataEvent* e) override;
	virtual void intervalRemoved(::javax::swing::event::ListDataEvent* e) override;
	::javax::swing::plaf::basic::BasicComboBoxUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicComboBoxUI$ListDataHandler_h_