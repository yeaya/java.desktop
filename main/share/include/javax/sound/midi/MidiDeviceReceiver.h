#ifndef _javax_sound_midi_MidiDeviceReceiver_h_
#define _javax_sound_midi_MidiDeviceReceiver_h_
//$ interface javax.sound.midi.MidiDeviceReceiver
//$ extends javax.sound.midi.Receiver

#include <javax/sound/midi/Receiver.h>

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

class $import MidiDeviceReceiver : public ::javax::sound::midi::Receiver {
	$interface(MidiDeviceReceiver, $NO_CLASS_INIT, ::javax::sound::midi::Receiver)
public:
	virtual ::javax::sound::midi::MidiDevice* getMidiDevice() {return nullptr;}
};

		} // midi
	} // sound
} // javax

#endif // _javax_sound_midi_MidiDeviceReceiver_h_