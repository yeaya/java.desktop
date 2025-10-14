#ifndef _com_sun_media_sound_SoftChannel$1_h_
#define _com_sun_media_sound_SoftChannel$1_h_
//$ class com.sun.media.sound.SoftChannel$1
//$ extends com.sun.media.sound.SoftControl

#include <com/sun/media/sound/SoftControl.h>
#include <java/lang/Array.h>

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

class SoftChannel$1 : public ::com::sun::media::sound::SoftControl {
	$class(SoftChannel$1, $NO_CLASS_INIT, ::com::sun::media::sound::SoftControl)
public:
	SoftChannel$1();
	void init$(::com::sun::media::sound::SoftChannel* this$0);
	virtual $doubles* get(int32_t instance, $String* name) override;
	::com::sun::media::sound::SoftChannel* this$0 = nullptr;
	$Array<double, 2>* cc = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SoftChannel$1_h_