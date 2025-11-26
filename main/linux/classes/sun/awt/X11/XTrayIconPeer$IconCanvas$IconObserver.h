#ifndef _sun_awt_X11_XTrayIconPeer$IconCanvas$IconObserver_h_
#define _sun_awt_X11_XTrayIconPeer$IconCanvas$IconObserver_h_
//$ class sun.awt.X11.XTrayIconPeer$IconCanvas$IconObserver
//$ extends java.awt.image.ImageObserver

#include <java/awt/image/ImageObserver.h>

namespace java {
	namespace awt {
		class Image;
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class XTrayIconPeer$IconCanvas;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XTrayIconPeer$IconCanvas$IconObserver : public ::java::awt::image::ImageObserver {
	$class(XTrayIconPeer$IconCanvas$IconObserver, $NO_CLASS_INIT, ::java::awt::image::ImageObserver)
public:
	XTrayIconPeer$IconCanvas$IconObserver();
	void init$(::sun::awt::X11::XTrayIconPeer$IconCanvas* this$0);
	virtual bool imageUpdate(::java::awt::Image* image, int32_t flags, int32_t x, int32_t y, int32_t width, int32_t height) override;
	::sun::awt::X11::XTrayIconPeer$IconCanvas* this$0 = nullptr;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XTrayIconPeer$IconCanvas$IconObserver_h_