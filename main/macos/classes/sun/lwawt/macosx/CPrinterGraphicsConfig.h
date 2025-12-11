#ifndef _sun_lwawt_macosx_CPrinterGraphicsConfig_h_
#define _sun_lwawt_macosx_CPrinterGraphicsConfig_h_
//$ class sun.lwawt.macosx.CPrinterGraphicsConfig
//$ extends java.awt.GraphicsConfiguration

#include <java/awt/GraphicsConfiguration.h>

namespace java {
	namespace awt {
		class GraphicsDevice;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
		}
	}
}
namespace java {
	namespace awt {
		namespace image {
			class BufferedImage;
			class ColorModel;
			class VolatileImage;
		}
	}
}
namespace java {
	namespace awt {
		namespace print {
			class PageFormat;
		}
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CPrinterGraphicsConfig : public ::java::awt::GraphicsConfiguration {
	$class(CPrinterGraphicsConfig, $NO_CLASS_INIT, ::java::awt::GraphicsConfiguration)
public:
	CPrinterGraphicsConfig();
	using ::java::awt::GraphicsConfiguration::createCompatibleVolatileImage;
	void init$(::java::awt::print::PageFormat* pf);
	virtual ::java::awt::image::BufferedImage* createCompatibleImage(int32_t width, int32_t height) override;
	virtual ::java::awt::image::BufferedImage* createCompatibleImage(int32_t width, int32_t height, int32_t transparency) override;
	virtual ::java::awt::image::VolatileImage* createCompatibleVolatileImage(int32_t width, int32_t height) override;
	virtual ::java::awt::image::VolatileImage* createCompatibleVolatileImage(int32_t width, int32_t height, int32_t transparency) override;
	virtual ::java::awt::Rectangle* getBounds() override;
	virtual ::java::awt::image::ColorModel* getColorModel() override;
	virtual ::java::awt::image::ColorModel* getColorModel(int32_t transparency) override;
	static ::sun::lwawt::macosx::CPrinterGraphicsConfig* getConfig(::java::awt::print::PageFormat* pf);
	virtual ::java::awt::geom::AffineTransform* getDefaultTransform() override;
	virtual ::java::awt::GraphicsDevice* getDevice() override;
	virtual ::java::awt::geom::AffineTransform* getNormalizingTransform() override;
	::java::awt::print::PageFormat* getPageFormat();
	::java::awt::GraphicsDevice* device = nullptr;
	::java::awt::print::PageFormat* pf = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CPrinterGraphicsConfig_h_