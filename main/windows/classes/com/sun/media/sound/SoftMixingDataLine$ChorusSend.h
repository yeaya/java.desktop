#ifndef _com_sun_media_sound_SoftMixingDataLine$ChorusSend_h_
#define _com_sun_media_sound_SoftMixingDataLine$ChorusSend_h_
//$ class com.sun.media.sound.SoftMixingDataLine$ChorusSend
//$ extends javax.sound.sampled.FloatControl

#include <javax/sound/sampled/FloatControl.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class SoftMixingDataLine;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class SoftMixingDataLine$ChorusSend : public ::javax::sound::sampled::FloatControl {
	$class(SoftMixingDataLine$ChorusSend, $NO_CLASS_INIT, ::javax::sound::sampled::FloatControl)
public:
	SoftMixingDataLine$ChorusSend();
	void init$(::com::sun::media::sound::SoftMixingDataLine* this$0);
	virtual void setValue(float newValue) override;
	::com::sun::media::sound::SoftMixingDataLine* this$0 = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SoftMixingDataLine$ChorusSend_h_