#ifndef _sun_awt_X11_XDropTargetEventProcessor_h_
#define _sun_awt_X11_XDropTargetEventProcessor_h_
//$ class sun.awt.X11.XDropTargetEventProcessor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace awt {
		namespace X11 {
			class XDropTargetProtocol;
			class XEvent;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XDropTargetEventProcessor : public ::java::lang::Object {
	$class(XDropTargetEventProcessor, 0, ::java::lang::Object)
public:
	XDropTargetEventProcessor();
	void init$();
	static void activate();
	bool doProcessEvent(::sun::awt::X11::XEvent* ev);
	static bool processEvent(::sun::awt::X11::XEvent* ev);
	static void reset();
	static ::sun::awt::X11::XDropTargetEventProcessor* theInstance;
	static bool active;
	::sun::awt::X11::XDropTargetProtocol* protocol = nullptr;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XDropTargetEventProcessor_h_