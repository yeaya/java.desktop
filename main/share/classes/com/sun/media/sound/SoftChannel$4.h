#ifndef _com_sun_media_sound_SoftChannel$4_h_
#define _com_sun_media_sound_SoftChannel$4_h_
//$ class com.sun.media.sound.SoftChannel$4
//$ extends com.sun.media.sound.ModelTransform

#include <com/sun/media/sound/ModelTransform.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class SoftChannel;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class SoftChannel$4 : public ::com::sun::media::sound::ModelTransform {
	$class(SoftChannel$4, $NO_CLASS_INIT, ::com::sun::media::sound::ModelTransform)
public:
	SoftChannel$4();
	void init$(::com::sun::media::sound::SoftChannel* this$0, double val$scale);
	virtual double transform(double value) override;
	::com::sun::media::sound::SoftChannel* this$0 = nullptr;
	double val$scale = 0.0;
	double s = 0.0;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SoftChannel$4_h_