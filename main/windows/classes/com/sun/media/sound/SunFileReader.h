#ifndef _com_sun_media_sound_SunFileReader_h_
#define _com_sun_media_sound_SunFileReader_h_
//$ class com.sun.media.sound.SunFileReader
//$ extends javax.sound.sampled.spi.AudioFileReader

#include <javax/sound/sampled/spi/AudioFileReader.h>

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
		class DataInputStream;
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
		namespace sampled {
			class AudioFileFormat;
			class AudioInputStream;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class SunFileReader : public ::javax::sound::sampled::spi::AudioFileReader {
	$class(SunFileReader, $NO_CLASS_INIT, ::javax::sound::sampled::spi::AudioFileReader)
public:
	SunFileReader();
	void init$();
	int32_t big2little(int32_t i);
	int16_t big2littleShort(int16_t i);
	static int32_t calculatePCMFrameSize(int32_t sampleSizeInBits, int32_t channels);
	static void closeSilently(::java::io::InputStream* is);
	virtual ::javax::sound::sampled::AudioFileFormat* getAudioFileFormat(::java::io::InputStream* stream) override;
	virtual ::javax::sound::sampled::AudioFileFormat* getAudioFileFormat(::java::net::URL* url) override;
	virtual ::javax::sound::sampled::AudioFileFormat* getAudioFileFormat(::java::io::File* file) override;
	virtual ::com::sun::media::sound::StandardFileFormat* getAudioFileFormatImpl(::java::io::InputStream* stream) {return nullptr;}
	virtual ::javax::sound::sampled::AudioInputStream* getAudioInputStream(::java::io::InputStream* stream) override;
	virtual ::javax::sound::sampled::AudioInputStream* getAudioInputStream(::java::net::URL* url) override;
	virtual ::javax::sound::sampled::AudioInputStream* getAudioInputStream(::java::io::File* file) override;
	int32_t rllong(::java::io::DataInputStream* dis);
	int16_t rlshort(::java::io::DataInputStream* dis);
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SunFileReader_h_