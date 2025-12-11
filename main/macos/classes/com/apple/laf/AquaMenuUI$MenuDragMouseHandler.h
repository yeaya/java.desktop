#ifndef _com_apple_laf_AquaMenuUI$MenuDragMouseHandler_h_
#define _com_apple_laf_AquaMenuUI$MenuDragMouseHandler_h_
//$ class com.apple.laf.AquaMenuUI$MenuDragMouseHandler
//$ extends javax.swing.event.MenuDragMouseListener

#include <javax/swing/event/MenuDragMouseListener.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaMenuUI;
		}
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class MenuDragMouseEvent;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaMenuUI$MenuDragMouseHandler : public ::javax::swing::event::MenuDragMouseListener {
	$class(AquaMenuUI$MenuDragMouseHandler, $NO_CLASS_INIT, ::javax::swing::event::MenuDragMouseListener)
public:
	AquaMenuUI$MenuDragMouseHandler();
	void init$(::com::apple::laf::AquaMenuUI* this$0);
	virtual void menuDragMouseDragged(::javax::swing::event::MenuDragMouseEvent* e) override;
	virtual void menuDragMouseEntered(::javax::swing::event::MenuDragMouseEvent* e) override;
	virtual void menuDragMouseExited(::javax::swing::event::MenuDragMouseEvent* e) override;
	virtual void menuDragMouseReleased(::javax::swing::event::MenuDragMouseEvent* e) override;
	::com::apple::laf::AquaMenuUI* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaMenuUI$MenuDragMouseHandler_h_