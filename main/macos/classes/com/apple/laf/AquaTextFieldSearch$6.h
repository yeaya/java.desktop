#ifndef _com_apple_laf_AquaTextFieldSearch$6_h_
#define _com_apple_laf_AquaTextFieldSearch$6_h_
//$ class com.apple.laf.AquaTextFieldSearch$6
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
		class JButton;
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

class AquaTextFieldSearch$6 : public ::java::awt::event::MouseAdapter {
	$class(AquaTextFieldSearch$6, $NO_CLASS_INIT, ::java::awt::event::MouseAdapter)
public:
	AquaTextFieldSearch$6();
	void init$(Object$* val$findPopup, ::javax::swing::JButton* val$b, ::javax::swing::text::JTextComponent* val$c);
	virtual void mousePressed(::java::awt::event::MouseEvent* e) override;
	::javax::swing::text::JTextComponent* val$c = nullptr;
	::javax::swing::JButton* val$b = nullptr;
	$Object* val$findPopup = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaTextFieldSearch$6_h_