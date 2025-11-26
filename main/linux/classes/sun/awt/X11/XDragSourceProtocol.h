#ifndef _sun_awt_X11_XDragSourceProtocol_h_
#define _sun_awt_X11_XDragSourceProtocol_h_
//$ class sun.awt.X11.XDragSourceProtocol
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		namespace datatransfer {
			class Transferable;
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class XClientMessageEvent;
			class XDragSourceProtocol$TargetWindowInfo;
			class XDragSourceProtocolListener;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XDragSourceProtocol : public ::java::lang::Object {
	$class(XDragSourceProtocol, 0, ::java::lang::Object)
public:
	XDragSourceProtocol();
	void init$(::sun::awt::X11::XDragSourceProtocolListener* listener);
	bool attachTargetWindow(int64_t window, int64_t time);
	virtual void cleanup();
	virtual void cleanupTargetInfo();
	void finalizeDrop();
	static int64_t getDragSourceWindow();
	::sun::awt::X11::XDragSourceProtocolListener* getProtocolListener();
	virtual $String* getProtocolName() {return nullptr;}
	int32_t getTargetProtocolVersion();
	int64_t getTargetProxyWindow();
	int64_t getTargetWindow();
	virtual ::sun::awt::X11::XDragSourceProtocol$TargetWindowInfo* getTargetWindowInfo(int64_t window) {return nullptr;}
	void initializeDrag(int32_t actions, ::java::awt::datatransfer::Transferable* contents, ::java::util::Map* formatMap, $longs* formats);
	virtual void initializeDragImpl(int32_t actions, ::java::awt::datatransfer::Transferable* contents, ::java::util::Map* formatMap, $longs* formats) {}
	void initiateDrop(int32_t xRoot, int32_t yRoot, int32_t sourceAction, int32_t sourceActions, int64_t time);
	virtual bool processClientMessage(::sun::awt::X11::XClientMessageEvent* xclient) {return false;}
	virtual bool processProxyModeEvent(::sun::awt::X11::XClientMessageEvent* xclient, int64_t sourceWindow) {return false;}
	virtual void sendDropMessage(int32_t xRoot, int32_t yRoot, int32_t sourceAction, int32_t sourceActions, int64_t time) {}
	virtual void sendEnterMessage($longs* formats, int32_t sourceAction, int32_t sourceActions, int64_t time) {}
	virtual void sendLeaveMessage(int64_t time) {}
	virtual void sendMoveMessage(int32_t xRoot, int32_t yRoot, int32_t sourceAction, int32_t sourceActions, int64_t time) {}
	static bool $assertionsDisabled;
	::sun::awt::X11::XDragSourceProtocolListener* listener = nullptr;
	bool initialized = false;
	int64_t targetWindow = 0;
	int64_t targetProxyWindow = 0;
	int32_t targetProtocolVersion = 0;
	int64_t targetWindowMask = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XDragSourceProtocol_h_