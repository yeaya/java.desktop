#ifndef _javax_swing_plaf_basic_BasicComboBoxUI$ItemHandler_h_
#define _javax_swing_plaf_basic_BasicComboBoxUI$ItemHandler_h_
//$ class javax.swing.plaf.basic.BasicComboBoxUI$ItemHandler
//$ extends java.awt.event.ItemListener

#include <java/awt/event/ItemListener.h>

namespace java {
	namespace awt {
		namespace event {
			class ItemEvent;
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

class $export BasicComboBoxUI$ItemHandler : public ::java::awt::event::ItemListener {
	$class(BasicComboBoxUI$ItemHandler, $NO_CLASS_INIT, ::java::awt::event::ItemListener)
public:
	BasicComboBoxUI$ItemHandler();
	void init$(::javax::swing::plaf::basic::BasicComboBoxUI* this$0);
	virtual void itemStateChanged(::java::awt::event::ItemEvent* e) override;
	::javax::swing::plaf::basic::BasicComboBoxUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicComboBoxUI$ItemHandler_h_