#ifndef _javax_sound_midi_Soundbank_h_
#define _javax_sound_midi_Soundbank_h_
//$ interface javax.sound.midi.Soundbank
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace sound {
		namespace midi {
			class Instrument;
			class Patch;
			class SoundbankResource;
		}
	}
}

namespace javax {
	namespace sound {
		namespace midi {

class $export Soundbank : public ::java::lang::Object {
	$interface(Soundbank, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $String* getDescription() {return nullptr;}
	virtual ::javax::sound::midi::Instrument* getInstrument(::javax::sound::midi::Patch* patch) {return nullptr;}
	virtual $Array<::javax::sound::midi::Instrument>* getInstruments() {return nullptr;}
	virtual $String* getName() {return nullptr;}
	virtual $Array<::javax::sound::midi::SoundbankResource>* getResources() {return nullptr;}
	virtual $String* getVendor() {return nullptr;}
	virtual $String* getVersion() {return nullptr;}
};

		} // midi
	} // sound
} // javax

#endif // _javax_sound_midi_Soundbank_h_