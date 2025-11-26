#ifndef _com_sun_media_sound_PortMixerProvider$PortMixerInfo_h_
#define _com_sun_media_sound_PortMixerProvider$PortMixerInfo_h_
//$ class com.sun.media.sound.PortMixerProvider$PortMixerInfo
//$ extends javax.sound.sampled.Mixer$Info

#include <javax/sound/sampled/Mixer$Info.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class PortMixerProvider$PortMixerInfo : public ::javax::sound::sampled::Mixer$Info {
	$class(PortMixerProvider$PortMixerInfo, $NO_CLASS_INIT, ::javax::sound::sampled::Mixer$Info)
public:
	PortMixerProvider$PortMixerInfo();
	void init$(int32_t index, $String* name, $String* vendor, $String* description, $String* version);
	int32_t getIndex();
	int32_t index = 0;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_PortMixerProvider$PortMixerInfo_h_