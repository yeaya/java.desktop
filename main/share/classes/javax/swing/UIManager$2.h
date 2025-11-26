#ifndef _javax_swing_UIManager$2_h_
#define _javax_swing_UIManager$2_h_
//$ class javax.swing.UIManager$2
//$ extends java.awt.KeyEventPostProcessor

#include <java/awt/KeyEventPostProcessor.h>

namespace java {
	namespace awt {
		namespace event {
			class KeyEvent;
		}
	}
}

namespace javax {
	namespace swing {

class UIManager$2 : public ::java::awt::KeyEventPostProcessor {
	$class(UIManager$2, $NO_CLASS_INIT, ::java::awt::KeyEventPostProcessor)
public:
	UIManager$2();
	void init$();
	virtual bool postProcessKeyEvent(::java::awt::event::KeyEvent* e) override;
};

	} // swing
} // javax

#endif // _javax_swing_UIManager$2_h_