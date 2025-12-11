#ifndef _com_apple_laf_AquaTextFieldSearch$7_h_
#define _com_apple_laf_AquaTextFieldSearch$7_h_
//$ class com.apple.laf.AquaTextFieldSearch$7
//$ extends javax.swing.event.DocumentListener

#include <javax/swing/event/DocumentListener.h>

namespace javax {
	namespace swing {
		class JLabel;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class DocumentEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class JTextComponent;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaTextFieldSearch$7 : public ::javax::swing::event::DocumentListener {
	$class(AquaTextFieldSearch$7, $NO_CLASS_INIT, ::javax::swing::event::DocumentListener)
public:
	AquaTextFieldSearch$7();
	void init$(::javax::swing::JLabel* val$label, ::javax::swing::text::JTextComponent* val$c);
	virtual void changedUpdate(::javax::swing::event::DocumentEvent* e) override;
	virtual void insertUpdate(::javax::swing::event::DocumentEvent* e) override;
	virtual void removeUpdate(::javax::swing::event::DocumentEvent* e) override;
	::javax::swing::text::JTextComponent* val$c = nullptr;
	::javax::swing::JLabel* val$label = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaTextFieldSearch$7_h_