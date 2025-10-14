#ifndef _javax_sound_midi_spi_MidiDeviceProvider_h_
#define _javax_sound_midi_spi_MidiDeviceProvider_h_
//$ class javax.sound.midi.spi.MidiDeviceProvider
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace sound {
		namespace midi {
			class MidiDevice;
			class MidiDevice$Info;
		}
	}
}

namespace javax {
	namespace sound {
		namespace midi {
			namespace spi {

class $import MidiDeviceProvider : public ::java::lang::Object {
	$class(MidiDeviceProvider, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MidiDeviceProvider();
	void init$();
	virtual ::javax::sound::midi::MidiDevice* getDevice(::javax::sound::midi::MidiDevice$Info* info) {return nullptr;}
	virtual $Array<::javax::sound::midi::MidiDevice$Info>* getDeviceInfo() {return nullptr;}
	virtual bool isDeviceSupported(::javax::sound::midi::MidiDevice$Info* info);
};

			} // spi
		} // midi
	} // sound
} // javax

#endif // _javax_sound_midi_spi_MidiDeviceProvider_h_