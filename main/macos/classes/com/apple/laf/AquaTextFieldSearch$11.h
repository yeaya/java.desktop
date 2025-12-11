#ifndef _com_apple_laf_AquaTextFieldSearch$11_h_
#define _com_apple_laf_AquaTextFieldSearch$11_h_
//$ class com.apple.laf.AquaTextFieldSearch$11
//$ extends javax.swing.event.DocumentListener

#include <javax/swing/event/DocumentListener.h>

namespace javax {
	namespace swing {
		class JButton;
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

class AquaTextFieldSearch$11 : public ::javax::swing::event::DocumentListener {
	$class(AquaTextFieldSearch$11, $NO_CLASS_INIT, ::javax::swing::event::DocumentListener)
public:
	AquaTextFieldSearch$11();
	void init$(::javax::swing::JButton* val$b, ::javax::swing::text::JTextComponent* val$c);
	virtual void changedUpdate(::javax::swing::event::DocumentEvent* e) override;
	virtual void insertUpdate(::javax::swing::event::DocumentEvent* e) override;
	virtual void removeUpdate(::javax::swing::event::DocumentEvent* e) override;
	::javax::swing::text::JTextComponent* val$c = nullptr;
	::javax::swing::JButton* val$b = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaTextFieldSearch$11_h_