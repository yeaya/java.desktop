#ifndef _com_sun_media_sound_DirectAudioDeviceProvider$DirectAudioDeviceInfo_h_
#define _com_sun_media_sound_DirectAudioDeviceProvider$DirectAudioDeviceInfo_h_
//$ class com.sun.media.sound.DirectAudioDeviceProvider$DirectAudioDeviceInfo
//$ extends javax.sound.sampled.Mixer$Info

#include <javax/sound/sampled/Mixer$Info.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class DirectAudioDeviceProvider$DirectAudioDeviceInfo : public ::javax::sound::sampled::Mixer$Info {
	$class(DirectAudioDeviceProvider$DirectAudioDeviceInfo, $NO_CLASS_INIT, ::javax::sound::sampled::Mixer$Info)
public:
	DirectAudioDeviceProvider$DirectAudioDeviceInfo();
	void init$(int32_t index, int32_t deviceID, int32_t maxSimulLines, $String* name, $String* vendor, $String* description, $String* version);
	int32_t getDeviceID();
	int32_t getIndex();
	int32_t getMaxSimulLines();
	int32_t index = 0;
	int32_t maxSimulLines = 0;
	int32_t deviceID = 0;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_DirectAudioDeviceProvider$DirectAudioDeviceInfo_h_