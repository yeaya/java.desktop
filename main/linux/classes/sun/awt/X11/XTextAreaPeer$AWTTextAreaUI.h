#ifndef _sun_awt_X11_XTextAreaPeer$AWTTextAreaUI_h_
#define _sun_awt_X11_XTextAreaPeer$AWTTextAreaUI_h_
//$ class sun.awt.X11.XTextAreaPeer$AWTTextAreaUI
//$ extends com.sun.java.swing.plaf.motif.MotifTextAreaUI

#include <com/sun/java/swing/plaf/motif/MotifTextAreaUI.h>

namespace javax {
	namespace swing {
		class JComponent;
		class JTextArea;
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
			class XTextAreaPeer;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XTextAreaPeer$AWTTextAreaUI : public ::com::sun::java::swing::plaf::motif::MotifTextAreaUI {
	$class(XTextAreaPeer$AWTTextAreaUI, $NO_CLASS_INIT, ::com::sun::java::swing::plaf::motif::MotifTextAreaUI)
public:
	XTextAreaPeer$AWTTextAreaUI();
	using ::com::sun::java::swing::plaf::motif::MotifTextAreaUI::create;
	void init$(::sun::awt::X11::XTextAreaPeer* this$0);
	virtual ::javax::swing::text::Caret* createCaret() override;
	virtual $String* getPropertyPrefix() override;
	virtual void installKeyboardActions() override;
	virtual void installUI(::javax::swing::JComponent* c) override;
	::sun::awt::X11::XTextAreaPeer* this$0 = nullptr;
	::javax::swing::JTextArea* jta = nullptr;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XTextAreaPeer$AWTTextAreaUI_h_