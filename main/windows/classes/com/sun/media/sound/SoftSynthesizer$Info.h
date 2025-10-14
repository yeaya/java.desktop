#ifndef _com_sun_media_sound_SoftSynthesizer$Info_h_
#define _com_sun_media_sound_SoftSynthesizer$Info_h_
//$ class com.sun.media.sound.SoftSynthesizer$Info
//$ extends javax.sound.midi.MidiDevice$Info

#include <javax/sound/midi/MidiDevice$Info.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class SoftSynthesizer$Info : public ::javax::sound::midi::MidiDevice$Info {
	$class(SoftSynthesizer$Info, $NO_CLASS_INIT, ::javax::sound::midi::MidiDevice$Info)
public:
	SoftSynthesizer$Info();
	void init$();
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SoftSynthesizer$Info_h_