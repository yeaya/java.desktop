#ifndef _java_awt_image_VolatileImage_h_
#define _java_awt_image_VolatileImage_h_
//$ class java.awt.image.VolatileImage
//$ extends java.awt.Image
//$ implements java.awt.Transparency

#include <java/awt/Image.h>
#include <java/awt/Transparency.h>

#pragma push_macro("IMAGE_INCOMPATIBLE")
#undef IMAGE_INCOMPATIBLE
#pragma push_macro("IMAGE_OK")
#undef IMAGE_OK
#pragma push_macro("IMAGE_RESTORED")
#undef IMAGE_RESTORED

namespace java {
	namespace awt {
		class Graphics;
		class Graphics2D;
		class GraphicsConfiguration;
		class ImageCapabilities;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class BufferedImage;
			class ImageProducer;
		}
	}
}

namespace java {
	namespace awt {
		namespace image {

class $import VolatileImage : public ::java::awt::Image, public ::java::awt::Transparency {
	$class(VolatileImage, $NO_CLASS_INIT, ::java::awt::Image, ::java::awt::Transparency)
public:
	VolatileImage();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::java::awt::Image::getWidth;
	using ::java::awt::Image::getHeight;
	using ::java::awt::Image::getCapabilities;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual bool contentsLost() {return false;}
	virtual ::java::awt::Graphics2D* createGraphics() {return nullptr;}
	virtual ::java::awt::ImageCapabilities* getCapabilities() {return nullptr;}
	virtual ::java::awt::Graphics* getGraphics() override;
	virtual int32_t getHeight() {return 0;}
	virtual ::java::awt::image::BufferedImage* getSnapshot() {return nullptr;}
	virtual ::java::awt::image::ImageProducer* getSource() override;
	virtual int32_t getTransparency() override;
	virtual int32_t getWidth() {return 0;}
	virtual $String* toString() override;
	virtual int32_t validate(::java::awt::GraphicsConfiguration* gc) {return 0;}
	static const int32_t IMAGE_OK = 0;
	static const int32_t IMAGE_RESTORED = 1;
	static const int32_t IMAGE_INCOMPATIBLE = 2;
	int32_t transparency = 0;
};

		} // image
	} // awt
} // java

#pragma pop_macro("IMAGE_INCOMPATIBLE")
#pragma pop_macro("IMAGE_OK")
#pragma pop_macro("IMAGE_RESTORED")

#endif // _java_awt_image_VolatileImage_h_