#ifndef _sun_awt_X11_MotifDnDDragSourceProtocol_h_
#define _sun_awt_X11_MotifDnDDragSourceProtocol_h_
//$ class sun.awt.X11.MotifDnDDragSourceProtocol
//$ extends sun.awt.X11.XDragSourceProtocol
//$ implements sun.awt.X11.XEventDispatcher

#include <java/lang/Array.h>
#include <sun/awt/X11/XDragSourceProtocol.h>
#include <sun/awt/X11/XEventDispatcher.h>

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
			class XEvent;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class MotifDnDDragSourceProtocol : public ::sun::awt::X11::XDragSourceProtocol, public ::sun::awt::X11::XEventDispatcher {
	$class(MotifDnDDragSourceProtocol, 0, ::sun::awt::X11::XDragSourceProtocol, ::sun::awt::X11::XEventDispatcher)
public:
	MotifDnDDragSourceProtocol();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::awt::X11::XDragSourceProtocolListener* listener);
	virtual void cleanupTargetInfo() override;
	static ::sun::awt::X11::XDragSourceProtocol* createInstance(::sun::awt::X11::XDragSourceProtocolListener* listener);
	virtual void dispatchEvent(::sun::awt::X11::XEvent* ev) override;
	virtual $String* getProtocolName() override;
	virtual ::sun::awt::X11::XDragSourceProtocol$TargetWindowInfo* getTargetWindowInfo(int64_t window) override;
	virtual void initializeDragImpl(int32_t actions, ::java::awt::datatransfer::Transferable* contents, ::java::util::Map* formatMap, $longs* formats) override;
	virtual bool processClientMessage(::sun::awt::X11::XClientMessageEvent* xclient) override;
	virtual bool processProxyModeEvent(::sun::awt::X11::XClientMessageEvent* xclient, int64_t sourceWindow) override;
	virtual void sendDropMessage(int32_t xRoot, int32_t yRoot, int32_t sourceAction, int32_t sourceActions, int64_t time) override;
	virtual void sendEnterMessage($longs* formats, int32_t sourceAction, int32_t sourceActions, int64_t time) override;
	virtual void sendLeaveMessage(int64_t time) override;
	virtual void sendMoveMessage(int32_t xRoot, int32_t yRoot, int32_t sourceAction, int32_t sourceActions, int64_t time) override;
	virtual $String* toString() override;
	static bool $assertionsDisabled;
	static ::jdk::internal::misc::Unsafe* unsafe;
	int64_t targetEnterServerTime = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_MotifDnDDragSourceProtocol_h_