#ifndef _javax_swing_plaf_basic_BasicTreeUI$TreeSelectionHandler_h_
#define _javax_swing_plaf_basic_BasicTreeUI$TreeSelectionHandler_h_
//$ class javax.swing.plaf.basic.BasicTreeUI$TreeSelectionHandler
//$ extends javax.swing.event.TreeSelectionListener

#include <javax/swing/event/TreeSelectionListener.h>

namespace javax {
	namespace swing {
		namespace event {
			class TreeSelectionEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicTreeUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicTreeUI$TreeSelectionHandler : public ::javax::swing::event::TreeSelectionListener {
	$class(BasicTreeUI$TreeSelectionHandler, $NO_CLASS_INIT, ::javax::swing::event::TreeSelectionListener)
public:
	BasicTreeUI$TreeSelectionHandler();
	void init$(::javax::swing::plaf::basic::BasicTreeUI* this$0);
	virtual void valueChanged(::javax::swing::event::TreeSelectionEvent* event) override;
	::javax::swing::plaf::basic::BasicTreeUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicTreeUI$TreeSelectionHandler_h_