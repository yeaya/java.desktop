#ifndef _com_sun_media_sound_JavaSoundAudioClip$DirectBAOS_h_
#define _com_sun_media_sound_JavaSoundAudioClip$DirectBAOS_h_
//$ class com.sun.media.sound.JavaSoundAudioClip$DirectBAOS
//$ extends java.io.ByteArrayOutputStream

#include <java/io/ByteArrayOutputStream.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class JavaSoundAudioClip$DirectBAOS : public ::java::io::ByteArrayOutputStream {
	$class(JavaSoundAudioClip$DirectBAOS, $NO_CLASS_INIT, ::java::io::ByteArrayOutputStream)
public:
	JavaSoundAudioClip$DirectBAOS();
	void init$();
	virtual $bytes* getInternalBuffer();
	using ::java::io::ByteArrayOutputStream::write;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_JavaSoundAudioClip$DirectBAOS_h_