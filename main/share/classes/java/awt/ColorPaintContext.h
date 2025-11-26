#ifndef _java_awt_ColorPaintContext_h_
#define _java_awt_ColorPaintContext_h_
//$ class java.awt.ColorPaintContext
//$ extends java.awt.PaintContext

#include <java/awt/PaintContext.h>

namespace java {
	namespace awt {
		namespace image {
			class ColorModel;
			class Raster;
			class WritableRaster;
		}
	}
}

namespace java {
	namespace awt {

class ColorPaintContext : public ::java::awt::PaintContext {
	$class(ColorPaintContext, $NO_CLASS_INIT, ::java::awt::PaintContext)
public:
	ColorPaintContext();
	void init$(int32_t color, ::java::awt::image::ColorModel* cm);
	virtual void dispose() override;
	virtual ::java::awt::image::ColorModel* getColorModel() override;
	virtual int32_t getRGB();
	virtual ::java::awt::image::Raster* getRaster(int32_t x, int32_t y, int32_t w, int32_t h) override;
	int32_t color = 0;
	::java::awt::image::WritableRaster* savedTile = nullptr;
};

	} // awt
} // java

#endif // _java_awt_ColorPaintContext_h_