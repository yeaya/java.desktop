#ifndef _com_sun_media_sound_StandardMidiFileWriter_h_
#define _com_sun_media_sound_StandardMidiFileWriter_h_
//$ class com.sun.media.sound.StandardMidiFileWriter
//$ extends javax.sound.midi.spi.MidiFileWriter

#include <java/lang/Array.h>
#include <javax/sound/midi/spi/MidiFileWriter.h>

#pragma push_macro("ERROR")
#undef ERROR
#pragma push_macro("IGNORE")
#undef IGNORE
#pragma push_macro("META")
#undef META
#pragma push_macro("MIDI_TYPE_0")
#undef MIDI_TYPE_0
#pragma push_macro("MIDI_TYPE_1")
#undef MIDI_TYPE_1
#pragma push_macro("ONE_BYTE")
#undef ONE_BYTE
#pragma push_macro("SYSEX")
#undef SYSEX
#pragma push_macro("TWO_BYTE")
#undef TWO_BYTE

namespace java {
	namespace io {
		class DataOutputStream;
		class File;
		class InputStream;
		class OutputStream;
	}
}
namespace javax {
	namespace sound {
		namespace midi {
			class Sequence;
			class Track;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class StandardMidiFileWriter : public ::javax::sound::midi::spi::MidiFileWriter {
	$class(StandardMidiFileWriter, 0, ::javax::sound::midi::spi::MidiFileWriter)
public:
	StandardMidiFileWriter();
	void init$();
	::java::io::InputStream* getFileStream(int32_t type, ::javax::sound::midi::Sequence* sequence);
	virtual $ints* getMidiFileTypes() override;
	virtual $ints* getMidiFileTypes(::javax::sound::midi::Sequence* sequence) override;
	int32_t getType(int32_t byteValue);
	virtual int32_t write(::javax::sound::midi::Sequence* in, int32_t type, ::java::io::OutputStream* out) override;
	virtual int32_t write(::javax::sound::midi::Sequence* in, int32_t type, ::java::io::File* out) override;
	::java::io::InputStream* writeTrack(::javax::sound::midi::Track* track, int32_t type);
	int32_t writeVarInt(int64_t value);
	static const int32_t MThd_MAGIC = 0x4D546864;
	static const int32_t MTrk_MAGIC = 0x4D54726B;
	static const int32_t ONE_BYTE = 1;
	static const int32_t TWO_BYTE = 2;
	static const int32_t SYSEX = 3;
	static const int32_t META = 4;
	static const int32_t ERROR = 5;
	static const int32_t IGNORE = 6;
	static const int32_t MIDI_TYPE_0 = 0;
	static const int32_t MIDI_TYPE_1 = 1;
	::java::io::DataOutputStream* tddos = nullptr;
	static $ints* types;
	static const int64_t mask = 127;
};

			} // sound
		} // media
	} // sun
} // com

#pragma pop_macro("ERROR")
#pragma pop_macro("IGNORE")
#pragma pop_macro("META")
#pragma pop_macro("MIDI_TYPE_0")
#pragma pop_macro("MIDI_TYPE_1")
#pragma pop_macro("ONE_BYTE")
#pragma pop_macro("SYSEX")
#pragma pop_macro("TWO_BYTE")

#endif // _com_sun_media_sound_StandardMidiFileWriter_h_