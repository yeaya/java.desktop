#ifndef _java_awt_image_MemoryImageSource_h_
#define _java_awt_image_MemoryImageSource_h_
//$ class java.awt.image.MemoryImageSource
//$ extends java.awt.image.ImageProducer

#include <java/awt/image/ImageProducer.h>
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
	namespace util {
		class Hashtable;
		class Vector;
	}
}

namespace java {
	namespace awt {
		namespace image {

class $import MemoryImageSource : public ::java::awt::image::ImageProducer {
	$class(MemoryImageSource, $NO_CLASS_INIT, ::java::awt::image::ImageProducer)
public:
	MemoryImageSource();
	void init$(int32_t w, int32_t h, ::java::awt::image::ColorModel* cm, $bytes* pix, int32_t off, int32_t scan);
	void init$(int32_t w, int32_t h, ::java::awt::image::ColorModel* cm, $bytes* pix, int32_t off, int32_t scan, ::java::util::Hashtable* props);
	void init$(int32_t w, int32_t h, ::java::awt::image::ColorModel* cm, $ints* pix, int32_t off, int32_t scan);
	void init$(int32_t w, int32_t h, ::java::awt::image::ColorModel* cm, $ints* pix, int32_t off, int32_t scan, ::java::util::Hashtable* props);
	void init$(int32_t w, int32_t h, $ints* pix, int32_t off, int32_t scan);
	void init$(int32_t w, int32_t h, $ints* pix, int32_t off, int32_t scan, ::java::util::Hashtable* props);
	virtual void addConsumer(::java::awt::image::ImageConsumer* ic) override;
	void initConsumer(::java::awt::image::ImageConsumer* ic);
	void initialize(int32_t w, int32_t h, ::java::awt::image::ColorModel* cm, Object$* pix, int32_t off, int32_t scan, ::java::util::Hashtable* props);
	virtual bool isConsumer(::java::awt::image::ImageConsumer* ic) override;
	virtual void newPixels();
	virtual void newPixels(int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void newPixels(int32_t x, int32_t y, int32_t w, int32_t h, bool framenotify);
	virtual void newPixels($bytes* newpix, ::java::awt::image::ColorModel* newmodel, int32_t offset, int32_t scansize);
	virtual void newPixels($ints* newpix, ::java::awt::image::ColorModel* newmodel, int32_t offset, int32_t scansize);
	virtual void removeConsumer(::java::awt::image::ImageConsumer* ic) override;
	virtual void requestTopDownLeftRightResend(::java::awt::image::ImageConsumer* ic) override;
	void sendPixels(::java::awt::image::ImageConsumer* ic, int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void setAnimated(bool animated);
	virtual void setFullBufferUpdates(bool fullbuffers);
	virtual void startProduction(::java::awt::image::ImageConsumer* ic) override;
	int32_t width = 0;
	int32_t height = 0;
	::java::awt::image::ColorModel* model = nullptr;
	$Object* pixels = nullptr;
	int32_t pixeloffset = 0;
	int32_t pixelscan = 0;
	::java::util::Hashtable* properties = nullptr;
	::java::util::Vector* theConsumers = nullptr;
	bool animating = false;
	bool fullbuffers = false;
};

		} // image
	} // awt
} // java

#endif // _java_awt_image_MemoryImageSource_h_