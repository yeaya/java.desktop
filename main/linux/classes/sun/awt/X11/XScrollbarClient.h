#ifndef _sun_awt_X11_XScrollbarClient_h_
#define _sun_awt_X11_XScrollbarClient_h_
//$ interface sun.awt.X11.XScrollbarClient
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class XScrollbar;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XScrollbarClient : public ::java::lang::Object {
	$interface(XScrollbarClient, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::awt::Component* getEventSource() {return nullptr;}
	virtual void notifyValue(::sun::awt::X11::XScrollbar* obj, int32_t type, int32_t value, bool isAdjusting) {}
	virtual void repaintScrollbarRequest(::sun::awt::X11::XScrollbar* scrollBar) {}
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XScrollbarClient_h_