#ifndef _com_apple_laf_AquaTabbedPaneUI$MouseHandler$1_h_
#define _com_apple_laf_AquaTabbedPaneUI$MouseHandler$1_h_
//$ class com.apple.laf.AquaTabbedPaneUI$MouseHandler$1
//$ extends javax.swing.event.PopupMenuListener

#include <javax/swing/event/PopupMenuListener.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaTabbedPaneUI$MouseHandler;
		}
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class PopupMenuEvent;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaTabbedPaneUI$MouseHandler$1 : public ::javax::swing::event::PopupMenuListener {
	$class(AquaTabbedPaneUI$MouseHandler$1, $NO_CLASS_INIT, ::javax::swing::event::PopupMenuListener)
public:
	AquaTabbedPaneUI$MouseHandler$1();
	void init$(::com::apple::laf::AquaTabbedPaneUI$MouseHandler* this$1);
	virtual void popupMenuCanceled(::javax::swing::event::PopupMenuEvent* e) override;
	virtual void popupMenuWillBecomeInvisible(::javax::swing::event::PopupMenuEvent* e) override;
	virtual void popupMenuWillBecomeVisible(::javax::swing::event::PopupMenuEvent* e) override;
	::com::apple::laf::AquaTabbedPaneUI$MouseHandler* this$1 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaTabbedPaneUI$MouseHandler$1_h_