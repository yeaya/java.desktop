#ifndef _com_sun_media_sound_SoftInstrument_h_
#define _com_sun_media_sound_SoftInstrument_h_
//$ class com.sun.media.sound.SoftInstrument
//$ extends javax.sound.midi.Instrument

#include <java/lang/Array.h>
#include <javax/sound/midi/Instrument.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class ModelDirectedPlayer;
				class ModelDirector;
				class ModelInstrument;
				class ModelPerformer;
				class SoftPerformer;
			}
		}
	}
}
namespace javax {
	namespace sound {
		namespace midi {
			class MidiChannel;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class SoftInstrument : public ::javax::sound::midi::Instrument {
	$class(SoftInstrument, $NO_CLASS_INIT, ::javax::sound::midi::Instrument)
public:
	SoftInstrument();
	void init$(::com::sun::media::sound::ModelInstrument* ins);
	void init$(::com::sun::media::sound::ModelInstrument* ins, $Array<::com::sun::media::sound::ModelPerformer>* overrideperformers);
	virtual $Object* getData() override;
	::com::sun::media::sound::ModelDirector* getDirector(::javax::sound::midi::MidiChannel* channel, ::com::sun::media::sound::ModelDirectedPlayer* player);
	::com::sun::media::sound::SoftPerformer* getPerformer(int32_t index);
	::com::sun::media::sound::ModelInstrument* getSourceInstrument();
	void initPerformers($Array<::com::sun::media::sound::ModelPerformer>* modelperformers);
	$Array<::com::sun::media::sound::SoftPerformer>* performers = nullptr;
	$Array<::com::sun::media::sound::ModelPerformer>* modelperformers = nullptr;
	$Object* data = nullptr;
	::com::sun::media::sound::ModelInstrument* ins = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SoftInstrument_h_