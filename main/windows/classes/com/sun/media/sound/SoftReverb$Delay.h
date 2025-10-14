#ifndef _com_sun_media_sound_SoftReverb$Delay_h_
#define _com_sun_media_sound_SoftReverb$Delay_h_
//$ class com.sun.media.sound.SoftReverb$Delay
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class SoftReverb$Delay : public ::java::lang::Object {
	$class(SoftReverb$Delay, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SoftReverb$Delay();
	void init$();
	void processReplace($floats* inout);
	void setDelay(int32_t delay);
	$floats* delaybuffer = nullptr;
	int32_t rovepos = 0;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SoftReverb$Delay_h_