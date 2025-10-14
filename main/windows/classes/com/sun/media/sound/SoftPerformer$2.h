#ifndef _com_sun_media_sound_SoftPerformer$2_h_
#define _com_sun_media_sound_SoftPerformer$2_h_
//$ class com.sun.media.sound.SoftPerformer$2
//$ extends com.sun.media.sound.ModelTransform

#include <com/sun/media/sound/ModelTransform.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class SoftPerformer;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class SoftPerformer$2 : public ::com::sun::media::sound::ModelTransform {
	$class(SoftPerformer$2, $NO_CLASS_INIT, ::com::sun::media::sound::ModelTransform)
public:
	SoftPerformer$2();
	void init$(::com::sun::media::sound::SoftPerformer* this$0, double val$scale);
	virtual double transform(double value) override;
	::com::sun::media::sound::SoftPerformer* this$0 = nullptr;
	double val$scale = 0.0;
	double s = 0.0;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SoftPerformer$2_h_