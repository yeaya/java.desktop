#ifndef _com_sun_imageio_plugins_jpeg_ImageTypeIterator_h_
#define _com_sun_imageio_plugins_jpeg_ImageTypeIterator_h_
//$ class com.sun.imageio.plugins.jpeg.ImageTypeIterator
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

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

class ImageTypeIterator : public ::java::util::Iterator {
	$class(ImageTypeIterator, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	ImageTypeIterator();
	void init$(::java::util::Iterator* producers);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	::java::util::Iterator* producers = nullptr;
	::javax::imageio::ImageTypeSpecifier* theNext = nullptr;
};

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_jpeg_ImageTypeIterator_h_