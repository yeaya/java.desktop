#ifndef _java_awt_image_PixelGrabber_h_
#define _java_awt_image_PixelGrabber_h_
//$ class java.awt.image.PixelGrabber
//$ extends java.awt.image.ImageConsumer

#include <java/awt/image/ImageConsumer.h>
#include <java/awt/image/ImageObserver.h>
#include <java/lang/Array.h>

#pragma push_macro("ALLBITS")
#undef ALLBITS
#pragma push_macro("DONEBITS")
#undef DONEBITS
#pragma push_macro("ERROR")
#undef ERROR
#pragma push_macro("FRAMEBITS")
#undef FRAMEBITS
#pragma push_macro("GRABBEDBITS")
#undef GRABBEDBITS

namespace java {
	namespace awt {
		class Image;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class ColorModel;
			class ImageProducer;
		}
	}
}
namespace java {
	namespace util {
		class Hashtable;
	}
}

namespace java {
	namespace awt {
		namespace image {

class $import PixelGrabber : public ::java::awt::image::ImageConsumer {
	$class(PixelGrabber, $NO_CLASS_INIT, ::java::awt::image::ImageConsumer)
public:
	PixelGrabber();
	void init$(::java::awt::Image* img, int32_t x, int32_t y, int32_t w, int32_t h, $ints* pix, int32_t off, int32_t scansize);
	void init$(::java::awt::image::ImageProducer* ip, int32_t x, int32_t y, int32_t w, int32_t h, $ints* pix, int32_t off, int32_t scansize);
	void init$(::java::awt::Image* img, int32_t x, int32_t y, int32_t w, int32_t h, bool forceRGB);
	virtual void abortGrabbing();
	void convertToRGB();
	virtual ::java::awt::image::ColorModel* getColorModel();
	virtual int32_t getHeight();
	virtual $Object* getPixels();
	virtual int32_t getStatus();
	virtual int32_t getWidth();
	virtual bool grabPixels();
	virtual bool grabPixels(int64_t ms);
	virtual void imageComplete(int32_t status) override;
	virtual void setColorModel(::java::awt::image::ColorModel* model) override;
	virtual void setDimensions(int32_t width, int32_t height) override;
	virtual void setHints(int32_t hints) override;
	virtual void setPixels(int32_t srcX, int32_t srcY, int32_t srcW, int32_t srcH, ::java::awt::image::ColorModel* model, $bytes* pixels, int32_t srcOff, int32_t srcScan) override;
	virtual void setPixels(int32_t srcX, int32_t srcY, int32_t srcW, int32_t srcH, ::java::awt::image::ColorModel* model, $ints* pixels, int32_t srcOff, int32_t srcScan) override;
	virtual void setProperties(::java::util::Hashtable* props) override;
	virtual void startGrabbing();
	virtual int32_t status();
	::java::awt::image::ImageProducer* producer = nullptr;
	int32_t dstX = 0;
	int32_t dstY = 0;
	int32_t dstW = 0;
	int32_t dstH = 0;
	::java::awt::image::ColorModel* imageModel = nullptr;
	$bytes* bytePixels = nullptr;
	$ints* intPixels = nullptr;
	int32_t dstOff = 0;
	int32_t dstScan = 0;
	bool grabbing = false;
	int32_t flags = 0;
	static const int32_t GRABBEDBITS = (::java::awt::image::ImageObserver::FRAMEBITS | ::java::awt::image::ImageObserver::ALLBITS);
	static const int32_t DONEBITS = (GRABBEDBITS | ::java::awt::image::ImageObserver::ERROR);
};

		} // image
	} // awt
} // java

#pragma pop_macro("ALLBITS")
#pragma pop_macro("DONEBITS")
#pragma pop_macro("ERROR")
#pragma pop_macro("FRAMEBITS")
#pragma pop_macro("GRABBEDBITS")

#endif // _java_awt_image_PixelGrabber_h_