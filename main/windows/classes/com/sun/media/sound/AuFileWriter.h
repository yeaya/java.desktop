#ifndef _com_sun_media_sound_AuFileWriter_h_
#define _com_sun_media_sound_AuFileWriter_h_
//$ class com.sun.media.sound.AuFileWriter
//$ extends com.sun.media.sound.SunFileWriter

#include <com/sun/media/sound/SunFileWriter.h>
#include <java/lang/Array.h>

#pragma push_macro("UNKNOWN_SIZE")
#undef UNKNOWN_SIZE

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class AuFileFormat;
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

class AuFileWriter : public ::com::sun::media::sound::SunFileWriter {
	$class(AuFileWriter, $NO_CLASS_INIT, ::com::sun::media::sound::SunFileWriter)
public:
	AuFileWriter();
	using ::com::sun::media::sound::SunFileWriter::getAudioFileTypes;
	void init$();
	::javax::sound::sampled::AudioFileFormat* getAudioFileFormat(::javax::sound::sampled::AudioFileFormat$Type* type, ::javax::sound::sampled::AudioInputStream* stream);
	virtual $Array<::javax::sound::sampled::AudioFileFormat$Type>* getAudioFileTypes(::javax::sound::sampled::AudioInputStream* stream) override;
	::java::io::InputStream* getFileStream(::com::sun::media::sound::AuFileFormat* auFileFormat, ::javax::sound::sampled::AudioInputStream* audioStream);
	virtual int32_t write(::javax::sound::sampled::AudioInputStream* stream, ::javax::sound::sampled::AudioFileFormat$Type* fileType, ::java::io::OutputStream* out) override;
	virtual int32_t write(::javax::sound::sampled::AudioInputStream* stream, ::javax::sound::sampled::AudioFileFormat$Type* fileType, ::java::io::File* out) override;
	int32_t writeAuFile(::javax::sound::sampled::AudioInputStream* in, ::com::sun::media::sound::AuFileFormat* auFileFormat, ::java::io::OutputStream* out);
	static const int32_t UNKNOWN_SIZE = (-1);
};

			} // sound
		} // media
	} // sun
} // com

#pragma pop_macro("UNKNOWN_SIZE")

#endif // _com_sun_media_sound_AuFileWriter_h_