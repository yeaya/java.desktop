#ifndef _com_apple_laf_AquaFileChooserUI$1_h_
#define _com_apple_laf_AquaFileChooserUI$1_h_
//$ class com.apple.laf.AquaFileChooserUI$1
//$ extends javax.swing.event.AncestorListener

#include <javax/swing/event/AncestorListener.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaFileChooserUI;
		}
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class AncestorEvent;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaFileChooserUI$1 : public ::javax::swing::event::AncestorListener {
	$class(AquaFileChooserUI$1, $NO_CLASS_INIT, ::javax::swing::event::AncestorListener)
public:
	AquaFileChooserUI$1();
	void init$(::com::apple::laf::AquaFileChooserUI* this$0);
	virtual void ancestorAdded(::javax::swing::event::AncestorEvent* e) override;
	virtual void ancestorMoved(::javax::swing::event::AncestorEvent* e) override;
	virtual void ancestorRemoved(::javax::swing::event::AncestorEvent* e) override;
	::com::apple::laf::AquaFileChooserUI* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaFileChooserUI$1_h_