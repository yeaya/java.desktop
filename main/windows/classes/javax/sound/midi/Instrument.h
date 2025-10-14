#ifndef _javax_sound_midi_Instrument_h_
#define _javax_sound_midi_Instrument_h_
//$ class javax.sound.midi.Instrument
//$ extends javax.sound.midi.SoundbankResource

#include <javax/sound/midi/SoundbankResource.h>

namespace javax {
	namespace sound {
		namespace midi {
			class Patch;
			class Soundbank;
		}
	}
}

namespace javax {
	namespace sound {
		namespace midi {

class $export Instrument : public ::javax::sound::midi::SoundbankResource {
	$class(Instrument, $NO_CLASS_INIT, ::javax::sound::midi::SoundbankResource)
public:
	Instrument();
	void init$(::javax::sound::midi::Soundbank* soundbank, ::javax::sound::midi::Patch* patch, $String* name, $Class* dataClass);
	virtual ::javax::sound::midi::Patch* getPatch();
	::javax::sound::midi::Patch* patch = nullptr;
};

		} // midi
	} // sound
} // javax

#endif // _javax_sound_midi_Instrument_h_