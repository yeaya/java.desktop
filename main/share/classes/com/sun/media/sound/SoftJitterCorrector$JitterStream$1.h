#ifndef _com_sun_media_sound_SoftJitterCorrector$JitterStream$1_h_
#define _com_sun_media_sound_SoftJitterCorrector$JitterStream$1_h_
//$ class com.sun.media.sound.SoftJitterCorrector$JitterStream$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class SoftJitterCorrector$JitterStream;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class SoftJitterCorrector$JitterStream$1 : public ::java::lang::Runnable {
	$class(SoftJitterCorrector$JitterStream$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	SoftJitterCorrector$JitterStream$1();
	void init$(::com::sun::media::sound::SoftJitterCorrector$JitterStream* this$0);
	virtual void run() override;
	::com::sun::media::sound::SoftJitterCorrector$JitterStream* this$0 = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SoftJitterCorrector$JitterStream$1_h_