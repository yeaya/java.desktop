#ifndef _sun_awt_www_content_audio_basic_h_
#define _sun_awt_www_content_audio_basic_h_
//$ class sun.awt.www.content.audio.basic
//$ extends java.net.ContentHandler

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
				namespace audio {

class basic : public ::java::net::ContentHandler {
	$class(basic, $NO_CLASS_INIT, ::java::net::ContentHandler)
public:
	basic();
	using ::java::net::ContentHandler::getContent;
	void init$();
	virtual $Object* getContent(::java::net::URLConnection* uc) override;
};

				} // audio
			} // content
		} // www
	} // awt
} // sun

#endif // _sun_awt_www_content_audio_basic_h_