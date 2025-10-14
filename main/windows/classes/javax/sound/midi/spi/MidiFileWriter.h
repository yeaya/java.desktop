#ifndef _javax_sound_midi_spi_MidiFileWriter_h_
#define _javax_sound_midi_spi_MidiFileWriter_h_
//$ class javax.sound.midi.spi.MidiFileWriter
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class File;
		class OutputStream;
	}
}
namespace javax {
	namespace sound {
		namespace midi {
			class Sequence;
		}
	}
}

namespace javax {
	namespace sound {
		namespace midi {
			namespace spi {

class $export MidiFileWriter : public ::java::lang::Object {
	$class(MidiFileWriter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MidiFileWriter();
	void init$();
	virtual $ints* getMidiFileTypes() {return nullptr;}
	virtual $ints* getMidiFileTypes(::javax::sound::midi::Sequence* sequence) {return nullptr;}
	virtual bool isFileTypeSupported(int32_t fileType);
	virtual bool isFileTypeSupported(int32_t fileType, ::javax::sound::midi::Sequence* sequence);
	static bool lambda$isFileTypeSupported$0(int32_t fileType, int32_t type);
	virtual int32_t write(::javax::sound::midi::Sequence* in, int32_t fileType, ::java::io::OutputStream* out) {return 0;}
	virtual int32_t write(::javax::sound::midi::Sequence* in, int32_t fileType, ::java::io::File* out) {return 0;}
};

			} // spi
		} // midi
	} // sound
} // javax

#endif // _javax_sound_midi_spi_MidiFileWriter_h_