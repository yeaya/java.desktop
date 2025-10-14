#ifndef _com_sun_media_sound_DirectAudioDevice$DirectDL$Gain_h_
#define _com_sun_media_sound_DirectAudioDevice$DirectDL$Gain_h_
//$ class com.sun.media.sound.DirectAudioDevice$DirectDL$Gain
//$ extends javax.sound.sampled.FloatControl

#include <javax/sound/sampled/FloatControl.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class DirectAudioDevice$DirectDL;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class DirectAudioDevice$DirectDL$Gain : public ::javax::sound::sampled::FloatControl {
	$class(DirectAudioDevice$DirectDL$Gain, $NO_CLASS_INIT, ::javax::sound::sampled::FloatControl)
public:
	DirectAudioDevice$DirectDL$Gain();
	void init$(::com::sun::media::sound::DirectAudioDevice$DirectDL* this$0);
	float getLinearGain();
	virtual void setValue(float newValue) override;
	::com::sun::media::sound::DirectAudioDevice$DirectDL* this$0 = nullptr;
	float linearGain = 0.0;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_DirectAudioDevice$DirectDL$Gain_h_