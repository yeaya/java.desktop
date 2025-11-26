#ifndef _com_sun_media_sound_SoftChorus$LFODelay_h_
#define _com_sun_media_sound_SoftChorus$LFODelay_h_
//$ class com.sun.media.sound.SoftChorus$LFODelay
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class SoftChorus$VariableDelay;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class SoftChorus$LFODelay : public ::java::lang::Object {
	$class(SoftChorus$LFODelay, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SoftChorus$LFODelay();
	void init$(double samplerate, double controlrate);
	virtual void processMix($floats* in, $floats* out, $floats* rout);
	virtual void processReplace($floats* in, $floats* out, $floats* rout);
	virtual void setDepth(double depth);
	virtual void setFeedBack(float feedback);
	virtual void setGain(float gain);
	virtual void setPhase(double phase);
	virtual void setRate(double rate);
	virtual void setReverbSendGain(float rgain);
	double phase = 0.0;
	double phase_step = 0.0;
	double depth = 0.0;
	::com::sun::media::sound::SoftChorus$VariableDelay* vdelay = nullptr;
	double samplerate = 0.0;
	double controlrate = 0.0;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SoftChorus$LFODelay_h_