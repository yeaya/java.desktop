#ifndef _com_sun_media_sound_ModelInstrument_h_
#define _com_sun_media_sound_ModelInstrument_h_
//$ class com.sun.media.sound.ModelInstrument
//$ extends javax.sound.midi.Instrument

#include <java/lang/Array.h>
#include <javax/sound/midi/Instrument.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class ModelChannelMixer;
				class ModelDirectedPlayer;
				class ModelDirector;
				class ModelPerformer;
			}
		}
	}
}
namespace javax {
	namespace sound {
		namespace midi {
			class MidiChannel;
			class Patch;
			class Soundbank;
		}
	}
}
namespace javax {
	namespace sound {
		namespace sampled {
			class AudioFormat;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class ModelInstrument : public ::javax::sound::midi::Instrument {
	$class(ModelInstrument, $NO_CLASS_INIT, ::javax::sound::midi::Instrument)
public:
	ModelInstrument();
	void init$(::javax::sound::midi::Soundbank* soundbank, ::javax::sound::midi::Patch* patch, $String* name, $Class* dataClass);
	virtual ::com::sun::media::sound::ModelChannelMixer* getChannelMixer(::javax::sound::midi::MidiChannel* channel, ::javax::sound::sampled::AudioFormat* format);
	$booleans* getChannels();
	virtual ::com::sun::media::sound::ModelDirector* getDirector($Array<::com::sun::media::sound::ModelPerformer>* performers, ::javax::sound::midi::MidiChannel* channel, ::com::sun::media::sound::ModelDirectedPlayer* player);
	$StringArray* getKeys();
	::javax::sound::midi::Patch* getPatchAlias();
	virtual $Array<::com::sun::media::sound::ModelPerformer>* getPerformers();
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_ModelInstrument_h_