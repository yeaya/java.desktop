#ifndef _com_sun_media_sound_SoftMixingDataLine$Pan_h_
#define _com_sun_media_sound_SoftMixingDataLine$Pan_h_
//$ class com.sun.media.sound.SoftMixingDataLine$Pan
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

class SoftMixingDataLine$Pan : public ::javax::sound::sampled::FloatControl {
	$class(SoftMixingDataLine$Pan, $NO_CLASS_INIT, ::javax::sound::sampled::FloatControl)
public:
	SoftMixingDataLine$Pan();
	void init$(::com::sun::media::sound::SoftMixingDataLine* this$0);
	virtual float getValue() override;
	virtual void setValue(float newValue) override;
	::com::sun::media::sound::SoftMixingDataLine* this$0 = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SoftMixingDataLine$Pan_h_