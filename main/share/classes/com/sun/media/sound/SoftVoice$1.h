#ifndef _com_sun_media_sound_SoftVoice$1_h_
#define _com_sun_media_sound_SoftVoice$1_h_
//$ class com.sun.media.sound.SoftVoice$1
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

class SoftVoice$1 : public ::com::sun::media::sound::SoftControl {
	$class(SoftVoice$1, $NO_CLASS_INIT, ::com::sun::media::sound::SoftControl)
public:
	SoftVoice$1();
	void init$(::com::sun::media::sound::SoftVoice* this$0);
	virtual $doubles* get(int32_t instance, $String* name) override;
	::com::sun::media::sound::SoftVoice* this$0 = nullptr;
	$doubles* keynumber = nullptr;
	$doubles* velocity = nullptr;
	$doubles* on = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SoftVoice$1_h_