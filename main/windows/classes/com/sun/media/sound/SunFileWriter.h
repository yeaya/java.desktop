#ifndef _com_sun_media_sound_SunFileWriter_h_
#define _com_sun_media_sound_SunFileWriter_h_
//$ class com.sun.media.sound.SunFileWriter
//$ extends javax.sound.sampled.spi.AudioFileWriter

#include <java/lang/Array.h>
#include <javax/sound/sampled/spi/AudioFileWriter.h>

namespace java {
	namespace io {
		class DataInputStream;
	}
}
namespace javax {
	namespace sound {
		namespace sampled {
			class AudioFileFormat$Type;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class SunFileWriter : public ::javax::sound::sampled::spi::AudioFileWriter {
	$class(SunFileWriter, $NO_CLASS_INIT, ::javax::sound::sampled::spi::AudioFileWriter)
public:
	SunFileWriter();
	using ::javax::sound::sampled::spi::AudioFileWriter::getAudioFileTypes;
	void init$($Array<::javax::sound::sampled::AudioFileFormat$Type>* types);
	int32_t big2little(int32_t i);
	int16_t big2littleShort(int16_t i);
	virtual $Array<::javax::sound::sampled::AudioFileFormat$Type>* getAudioFileTypes() override;
	int32_t rllong(::java::io::DataInputStream* dis);
	int16_t rlshort(::java::io::DataInputStream* dis);
	static const int32_t bufferSize = 16384;
	static const int32_t bisBufferSize = 4096;
	$Array<::javax::sound::sampled::AudioFileFormat$Type>* types = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SunFileWriter_h_