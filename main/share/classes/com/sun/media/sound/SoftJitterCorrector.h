#ifndef _com_sun_media_sound_SoftJitterCorrector_h_
#define _com_sun_media_sound_SoftJitterCorrector_h_
//$ class com.sun.media.sound.SoftJitterCorrector
//$ extends javax.sound.sampled.AudioInputStream

#include <javax/sound/sampled/AudioInputStream.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class SoftJitterCorrector : public ::javax::sound::sampled::AudioInputStream {
	$class(SoftJitterCorrector, $NO_CLASS_INIT, ::javax::sound::sampled::AudioInputStream)
public:
	SoftJitterCorrector();
	void init$(::javax::sound::sampled::AudioInputStream* stream, int32_t buffersize, int32_t smallbuffersize);
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SoftJitterCorrector_h_