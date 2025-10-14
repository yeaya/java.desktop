#ifndef _sun_awt_image_FileImageSource_h_
#define _sun_awt_image_FileImageSource_h_
//$ class sun.awt.image.FileImageSource
//$ extends sun.awt.image.InputStreamImageSource

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

class FileImageSource : public ::sun::awt::image::InputStreamImageSource {
	$class(FileImageSource, $NO_CLASS_INIT, ::sun::awt::image::InputStreamImageSource)
public:
	FileImageSource();
	using ::sun::awt::image::InputStreamImageSource::getDecoder;
	void init$($String* filename);
	virtual bool checkSecurity(Object$* context, bool quiet) override;
	virtual ::sun::awt::image::ImageDecoder* getDecoder() override;
	$String* imagefile = nullptr;
};

		} // image
	} // awt
} // sun

#endif // _sun_awt_image_FileImageSource_h_