#ifndef _com_sun_media_sound_SF2Instrument$1_h_
#define _com_sun_media_sound_SF2Instrument$1_h_
//$ class com.sun.media.sound.SF2Instrument$1
//$ extends com.sun.media.sound.ModelTransform

#include <com/sun/media/sound/ModelTransform.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class SF2Instrument;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class SF2Instrument$1 : public ::com::sun::media::sound::ModelTransform {
	$class(SF2Instrument$1, $NO_CLASS_INIT, ::com::sun::media::sound::ModelTransform)
public:
	SF2Instrument$1();
	void init$(::com::sun::media::sound::SF2Instrument* this$0);
	virtual double transform(double value) override;
	::com::sun::media::sound::SF2Instrument* this$0 = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SF2Instrument$1_h_