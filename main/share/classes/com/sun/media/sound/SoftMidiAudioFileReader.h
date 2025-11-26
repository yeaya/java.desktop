#ifndef _com_sun_media_sound_SoftMidiAudioFileReader_h_
#define _com_sun_media_sound_SoftMidiAudioFileReader_h_
//$ class com.sun.media.sound.SoftMidiAudioFileReader
//$ extends com.sun.media.sound.SunFileReader

#include <com/sun/media/sound/SunFileReader.h>

#pragma push_macro("MIDI")
#undef MIDI

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class StandardFileFormat;
			}
		}
	}
}
namespace java {
	namespace io {
		class InputStream;
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
		namespace sampled {
			class AudioFileFormat$Type;
			class AudioFormat;
			class AudioInputStream;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class SoftMidiAudioFileReader : public ::com::sun::media::sound::SunFileReader {
	$class(SoftMidiAudioFileReader, 0, ::com::sun::media::sound::SunFileReader)
public:
	SoftMidiAudioFileReader();
	using ::com::sun::media::sound::SunFileReader::getAudioFileFormat;
	using ::com::sun::media::sound::SunFileReader::getAudioInputStream;
	void init$();
	static ::com::sun::media::sound::StandardFileFormat* getAudioFileFormat(::javax::sound::midi::Sequence* seq);
	virtual ::com::sun::media::sound::StandardFileFormat* getAudioFileFormatImpl(::java::io::InputStream* stream) override;
	::javax::sound::sampled::AudioInputStream* getAudioInputStream(::javax::sound::midi::Sequence* seq);
	virtual ::javax::sound::sampled::AudioInputStream* getAudioInputStream(::java::io::InputStream* stream) override;
	static ::javax::sound::sampled::AudioFileFormat$Type* MIDI;
	static ::javax::sound::sampled::AudioFormat* format;
};

			} // sound
		} // media
	} // sun
} // com

#pragma pop_macro("MIDI")

#endif // _com_sun_media_sound_SoftMidiAudioFileReader_h_