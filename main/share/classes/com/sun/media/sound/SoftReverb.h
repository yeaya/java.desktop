#ifndef _com_sun_media_sound_SoftReverb_h_
#define _com_sun_media_sound_SoftReverb_h_
//$ class com.sun.media.sound.SoftReverb
//$ extends com.sun.media.sound.SoftAudioProcessor

#include <com/sun/media/sound/SoftAudioProcessor.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class SoftAudioBuffer;
				class SoftReverb$AllPass;
				class SoftReverb$Comb;
				class SoftReverb$Delay;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class SoftReverb : public ::com::sun::media::sound::SoftAudioProcessor {
	$class(SoftReverb, $NO_CLASS_INIT, ::com::sun::media::sound::SoftAudioProcessor)
public:
	SoftReverb();
	void init$();
	virtual void globalParameterControlChange($ints* slothpath, int64_t param, int64_t value) override;
	virtual void init(float samplerate, float controlrate) override;
	virtual void processAudio() override;
	virtual void processControlLogic() override;
	void setDamp(float value);
	void setGain(float gain);
	virtual void setInput(int32_t pin, ::com::sun::media::sound::SoftAudioBuffer* input) override;
	void setLightMode(bool light);
	virtual void setMixMode(bool mix) override;
	virtual void setOutput(int32_t pin, ::com::sun::media::sound::SoftAudioBuffer* output) override;
	void setPreDelay(float value);
	void setRoomSize(float value);
	float roomsize = 0.0;
	float damp = 0.0;
	float gain = 0.0;
	::com::sun::media::sound::SoftReverb$Delay* delay = nullptr;
	$Array<::com::sun::media::sound::SoftReverb$Comb>* combL = nullptr;
	$Array<::com::sun::media::sound::SoftReverb$Comb>* combR = nullptr;
	$Array<::com::sun::media::sound::SoftReverb$AllPass>* allpassL = nullptr;
	$Array<::com::sun::media::sound::SoftReverb$AllPass>* allpassR = nullptr;
	$floats* input = nullptr;
	$floats* out = nullptr;
	$floats* pre1 = nullptr;
	$floats* pre2 = nullptr;
	$floats* pre3 = nullptr;
	bool denormal_flip = false;
	bool mix = false;
	::com::sun::media::sound::SoftAudioBuffer* inputA = nullptr;
	::com::sun::media::sound::SoftAudioBuffer* left = nullptr;
	::com::sun::media::sound::SoftAudioBuffer* right = nullptr;
	bool dirty = false;
	float dirty_roomsize = 0.0;
	float dirty_damp = 0.0;
	float dirty_predelay = 0.0;
	float dirty_gain = 0.0;
	float samplerate = 0.0;
	bool light = false;
	bool silent = false;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SoftReverb_h_