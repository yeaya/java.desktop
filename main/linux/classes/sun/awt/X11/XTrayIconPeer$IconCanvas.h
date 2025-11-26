#ifndef _sun_awt_X11_XTrayIconPeer$IconCanvas_h_
#define _sun_awt_X11_XTrayIconPeer$IconCanvas_h_
//$ class sun.awt.X11.XTrayIconPeer$IconCanvas
//$ extends java.awt.Canvas

#include <java/awt/Canvas.h>

namespace java {
	namespace awt {
		class Graphics;
		class Image;
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class XTrayIconPeer$IconCanvas$IconObserver;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XTrayIconPeer$IconCanvas : public ::java::awt::Canvas {
	$class(XTrayIconPeer$IconCanvas, $NO_CLASS_INIT, ::java::awt::Canvas)
public:
	XTrayIconPeer$IconCanvas();
	void init$(int32_t width, int32_t height);
	virtual void dispose();
	virtual void paint(::java::awt::Graphics* g) override;
	virtual void repaintImage(bool doClear);
	virtual void updateImage(::java::awt::Image* image);
	$volatile(::java::awt::Image*) image = nullptr;
	::sun::awt::X11::XTrayIconPeer$IconCanvas$IconObserver* observer = nullptr;
	int32_t width = 0;
	int32_t height = 0;
	int32_t curW = 0;
	int32_t curH = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XTrayIconPeer$IconCanvas_h_