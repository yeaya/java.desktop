#ifndef _sun_lwawt_macosx_CPrinterGraphics_h_
#define _sun_lwawt_macosx_CPrinterGraphics_h_
//$ class sun.lwawt.macosx.CPrinterGraphics
//$ extends sun.print.ProxyGraphics2D

#include <sun/print/ProxyGraphics2D.h>

namespace java {
	namespace awt {
		class Color;
		class Graphics2D;
		class Image;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class ImageObserver;
		}
	}
}
namespace java {
	namespace awt {
		namespace print {
			class PrinterJob;
		}
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CPrinterGraphics : public ::sun::print::ProxyGraphics2D {
	$class(CPrinterGraphics, $NO_CLASS_INIT, ::sun::print::ProxyGraphics2D)
public:
	CPrinterGraphics();
	using ::sun::print::ProxyGraphics2D::create;
	using ::sun::print::ProxyGraphics2D::getFontMetrics;
	using ::sun::print::ProxyGraphics2D::getClipBounds;
	using ::sun::print::ProxyGraphics2D::drawPolygon;
	using ::sun::print::ProxyGraphics2D::fillPolygon;
	using ::sun::print::ProxyGraphics2D::drawImage;
	void init$(::java::awt::Graphics2D* graphics, ::java::awt::print::PrinterJob* printerJob);
	virtual bool drawImage(::java::awt::Image* img, int32_t x, int32_t y, ::java::awt::Color* bgcolor, ::java::awt::image::ImageObserver* observer) override;
	virtual bool drawImage(::java::awt::Image* img, int32_t x, int32_t y, int32_t width, int32_t height, ::java::awt::Color* bgcolor, ::java::awt::image::ImageObserver* observer) override;
	virtual bool drawImage(::java::awt::Image* img, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, ::java::awt::Color* bgcolor, ::java::awt::image::ImageObserver* observer) override;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CPrinterGraphics_h_