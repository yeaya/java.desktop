#ifndef _sun_print_PrinterGraphicsConfig_h_
#define _sun_print_PrinterGraphicsConfig_h_
//$ class sun.print.PrinterGraphicsConfig
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
			class ColorModel;
		}
	}
}

namespace sun {
	namespace print {

class PrinterGraphicsConfig : public ::java::awt::GraphicsConfiguration {
	$class(PrinterGraphicsConfig, $NO_CLASS_INIT, ::java::awt::GraphicsConfiguration)
public:
	PrinterGraphicsConfig();
	void init$($String* printerID, ::java::awt::geom::AffineTransform* deviceTx, int32_t pageWid, int32_t pageHgt);
	virtual ::java::awt::Rectangle* getBounds() override;
	virtual ::java::awt::image::ColorModel* getColorModel() override;
	virtual ::java::awt::image::ColorModel* getColorModel(int32_t transparency) override;
	virtual ::java::awt::geom::AffineTransform* getDefaultTransform() override;
	virtual ::java::awt::GraphicsDevice* getDevice() override;
	virtual ::java::awt::geom::AffineTransform* getNormalizingTransform() override;
	static ::java::awt::image::ColorModel* theModel;
	::java::awt::GraphicsDevice* device = nullptr;
	int32_t pageWidth = 0;
	int32_t pageHeight = 0;
	::java::awt::geom::AffineTransform* deviceTransform = nullptr;
};

	} // print
} // sun

#endif // _sun_print_PrinterGraphicsConfig_h_