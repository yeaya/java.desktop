#ifndef _com_sun_media_sound_AudioFileSoundbankReader_h_
#define _com_sun_media_sound_AudioFileSoundbankReader_h_
//$ class com.sun.media.sound.AudioFileSoundbankReader
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

class AudioFileSoundbankReader : public ::javax::sound::midi::spi::SoundbankReader {
	$class(AudioFileSoundbankReader, $NO_CLASS_INIT, ::javax::sound::midi::spi::SoundbankReader)
public:
	AudioFileSoundbankReader();
	void init$();
	virtual ::javax::sound::midi::Soundbank* getSoundbank(::java::net::URL* url) override;
	virtual ::javax::sound::midi::Soundbank* getSoundbank(::java::io::InputStream* stream) override;
	::javax::sound::midi::Soundbank* getSoundbank(::javax::sound::sampled::AudioInputStream* ais);
	virtual ::javax::sound::midi::Soundbank* getSoundbank(::java::io::File* file) override;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_AudioFileSoundbankReader_h_