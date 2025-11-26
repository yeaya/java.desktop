#ifndef _sun_awt_X11_XEmbedCanvasPeer$XEmbedServer_h_
#define _sun_awt_X11_XEmbedCanvasPeer$XEmbedServer_h_
//$ class sun.awt.X11.XEmbedCanvasPeer$XEmbedServer
//$ extends sun.awt.X11.XEmbedHelper
//$ implements sun.awt.X11.XEventDispatcher

#include <sun/awt/X11/XEmbedHelper.h>
#include <sun/awt/X11/XEventDispatcher.h>

namespace sun {
	namespace awt {
		namespace X11 {
			class XEmbedCanvasPeer;
			class XEvent;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XEmbedCanvasPeer$XEmbedServer : public ::sun::awt::X11::XEmbedHelper, public ::sun::awt::X11::XEventDispatcher {
	$class(XEmbedCanvasPeer$XEmbedServer, $NO_CLASS_INIT, ::sun::awt::X11::XEmbedHelper, ::sun::awt::X11::XEventDispatcher)
public:
	XEmbedCanvasPeer$XEmbedServer();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::awt::X11::XEmbedCanvasPeer* this$0);
	virtual void dispatchEvent(::sun::awt::X11::XEvent* xev) override;
	virtual void handleConfigureNotify(::sun::awt::X11::XEvent* xev);
	virtual void handlePropertyNotify(::sun::awt::X11::XEvent* xev);
	virtual bool processXEmbedInfo();
	virtual $String* toString() override;
	::sun::awt::X11::XEmbedCanvasPeer* this$0 = nullptr;
	int64_t handle = 0;
	int64_t version = 0;
	int64_t flags = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XEmbedCanvasPeer$XEmbedServer_h_