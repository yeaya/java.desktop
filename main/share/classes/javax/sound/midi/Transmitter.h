#ifndef _javax_sound_midi_Transmitter_h_
#define _javax_sound_midi_Transmitter_h_
//$ interface javax.sound.midi.Transmitter
//$ extends java.lang.AutoCloseable

#include <java/lang/AutoCloseable.h>

namespace javax {
	namespace sound {
		namespace midi {
			class Receiver;
		}
	}
}

namespace javax {
	namespace sound {
		namespace midi {

class $export Transmitter : public ::java::lang::AutoCloseable {
	$interface(Transmitter, $NO_CLASS_INIT, ::java::lang::AutoCloseable)
public:
	virtual void close() override {}
	virtual ::javax::sound::midi::Receiver* getReceiver() {return nullptr;}
	virtual void setReceiver(::javax::sound::midi::Receiver* receiver) {}
};

		} // midi
	} // sound
} // javax

#endif // _javax_sound_midi_Transmitter_h_