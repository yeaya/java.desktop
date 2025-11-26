#ifndef _com_sun_media_sound_SoftChorus_h_
#define _com_sun_media_sound_SoftChorus_h_
//$ class com.sun.media.sound.SoftChorus
//$ extends com.sun.media.sound.SoftAudioProcessor

#include <com/sun/media/sound/SoftAudioProcessor.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class SoftAudioBuffer;
				class SoftChorus$LFODelay;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class SoftChorus : public ::com::sun::media::sound::SoftAudioProcessor {
	$class(SoftChorus, $NO_CLASS_INIT, ::com::sun::media::sound::SoftAudioProcessor)
public:
	SoftChorus();
	void init$();
	virtual void globalParameterControlChange($ints* slothpath, int64_t param, int64_t value) override;
	virtual void init(float samplerate, float controlrate) override;
	virtual void processAudio() override;
	virtual void processControlLogic() override;
	virtual void setInput(int32_t pin, ::com::sun::media::sound::SoftAudioBuffer* input) override;
	virtual void setMixMode(bool mix) override;
	virtual void setOutput(int32_t pin, ::com::sun::media::sound::SoftAudioBuffer* output) override;
	bool mix = false;
	::com::sun::media::sound::SoftAudioBuffer* inputA = nullptr;
	::com::sun::media::sound::SoftAudioBuffer* left = nullptr;
	::com::sun::media::sound::SoftAudioBuffer* right = nullptr;
	::com::sun::media::sound::SoftAudioBuffer* reverb = nullptr;
	::com::sun::media::sound::SoftChorus$LFODelay* vdelay1L = nullptr;
	::com::sun::media::sound::SoftChorus$LFODelay* vdelay1R = nullptr;
	float rgain = 0.0;
	bool dirty = false;
	double dirty_vdelay1L_rate = 0.0;
	double dirty_vdelay1R_rate = 0.0;
	double dirty_vdelay1L_depth = 0.0;
	double dirty_vdelay1R_depth = 0.0;
	float dirty_vdelay1L_feedback = 0.0;
	float dirty_vdelay1R_feedback = 0.0;
	float dirty_vdelay1L_reverbsendgain = 0.0;
	float dirty_vdelay1R_reverbsendgain = 0.0;
	float controlrate = 0.0;
	double silentcounter = 0.0;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SoftChorus_h_