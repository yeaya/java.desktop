#ifndef _sun_awt_windows_WTrayIconPeer$IconObserver_h_
#define _sun_awt_windows_WTrayIconPeer$IconObserver_h_
//$ class sun.awt.windows.WTrayIconPeer$IconObserver
//$ extends java.awt.image.ImageObserver

#include <java/awt/image/ImageObserver.h>

namespace java {
	namespace awt {
		class Image;
	}
}
namespace sun {
	namespace awt {
		namespace windows {
			class WTrayIconPeer;
		}
	}
}

namespace sun {
	namespace awt {
		namespace windows {

class WTrayIconPeer$IconObserver : public ::java::awt::image::ImageObserver {
	$class(WTrayIconPeer$IconObserver, $NO_CLASS_INIT, ::java::awt::image::ImageObserver)
public:
	WTrayIconPeer$IconObserver();
	void init$(::sun::awt::windows::WTrayIconPeer* this$0);
	virtual bool imageUpdate(::java::awt::Image* image, int32_t flags, int32_t x, int32_t y, int32_t width, int32_t height) override;
	::sun::awt::windows::WTrayIconPeer* this$0 = nullptr;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_WTrayIconPeer$IconObserver_h_