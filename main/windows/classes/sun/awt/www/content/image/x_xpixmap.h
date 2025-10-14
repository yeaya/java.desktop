#ifndef _sun_awt_www_content_image_x_xpixmap_h_
#define _sun_awt_www_content_image_x_xpixmap_h_
//$ class sun.awt.www.content.image.x_xpixmap
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

class x_xpixmap : public ::java::net::ContentHandler {
	$class(x_xpixmap, $NO_CLASS_INIT, ::java::net::ContentHandler)
public:
	x_xpixmap();
	void init$();
	virtual $Object* getContent(::java::net::URLConnection* urlc) override;
	virtual $Object* getContent(::java::net::URLConnection* urlc, $ClassArray* classes) override;
};

				} // image
			} // content
		} // www
	} // awt
} // sun

#endif // _sun_awt_www_content_image_x_xpixmap_h_