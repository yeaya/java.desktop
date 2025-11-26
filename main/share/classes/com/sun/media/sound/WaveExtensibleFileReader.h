#ifndef _com_sun_media_sound_WaveExtensibleFileReader_h_
#define _com_sun_media_sound_WaveExtensibleFileReader_h_
//$ class com.sun.media.sound.WaveExtensibleFileReader
//$ extends com.sun.media.sound.SunFileReader

#include <com/sun/media/sound/SunFileReader.h>
#include <java/lang/Array.h>

#pragma push_macro("SUBTYPE_IEEE_FLOAT")
#undef SUBTYPE_IEEE_FLOAT
#pragma push_macro("SUBTYPE_PCM")
#undef SUBTYPE_PCM

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class StandardFileFormat;
				class WaveExtensibleFileReader$GUID;
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
		namespace sampled {
			class AudioInputStream;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class WaveExtensibleFileReader : public ::com::sun::media::sound::SunFileReader {
	$class(WaveExtensibleFileReader, 0, ::com::sun::media::sound::SunFileReader)
public:
	WaveExtensibleFileReader();
	using ::com::sun::media::sound::SunFileReader::getAudioInputStream;
	void init$();
	static $String* decodeChannelMask(int64_t channelmask);
	virtual ::com::sun::media::sound::StandardFileFormat* getAudioFileFormatImpl(::java::io::InputStream* stream) override;
	virtual ::javax::sound::sampled::AudioInputStream* getAudioInputStream(::java::io::InputStream* stream) override;
	static $StringArray* channelnames;
	static $StringArray* allchannelnames;
	static ::com::sun::media::sound::WaveExtensibleFileReader$GUID* SUBTYPE_PCM;
	static ::com::sun::media::sound::WaveExtensibleFileReader$GUID* SUBTYPE_IEEE_FLOAT;
};

			} // sound
		} // media
	} // sun
} // com

#pragma pop_macro("SUBTYPE_IEEE_FLOAT")
#pragma pop_macro("SUBTYPE_PCM")

#endif // _com_sun_media_sound_WaveExtensibleFileReader_h_