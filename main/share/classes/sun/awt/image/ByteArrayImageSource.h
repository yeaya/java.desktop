#ifndef _sun_awt_image_ByteArrayImageSource_h_
#define _sun_awt_image_ByteArrayImageSource_h_
//$ class sun.awt.image.ByteArrayImageSource
//$ extends sun.awt.image.InputStreamImageSource

#include <java/lang/Array.h>
#include <sun/awt/image/InputStreamImageSource.h>

namespace sun {
	namespace awt {
		namespace image {
			class ImageDecoder;
		}
	}
}

namespace sun {
	namespace awt {
		namespace image {

class ByteArrayImageSource : public ::sun::awt::image::InputStreamImageSource {
	$class(ByteArrayImageSource, $NO_CLASS_INIT, ::sun::awt::image::InputStreamImageSource)
public:
	ByteArrayImageSource();
	using ::sun::awt::image::InputStreamImageSource::getDecoder;
	void init$($bytes* data);
	void init$($bytes* data, int32_t offset, int32_t length);
	virtual bool checkSecurity(Object$* context, bool quiet) override;
	virtual ::sun::awt::image::ImageDecoder* getDecoder() override;
	$bytes* imagedata = nullptr;
	int32_t imageoffset = 0;
	int32_t imagelength = 0;
};

		} // image
	} // awt
} // sun

#endif // _sun_awt_image_ByteArrayImageSource_h_