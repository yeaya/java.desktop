#ifndef _javax_sound_sampled_spi_AudioFileWriter_h_
#define _javax_sound_sampled_spi_AudioFileWriter_h_
//$ class javax.sound.sampled.spi.AudioFileWriter
//$ extends java.lang.Object

#include <java/lang/Array.h>

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

namespace javax {
	namespace sound {
		namespace sampled {
			namespace spi {

class $export AudioFileWriter : public ::java::lang::Object {
	$class(AudioFileWriter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AudioFileWriter();
	void init$();
	virtual $Array<::javax::sound::sampled::AudioFileFormat$Type>* getAudioFileTypes() {return nullptr;}
	virtual $Array<::javax::sound::sampled::AudioFileFormat$Type>* getAudioFileTypes(::javax::sound::sampled::AudioInputStream* stream) {return nullptr;}
	virtual bool isFileTypeSupported(::javax::sound::sampled::AudioFileFormat$Type* fileType);
	virtual bool isFileTypeSupported(::javax::sound::sampled::AudioFileFormat$Type* fileType, ::javax::sound::sampled::AudioInputStream* stream);
	virtual int32_t write(::javax::sound::sampled::AudioInputStream* stream, ::javax::sound::sampled::AudioFileFormat$Type* fileType, ::java::io::OutputStream* out) {return 0;}
	virtual int32_t write(::javax::sound::sampled::AudioInputStream* stream, ::javax::sound::sampled::AudioFileFormat$Type* fileType, ::java::io::File* out) {return 0;}
};

			} // spi
		} // sampled
	} // sound
} // javax

#endif // _javax_sound_sampled_spi_AudioFileWriter_h_