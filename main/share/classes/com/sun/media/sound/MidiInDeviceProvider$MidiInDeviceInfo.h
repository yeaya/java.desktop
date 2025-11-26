#ifndef _com_sun_media_sound_MidiInDeviceProvider$MidiInDeviceInfo_h_
#define _com_sun_media_sound_MidiInDeviceProvider$MidiInDeviceInfo_h_
//$ class com.sun.media.sound.MidiInDeviceProvider$MidiInDeviceInfo
//$ extends com.sun.media.sound.AbstractMidiDeviceProvider$Info

#include <com/sun/media/sound/AbstractMidiDeviceProvider$Info.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class MidiInDeviceProvider$MidiInDeviceInfo : public ::com::sun::media::sound::AbstractMidiDeviceProvider$Info {
	$class(MidiInDeviceProvider$MidiInDeviceInfo, $NO_CLASS_INIT, ::com::sun::media::sound::AbstractMidiDeviceProvider$Info)
public:
	MidiInDeviceProvider$MidiInDeviceInfo();
	void init$(int32_t index, $Class* providerClass);
	$Class* providerClass = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_MidiInDeviceProvider$MidiInDeviceInfo_h_