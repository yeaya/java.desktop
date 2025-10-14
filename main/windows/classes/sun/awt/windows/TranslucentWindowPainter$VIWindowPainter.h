#ifndef _sun_awt_windows_TranslucentWindowPainter$VIWindowPainter_h_
#define _sun_awt_windows_TranslucentWindowPainter$VIWindowPainter_h_
//$ class sun.awt.windows.TranslucentWindowPainter$VIWindowPainter
//$ extends sun.awt.windows.TranslucentWindowPainter$BIWindowPainter

#include <sun/awt/windows/TranslucentWindowPainter$BIWindowPainter.h>

namespace java {
	namespace awt {
		class Graphics;
		class Image;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class VolatileImage;
		}
	}
}
namespace sun {
	namespace awt {
		namespace windows {
			class WWindowPeer;
		}
	}
}

namespace sun {
	namespace awt {
		namespace windows {

class TranslucentWindowPainter$VIWindowPainter : public ::sun::awt::windows::TranslucentWindowPainter$BIWindowPainter {
	$class(TranslucentWindowPainter$VIWindowPainter, $NO_CLASS_INIT, ::sun::awt::windows::TranslucentWindowPainter$BIWindowPainter)
public:
	TranslucentWindowPainter$VIWindowPainter();
	void init$(::sun::awt::windows::WWindowPeer* peer);
	virtual void flush() override;
	virtual ::java::awt::Image* getBackBuffer(bool clear) override;
	virtual ::java::awt::Graphics* getGraphics(bool clear) override;
	::java::awt::image::VolatileImage* viBB = nullptr;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_TranslucentWindowPainter$VIWindowPainter_h_