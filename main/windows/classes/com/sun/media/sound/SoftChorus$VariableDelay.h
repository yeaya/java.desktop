#ifndef _com_sun_media_sound_SoftChorus$VariableDelay_h_
#define _com_sun_media_sound_SoftChorus$VariableDelay_h_
//$ class com.sun.media.sound.SoftChorus$VariableDelay
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class SoftChorus$VariableDelay : public ::java::lang::Object {
	$class(SoftChorus$VariableDelay, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SoftChorus$VariableDelay();
	void init$(int32_t maxbuffersize);
	virtual void processMix($floats* in, $floats* out, $floats* rout);
	virtual void processReplace($floats* in, $floats* out, $floats* rout);
	virtual void setDelay(float delay);
	virtual void setFeedBack(float feedback);
	virtual void setGain(float gain);
	virtual void setReverbSendGain(float rgain);
	$floats* delaybuffer = nullptr;
	int32_t rovepos = 0;
	float gain = 0.0;
	float rgain = 0.0;
	float delay = 0.0;
	float lastdelay = 0.0;
	float feedback = 0.0;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SoftChorus$VariableDelay_h_