#ifndef _com_sun_media_sound_DirectAudioDevice$DirectDL$Pan_h_
#define _com_sun_media_sound_DirectAudioDevice$DirectDL$Pan_h_
//$ class com.sun.media.sound.DirectAudioDevice$DirectDL$Pan
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

class DirectAudioDevice$DirectDL$Pan : public ::javax::sound::sampled::FloatControl {
	$class(DirectAudioDevice$DirectDL$Pan, $NO_CLASS_INIT, ::javax::sound::sampled::FloatControl)
public:
	DirectAudioDevice$DirectDL$Pan();
	void init$(::com::sun::media::sound::DirectAudioDevice$DirectDL* this$0);
	virtual void setValue(float newValue) override;
	void setValueImpl(float newValue);
	::com::sun::media::sound::DirectAudioDevice$DirectDL* this$0 = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_DirectAudioDevice$DirectDL$Pan_h_