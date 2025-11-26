#ifndef _com_sun_media_sound_SoftPerformer$1_h_
#define _com_sun_media_sound_SoftPerformer$1_h_
//$ class com.sun.media.sound.SoftPerformer$1
//$ extends com.sun.media.sound.ModelTransform

#include <com/sun/media/sound/ModelTransform.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class SoftPerformer$1 : public ::com::sun::media::sound::ModelTransform {
	$class(SoftPerformer$1, $NO_CLASS_INIT, ::com::sun::media::sound::ModelTransform)
public:
	SoftPerformer$1();
	void init$();
	virtual double transform(double value) override;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SoftPerformer$1_h_