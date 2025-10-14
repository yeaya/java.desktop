#ifndef _com_sun_media_sound_ModelMappedInstrument_h_
#define _com_sun_media_sound_ModelMappedInstrument_h_
//$ class com.sun.media.sound.ModelMappedInstrument
//$ extends com.sun.media.sound.ModelInstrument

#include <com/sun/media/sound/ModelInstrument.h>
#include <java/lang/Array.h>

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

class ModelMappedInstrument : public ::com::sun::media::sound::ModelInstrument {
	$class(ModelMappedInstrument, $NO_CLASS_INIT, ::com::sun::media::sound::ModelInstrument)
public:
	ModelMappedInstrument();
	void init$(::com::sun::media::sound::ModelInstrument* ins, ::javax::sound::midi::Patch* patch);
	virtual ::com::sun::media::sound::ModelChannelMixer* getChannelMixer(::javax::sound::midi::MidiChannel* channel, ::javax::sound::sampled::AudioFormat* format) override;
	virtual $Object* getData() override;
	virtual ::com::sun::media::sound::ModelDirector* getDirector($Array<::com::sun::media::sound::ModelPerformer>* performers, ::javax::sound::midi::MidiChannel* channel, ::com::sun::media::sound::ModelDirectedPlayer* player) override;
	virtual $Array<::com::sun::media::sound::ModelPerformer>* getPerformers() override;
	::com::sun::media::sound::ModelInstrument* ins = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_ModelMappedInstrument_h_