#ifndef _com_sun_imageio_plugins_png_PNGImageDataEnumeration_h_
#define _com_sun_imageio_plugins_png_PNGImageDataEnumeration_h_
//$ class com.sun.imageio.plugins.png.PNGImageDataEnumeration
//$ extends java.util.Enumeration

#include <java/util/Enumeration.h>

namespace javax {
	namespace imageio {
		namespace stream {
			class ImageInputStream;
		}
	}
}

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace png {

class PNGImageDataEnumeration : public ::java::util::Enumeration {
	$class(PNGImageDataEnumeration, $NO_CLASS_INIT, ::java::util::Enumeration)
public:
	PNGImageDataEnumeration();
	void init$(::javax::imageio::stream::ImageInputStream* stream);
	virtual bool hasMoreElements() override;
	virtual $Object* nextElement() override;
	bool firstTime = false;
	::javax::imageio::stream::ImageInputStream* stream = nullptr;
	int32_t length = 0;
};

				} // png
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_png_PNGImageDataEnumeration_h_