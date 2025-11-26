#ifndef _sun_awt_image_ImageDecoder_h_
#define _sun_awt_image_ImageDecoder_h_
//$ class sun.awt.image.ImageDecoder
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		namespace image {
			class ColorModel;
			class ImageConsumer;
		}
	}
}
namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace lang {
		class Thread;
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
			class ImageConsumerQueue;
			class InputStreamImageSource;
		}
	}
}

namespace sun {
	namespace awt {
		namespace image {

class ImageDecoder : public ::java::lang::Object {
	$class(ImageDecoder, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ImageDecoder();
	void init$(::sun::awt::image::InputStreamImageSource* src, ::java::io::InputStream* is);
	virtual void abort();
	virtual void close();
	virtual void headerComplete();
	virtual int32_t imageComplete(int32_t status, bool done);
	virtual bool isConsumer(::java::awt::image::ImageConsumer* ic);
	virtual ::sun::awt::image::ImageConsumerQueue* nextConsumer(::sun::awt::image::ImageConsumerQueue* cq);
	virtual void produceImage() {}
	virtual void removeConsumer(::java::awt::image::ImageConsumer* ic);
	virtual int32_t setColorModel(::java::awt::image::ColorModel* model);
	virtual int32_t setDimensions(int32_t w, int32_t h);
	virtual int32_t setHints(int32_t hints);
	virtual int32_t setPixels(int32_t x, int32_t y, int32_t w, int32_t h, ::java::awt::image::ColorModel* model, $bytes* pix, int32_t off, int32_t scansize);
	virtual int32_t setPixels(int32_t x, int32_t y, int32_t w, int32_t h, ::java::awt::image::ColorModel* model, $ints* pix, int32_t off, int32_t scansize);
	virtual int32_t setProperties(::java::util::Hashtable* props);
	::sun::awt::image::InputStreamImageSource* source = nullptr;
	::java::io::InputStream* input = nullptr;
	$Thread* feeder = nullptr;
	bool aborted = false;
	bool finished = false;
	::sun::awt::image::ImageConsumerQueue* queue = nullptr;
	::sun::awt::image::ImageDecoder* next = nullptr;
};

		} // image
	} // awt
} // sun

#endif // _sun_awt_image_ImageDecoder_h_