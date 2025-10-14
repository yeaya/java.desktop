#ifndef _com_sun_media_sound_SoftMixingDataLine$Mute_h_
#define _com_sun_media_sound_SoftMixingDataLine$Mute_h_
//$ class com.sun.media.sound.SoftMixingDataLine$Mute
//$ extends javax.sound.sampled.BooleanControl

#include <javax/sound/sampled/BooleanControl.h>

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

class SoftMixingDataLine$Mute : public ::javax::sound::sampled::BooleanControl {
	$class(SoftMixingDataLine$Mute, $NO_CLASS_INIT, ::javax::sound::sampled::BooleanControl)
public:
	SoftMixingDataLine$Mute();
	void init$(::com::sun::media::sound::SoftMixingDataLine* this$0);
	virtual void setValue(bool newValue) override;
	::com::sun::media::sound::SoftMixingDataLine* this$0 = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SoftMixingDataLine$Mute_h_