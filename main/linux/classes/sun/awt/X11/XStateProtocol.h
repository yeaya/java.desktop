#ifndef _sun_awt_X11_XStateProtocol_h_
#define _sun_awt_X11_XStateProtocol_h_
//$ interface sun.awt.X11.XStateProtocol
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace awt {
		namespace X11 {
			class XPropertyEvent;
			class XWindowPeer;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XStateProtocol : public ::java::lang::Object {
	$interface(XStateProtocol, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t getState(::sun::awt::X11::XWindowPeer* window) {return 0;}
	virtual bool isStateChange(::sun::awt::X11::XPropertyEvent* e) {return false;}
	virtual void setState(::sun::awt::X11::XWindowPeer* window, int32_t state) {}
	virtual bool supportsState(int32_t state) {return false;}
	virtual void unshadeKludge(::sun::awt::X11::XWindowPeer* window) {}
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XStateProtocol_h_