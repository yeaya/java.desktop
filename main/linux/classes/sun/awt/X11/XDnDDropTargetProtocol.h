#ifndef _sun_awt_X11_XDnDDropTargetProtocol_h_
#define _sun_awt_X11_XDnDDropTargetProtocol_h_
//$ class sun.awt.X11.XDnDDropTargetProtocol
//$ extends sun.awt.X11.XDropTargetProtocol

#include <java/lang/Array.h>
#include <sun/awt/X11/XDropTargetProtocol.h>

namespace jdk {
	namespace internal {
		namespace misc {
			class Unsafe;
		}
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class XClientMessageEvent;
			class XDropTargetProtocol$EmbedderRegistryEntry;
			class XDropTargetProtocolListener;
			class XWindow;
		}
	}
}
namespace sun {
	namespace util {
		namespace logging {
			class PlatformLogger;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XDnDDropTargetProtocol : public ::sun::awt::X11::XDropTargetProtocol {
	$class(XDnDDropTargetProtocol, 0, ::sun::awt::X11::XDropTargetProtocol)
public:
	XDnDDropTargetProtocol();
	void init$(::sun::awt::X11::XDropTargetProtocolListener* listener);
	virtual void adjustEventForForwarding(::sun::awt::X11::XClientMessageEvent* xclient, ::sun::awt::X11::XDropTargetProtocol$EmbedderRegistryEntry* entry) override;
	virtual void cleanup() override;
	static ::sun::awt::X11::XDropTargetProtocol* createInstance(::sun::awt::X11::XDropTargetProtocolListener* listener);
	virtual bool forwardEventToEmbedded(int64_t embedded, int64_t ctxt, int32_t eventID) override;
	virtual $Object* getData(int64_t ctxt, int64_t format) override;
	virtual int32_t getMessageType(::sun::awt::X11::XClientMessageEvent* xclient) override;
	virtual $String* getProtocolName() override;
	virtual int64_t getSourceWindow() override;
	virtual bool isDragOverComponent() override;
	virtual bool isProtocolSupported(int64_t window) override;
	virtual bool isXEmbedSupported() override;
	void notifyProtocolListener(::sun::awt::X11::XWindow* xwindow, int32_t x, int32_t y, int32_t dropAction, ::sun::awt::X11::XClientMessageEvent* xclient, int32_t eventID);
	virtual bool processClientMessageImpl(::sun::awt::X11::XClientMessageEvent* xclient) override;
	bool processXdndDrop(::sun::awt::X11::XClientMessageEvent* xclient);
	bool processXdndEnter(::sun::awt::X11::XClientMessageEvent* xclient);
	bool processXdndLeave(::sun::awt::X11::XClientMessageEvent* xclient);
	bool processXdndPosition(::sun::awt::X11::XClientMessageEvent* xclient);
	virtual void registerDropTarget(int64_t window) override;
	virtual void registerEmbeddedDropSite(int64_t embedded) override;
	virtual void registerEmbedderDropSite(int64_t embedder) override;
	virtual bool sendDropDone(int64_t ctxt, bool success, int32_t dropAction) override;
	virtual void sendEnterMessageToToplevel(int64_t toplevel, ::sun::awt::X11::XClientMessageEvent* xclient) override;
	void sendEnterMessageToToplevelImpl(int64_t toplevel, int64_t sourceWindow, int64_t data1, int64_t data2, int64_t data3, int64_t data4);
	virtual void sendLeaveMessageToToplevel(int64_t toplevel, ::sun::awt::X11::XClientMessageEvent* xclient) override;
	virtual void sendLeaveMessageToToplevelImpl(int64_t toplevel, int64_t sourceWindow);
	virtual bool sendResponse(int64_t ctxt, int32_t eventID, int32_t action) override;
	virtual void unregisterDropTarget(int64_t window) override;
	virtual void unregisterEmbedderDropSite(int64_t embedder) override;
	static bool $assertionsDisabled;
	static ::sun::util::logging::PlatformLogger* logger;
	static ::jdk::internal::misc::Unsafe* unsafe;
	int64_t sourceWindow = 0;
	int64_t sourceWindowMask = 0;
	int32_t sourceProtocolVersion = 0;
	int32_t sourceActions = 0;
	$longs* sourceFormats = nullptr;
	bool trackSourceActions = false;
	int32_t userAction = 0;
	int32_t sourceX = 0;
	int32_t sourceY = 0;
	::sun::awt::X11::XWindow* targetXWindow = nullptr;
	int64_t prevCtxt = 0;
	bool overXEmbedClient = false;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XDnDDropTargetProtocol_h_