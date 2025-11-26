#ifndef _sun_awt_X11_XMSelectionListener_h_
#define _sun_awt_X11_XMSelectionListener_h_
//$ interface sun.awt.X11.XMSelectionListener
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace awt {
		namespace X11 {
			class XMSelection;
			class XPropertyEvent;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XMSelectionListener : public ::java::lang::Object {
	$interface(XMSelectionListener, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void ownerChanged(int32_t screen, ::sun::awt::X11::XMSelection* sel, int64_t newOwner, int64_t data, int64_t timestamp) {}
	virtual void ownerDeath(int32_t screen, ::sun::awt::X11::XMSelection* sel, int64_t deadOwner) {}
	virtual void selectionChanged(int32_t screen, ::sun::awt::X11::XMSelection* sel, int64_t owner, ::sun::awt::X11::XPropertyEvent* event) {}
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XMSelectionListener_h_