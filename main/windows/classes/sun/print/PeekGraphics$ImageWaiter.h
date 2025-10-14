#ifndef _sun_print_PeekGraphics$ImageWaiter_h_
#define _sun_print_PeekGraphics$ImageWaiter_h_
//$ class sun.print.PeekGraphics$ImageWaiter
//$ extends java.awt.image.ImageObserver

#include <java/awt/image/ImageObserver.h>

namespace java {
	namespace awt {
		class Image;
	}
}
namespace sun {
	namespace print {
		class PeekGraphics;
	}
}

namespace sun {
	namespace print {

class PeekGraphics$ImageWaiter : public ::java::awt::image::ImageObserver {
	$class(PeekGraphics$ImageWaiter, $NO_CLASS_INIT, ::java::awt::image::ImageObserver)
public:
	PeekGraphics$ImageWaiter();
	void init$(::sun::print::PeekGraphics* this$0, ::java::awt::Image* img);
	virtual int32_t getHeight();
	virtual int32_t getWidth();
	virtual bool imageUpdate(::java::awt::Image* image, int32_t flags, int32_t x, int32_t y, int32_t w, int32_t h) override;
	void waitForDimensions(::java::awt::Image* img);
	::sun::print::PeekGraphics* this$0 = nullptr;
	int32_t mWidth = 0;
	int32_t mHeight = 0;
	bool badImage = false;
};

	} // print
} // sun

#endif // _sun_print_PeekGraphics$ImageWaiter_h_