#ifndef _com_sun_media_sound_SoftReverb$Comb_h_
#define _com_sun_media_sound_SoftReverb$Comb_h_
//$ class com.sun.media.sound.SoftReverb$Comb
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class SoftReverb$Comb : public ::java::lang::Object {
	$class(SoftReverb$Comb, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SoftReverb$Comb();
	void init$(int32_t size);
	void processMix($floats* in, $floats* out);
	void processReplace($floats* in, $floats* out);
	void setDamp(float val);
	void setFeedBack(float feedback);
	$floats* delaybuffer = nullptr;
	int32_t delaybuffersize = 0;
	int32_t rovepos = 0;
	float feedback = 0.0;
	float filtertemp = 0.0;
	float filtercoeff1 = 0.0;
	float filtercoeff2 = 0.0;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SoftReverb$Comb_h_