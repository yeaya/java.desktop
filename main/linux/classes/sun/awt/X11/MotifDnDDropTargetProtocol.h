#ifndef _sun_awt_X11_MotifDnDDropTargetProtocol_h_
#define _sun_awt_X11_MotifDnDDropTargetProtocol_h_
//$ class sun.awt.X11.MotifDnDDropTargetProtocol
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
			class XDropTargetProtocolListener;
			class XWindow;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class MotifDnDDropTargetProtocol : public ::sun::awt::X11::XDropTargetProtocol {
	$class(MotifDnDDropTargetProtocol, 0, ::sun::awt::X11::XDropTargetProtocol)
public:
	MotifDnDDropTargetProtocol();
	void init$(::sun::awt::X11::XDropTargetProtocolListener* listener);
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
	void notifyProtocolListener(::sun::awt::X11::XWindow* xwindow, int32_t x, int32_t y, int32_t dropAction, int32_t actions, ::sun::awt::X11::XClientMessageEvent* xclient, int32_t eventID);
	virtual bool processClientMessageImpl(::sun::awt::X11::XClientMessageEvent* xclient) override;
	bool processDragMotion(::sun::awt::X11::XClientMessageEvent* xclient);
	bool processDropStart(::sun::awt::X11::XClientMessageEvent* xclient);
	bool processTopLevelEnter(::sun::awt::X11::XClientMessageEvent* xclient);
	bool processTopLevelLeave(::sun::awt::X11::XClientMessageEvent* xclient);
	virtual void registerDropTarget(int64_t window) override;
	virtual void registerEmbeddedDropSite(int64_t embedded) override;
	virtual void registerEmbedderDropSite(int64_t embedder) override;
	virtual bool sendDropDone(int64_t ctxt, bool success, int32_t dropAction) override;
	virtual void sendEnterMessageToToplevel(int64_t win, ::sun::awt::X11::XClientMessageEvent* xclient) override;
	virtual void sendLeaveMessageToToplevel(int64_t win, ::sun::awt::X11::XClientMessageEvent* xclient) override;
	virtual bool sendResponse(int64_t ctxt, int32_t eventID, int32_t action) override;
	virtual void unregisterDropTarget(int64_t window) override;
	virtual void unregisterEmbedderDropSite(int64_t embedder) override;
	static bool $assertionsDisabled;
	static ::jdk::internal::misc::Unsafe* unsafe;
	int64_t sourceWindow = 0;
	int64_t sourceWindowMask = 0;
	int32_t sourceProtocolVersion = 0;
	int32_t sourceActions = 0;
	$longs* sourceFormats = nullptr;
	int64_t sourceAtom = 0;
	int32_t userAction = 0;
	int32_t sourceX = 0;
	int32_t sourceY = 0;
	::sun::awt::X11::XWindow* targetXWindow = nullptr;
	bool topLevelLeavePostponed = false;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_MotifDnDDropTargetProtocol_h_