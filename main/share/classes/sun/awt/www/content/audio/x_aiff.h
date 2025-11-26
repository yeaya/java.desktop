#ifndef _sun_awt_www_content_audio_x_aiff_h_
#define _sun_awt_www_content_audio_x_aiff_h_
//$ class sun.awt.www.content.audio.x_aiff
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

class x_aiff : public ::java::net::ContentHandler {
	$class(x_aiff, $NO_CLASS_INIT, ::java::net::ContentHandler)
public:
	x_aiff();
	using ::java::net::ContentHandler::getContent;
	void init$();
	virtual $Object* getContent(::java::net::URLConnection* uc) override;
};

				} // audio
			} // content
		} // www
	} // awt
} // sun

#endif // _sun_awt_www_content_audio_x_aiff_h_