#ifndef _sun_awt_X11_XDnDDragSourceProtocol_h_
#define _sun_awt_X11_XDnDDragSourceProtocol_h_
//$ class sun.awt.X11.XDnDDragSourceProtocol
//$ extends sun.awt.X11.XDragSourceProtocol

#include <java/lang/Array.h>
#include <sun/awt/X11/XDragSourceProtocol.h>

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
			class XDragSourceProtocol$TargetWindowInfo;
			class XDragSourceProtocolListener;
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

class XDnDDragSourceProtocol : public ::sun::awt::X11::XDragSourceProtocol {
	$class(XDnDDragSourceProtocol, 0, ::sun::awt::X11::XDragSourceProtocol)
public:
	XDnDDragSourceProtocol();
	void init$(::sun::awt::X11::XDragSourceProtocolListener* listener);
	static ::sun::awt::X11::XDragSourceProtocol* createInstance(::sun::awt::X11::XDragSourceProtocolListener* listener);
	virtual $String* getProtocolName() override;
	virtual ::sun::awt::X11::XDragSourceProtocol$TargetWindowInfo* getTargetWindowInfo(int64_t window) override;
	virtual void initializeDragImpl(int32_t actions, ::java::awt::datatransfer::Transferable* contents, ::java::util::Map* formatMap, $longs* formats) override;
	virtual bool processClientMessage(::sun::awt::X11::XClientMessageEvent* xclient) override;
	virtual bool processProxyModeEvent(::sun::awt::X11::XClientMessageEvent* xclient, int64_t sourceWindow) override;
	bool processXdndFinished(::sun::awt::X11::XClientMessageEvent* xclient);
	bool processXdndStatus(::sun::awt::X11::XClientMessageEvent* xclient);
	virtual void run();
	virtual void sendDropMessage(int32_t xRoot, int32_t yRoot, int32_t sourceAction, int32_t sourceActions, int64_t time) override;
	virtual void sendEnterMessage($longs* formats, int32_t sourceAction, int32_t sourceActions, int64_t time) override;
	virtual void sendLeaveMessage(int64_t time) override;
	virtual void sendMoveMessage(int32_t xRoot, int32_t yRoot, int32_t sourceAction, int32_t sourceActions, int64_t time) override;
	static bool $assertionsDisabled;
	static ::sun::util::logging::PlatformLogger* logger;
	static ::jdk::internal::misc::Unsafe* unsafe;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XDnDDragSourceProtocol_h_