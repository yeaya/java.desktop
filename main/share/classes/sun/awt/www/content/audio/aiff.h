#ifndef _sun_awt_www_content_audio_aiff_h_
#define _sun_awt_www_content_audio_aiff_h_
//$ class sun.awt.www.content.audio.aiff
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

class aiff : public ::java::net::ContentHandler {
	$class(aiff, $NO_CLASS_INIT, ::java::net::ContentHandler)
public:
	aiff();
	using ::java::net::ContentHandler::getContent;
	void init$();
	virtual $Object* getContent(::java::net::URLConnection* uc) override;
};

				} // audio
			} // content
		} // www
	} // awt
} // sun

#endif // _sun_awt_www_content_audio_aiff_h_