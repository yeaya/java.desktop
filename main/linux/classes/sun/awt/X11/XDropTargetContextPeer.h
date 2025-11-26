#ifndef _sun_awt_X11_XDropTargetContextPeer_h_
#define _sun_awt_X11_XDropTargetContextPeer_h_
//$ class sun.awt.X11.XDropTargetContextPeer
//$ extends sun.awt.dnd.SunDropTargetContextPeer

#include <java/lang/Array.h>
#include <sun/awt/dnd/SunDropTargetContextPeer.h>

#pragma push_macro("DTCP_KEY")
#undef DTCP_KEY

namespace java {
	namespace awt {
		class Component;
	}
}
namespace jdk {
	namespace internal {
		namespace misc {
			class Unsafe;
		}
	}
}
namespace sun {
	namespace awt {
		class AppContext;
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class XDropTargetProtocolListener;
		}
	}
}
namespace sun {
	namespace awt {
		namespace dnd {
			class SunDropTargetEvent;
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

class XDropTargetContextPeer : public ::sun::awt::dnd::SunDropTargetContextPeer {
	$class(XDropTargetContextPeer, 0, ::sun::awt::dnd::SunDropTargetContextPeer)
public:
	XDropTargetContextPeer();
	void init$();
	static int32_t access$000(::sun::awt::X11::XDropTargetContextPeer* x0, ::java::awt::Component* x1, int32_t x2, int32_t x3, int32_t x4, int32_t x5, $longs* x6, int64_t x7, int32_t x8, bool x9);
	void cleanup();
	virtual void doDropDone(bool success, int32_t dropAction, bool isLocal) override;
	virtual void eventProcessed(::sun::awt::dnd::SunDropTargetEvent* e, int32_t returnValue, bool dispatcherDone) override;
	void forwardEventToEmbedded(int64_t embedded, int64_t ctxt, int32_t eventID);
	virtual $Object* getNativeData(int64_t format) override;
	static ::sun::awt::X11::XDropTargetContextPeer* getPeer(::sun::awt::AppContext* appContext);
	static ::sun::awt::X11::XDropTargetProtocolListener* getXDropTargetProtocolListener();
	virtual void processDropMessage(::sun::awt::dnd::SunDropTargetEvent* event) override;
	virtual void processEnterMessage(::sun::awt::dnd::SunDropTargetEvent* event) override;
	virtual void processExitMessage(::sun::awt::dnd::SunDropTargetEvent* event) override;
	virtual void processMotionMessage(::sun::awt::dnd::SunDropTargetEvent* event, bool operationChanged) override;
	bool processSunDropTargetEvent(::sun::awt::dnd::SunDropTargetEvent* event);
	static ::sun::util::logging::PlatformLogger* logger;
	static ::jdk::internal::misc::Unsafe* unsafe;
	static $Object* DTCP_KEY;
};

		} // X11
	} // awt
} // sun

#pragma pop_macro("DTCP_KEY")

#endif // _sun_awt_X11_XDropTargetContextPeer_h_