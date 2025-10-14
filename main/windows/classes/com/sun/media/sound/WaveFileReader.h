#ifndef _com_sun_media_sound_WaveFileReader_h_
#define _com_sun_media_sound_WaveFileReader_h_
//$ class com.sun.media.sound.WaveFileReader
//$ extends com.sun.media.sound.SunFileReader

#include <com/sun/media/sound/SunFileReader.h>

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
		namespace sampled {
			class AudioInputStream;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class WaveFileReader : public ::com::sun::media::sound::SunFileReader {
	$class(WaveFileReader, $NO_CLASS_INIT, ::com::sun::media::sound::SunFileReader)
public:
	WaveFileReader();
	using ::com::sun::media::sound::SunFileReader::getAudioInputStream;
	void init$();
	virtual ::com::sun::media::sound::StandardFileFormat* getAudioFileFormatImpl(::java::io::InputStream* stream) override;
	virtual ::javax::sound::sampled::AudioInputStream* getAudioInputStream(::java::io::InputStream* stream) override;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_WaveFileReader_h_