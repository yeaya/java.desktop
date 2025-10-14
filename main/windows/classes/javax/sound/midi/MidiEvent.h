#ifndef _javax_sound_midi_MidiEvent_h_
#define _javax_sound_midi_MidiEvent_h_
//$ class javax.sound.midi.MidiEvent
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class $export MidiEvent : public ::java::lang::Object {
	$class(MidiEvent, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MidiEvent();
	void init$(::javax::sound::midi::MidiMessage* message, int64_t tick);
	virtual ::javax::sound::midi::MidiMessage* getMessage();
	virtual int64_t getTick();
	virtual void setTick(int64_t tick);
	::javax::sound::midi::MidiMessage* message = nullptr;
	int64_t tick = 0;
};

		} // midi
	} // sound
} // javax

#endif // _javax_sound_midi_MidiEvent_h_