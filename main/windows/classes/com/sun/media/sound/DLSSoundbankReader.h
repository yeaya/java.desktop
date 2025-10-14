#ifndef _com_sun_media_sound_DLSSoundbankReader_h_
#define _com_sun_media_sound_DLSSoundbankReader_h_
//$ class com.sun.media.sound.DLSSoundbankReader
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

class DLSSoundbankReader : public ::javax::sound::midi::spi::SoundbankReader {
	$class(DLSSoundbankReader, $NO_CLASS_INIT, ::javax::sound::midi::spi::SoundbankReader)
public:
	DLSSoundbankReader();
	void init$();
	virtual ::javax::sound::midi::Soundbank* getSoundbank(::java::net::URL* url) override;
	virtual ::javax::sound::midi::Soundbank* getSoundbank(::java::io::InputStream* stream) override;
	virtual ::javax::sound::midi::Soundbank* getSoundbank(::java::io::File* file) override;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_DLSSoundbankReader_h_