#ifndef _sun_awt_X11_XTextFieldPeer$AWTTextFieldUI_h_
#define _sun_awt_X11_XTextFieldPeer$AWTTextFieldUI_h_
//$ class sun.awt.X11.XTextFieldPeer$AWTTextFieldUI
//$ extends com.sun.java.swing.plaf.motif.MotifPasswordFieldUI

#include <com/sun/java/swing/plaf/motif/MotifPasswordFieldUI.h>

namespace javax {
	namespace swing {
		class JComponent;
		class JTextField;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class Caret;
		}
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class XTextFieldPeer;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XTextFieldPeer$AWTTextFieldUI : public ::com::sun::java::swing::plaf::motif::MotifPasswordFieldUI {
	$class(XTextFieldPeer$AWTTextFieldUI, $NO_CLASS_INIT, ::com::sun::java::swing::plaf::motif::MotifPasswordFieldUI)
public:
	XTextFieldPeer$AWTTextFieldUI();
	using ::com::sun::java::swing::plaf::motif::MotifPasswordFieldUI::create;
	void init$(::sun::awt::X11::XTextFieldPeer* this$0);
	virtual ::javax::swing::text::Caret* createCaret() override;
	virtual $String* getPropertyPrefix() override;
	virtual void installKeyboardActions() override;
	virtual void installUI(::javax::swing::JComponent* c) override;
	::sun::awt::X11::XTextFieldPeer* this$0 = nullptr;
	::javax::swing::JTextField* jtf = nullptr;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XTextFieldPeer$AWTTextFieldUI_h_