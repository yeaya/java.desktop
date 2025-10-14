#ifndef _sun_awt_windows_TranslucentWindowPainter$BIWindowPainter_h_
#define _sun_awt_windows_TranslucentWindowPainter$BIWindowPainter_h_
//$ class sun.awt.windows.TranslucentWindowPainter$BIWindowPainter
//$ extends sun.awt.windows.TranslucentWindowPainter

#include <sun/awt/windows/TranslucentWindowPainter.h>

namespace java {
	namespace awt {
		class Graphics;
		class Image;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class BufferedImage;
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

class TranslucentWindowPainter$BIWindowPainter : public ::sun::awt::windows::TranslucentWindowPainter {
	$class(TranslucentWindowPainter$BIWindowPainter, $NO_CLASS_INIT, ::sun::awt::windows::TranslucentWindowPainter)
public:
	TranslucentWindowPainter$BIWindowPainter();
	void init$(::sun::awt::windows::WWindowPeer* peer);
	virtual void flush() override;
	virtual ::java::awt::Image* getBackBuffer(bool clear) override;
	virtual ::java::awt::Graphics* getGraphics(bool clear) override;
	virtual bool update(::java::awt::Image* bb) override;
	::java::awt::image::BufferedImage* backBuffer = nullptr;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_TranslucentWindowPainter$BIWindowPainter_h_