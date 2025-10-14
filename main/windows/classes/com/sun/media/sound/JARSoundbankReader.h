#ifndef _com_sun_media_sound_JARSoundbankReader_h_
#define _com_sun_media_sound_JARSoundbankReader_h_
//$ class com.sun.media.sound.JARSoundbankReader
//$ extends javax.sound.midi.spi.SoundbankReader

#include <javax/sound/midi/spi/SoundbankReader.h>

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
		namespace midi {
			class Soundbank;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class JARSoundbankReader : public ::javax::sound::midi::spi::SoundbankReader {
	$class(JARSoundbankReader, $NO_CLASS_INIT, ::javax::sound::midi::spi::SoundbankReader)
public:
	JARSoundbankReader();
	void init$();
	virtual ::javax::sound::midi::Soundbank* getSoundbank(::java::net::URL* url) override;
	virtual ::javax::sound::midi::Soundbank* getSoundbank(::java::io::InputStream* stream) override;
	virtual ::javax::sound::midi::Soundbank* getSoundbank(::java::io::File* file) override;
	static bool isZIP(::java::net::URL* url);
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_JARSoundbankReader_h_