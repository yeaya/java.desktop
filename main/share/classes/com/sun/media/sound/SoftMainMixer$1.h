#ifndef _com_sun_media_sound_SoftMainMixer$1_h_
#define _com_sun_media_sound_SoftMainMixer$1_h_
//$ class com.sun.media.sound.SoftMainMixer$1
//$ extends com.sun.media.sound.SoftControl

#include <com/sun/media/sound/SoftControl.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class SoftMainMixer;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class SoftMainMixer$1 : public ::com::sun::media::sound::SoftControl {
	$class(SoftMainMixer$1, $NO_CLASS_INIT, ::com::sun::media::sound::SoftControl)
public:
	SoftMainMixer$1();
	void init$(::com::sun::media::sound::SoftMainMixer* this$0);
	virtual $doubles* get(int32_t instance, $String* name) override;
	::com::sun::media::sound::SoftMainMixer* this$0 = nullptr;
	$doubles* balance = nullptr;
	$doubles* volume = nullptr;
	$doubles* coarse_tuning = nullptr;
	$doubles* fine_tuning = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SoftMainMixer$1_h_