#ifndef _com_sun_media_sound_PortMixer$CompCtrl_h_
#define _com_sun_media_sound_PortMixer$CompCtrl_h_
//$ class com.sun.media.sound.PortMixer$CompCtrl
//$ extends javax.sound.sampled.CompoundControl

#include <java/lang/Array.h>
#include <javax/sound/sampled/CompoundControl.h>

namespace javax {
	namespace sound {
		namespace sampled {
			class Control;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class PortMixer$CompCtrl : public ::javax::sound::sampled::CompoundControl {
	$class(PortMixer$CompCtrl, $NO_CLASS_INIT, ::javax::sound::sampled::CompoundControl)
public:
	PortMixer$CompCtrl();
	void init$($String* name, $Array<::javax::sound::sampled::Control>* controls);
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_PortMixer$CompCtrl_h_