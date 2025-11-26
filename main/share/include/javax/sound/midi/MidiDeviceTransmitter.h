#ifndef _javax_sound_midi_MidiDeviceTransmitter_h_
#define _javax_sound_midi_MidiDeviceTransmitter_h_
//$ interface javax.sound.midi.MidiDeviceTransmitter
//$ extends javax.sound.midi.Transmitter

#include <javax/sound/midi/Transmitter.h>

namespace javax {
	namespace sound {
		namespace midi {
			class MidiDevice;
		}
	}
}

namespace javax {
	namespace sound {
		namespace midi {

class $import MidiDeviceTransmitter : public ::javax::sound::midi::Transmitter {
	$interface(MidiDeviceTransmitter, $NO_CLASS_INIT, ::javax::sound::midi::Transmitter)
public:
	virtual ::javax::sound::midi::MidiDevice* getMidiDevice() {return nullptr;}
};

		} // midi
	} // sound
} // javax

#endif // _javax_sound_midi_MidiDeviceTransmitter_h_