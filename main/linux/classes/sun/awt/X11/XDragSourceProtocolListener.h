#ifndef _sun_awt_X11_XDragSourceProtocolListener_h_
#define _sun_awt_X11_XDragSourceProtocolListener_h_
//$ interface sun.awt.X11.XDragSourceProtocolListener
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace awt {
		namespace X11 {

class XDragSourceProtocolListener : public ::java::lang::Object {
	$interface(XDragSourceProtocolListener, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void cleanup(int64_t time) {}
	virtual void handleDragFinished() {}
	virtual void handleDragFinished(bool success) {}
	virtual void handleDragFinished(bool success, int32_t action) {}
	virtual void handleDragFinished(bool success, int32_t action, int32_t x, int32_t y) {}
	virtual void handleDragReply(int32_t action) {}
	virtual void handleDragReply(int32_t action, int32_t x, int32_t y) {}
	virtual void handleDragReply(int32_t action, int32_t x, int32_t y, int32_t modifiers) {}
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XDragSourceProtocolListener_h_