#ifndef _sun_awt_X11_XDropTargetRegistry_h_
#define _sun_awt_X11_XDropTargetRegistry_h_
//$ class sun.awt.X11.XDropTargetRegistry
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("DELAYED_REGISTRATION_PERIOD")
#undef DELAYED_REGISTRATION_PERIOD
#pragma push_macro("NON_XEMBED_PROTOCOLS")
#undef NON_XEMBED_PROTOCOLS
#pragma push_macro("XEMBED_PROTOCOLS")
#undef XEMBED_PROTOCOLS

namespace java {
	namespace util {
		class HashMap;
		class List;
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class XDropTargetRegistry$EmbeddedDropSiteEntry;
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

class XDropTargetRegistry : public ::java::lang::Object {
	$class(XDropTargetRegistry, 0, ::java::lang::Object)
public:
	XDropTargetRegistry();
	void init$();
	void addDelayedRegistrationEntry(int64_t window);
	static int64_t getDnDProxyWindow();
	int64_t getEmbeddedDropSite(int64_t embedder, int32_t x, int32_t y);
	static ::sun::awt::X11::XDropTargetRegistry* getRegistry();
	int64_t getToplevelWindow(int64_t window);
	void registerDropSite(int64_t window);
	void registerEmbeddedDropSite(int64_t toplevel, int64_t window);
	::sun::awt::X11::XDropTargetRegistry$EmbeddedDropSiteEntry* registerEmbedderDropSite(int64_t embedder);
	void registerProtocols(int64_t embedder, bool protocols, ::java::util::List* supportedProtocols);
	void registerXEmbedClient(int64_t canvasWindow, int64_t clientWindow);
	void removeDelayedRegistrationEntry(int64_t window);
	void unregisterDropSite(int64_t window);
	void unregisterEmbeddedDropSite(int64_t toplevel, int64_t window);
	void unregisterEmbedderDropSite(int64_t embedder, ::sun::awt::X11::XDropTargetRegistry$EmbeddedDropSiteEntry* entry);
	void unregisterXEmbedClient(int64_t canvasWindow, int64_t clientWindow);
	void updateEmbedderDropSite(int64_t embedder);
	static bool $assertionsDisabled;
	static ::sun::util::logging::PlatformLogger* logger;
	static const int64_t DELAYED_REGISTRATION_PERIOD = 200;
	static ::sun::awt::X11::XDropTargetRegistry* theInstance;
	::java::util::HashMap* delayedRegistrationMap = nullptr;
	::java::util::HashMap* embeddedDropSiteRegistry = nullptr;
	static const bool XEMBED_PROTOCOLS = true;
	static const bool NON_XEMBED_PROTOCOLS = false;
};

		} // X11
	} // awt
} // sun

#pragma pop_macro("DELAYED_REGISTRATION_PERIOD")
#pragma pop_macro("NON_XEMBED_PROTOCOLS")
#pragma pop_macro("XEMBED_PROTOCOLS")

#endif // _sun_awt_X11_XDropTargetRegistry_h_