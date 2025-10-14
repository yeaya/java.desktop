#ifndef _com_sun_media_sound_WaveFileWriter_h_
#define _com_sun_media_sound_WaveFileWriter_h_
//$ class com.sun.media.sound.WaveFileWriter
//$ extends com.sun.media.sound.SunFileWriter

#include <com/sun/media/sound/SunFileWriter.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class WaveFileFormat;
			}
		}
	}
}
namespace java {
	namespace io {
		class File;
		class InputStream;
		class OutputStream;
	}
}
namespace javax {
	namespace sound {
		namespace sampled {
			class AudioFileFormat;
			class AudioFileFormat$Type;
			class AudioInputStream;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class WaveFileWriter : public ::com::sun::media::sound::SunFileWriter {
	$class(WaveFileWriter, $NO_CLASS_INIT, ::com::sun::media::sound::SunFileWriter)
public:
	WaveFileWriter();
	using ::com::sun::media::sound::SunFileWriter::getAudioFileTypes;
	void init$();
	::javax::sound::sampled::AudioFileFormat* getAudioFileFormat(::javax::sound::sampled::AudioFileFormat$Type* type, ::javax::sound::sampled::AudioInputStream* stream);
	virtual $Array<::javax::sound::sampled::AudioFileFormat$Type>* getAudioFileTypes(::javax::sound::sampled::AudioInputStream* stream) override;
	::java::io::InputStream* getFileStream(::com::sun::media::sound::WaveFileFormat* waveFileFormat, ::java::io::InputStream* audioStream);
	virtual int32_t write(::javax::sound::sampled::AudioInputStream* stream, ::javax::sound::sampled::AudioFileFormat$Type* fileType, ::java::io::OutputStream* out) override;
	virtual int32_t write(::javax::sound::sampled::AudioInputStream* stream, ::javax::sound::sampled::AudioFileFormat$Type* fileType, ::java::io::File* out) override;
	int32_t writeWaveFile(::java::io::InputStream* in, ::com::sun::media::sound::WaveFileFormat* waveFileFormat, ::java::io::OutputStream* out);
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_WaveFileWriter_h_