#ifndef _com_sun_media_sound_MidiOutDeviceProvider$MidiOutDeviceInfo_h_
#define _com_sun_media_sound_MidiOutDeviceProvider$MidiOutDeviceInfo_h_
//$ class com.sun.media.sound.MidiOutDeviceProvider$MidiOutDeviceInfo
//$ extends com.sun.media.sound.AbstractMidiDeviceProvider$Info

#include <com/sun/media/sound/AbstractMidiDeviceProvider$Info.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class MidiOutDeviceProvider$MidiOutDeviceInfo : public ::com::sun::media::sound::AbstractMidiDeviceProvider$Info {
	$class(MidiOutDeviceProvider$MidiOutDeviceInfo, $NO_CLASS_INIT, ::com::sun::media::sound::AbstractMidiDeviceProvider$Info)
public:
	MidiOutDeviceProvider$MidiOutDeviceInfo();
	void init$(int32_t index, $Class* providerClass);
	$Class* providerClass = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_MidiOutDeviceProvider$MidiOutDeviceInfo_h_