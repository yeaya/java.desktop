#ifndef _sun_awt_datatransfer_ToolkitThreadBlockedHandler_h_
#define _sun_awt_datatransfer_ToolkitThreadBlockedHandler_h_
//$ interface sun.awt.datatransfer.ToolkitThreadBlockedHandler
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace awt {
		namespace datatransfer {

class ToolkitThreadBlockedHandler : public ::java::lang::Object {
	$interface(ToolkitThreadBlockedHandler, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void enter() {}
	virtual void exit() {}
	virtual void lock() {}
	virtual void unlock() {}
};

		} // datatransfer
	} // awt
} // sun

#endif // _sun_awt_datatransfer_ToolkitThreadBlockedHandler_h_