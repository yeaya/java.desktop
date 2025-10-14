#ifndef _com_sun_media_sound_AudioSynthesizer_h_
#define _com_sun_media_sound_AudioSynthesizer_h_
//$ interface com.sun.media.sound.AudioSynthesizer
//$ extends javax.sound.midi.Synthesizer

#include <java/lang/Array.h>
#include <javax/sound/midi/Synthesizer.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class AudioSynthesizerPropertyInfo;
			}
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace javax {
	namespace sound {
		namespace sampled {
			class AudioFormat;
			class AudioInputStream;
			class SourceDataLine;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class AudioSynthesizer : public ::javax::sound::midi::Synthesizer {
	$interface(AudioSynthesizer, $NO_CLASS_INIT, ::javax::sound::midi::Synthesizer)
public:
	virtual ::javax::sound::sampled::AudioFormat* getFormat() {return nullptr;}
	virtual $Array<::com::sun::media::sound::AudioSynthesizerPropertyInfo>* getPropertyInfo(::java::util::Map* info) {return nullptr;}
	using ::javax::sound::midi::Synthesizer::open;
	virtual void open(::javax::sound::sampled::SourceDataLine* line, ::java::util::Map* info) {}
	virtual ::javax::sound::sampled::AudioInputStream* openStream(::javax::sound::sampled::AudioFormat* targetFormat, ::java::util::Map* info) {return nullptr;}
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_AudioSynthesizer_h_