#ifndef _com_sun_media_sound_SoftReverb$AllPass_h_
#define _com_sun_media_sound_SoftReverb$AllPass_h_
//$ class com.sun.media.sound.SoftReverb$AllPass
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class SoftReverb$AllPass : public ::java::lang::Object {
	$class(SoftReverb$AllPass, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SoftReverb$AllPass();
	void init$(int32_t size);
	void processReplace($floats* inout);
	void processReplace($floats* in, $floats* out);
	void setFeedBack(float feedback);
	$floats* delaybuffer = nullptr;
	int32_t delaybuffersize = 0;
	int32_t rovepos = 0;
	float feedback = 0.0;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SoftReverb$AllPass_h_