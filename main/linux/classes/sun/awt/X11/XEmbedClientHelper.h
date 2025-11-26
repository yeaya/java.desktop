#ifndef _sun_awt_X11_XEmbedClientHelper_h_
#define _sun_awt_X11_XEmbedClientHelper_h_
//$ class sun.awt.X11.XEmbedClientHelper
//$ extends sun.awt.X11.XEmbedHelper
//$ implements sun.awt.X11.XEventDispatcher

#include <sun/awt/X11/XEmbedHelper.h>
#include <sun/awt/X11/XEventDispatcher.h>

namespace java {
	namespace awt {
		class AWTKeyStroke;
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class XClientMessageEvent;
			class XEmbeddedFramePeer;
			class XEvent;
			class XWindowPeer;
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

class XEmbedClientHelper : public ::sun::awt::X11::XEmbedHelper, public ::sun::awt::X11::XEventDispatcher {
	$class(XEmbedClientHelper, 0, ::sun::awt::X11::XEmbedHelper, ::sun::awt::X11::XEventDispatcher)
public:
	XEmbedClientHelper();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void dispatchEvent(::sun::awt::X11::XEvent* xev) override;
	virtual int64_t getEmbedder(::sun::awt::X11::XWindowPeer* embedded, ::sun::awt::X11::XClientMessageEvent* info);
	virtual int64_t getX11KeySym(::java::awt::AWTKeyStroke* stroke);
	virtual int64_t getX11Mods(::java::awt::AWTKeyStroke* stroke);
	virtual void handleClientMessage(::sun::awt::X11::XEvent* xev);
	virtual void handleFocusIn(int32_t detail);
	virtual void handleReparentNotify(::sun::awt::X11::XEvent* xev);
	virtual void handleWindowFocusOut();
	virtual void install();
	virtual bool isActive();
	virtual bool isApplicationActive();
	virtual void registerAccelerator(::java::awt::AWTKeyStroke* stroke, int32_t id);
	virtual bool requestFocus();
	virtual void setClient(::sun::awt::X11::XEmbeddedFramePeer* client);
	virtual $String* toString() override;
	virtual void traverseOutBackward();
	virtual void traverseOutForward();
	virtual void unregisterAccelerator(int32_t id);
	static ::sun::util::logging::PlatformLogger* xembedLog;
	::sun::awt::X11::XEmbeddedFramePeer* embedded = nullptr;
	int64_t server = 0;
	bool active = false;
	bool applicationActive = false;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XEmbedClientHelper_h_