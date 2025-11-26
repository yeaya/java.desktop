#ifndef _javax_sound_midi_spi_MidiFileReader_h_
#define _javax_sound_midi_spi_MidiFileReader_h_
//$ class javax.sound.midi.spi.MidiFileReader
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class File;
		class InputStream;
	}
}
namespace java {
	namespace net {
		class URL;
	}
}
namespace javax {
	namespace sound {
		namespace midi {
			class MidiFileFormat;
			class Sequence;
		}
	}
}

namespace javax {
	namespace sound {
		namespace midi {
			namespace spi {

class $export MidiFileReader : public ::java::lang::Object {
	$class(MidiFileReader, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MidiFileReader();
	void init$();
	virtual ::javax::sound::midi::MidiFileFormat* getMidiFileFormat(::java::io::InputStream* stream) {return nullptr;}
	virtual ::javax::sound::midi::MidiFileFormat* getMidiFileFormat(::java::net::URL* url) {return nullptr;}
	virtual ::javax::sound::midi::MidiFileFormat* getMidiFileFormat(::java::io::File* file) {return nullptr;}
	virtual ::javax::sound::midi::Sequence* getSequence(::java::io::InputStream* stream) {return nullptr;}
	virtual ::javax::sound::midi::Sequence* getSequence(::java::net::URL* url) {return nullptr;}
	virtual ::javax::sound::midi::Sequence* getSequence(::java::io::File* file) {return nullptr;}
};

			} // spi
		} // midi
	} // sound
} // javax

#endif // _javax_sound_midi_spi_MidiFileReader_h_