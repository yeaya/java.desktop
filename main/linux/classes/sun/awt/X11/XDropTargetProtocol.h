#ifndef _sun_awt_X11_XDropTargetProtocol_h_
#define _sun_awt_X11_XDropTargetProtocol_h_
//$ class sun.awt.X11.XDropTargetProtocol
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("DROP_MESSAGE")
#undef DROP_MESSAGE
#pragma push_macro("EMBEDDER_ALREADY_REGISTERED")
#undef EMBEDDER_ALREADY_REGISTERED
#pragma push_macro("ENTER_MESSAGE")
#undef ENTER_MESSAGE
#pragma push_macro("LEAVE_MESSAGE")
#undef LEAVE_MESSAGE
#pragma push_macro("MOTION_MESSAGE")
#undef MOTION_MESSAGE
#pragma push_macro("UNKNOWN_MESSAGE")
#undef UNKNOWN_MESSAGE

namespace java {
	namespace util {
		class HashMap;
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class XClientMessageEvent;
			class XDropTargetProtocol$EmbedderRegistryEntry;
			class XDropTargetProtocolListener;
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

class XDropTargetProtocol : public ::java::lang::Object {
	$class(XDropTargetProtocol, 0, ::java::lang::Object)
public:
	XDropTargetProtocol();
	void init$(::sun::awt::X11::XDropTargetProtocolListener* listener);
	virtual void adjustEventForForwarding(::sun::awt::X11::XClientMessageEvent* xclient, ::sun::awt::X11::XDropTargetProtocol$EmbedderRegistryEntry* entry);
	virtual void cleanup() {}
	bool forwardClientMessageToToplevel(int64_t toplevel, ::sun::awt::X11::XClientMessageEvent* xclient);
	virtual bool forwardEventToEmbedded(int64_t embedded, int64_t ctxt, int32_t eventID) {return false;}
	virtual $Object* getData(int64_t ctxt, int64_t format) {return nullptr;}
	::sun::awt::X11::XDropTargetProtocol$EmbedderRegistryEntry* getEmbedderRegistryEntry(int64_t embedder);
	virtual int32_t getMessageType(::sun::awt::X11::XClientMessageEvent* xclient) {return 0;}
	::sun::awt::X11::XDropTargetProtocolListener* getProtocolListener();
	virtual $String* getProtocolName() {return nullptr;}
	virtual int64_t getSourceWindow() {return 0;}
	virtual bool isDragOverComponent() {return false;}
	virtual bool isProtocolSupported(int64_t window) {return false;}
	virtual bool isXEmbedSupported() {return false;}
	void postProcessClientMessage(::sun::awt::X11::XClientMessageEvent* xclient, bool processed, int32_t type);
	bool processClientMessage(::sun::awt::X11::XClientMessageEvent* xclient);
	virtual bool processClientMessageImpl(::sun::awt::X11::XClientMessageEvent* xclient) {return false;}
	void putEmbedderRegistryEntry(int64_t embedder, bool overriden, int32_t version, int64_t proxy);
	virtual void registerDropTarget(int64_t window) {}
	virtual void registerEmbeddedDropSite(int64_t embedded) {}
	virtual void registerEmbedderDropSite(int64_t window) {}
	void removeEmbedderRegistryEntry(int64_t embedder);
	virtual bool sendDropDone(int64_t ctxt, bool success, int32_t dropAction) {return false;}
	virtual void sendEnterMessageToToplevel(int64_t toplevel, ::sun::awt::X11::XClientMessageEvent* xclient) {}
	virtual void sendLeaveMessageToToplevel(int64_t toplevel, ::sun::awt::X11::XClientMessageEvent* xclient) {}
	virtual bool sendResponse(int64_t ctxt, int32_t eventID, int32_t action) {return false;}
	virtual void unregisterDropTarget(int64_t window) {}
	void unregisterEmbeddedDropSite(int64_t embedded);
	virtual void unregisterEmbedderDropSite(int64_t window) {}
	static ::sun::util::logging::PlatformLogger* logger;
	::sun::awt::X11::XDropTargetProtocolListener* listener = nullptr;
	static const int32_t EMBEDDER_ALREADY_REGISTERED = 0;
	static const int32_t UNKNOWN_MESSAGE = 0;
	static const int32_t ENTER_MESSAGE = 1;
	static const int32_t MOTION_MESSAGE = 2;
	static const int32_t LEAVE_MESSAGE = 3;
	static const int32_t DROP_MESSAGE = 4;
	bool motionPassedAlong = false;
	::java::util::HashMap* embedderRegistry = nullptr;
};

		} // X11
	} // awt
} // sun

#pragma pop_macro("DROP_MESSAGE")
#pragma pop_macro("EMBEDDER_ALREADY_REGISTERED")
#pragma pop_macro("ENTER_MESSAGE")
#pragma pop_macro("LEAVE_MESSAGE")
#pragma pop_macro("MOTION_MESSAGE")
#pragma pop_macro("UNKNOWN_MESSAGE")

#endif // _sun_awt_X11_XDropTargetProtocol_h_