#ifndef _javax_swing_plaf_basic_BasicTreeUI$TreeExpansionHandler_h_
#define _javax_swing_plaf_basic_BasicTreeUI$TreeExpansionHandler_h_
//$ class javax.swing.plaf.basic.BasicTreeUI$TreeExpansionHandler
//$ extends javax.swing.event.TreeExpansionListener

#include <javax/swing/event/TreeExpansionListener.h>

namespace javax {
	namespace swing {
		namespace event {
			class TreeExpansionEvent;
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

class $import BasicTreeUI$TreeExpansionHandler : public ::javax::swing::event::TreeExpansionListener {
	$class(BasicTreeUI$TreeExpansionHandler, $NO_CLASS_INIT, ::javax::swing::event::TreeExpansionListener)
public:
	BasicTreeUI$TreeExpansionHandler();
	void init$(::javax::swing::plaf::basic::BasicTreeUI* this$0);
	virtual void treeCollapsed(::javax::swing::event::TreeExpansionEvent* event) override;
	virtual void treeExpanded(::javax::swing::event::TreeExpansionEvent* event) override;
	::javax::swing::plaf::basic::BasicTreeUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicTreeUI$TreeExpansionHandler_h_