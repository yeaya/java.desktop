#ifndef _javax_sound_midi_Synthesizer_h_
#define _javax_sound_midi_Synthesizer_h_
//$ interface javax.sound.midi.Synthesizer
//$ extends javax.sound.midi.MidiDevice

#include <java/lang/Array.h>
#include <javax/sound/midi/MidiDevice.h>

namespace javax {
	namespace sound {
		namespace midi {
			class Instrument;
			class MidiChannel;
			class Patch;
			class Soundbank;
			class VoiceStatus;
		}
	}
}

namespace javax {
	namespace sound {
		namespace midi {

class $export Synthesizer : public ::javax::sound::midi::MidiDevice {
	$interface(Synthesizer, $NO_CLASS_INIT, ::javax::sound::midi::MidiDevice)
public:
	virtual $Array<::javax::sound::midi::Instrument>* getAvailableInstruments() {return nullptr;}
	virtual $Array<::javax::sound::midi::MidiChannel>* getChannels() {return nullptr;}
	virtual ::javax::sound::midi::Soundbank* getDefaultSoundbank() {return nullptr;}
	virtual int64_t getLatency() {return 0;}
	virtual $Array<::javax::sound::midi::Instrument>* getLoadedInstruments() {return nullptr;}
	virtual int32_t getMaxPolyphony() {return 0;}
	virtual $Array<::javax::sound::midi::VoiceStatus>* getVoiceStatus() {return nullptr;}
	virtual bool isSoundbankSupported(::javax::sound::midi::Soundbank* soundbank) {return false;}
	virtual bool loadAllInstruments(::javax::sound::midi::Soundbank* soundbank) {return false;}
	virtual bool loadInstrument(::javax::sound::midi::Instrument* instrument) {return false;}
	virtual bool loadInstruments(::javax::sound::midi::Soundbank* soundbank, $Array<::javax::sound::midi::Patch>* patchList) {return false;}
	virtual bool remapInstrument(::javax::sound::midi::Instrument* from, ::javax::sound::midi::Instrument* to) {return false;}
	virtual void unloadAllInstruments(::javax::sound::midi::Soundbank* soundbank) {}
	virtual void unloadInstrument(::javax::sound::midi::Instrument* instrument) {}
	virtual void unloadInstruments(::javax::sound::midi::Soundbank* soundbank, $Array<::javax::sound::midi::Patch>* patchList) {}
};

		} // midi
	} // sound
} // javax

#endif // _javax_sound_midi_Synthesizer_h_