#ifndef _com_sun_media_sound_SoftMixingDataLine$1_h_
#define _com_sun_media_sound_SoftMixingDataLine$1_h_
//$ class com.sun.media.sound.SoftMixingDataLine$1
//$ extends javax.sound.sampled.FloatControl$Type

#include <javax/sound/sampled/FloatControl$Type.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class SoftMixingDataLine$1 : public ::javax::sound::sampled::FloatControl$Type {
	$class(SoftMixingDataLine$1, $NO_CLASS_INIT, ::javax::sound::sampled::FloatControl$Type)
public:
	SoftMixingDataLine$1();
	void init$($String* name);
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SoftMixingDataLine$1_h_