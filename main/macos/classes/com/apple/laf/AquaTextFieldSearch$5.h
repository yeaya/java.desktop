#ifndef _com_apple_laf_AquaTextFieldSearch$5_h_
#define _com_apple_laf_AquaTextFieldSearch$5_h_
//$ class com.apple.laf.AquaTextFieldSearch$5
//$ extends java.awt.event.MouseAdapter

#include <java/awt/event/MouseAdapter.h>

namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
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

class AquaTextFieldSearch$5 : public ::java::awt::event::MouseAdapter {
	$class(AquaTextFieldSearch$5, $NO_CLASS_INIT, ::java::awt::event::MouseAdapter)
public:
	AquaTextFieldSearch$5();
	void init$(::javax::swing::text::JTextComponent* val$c);
	virtual void mousePressed(::java::awt::event::MouseEvent* e) override;
	::javax::swing::text::JTextComponent* val$c = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaTextFieldSearch$5_h_