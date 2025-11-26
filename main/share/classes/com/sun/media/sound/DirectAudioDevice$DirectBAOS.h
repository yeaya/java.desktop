#ifndef _com_sun_media_sound_DirectAudioDevice$DirectBAOS_h_
#define _com_sun_media_sound_DirectAudioDevice$DirectBAOS_h_
//$ class com.sun.media.sound.DirectAudioDevice$DirectBAOS
//$ extends java.io.ByteArrayOutputStream

#include <java/io/ByteArrayOutputStream.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class DirectAudioDevice$DirectBAOS : public ::java::io::ByteArrayOutputStream {
	$class(DirectAudioDevice$DirectBAOS, $NO_CLASS_INIT, ::java::io::ByteArrayOutputStream)
public:
	DirectAudioDevice$DirectBAOS();
	void init$();
	virtual $bytes* getInternalBuffer();
	using ::java::io::ByteArrayOutputStream::write;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_DirectAudioDevice$DirectBAOS_h_