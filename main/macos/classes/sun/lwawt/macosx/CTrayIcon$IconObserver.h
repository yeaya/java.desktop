#ifndef _sun_lwawt_macosx_CTrayIcon$IconObserver_h_
#define _sun_lwawt_macosx_CTrayIcon$IconObserver_h_
//$ class sun.lwawt.macosx.CTrayIcon$IconObserver
//$ extends java.awt.image.ImageObserver

#include <java/awt/image/ImageObserver.h>

namespace java {
	namespace awt {
		class Image;
	}
}
namespace sun {
	namespace lwawt {
		namespace macosx {
			class CTrayIcon;
		}
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CTrayIcon$IconObserver : public ::java::awt::image::ImageObserver {
	$class(CTrayIcon$IconObserver, $NO_CLASS_INIT, ::java::awt::image::ImageObserver)
public:
	CTrayIcon$IconObserver();
	void init$(::sun::lwawt::macosx::CTrayIcon* this$0);
	virtual bool imageUpdate(::java::awt::Image* image, int32_t flags, int32_t x, int32_t y, int32_t width, int32_t height) override;
	::sun::lwawt::macosx::CTrayIcon* this$0 = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CTrayIcon$IconObserver_h_