#ifndef _com_apple_laf_AquaTextFieldSearch$8_h_
#define _com_apple_laf_AquaTextFieldSearch$8_h_
//$ class com.apple.laf.AquaTextFieldSearch$8
//$ extends java.awt.event.FocusAdapter

#include <java/awt/event/FocusAdapter.h>

namespace java {
	namespace awt {
		namespace event {
			class FocusEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JLabel;
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

class AquaTextFieldSearch$8 : public ::java::awt::event::FocusAdapter {
	$class(AquaTextFieldSearch$8, $NO_CLASS_INIT, ::java::awt::event::FocusAdapter)
public:
	AquaTextFieldSearch$8();
	void init$(::javax::swing::JLabel* val$label, ::javax::swing::text::JTextComponent* val$c);
	virtual void focusGained(::java::awt::event::FocusEvent* e) override;
	virtual void focusLost(::java::awt::event::FocusEvent* e) override;
	::javax::swing::text::JTextComponent* val$c = nullptr;
	::javax::swing::JLabel* val$label = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaTextFieldSearch$8_h_