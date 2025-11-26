#ifndef _sun_awt_image_URLImageSource_h_
#define _sun_awt_image_URLImageSource_h_
//$ class sun.awt.image.URLImageSource
//$ extends sun.awt.image.InputStreamImageSource

#include <sun/awt/image/InputStreamImageSource.h>

namespace java {
	namespace net {
		class URL;
		class URLConnection;
	}
}
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

class URLImageSource : public ::sun::awt::image::InputStreamImageSource {
	$class(URLImageSource, $NO_CLASS_INIT, ::sun::awt::image::InputStreamImageSource)
public:
	URLImageSource();
	using ::sun::awt::image::InputStreamImageSource::getDecoder;
	void init$(::java::net::URL* u);
	void init$($String* href);
	void init$(::java::net::URL* u, ::java::net::URLConnection* uc);
	void init$(::java::net::URLConnection* uc);
	virtual bool checkSecurity(Object$* context, bool quiet) override;
	::java::net::URLConnection* getConnection();
	virtual ::sun::awt::image::ImageDecoder* getDecoder() override;
	::java::net::URL* url = nullptr;
	::java::net::URLConnection* conn = nullptr;
	$String* actualHost = nullptr;
	int32_t actualPort = 0;
};

		} // image
	} // awt
} // sun

#endif // _sun_awt_image_URLImageSource_h_