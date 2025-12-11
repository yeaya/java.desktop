#ifndef _com_apple_laf_AquaScrollBarUI$ModelListener_h_
#define _com_apple_laf_AquaScrollBarUI$ModelListener_h_
//$ class com.apple.laf.AquaScrollBarUI$ModelListener
//$ extends javax.swing.event.ChangeListener

#include <javax/swing/event/ChangeListener.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaScrollBarUI;
		}
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ChangeEvent;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaScrollBarUI$ModelListener : public ::javax::swing::event::ChangeListener {
	$class(AquaScrollBarUI$ModelListener, $NO_CLASS_INIT, ::javax::swing::event::ChangeListener)
public:
	AquaScrollBarUI$ModelListener();
	void init$(::com::apple::laf::AquaScrollBarUI* this$0);
	virtual void stateChanged(::javax::swing::event::ChangeEvent* e) override;
	::com::apple::laf::AquaScrollBarUI* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaScrollBarUI$ModelListener_h_