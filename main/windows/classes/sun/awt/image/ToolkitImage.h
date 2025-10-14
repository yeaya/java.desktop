#ifndef _sun_awt_image_ToolkitImage_h_
#define _sun_awt_image_ToolkitImage_h_
//$ class sun.awt.image.ToolkitImage
//$ extends java.awt.Image

#include <java/awt/Image.h>

namespace java {
	namespace awt {
		class Graphics;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class BufferedImage;
			class ColorModel;
			class ImageObserver;
			class ImageProducer;
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
			class ImageRepresentation;
			class InputStreamImageSource;
		}
	}
}

namespace sun {
	namespace awt {
		namespace image {

class ToolkitImage : public ::java::awt::Image {
	$class(ToolkitImage, 0, ::java::awt::Image)
public:
	ToolkitImage();
	void init$();
	void init$(::java::awt::image::ImageProducer* is);
	virtual void addInfo(int32_t newinfo);
	void addWatcher(::java::awt::image::ImageObserver* iw, bool load);
	virtual int32_t check(::java::awt::image::ImageObserver* iw);
	virtual void flush() override;
	virtual ::java::awt::image::BufferedImage* getBufferedImage();
	virtual ::java::awt::image::ColorModel* getColorModel();
	virtual ::java::awt::Graphics* getGraphics() override;
	virtual int32_t getHeight();
	virtual int32_t getHeight(::java::awt::image::ImageObserver* iw) override;
	virtual ::sun::awt::image::ImageRepresentation* getImageRep();
	virtual $Object* getProperty($String* name, ::java::awt::image::ImageObserver* observer) override;
	virtual ::java::awt::image::ImageProducer* getSource() override;
	virtual int32_t getWidth();
	virtual int32_t getWidth(::java::awt::image::ImageObserver* iw) override;
	virtual bool hasError();
	virtual void infoDone(int32_t status);
	virtual ::sun::awt::image::ImageRepresentation* makeImageRep();
	virtual void preload(::java::awt::image::ImageObserver* iw);
	void reconstruct(int32_t flags);
	virtual void setAccelerationPriority(float priority) override;
	virtual void setDimensions(int32_t w, int32_t h);
	virtual void setProperties(::java::util::Hashtable* props);
	::java::awt::image::ImageProducer* source = nullptr;
	::sun::awt::image::InputStreamImageSource* src = nullptr;
	::sun::awt::image::ImageRepresentation* imagerep = nullptr;
	int32_t width = 0;
	int32_t height = 0;
	::java::util::Hashtable* properties = nullptr;
	int32_t availinfo = 0;
};

		} // image
	} // awt
} // sun

#endif // _sun_awt_image_ToolkitImage_h_