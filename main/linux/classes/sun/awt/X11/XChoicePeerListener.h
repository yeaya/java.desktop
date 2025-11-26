#ifndef _sun_awt_X11_XChoicePeerListener_h_
#define _sun_awt_X11_XChoicePeerListener_h_
//$ interface sun.awt.X11.XChoicePeerListener
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace awt {
		namespace X11 {
			class ListHelper;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XChoicePeerListener : public ::java::lang::Object {
	$interface(XChoicePeerListener, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void unfurledChoiceClosing() {}
	virtual void unfurledChoiceOpening(::sun::awt::X11::ListHelper* choiceHelper) {}
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XChoicePeerListener_h_