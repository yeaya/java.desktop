#ifndef _com_sun_media_sound_AbstractMidiDeviceProvider$Info_h_
#define _com_sun_media_sound_AbstractMidiDeviceProvider$Info_h_
//$ class com.sun.media.sound.AbstractMidiDeviceProvider$Info
//$ extends javax.sound.midi.MidiDevice$Info

#include <javax/sound/midi/MidiDevice$Info.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class AbstractMidiDeviceProvider$Info : public ::javax::sound::midi::MidiDevice$Info {
	$class(AbstractMidiDeviceProvider$Info, $NO_CLASS_INIT, ::javax::sound::midi::MidiDevice$Info)
public:
	AbstractMidiDeviceProvider$Info();
	void init$($String* name, $String* vendor, $String* description, $String* version, int32_t index);
	bool equalStrings(::com::sun::media::sound::AbstractMidiDeviceProvider$Info* info);
	int32_t getIndex();
	void setIndex(int32_t index);
	int32_t index = 0;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_AbstractMidiDeviceProvider$Info_h_