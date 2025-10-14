#ifndef _com_sun_media_sound_DirectAudioDevice$DirectDL$Mute_h_
#define _com_sun_media_sound_DirectAudioDevice$DirectDL$Mute_h_
//$ class com.sun.media.sound.DirectAudioDevice$DirectDL$Mute
//$ extends javax.sound.sampled.BooleanControl

#include <javax/sound/sampled/BooleanControl.h>

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

class DirectAudioDevice$DirectDL$Mute : public ::javax::sound::sampled::BooleanControl {
	$class(DirectAudioDevice$DirectDL$Mute, $NO_CLASS_INIT, ::javax::sound::sampled::BooleanControl)
public:
	DirectAudioDevice$DirectDL$Mute();
	void init$(::com::sun::media::sound::DirectAudioDevice$DirectDL* this$0);
	virtual void setValue(bool newValue) override;
	::com::sun::media::sound::DirectAudioDevice$DirectDL* this$0 = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_DirectAudioDevice$DirectDL$Mute_h_