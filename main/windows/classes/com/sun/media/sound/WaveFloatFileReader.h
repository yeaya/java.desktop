#ifndef _com_sun_media_sound_WaveFloatFileReader_h_
#define _com_sun_media_sound_WaveFloatFileReader_h_
//$ class com.sun.media.sound.WaveFloatFileReader
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

class WaveFloatFileReader : public ::com::sun::media::sound::SunFileReader {
	$class(WaveFloatFileReader, $NO_CLASS_INIT, ::com::sun::media::sound::SunFileReader)
public:
	WaveFloatFileReader();
	using ::com::sun::media::sound::SunFileReader::getAudioInputStream;
	void init$();
	virtual ::com::sun::media::sound::StandardFileFormat* getAudioFileFormatImpl(::java::io::InputStream* stream) override;
	virtual ::javax::sound::sampled::AudioInputStream* getAudioInputStream(::java::io::InputStream* stream) override;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_WaveFloatFileReader_h_