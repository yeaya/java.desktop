#ifndef _javax_swing_colorchooser_SwatchPanel$2_h_
#define _javax_swing_colorchooser_SwatchPanel$2_h_
//$ class javax.swing.colorchooser.SwatchPanel$2
//$ extends java.awt.event.KeyAdapter

#include <java/awt/event/KeyAdapter.h>

namespace java {
	namespace awt {
		namespace event {
			class KeyEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace colorchooser {
			class SwatchPanel;
		}
	}
}

namespace javax {
	namespace swing {
		namespace colorchooser {

class SwatchPanel$2 : public ::java::awt::event::KeyAdapter {
	$class(SwatchPanel$2, $NO_CLASS_INIT, ::java::awt::event::KeyAdapter)
public:
	SwatchPanel$2();
	void init$(::javax::swing::colorchooser::SwatchPanel* this$0);
	virtual void keyPressed(::java::awt::event::KeyEvent* e) override;
	::javax::swing::colorchooser::SwatchPanel* this$0 = nullptr;
};

		} // colorchooser
	} // swing
} // javax

#endif // _javax_swing_colorchooser_SwatchPanel$2_h_