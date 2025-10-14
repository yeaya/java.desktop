#ifndef _com_sun_imageio_plugins_jpeg_ImageTypeProducer_h_
#define _com_sun_imageio_plugins_jpeg_ImageTypeProducer_h_
//$ class com.sun.imageio.plugins.jpeg.ImageTypeProducer
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace imageio {
		class ImageTypeSpecifier;
	}
}

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

class ImageTypeProducer : public ::java::lang::Object {
	$class(ImageTypeProducer, 0, ::java::lang::Object)
public:
	ImageTypeProducer();
	void init$(int32_t csCode);
	void init$();
	virtual ::javax::imageio::ImageTypeSpecifier* getType();
	static ::com::sun::imageio::plugins::jpeg::ImageTypeProducer* getTypeProducer(int32_t csCode);
	virtual ::javax::imageio::ImageTypeSpecifier* produce();
	::javax::imageio::ImageTypeSpecifier* type = nullptr;
	bool failed = false;
	int32_t csCode = 0;
	static $Array<::com::sun::imageio::plugins::jpeg::ImageTypeProducer>* defaultTypes;
};

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_jpeg_ImageTypeProducer_h_