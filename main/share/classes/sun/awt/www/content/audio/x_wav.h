#ifndef _sun_awt_www_content_audio_x_wav_h_
#define _sun_awt_www_content_audio_x_wav_h_
//$ class sun.awt.www.content.audio.x_wav
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

class x_wav : public ::java::net::ContentHandler {
	$class(x_wav, $NO_CLASS_INIT, ::java::net::ContentHandler)
public:
	x_wav();
	using ::java::net::ContentHandler::getContent;
	void init$();
	virtual $Object* getContent(::java::net::URLConnection* uc) override;
};

				} // audio
			} // content
		} // www
	} // awt
} // sun

#endif // _sun_awt_www_content_audio_x_wav_h_