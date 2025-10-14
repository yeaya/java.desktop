#ifndef _com_sun_media_sound_ModelStandardIndexedDirector_h_
#define _com_sun_media_sound_ModelStandardIndexedDirector_h_
//$ class com.sun.media.sound.ModelStandardIndexedDirector
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

class ModelStandardIndexedDirector : public ::com::sun::media::sound::ModelDirector {
	$class(ModelStandardIndexedDirector, $NO_CLASS_INIT, ::com::sun::media::sound::ModelDirector)
public:
	ModelStandardIndexedDirector();
	void init$($Array<::com::sun::media::sound::ModelPerformer>* performers, ::com::sun::media::sound::ModelDirectedPlayer* player);
	void buildindex();
	virtual void close() override;
	$ints* lookupIndex(int32_t x, int32_t y);
	virtual void noteOff(int32_t noteNumber, int32_t velocity) override;
	virtual void noteOn(int32_t noteNumber, int32_t velocity) override;
	int32_t restrict(int32_t value);
	$Array<::com::sun::media::sound::ModelPerformer>* performers = nullptr;
	::com::sun::media::sound::ModelDirectedPlayer* player = nullptr;
	bool noteOnUsed = false;
	bool noteOffUsed = false;
	$Array<int8_t, 2>* trantables = nullptr;
	$ints* counters = nullptr;
	$Array<int32_t, 2>* mat = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_ModelStandardIndexedDirector_h_