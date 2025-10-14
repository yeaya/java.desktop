#ifndef _com_sun_media_sound_PortMixer$PortInfo_h_
#define _com_sun_media_sound_PortMixer$PortInfo_h_
//$ class com.sun.media.sound.PortMixer$PortInfo
//$ extends javax.sound.sampled.Port$Info

#include <javax/sound/sampled/Port$Info.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class PortMixer$PortInfo : public ::javax::sound::sampled::Port$Info {
	$class(PortMixer$PortInfo, $NO_CLASS_INIT, ::javax::sound::sampled::Port$Info)
public:
	PortMixer$PortInfo();
	void init$($String* name, bool isSource);
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_PortMixer$PortInfo_h_