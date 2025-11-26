#ifndef _javax_swing_plaf_basic_BasicTreeUI$TreeModelHandler_h_
#define _javax_swing_plaf_basic_BasicTreeUI$TreeModelHandler_h_
//$ class javax.swing.plaf.basic.BasicTreeUI$TreeModelHandler
//$ extends javax.swing.event.TreeModelListener

#include <javax/swing/event/TreeModelListener.h>

namespace javax {
	namespace swing {
		namespace event {
			class TreeModelEvent;
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

class $export BasicTreeUI$TreeModelHandler : public ::javax::swing::event::TreeModelListener {
	$class(BasicTreeUI$TreeModelHandler, $NO_CLASS_INIT, ::javax::swing::event::TreeModelListener)
public:
	BasicTreeUI$TreeModelHandler();
	void init$(::javax::swing::plaf::basic::BasicTreeUI* this$0);
	virtual void treeNodesChanged(::javax::swing::event::TreeModelEvent* e) override;
	virtual void treeNodesInserted(::javax::swing::event::TreeModelEvent* e) override;
	virtual void treeNodesRemoved(::javax::swing::event::TreeModelEvent* e) override;
	virtual void treeStructureChanged(::javax::swing::event::TreeModelEvent* e) override;
	::javax::swing::plaf::basic::BasicTreeUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicTreeUI$TreeModelHandler_h_