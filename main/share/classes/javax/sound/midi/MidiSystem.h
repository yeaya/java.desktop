#ifndef _javax_sound_midi_MidiSystem_h_
#define _javax_sound_midi_MidiSystem_h_
//$ class javax.sound.midi.MidiSystem
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class File;
		class InputStream;
		class OutputStream;
	}
}
namespace java {
	namespace net {
		class URL;
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace sound {
		namespace midi {
			class MidiDevice;
			class MidiDevice$Info;
			class MidiFileFormat;
			class Receiver;
			class Sequence;
			class Sequencer;
			class Soundbank;
			class Synthesizer;
			class Transmitter;
		}
	}
}
namespace javax {
	namespace sound {
		namespace midi {
			namespace spi {
				class MidiDeviceProvider;
			}
		}
	}
}

namespace javax {
	namespace sound {
		namespace midi {

class $export MidiSystem : public ::java::lang::Object {
	$class(MidiSystem, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MidiSystem();
	void init$();
	static ::javax::sound::midi::MidiDevice* getDefaultDevice($Class* deviceClass);
	static ::javax::sound::midi::MidiDevice* getDefaultDeviceWrapper($Class* deviceClass);
	static ::javax::sound::midi::MidiDevice* getFirstDevice(::javax::sound::midi::spi::MidiDeviceProvider* provider, $Class* deviceClass);
	static ::javax::sound::midi::MidiDevice* getFirstDevice(::javax::sound::midi::spi::MidiDeviceProvider* provider, $Class* deviceClass, bool allowSynthesizer, bool allowSequencer);
	static ::javax::sound::midi::MidiDevice* getFirstDevice(::java::util::List* providers, $Class* deviceClass);
	static ::javax::sound::midi::MidiDevice* getFirstDevice(::java::util::List* providers, $Class* deviceClass, bool allowSynthesizer, bool allowSequencer);
	static ::javax::sound::midi::MidiDevice* getMidiDevice(::javax::sound::midi::MidiDevice$Info* info);
	static $Array<::javax::sound::midi::MidiDevice$Info>* getMidiDeviceInfo();
	static ::java::util::List* getMidiDeviceProviders();
	static ::javax::sound::midi::MidiFileFormat* getMidiFileFormat(::java::io::InputStream* stream);
	static ::javax::sound::midi::MidiFileFormat* getMidiFileFormat(::java::net::URL* url);
	static ::javax::sound::midi::MidiFileFormat* getMidiFileFormat(::java::io::File* file);
	static ::java::util::List* getMidiFileReaders();
	static $ints* getMidiFileTypes();
	static $ints* getMidiFileTypes(::javax::sound::midi::Sequence* sequence);
	static ::java::util::List* getMidiFileWriters();
	static ::javax::sound::midi::MidiDevice* getNamedDevice($String* deviceName, ::javax::sound::midi::spi::MidiDeviceProvider* provider, $Class* deviceClass);
	static ::javax::sound::midi::MidiDevice* getNamedDevice($String* deviceName, ::javax::sound::midi::spi::MidiDeviceProvider* provider, $Class* deviceClass, bool allowSynthesizer, bool allowSequencer);
	static ::javax::sound::midi::MidiDevice* getNamedDevice($String* deviceName, ::java::util::List* providers, $Class* deviceClass);
	static ::javax::sound::midi::MidiDevice* getNamedDevice($String* deviceName, ::java::util::List* providers, $Class* deviceClass, bool allowSynthesizer, bool allowSequencer);
	static ::javax::sound::midi::spi::MidiDeviceProvider* getNamedProvider($String* providerClassName, ::java::util::List* providers);
	static ::java::util::List* getProviders($Class* providerClass);
	static ::javax::sound::midi::Receiver* getReceiver();
	static ::javax::sound::midi::Sequence* getSequence(::java::io::InputStream* stream);
	static ::javax::sound::midi::Sequence* getSequence(::java::net::URL* url);
	static ::javax::sound::midi::Sequence* getSequence(::java::io::File* file);
	static ::javax::sound::midi::Sequencer* getSequencer();
	static ::javax::sound::midi::Sequencer* getSequencer(bool connected);
	static ::javax::sound::midi::Soundbank* getSoundbank(::java::io::InputStream* stream);
	static ::javax::sound::midi::Soundbank* getSoundbank(::java::net::URL* url);
	static ::javax::sound::midi::Soundbank* getSoundbank(::java::io::File* file);
	static ::java::util::List* getSoundbankReaders();
	static ::javax::sound::midi::Synthesizer* getSynthesizer();
	static ::javax::sound::midi::Transmitter* getTransmitter();
	static bool isAppropriateDevice(::javax::sound::midi::MidiDevice* device, $Class* deviceClass, bool allowSynthesizer, bool allowSequencer);
	static bool isFileTypeSupported(int32_t fileType);
	static bool isFileTypeSupported(int32_t fileType, ::javax::sound::midi::Sequence* sequence);
	static int32_t write(::javax::sound::midi::Sequence* in, int32_t fileType, ::java::io::OutputStream* out);
	static int32_t write(::javax::sound::midi::Sequence* in, int32_t type, ::java::io::File* out);
};

		} // midi
	} // sound
} // javax

#endif // _javax_sound_midi_MidiSystem_h_