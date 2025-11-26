#ifndef _com_sun_media_sound_SoftMixingMixer$Info_h_
#define _com_sun_media_sound_SoftMixingMixer$Info_h_
//$ class com.sun.media.sound.SoftMixingMixer$Info
//$ extends javax.sound.sampled.Mixer$Info

#include <javax/sound/sampled/Mixer$Info.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class SoftMixingMixer$Info : public ::javax::sound::sampled::Mixer$Info {
	$class(SoftMixingMixer$Info, $NO_CLASS_INIT, ::javax::sound::sampled::Mixer$Info)
public:
	SoftMixingMixer$Info();
	void init$();
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SoftMixingMixer$Info_h_