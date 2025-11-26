#ifndef _javax_swing_colorchooser_DefaultSwatchChooserPanel$MainSwatchKeyListener_h_
#define _javax_swing_colorchooser_DefaultSwatchChooserPanel$MainSwatchKeyListener_h_
//$ class javax.swing.colorchooser.DefaultSwatchChooserPanel$MainSwatchKeyListener
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
			class DefaultSwatchChooserPanel;
		}
	}
}

namespace javax {
	namespace swing {
		namespace colorchooser {

class DefaultSwatchChooserPanel$MainSwatchKeyListener : public ::java::awt::event::KeyAdapter {
	$class(DefaultSwatchChooserPanel$MainSwatchKeyListener, $NO_CLASS_INIT, ::java::awt::event::KeyAdapter)
public:
	DefaultSwatchChooserPanel$MainSwatchKeyListener();
	void init$(::javax::swing::colorchooser::DefaultSwatchChooserPanel* this$0);
	virtual void keyPressed(::java::awt::event::KeyEvent* e) override;
	::javax::swing::colorchooser::DefaultSwatchChooserPanel* this$0 = nullptr;
};

		} // colorchooser
	} // swing
} // javax

#endif // _javax_swing_colorchooser_DefaultSwatchChooserPanel$MainSwatchKeyListener_h_