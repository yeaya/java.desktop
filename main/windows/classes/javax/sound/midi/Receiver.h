#ifndef _javax_sound_midi_Receiver_h_
#define _javax_sound_midi_Receiver_h_
//$ interface javax.sound.midi.Receiver
//$ extends java.lang.AutoCloseable

#include <java/lang/AutoCloseable.h>

namespace javax {
	namespace sound {
		namespace midi {
			class MidiMessage;
		}
	}
}

namespace javax {
	namespace sound {
		namespace midi {

class $export Receiver : public ::java::lang::AutoCloseable {
	$interface(Receiver, $NO_CLASS_INIT, ::java::lang::AutoCloseable)
public:
	virtual void close() override {}
	virtual void send(::javax::sound::midi::MidiMessage* message, int64_t timeStamp) {}
};

		} // midi
	} // sound
} // javax

#endif // _javax_sound_midi_Receiver_h_