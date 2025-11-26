#ifndef _sun_awt_X11_XModalityProtocol_h_
#define _sun_awt_X11_XModalityProtocol_h_
//$ interface sun.awt.X11.XModalityProtocol
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace awt {
		namespace X11 {
			class XDialogPeer;
			class XWindowPeer;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XModalityProtocol : public ::java::lang::Object {
	$interface(XModalityProtocol, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool isBlocked(::sun::awt::X11::XDialogPeer* dialog, ::sun::awt::X11::XWindowPeer* win) {return false;}
	virtual bool setModal(::sun::awt::X11::XDialogPeer* dialog, bool modal) {return false;}
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XModalityProtocol_h_