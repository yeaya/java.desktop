#ifndef _com_sun_media_sound_SoftVoice$3_h_
#define _com_sun_media_sound_SoftVoice$3_h_
//$ class com.sun.media.sound.SoftVoice$3
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

class SoftVoice$3 : public ::com::sun::media::sound::SoftControl {
	$class(SoftVoice$3, $NO_CLASS_INIT, ::com::sun::media::sound::SoftControl)
public:
	SoftVoice$3();
	void init$(::com::sun::media::sound::SoftVoice* this$0);
	virtual $doubles* get(int32_t instance, $String* name) override;
	::com::sun::media::sound::SoftVoice* this$0 = nullptr;
	$doubles* pitch = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SoftVoice$3_h_