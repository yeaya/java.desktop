#ifndef _javax_swing_colorchooser_SwatchPanel$1_h_
#define _javax_swing_colorchooser_SwatchPanel$1_h_
//$ class javax.swing.colorchooser.SwatchPanel$1
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
		namespace colorchooser {
			class SwatchPanel;
		}
	}
}

namespace javax {
	namespace swing {
		namespace colorchooser {

class SwatchPanel$1 : public ::java::awt::event::FocusAdapter {
	$class(SwatchPanel$1, $NO_CLASS_INIT, ::java::awt::event::FocusAdapter)
public:
	SwatchPanel$1();
	void init$(::javax::swing::colorchooser::SwatchPanel* this$0);
	virtual void focusGained(::java::awt::event::FocusEvent* e) override;
	virtual void focusLost(::java::awt::event::FocusEvent* e) override;
	::javax::swing::colorchooser::SwatchPanel* this$0 = nullptr;
};

		} // colorchooser
	} // swing
} // javax

#endif // _javax_swing_colorchooser_SwatchPanel$1_h_