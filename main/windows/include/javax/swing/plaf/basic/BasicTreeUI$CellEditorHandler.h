#ifndef _javax_swing_plaf_basic_BasicTreeUI$CellEditorHandler_h_
#define _javax_swing_plaf_basic_BasicTreeUI$CellEditorHandler_h_
//$ class javax.swing.plaf.basic.BasicTreeUI$CellEditorHandler
//$ extends javax.swing.event.CellEditorListener

#include <javax/swing/event/CellEditorListener.h>

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
				class BasicTreeUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $import BasicTreeUI$CellEditorHandler : public ::javax::swing::event::CellEditorListener {
	$class(BasicTreeUI$CellEditorHandler, $NO_CLASS_INIT, ::javax::swing::event::CellEditorListener)
public:
	BasicTreeUI$CellEditorHandler();
	void init$(::javax::swing::plaf::basic::BasicTreeUI* this$0);
	virtual void editingCanceled(::javax::swing::event::ChangeEvent* e) override;
	virtual void editingStopped(::javax::swing::event::ChangeEvent* e) override;
	::javax::swing::plaf::basic::BasicTreeUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicTreeUI$CellEditorHandler_h_