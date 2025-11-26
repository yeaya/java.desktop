#ifndef _sun_awt_X11_XTextAreaPeer$XAWTCaret_h_
#define _sun_awt_X11_XTextAreaPeer$XAWTCaret_h_
//$ class sun.awt.X11.XTextAreaPeer$XAWTCaret
//$ extends javax.swing.text.DefaultCaret

#include <javax/swing/text/DefaultCaret.h>

namespace java {
	namespace awt {
		namespace event {
			class FocusEvent;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XTextAreaPeer$XAWTCaret : public ::javax::swing::text::DefaultCaret {
	$class(XTextAreaPeer$XAWTCaret, $NO_CLASS_INIT, ::javax::swing::text::DefaultCaret)
public:
	XTextAreaPeer$XAWTCaret();
	using ::javax::swing::text::DefaultCaret::contains;
	using ::javax::swing::text::DefaultCaret::add;
	void init$();
	virtual void focusGained(::java::awt::event::FocusEvent* e) override;
	virtual void focusLost(::java::awt::event::FocusEvent* e) override;
	using ::javax::swing::text::DefaultCaret::setRect;
	using ::javax::swing::text::DefaultCaret::intersects;
	using ::javax::swing::text::DefaultCaret::outcode;
	using ::javax::swing::text::DefaultCaret::setFrame;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XTextAreaPeer$XAWTCaret_h_