#ifndef _com_sun_media_sound_StandardMidiFileReader_h_
#define _com_sun_media_sound_StandardMidiFileReader_h_
//$ class com.sun.media.sound.StandardMidiFileReader
//$ extends javax.sound.midi.spi.MidiFileReader

#include <javax/sound/midi/spi/MidiFileReader.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class SMFParser;
			}
		}
	}
}
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

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class StandardMidiFileReader : public ::javax::sound::midi::spi::MidiFileReader {
	$class(StandardMidiFileReader, $NO_CLASS_INIT, ::javax::sound::midi::spi::MidiFileReader)
public:
	StandardMidiFileReader();
	void init$();
	virtual ::javax::sound::midi::MidiFileFormat* getMidiFileFormat(::java::io::InputStream* stream) override;
	virtual ::javax::sound::midi::MidiFileFormat* getMidiFileFormat(::java::net::URL* url) override;
	virtual ::javax::sound::midi::MidiFileFormat* getMidiFileFormat(::java::io::File* file) override;
	::javax::sound::midi::MidiFileFormat* getMidiFileFormatFromStream(::java::io::InputStream* stream, int32_t fileLength, ::com::sun::media::sound::SMFParser* smfParser);
	virtual ::javax::sound::midi::Sequence* getSequence(::java::io::InputStream* stream) override;
	virtual ::javax::sound::midi::Sequence* getSequence(::java::net::URL* url) override;
	virtual ::javax::sound::midi::Sequence* getSequence(::java::io::File* file) override;
	static const int32_t MThd_MAGIC = 0x4D546864;
	static const int32_t bisBufferSize = 1024;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_StandardMidiFileReader_h_