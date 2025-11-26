#ifndef _com_sun_media_sound_ModelStandardDirector_h_
#define _com_sun_media_sound_ModelStandardDirector_h_
//$ class com.sun.media.sound.ModelStandardDirector
//$ extends com.sun.media.sound.ModelDirector

#include <com/sun/media/sound/ModelDirector.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class ModelDirectedPlayer;
				class ModelPerformer;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class ModelStandardDirector : public ::com::sun::media::sound::ModelDirector {
	$class(ModelStandardDirector, $NO_CLASS_INIT, ::com::sun::media::sound::ModelDirector)
public:
	ModelStandardDirector();
	void init$($Array<::com::sun::media::sound::ModelPerformer>* performers, ::com::sun::media::sound::ModelDirectedPlayer* player);
	virtual void close() override;
	virtual void noteOff(int32_t noteNumber, int32_t velocity) override;
	virtual void noteOn(int32_t noteNumber, int32_t velocity) override;
	$Array<::com::sun::media::sound::ModelPerformer>* performers = nullptr;
	::com::sun::media::sound::ModelDirectedPlayer* player = nullptr;
	bool noteOnUsed = false;
	bool noteOffUsed = false;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_ModelStandardDirector_h_