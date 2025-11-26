#ifndef _sun_awt_X11_XDragSourceProtocol$TargetWindowInfo_h_
#define _sun_awt_X11_XDragSourceProtocol$TargetWindowInfo_h_
//$ class sun.awt.X11.XDragSourceProtocol$TargetWindowInfo
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace awt {
		namespace X11 {

class XDragSourceProtocol$TargetWindowInfo : public ::java::lang::Object {
	$class(XDragSourceProtocol$TargetWindowInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XDragSourceProtocol$TargetWindowInfo();
	void init$(int64_t proxy, int32_t version);
	virtual int32_t getProtocolVersion();
	virtual int64_t getProxyWindow();
	int64_t proxyWindow = 0;
	int32_t protocolVersion = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XDragSourceProtocol$TargetWindowInfo_h_