#ifndef _com_apple_laf_AquaFileChooserUI$SelectionListener_h_
#define _com_apple_laf_AquaFileChooserUI$SelectionListener_h_
//$ class com.apple.laf.AquaFileChooserUI$SelectionListener
//$ extends javax.swing.event.ListSelectionListener

#include <javax/swing/event/ListSelectionListener.h>

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
			class ListSelectionEvent;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaFileChooserUI$SelectionListener : public ::javax::swing::event::ListSelectionListener {
	$class(AquaFileChooserUI$SelectionListener, $NO_CLASS_INIT, ::javax::swing::event::ListSelectionListener)
public:
	AquaFileChooserUI$SelectionListener();
	void init$(::com::apple::laf::AquaFileChooserUI* this$0);
	virtual void valueChanged(::javax::swing::event::ListSelectionEvent* e) override;
	::com::apple::laf::AquaFileChooserUI* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaFileChooserUI$SelectionListener_h_