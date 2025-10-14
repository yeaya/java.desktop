#ifndef _javax_sound_midi_Sequencer$SyncMode_h_
#define _javax_sound_midi_Sequencer$SyncMode_h_
//$ class javax.sound.midi.Sequencer$SyncMode
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("INTERNAL_CLOCK")
#undef INTERNAL_CLOCK
#pragma push_macro("MIDI_SYNC")
#undef MIDI_SYNC
#pragma push_macro("MIDI_TIME_CODE")
#undef MIDI_TIME_CODE
#pragma push_macro("NO_SYNC")
#undef NO_SYNC

namespace javax {
	namespace sound {
		namespace midi {

class $export Sequencer$SyncMode : public ::java::lang::Object {
	$class(Sequencer$SyncMode, 0, ::java::lang::Object)
public:
	Sequencer$SyncMode();
	void init$($String* name);
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	$String* name = nullptr;
	static ::javax::sound::midi::Sequencer$SyncMode* INTERNAL_CLOCK;
	static ::javax::sound::midi::Sequencer$SyncMode* MIDI_SYNC;
	static ::javax::sound::midi::Sequencer$SyncMode* MIDI_TIME_CODE;
	static ::javax::sound::midi::Sequencer$SyncMode* NO_SYNC;
};

		} // midi
	} // sound
} // javax

#pragma pop_macro("INTERNAL_CLOCK")
#pragma pop_macro("MIDI_SYNC")
#pragma pop_macro("MIDI_TIME_CODE")
#pragma pop_macro("NO_SYNC")

#endif // _javax_sound_midi_Sequencer$SyncMode_h_