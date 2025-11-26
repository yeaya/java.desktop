#ifndef _sun_awt_www_content_image_jpeg_h_
#define _sun_awt_www_content_image_jpeg_h_
//$ class sun.awt.www.content.image.jpeg
//$ extends java.net.ContentHandler

#include <java/lang/Array.h>
#include <java/net/ContentHandler.h>

namespace java {
	namespace net {
		class URLConnection;
	}
}

namespace sun {
	namespace awt {
		namespace www {
			namespace content {
				namespace image {

class jpeg : public ::java::net::ContentHandler {
	$class(jpeg, $NO_CLASS_INIT, ::java::net::ContentHandler)
public:
	jpeg();
	void init$();
	virtual $Object* getContent(::java::net::URLConnection* urlc) override;
	virtual $Object* getContent(::java::net::URLConnection* urlc, $ClassArray* classes) override;
};

				} // image
			} // content
		} // www
	} // awt
} // sun

#endif // _sun_awt_www_content_image_jpeg_h_