#ifndef _sun_awt_X11_XTextAreaPeer$JavaMouseEventHandler$Pointer_h_
#define _sun_awt_X11_XTextAreaPeer$JavaMouseEventHandler$Pointer_h_
//$ class sun.awt.X11.XTextAreaPeer$JavaMouseEventHandler$Pointer
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace swing {
		class JButton;
		class JScrollBar;
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class XTextAreaPeer$JavaMouseEventHandler$Pointer$Type;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XTextAreaPeer$JavaMouseEventHandler$Pointer : public ::java::lang::Object {
	$class(XTextAreaPeer$JavaMouseEventHandler$Pointer, 0, ::java::lang::Object)
public:
	XTextAreaPeer$JavaMouseEventHandler$Pointer();
	void init$();
	::javax::swing::JScrollBar* getBar();
	::javax::swing::JButton* getButton();
	::sun::awt::X11::XTextAreaPeer$JavaMouseEventHandler$Pointer$Type* getType();
	bool isNone();
	void setBar(::javax::swing::JScrollBar* bar);
	void setButton(::javax::swing::JButton* button);
	void setNone();
	void setText();
	static bool $assertionsDisabled;
	::sun::awt::X11::XTextAreaPeer$JavaMouseEventHandler$Pointer$Type* type = nullptr;
	::javax::swing::JScrollBar* bar = nullptr;
	::javax::swing::JButton* button = nullptr;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XTextAreaPeer$JavaMouseEventHandler$Pointer_h_