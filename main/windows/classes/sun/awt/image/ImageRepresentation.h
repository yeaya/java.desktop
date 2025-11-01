#ifndef _sun_awt_image_ImageRepresentation_h_
#define _sun_awt_image_ImageRepresentation_h_
//$ class sun.awt.image.ImageRepresentation
//$ extends sun.awt.image.ImageWatched
//$ implements java.awt.image.ImageConsumer

#include <java/awt/image/ImageConsumer.h>
#include <java/lang/Array.h>
#include <sun/awt/image/ImageWatched.h>

namespace java {
	namespace awt {
		class Color;
		class Graphics;
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
			class ImageObserver;
			class IndexColorModel;
			class WritableRaster;
		}
	}
}
namespace java {
	namespace util {
		class Hashtable;
	}
}
namespace sun {
	namespace awt {
		namespace image {
			class ByteComponentRaster;
			class InputStreamImageSource;
			class IntegerComponentRaster;
			class ToolkitImage;
		}
	}
}

namespace sun {
	namespace awt {
		namespace image {

class ImageRepresentation : public ::sun::awt::image::ImageWatched, public ::java::awt::image::ImageConsumer {
	$class(ImageRepresentation, 0, ::sun::awt::image::ImageWatched, ::java::awt::image::ImageConsumer)
public:
	ImageRepresentation();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::awt::image::ToolkitImage* im, ::java::awt::image::ColorModel* cmodel, bool forceCMhint);
	virtual void abort();
	virtual int32_t check(::java::awt::image::ImageObserver* iw);
	void checkConsumption();
	void convertToRGB();
	virtual void createBufferedImage();
	virtual ::java::awt::image::BufferedImage* createImage(::java::awt::image::ColorModel* cm, ::java::awt::image::WritableRaster* raster, bool isRasterPremultiplied, ::java::util::Hashtable* properties);
	void decrementWaiters();
	virtual void dispose();
	virtual bool drawToBufImage(::java::awt::Graphics* g, ::sun::awt::image::ToolkitImage* img, int32_t x, int32_t y, ::java::awt::Color* bg, ::java::awt::image::ImageObserver* iw);
	virtual bool drawToBufImage(::java::awt::Graphics* g, ::sun::awt::image::ToolkitImage* img, int32_t x, int32_t y, int32_t w, int32_t h, ::java::awt::Color* bg, ::java::awt::image::ImageObserver* iw);
	virtual bool drawToBufImage(::java::awt::Graphics* g, ::sun::awt::image::ToolkitImage* img, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, ::java::awt::Color* bg, ::java::awt::image::ImageObserver* iw);
	virtual bool drawToBufImage(::java::awt::Graphics* g, ::sun::awt::image::ToolkitImage* img, ::java::awt::geom::AffineTransform* xform, ::java::awt::image::ImageObserver* iw);
	virtual ::java::awt::image::BufferedImage* getBufferedImage();
	virtual ::java::awt::image::ColorModel* getColorModel();
	virtual int32_t getHeight();
	virtual ::java::awt::image::BufferedImage* getOpaqueRGBImage();
	virtual int32_t getWidth();
	virtual void imageComplete(int32_t status) override;
	static void initIDs();
	virtual void notifyWatcherListEmpty() override;
	virtual bool prepare(::java::awt::image::ImageObserver* iw);
	virtual void reconstruct(int32_t flags);
	virtual void setAccelerationPriority(float priority);
	virtual void setColorModel(::java::awt::image::ColorModel* model) override;
	bool setDiffICM(int32_t x, int32_t y, int32_t w, int32_t h, $ints* lut, int32_t transPix, int32_t numLut, ::java::awt::image::IndexColorModel* icm, $bytes* pix, int32_t off, int32_t scansize, ::sun::awt::image::ByteComponentRaster* bct, int32_t chanOff);
	virtual void setDimensions(int32_t w, int32_t h) override;
	virtual void setHints(int32_t h) override;
	bool setICMpixels(int32_t x, int32_t y, int32_t w, int32_t h, $ints* lut, $bytes* pix, int32_t off, int32_t scansize, ::sun::awt::image::IntegerComponentRaster* ict);
	virtual void setPixels(int32_t x, int32_t y, int32_t w, int32_t h, ::java::awt::image::ColorModel* model, $bytes* pix, int32_t off, int32_t scansize) override;
	virtual void setPixels(int32_t x, int32_t y, int32_t w, int32_t h, ::java::awt::image::ColorModel* model, $ints* pix, int32_t off, int32_t scansize) override;
	virtual void setProperties(::java::util::Hashtable* props) override;
	virtual void startProduction();
	virtual $String* toString() override;
	::sun::awt::image::InputStreamImageSource* src = nullptr;
	::sun::awt::image::ToolkitImage* image = nullptr;
	int32_t tag = 0;
	int64_t pData = 0;
	int32_t width = 0;
	int32_t height = 0;
	int32_t hints = 0;
	int32_t availinfo = 0;
	::java::awt::Rectangle* newbits = nullptr;
	::java::awt::image::BufferedImage* bimage = nullptr;
	::java::awt::image::WritableRaster* biRaster = nullptr;
	::java::awt::image::ColorModel* cmodel = nullptr;
	::java::awt::image::ColorModel* srcModel = nullptr;
	$ints* srcLUT = nullptr;
	int32_t srcLUTtransIndex = 0;
	int32_t numSrcLUT = 0;
	bool forceCMhint = false;
	int32_t sstride = 0;
	bool isDefaultBI = false;
	bool isSameCM = false;
	static bool s_useNative;
	bool consuming = false;
	int32_t numWaiters = 0;
};

		} // image
	} // awt
} // sun

#endif // _sun_awt_image_ImageRepresentation_h_