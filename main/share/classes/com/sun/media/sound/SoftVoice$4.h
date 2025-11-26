#ifndef _com_sun_media_sound_SoftVoice$4_h_
#define _com_sun_media_sound_SoftVoice$4_h_
//$ class com.sun.media.sound.SoftVoice$4
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

class SoftVoice$4 : public ::com::sun::media::sound::SoftControl {
	$class(SoftVoice$4, $NO_CLASS_INIT, ::com::sun::media::sound::SoftControl)
public:
	SoftVoice$4();
	void init$(::com::sun::media::sound::SoftVoice* this$0);
	virtual $doubles* get(int32_t instance, $String* name) override;
	::com::sun::media::sound::SoftVoice* this$0 = nullptr;
	$doubles* freq = nullptr;
	$doubles* ftype = nullptr;
	$doubles* q = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SoftVoice$4_h_