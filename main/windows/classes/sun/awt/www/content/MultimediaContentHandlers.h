#ifndef _sun_awt_www_content_MultimediaContentHandlers_h_
#define _sun_awt_www_content_MultimediaContentHandlers_h_
//$ class sun.awt.www.content.MultimediaContentHandlers
//$ extends java.net.ContentHandlerFactory

#include <java/net/ContentHandlerFactory.h>

namespace java {
	namespace net {
		class ContentHandler;
	}
}

namespace sun {
	namespace awt {
		namespace www {
			namespace content {

class MultimediaContentHandlers : public ::java::net::ContentHandlerFactory {
	$class(MultimediaContentHandlers, $NO_CLASS_INIT, ::java::net::ContentHandlerFactory)
public:
	MultimediaContentHandlers();
	void init$();
	virtual ::java::net::ContentHandler* createContentHandler($String* mimetype) override;
};

			} // content
		} // www
	} // awt
} // sun

#endif // _sun_awt_www_content_MultimediaContentHandlers_h_