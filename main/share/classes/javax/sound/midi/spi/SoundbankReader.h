#ifndef _javax_sound_midi_spi_SoundbankReader_h_
#define _javax_sound_midi_spi_SoundbankReader_h_
//$ class javax.sound.midi.spi.SoundbankReader
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
		namespace midi {
			class Soundbank;
		}
	}
}

namespace javax {
	namespace sound {
		namespace midi {
			namespace spi {

class $export SoundbankReader : public ::java::lang::Object {
	$class(SoundbankReader, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SoundbankReader();
	void init$();
	virtual ::javax::sound::midi::Soundbank* getSoundbank(::java::net::URL* url) {return nullptr;}
	virtual ::javax::sound::midi::Soundbank* getSoundbank(::java::io::InputStream* stream) {return nullptr;}
	virtual ::javax::sound::midi::Soundbank* getSoundbank(::java::io::File* file) {return nullptr;}
};

			} // spi
		} // midi
	} // sound
} // javax

#endif // _javax_sound_midi_spi_SoundbankReader_h_