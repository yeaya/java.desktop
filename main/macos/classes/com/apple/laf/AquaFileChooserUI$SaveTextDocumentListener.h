#ifndef _com_apple_laf_AquaFileChooserUI$SaveTextDocumentListener_h_
#define _com_apple_laf_AquaFileChooserUI$SaveTextDocumentListener_h_
//$ class com.apple.laf.AquaFileChooserUI$SaveTextDocumentListener
//$ extends javax.swing.event.DocumentListener

#include <javax/swing/event/DocumentListener.h>

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
			class DocumentEvent;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaFileChooserUI$SaveTextDocumentListener : public ::javax::swing::event::DocumentListener {
	$class(AquaFileChooserUI$SaveTextDocumentListener, $NO_CLASS_INIT, ::javax::swing::event::DocumentListener)
public:
	AquaFileChooserUI$SaveTextDocumentListener();
	void init$(::com::apple::laf::AquaFileChooserUI* this$0);
	virtual void changedUpdate(::javax::swing::event::DocumentEvent* e) override;
	virtual void insertUpdate(::javax::swing::event::DocumentEvent* e) override;
	virtual void removeUpdate(::javax::swing::event::DocumentEvent* e) override;
	virtual void textChanged();
	::com::apple::laf::AquaFileChooserUI* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaFileChooserUI$SaveTextDocumentListener_h_