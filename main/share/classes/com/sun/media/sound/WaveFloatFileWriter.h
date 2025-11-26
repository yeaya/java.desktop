#ifndef _com_sun_media_sound_WaveFloatFileWriter_h_
#define _com_sun_media_sound_WaveFloatFileWriter_h_
//$ class com.sun.media.sound.WaveFloatFileWriter
//$ extends javax.sound.sampled.spi.AudioFileWriter

#include <java/lang/Array.h>
#include <javax/sound/sampled/spi/AudioFileWriter.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class RIFFWriter;
			}
		}
	}
}
namespace java {
	namespace io {
		class File;
		class OutputStream;
	}
}
namespace javax {
	namespace sound {
		namespace sampled {
			class AudioFileFormat$Type;
			class AudioInputStream;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class WaveFloatFileWriter : public ::javax::sound::sampled::spi::AudioFileWriter {
	$class(WaveFloatFileWriter, $NO_CLASS_INIT, ::javax::sound::sampled::spi::AudioFileWriter)
public:
	WaveFloatFileWriter();
	void init$();
	void checkFormat(::javax::sound::sampled::AudioFileFormat$Type* type, ::javax::sound::sampled::AudioInputStream* stream);
	virtual $Array<::javax::sound::sampled::AudioFileFormat$Type>* getAudioFileTypes() override;
	virtual $Array<::javax::sound::sampled::AudioFileFormat$Type>* getAudioFileTypes(::javax::sound::sampled::AudioInputStream* stream) override;
	::javax::sound::sampled::AudioInputStream* toLittleEndian(::javax::sound::sampled::AudioInputStream* ais);
	void write(::javax::sound::sampled::AudioInputStream* stream, ::com::sun::media::sound::RIFFWriter* writer);
	virtual int32_t write(::javax::sound::sampled::AudioInputStream* stream, ::javax::sound::sampled::AudioFileFormat$Type* fileType, ::java::io::OutputStream* out) override;
	virtual int32_t write(::javax::sound::sampled::AudioInputStream* stream, ::javax::sound::sampled::AudioFileFormat$Type* fileType, ::java::io::File* out) override;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_WaveFloatFileWriter_h_