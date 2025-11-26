#ifndef _sun_awt_X11_XToolkitThreadBlockedHandler_h_
#define _sun_awt_X11_XToolkitThreadBlockedHandler_h_
//$ class sun.awt.X11.XToolkitThreadBlockedHandler
//$ extends sun.awt.datatransfer.ToolkitThreadBlockedHandler

#include <sun/awt/datatransfer/ToolkitThreadBlockedHandler.h>

namespace sun {
	namespace awt {
		namespace X11 {
			class XToolkit;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XToolkitThreadBlockedHandler : public ::sun::awt::datatransfer::ToolkitThreadBlockedHandler {
	$class(XToolkitThreadBlockedHandler, 0, ::sun::awt::datatransfer::ToolkitThreadBlockedHandler)
public:
	XToolkitThreadBlockedHandler();
	void init$();
	virtual void enter() override;
	virtual void exit() override;
	static ::sun::awt::datatransfer::ToolkitThreadBlockedHandler* getToolkitThreadBlockedHandler();
	virtual void lock() override;
	virtual void unlock() override;
	static ::sun::awt::datatransfer::ToolkitThreadBlockedHandler* priveleged_lock;
	static ::sun::awt::X11::XToolkit* tk;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XToolkitThreadBlockedHandler_h_