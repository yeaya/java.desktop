#ifndef _com_sun_media_sound_SoftVoice$2_h_
#define _com_sun_media_sound_SoftVoice$2_h_
//$ class com.sun.media.sound.SoftVoice$2
//$ extends com.sun.media.sound.SoftControl

#include <com/sun/media/sound/SoftControl.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class SoftVoice;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class SoftVoice$2 : public ::com::sun::media::sound::SoftControl {
	$class(SoftVoice$2, $NO_CLASS_INIT, ::com::sun::media::sound::SoftControl)
public:
	SoftVoice$2();
	void init$(::com::sun::media::sound::SoftVoice* this$0);
	virtual $doubles* get(int32_t instance, $String* name) override;
	::com::sun::media::sound::SoftVoice* this$0 = nullptr;
	$doubles* active = nullptr;
	$doubles* gain = nullptr;
	$doubles* pan = nullptr;
	$doubles* balance = nullptr;
	$doubles* reverb = nullptr;
	$doubles* chorus = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SoftVoice$2_h_