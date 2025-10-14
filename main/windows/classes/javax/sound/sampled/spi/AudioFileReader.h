#ifndef _javax_sound_sampled_spi_AudioFileReader_h_
#define _javax_sound_sampled_spi_AudioFileReader_h_
//$ class javax.sound.sampled.spi.AudioFileReader
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
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

namespace javax {
	namespace sound {
		namespace sampled {
			namespace spi {

class $export AudioFileReader : public ::java::lang::Object {
	$class(AudioFileReader, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AudioFileReader();
	void init$();
	virtual ::javax::sound::sampled::AudioFileFormat* getAudioFileFormat(::java::io::InputStream* stream) {return nullptr;}
	virtual ::javax::sound::sampled::AudioFileFormat* getAudioFileFormat(::java::net::URL* url) {return nullptr;}
	virtual ::javax::sound::sampled::AudioFileFormat* getAudioFileFormat(::java::io::File* file) {return nullptr;}
	virtual ::javax::sound::sampled::AudioInputStream* getAudioInputStream(::java::io::InputStream* stream) {return nullptr;}
	virtual ::javax::sound::sampled::AudioInputStream* getAudioInputStream(::java::net::URL* url) {return nullptr;}
	virtual ::javax::sound::sampled::AudioInputStream* getAudioInputStream(::java::io::File* file) {return nullptr;}
};

			} // spi
		} // sampled
	} // sound
} // javax

#endif // _javax_sound_sampled_spi_AudioFileReader_h_