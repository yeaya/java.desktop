#ifndef _com_sun_media_sound_SoftLimiter_h_
#define _com_sun_media_sound_SoftLimiter_h_
//$ class com.sun.media.sound.SoftLimiter
//$ extends com.sun.media.sound.SoftAudioProcessor

#include <com/sun/media/sound/SoftAudioProcessor.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class SoftAudioBuffer;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class SoftLimiter : public ::com::sun::media::sound::SoftAudioProcessor {
	$class(SoftLimiter, $NO_CLASS_INIT, ::com::sun::media::sound::SoftAudioProcessor)
public:
	SoftLimiter();
	void init$();
	virtual void globalParameterControlChange($ints* slothpath, int64_t param, int64_t value) override;
	virtual void init(float samplerate, float controlrate) override;
	virtual void processAudio() override;
	virtual void processControlLogic() override;
	virtual void setInput(int32_t pin, ::com::sun::media::sound::SoftAudioBuffer* input) override;
	virtual void setMixMode(bool mix) override;
	virtual void setOutput(int32_t pin, ::com::sun::media::sound::SoftAudioBuffer* output) override;
	float lastmax = 0.0;
	float gain = 0.0;
	$floats* temp_bufferL = nullptr;
	$floats* temp_bufferR = nullptr;
	bool mix = false;
	::com::sun::media::sound::SoftAudioBuffer* bufferL = nullptr;
	::com::sun::media::sound::SoftAudioBuffer* bufferR = nullptr;
	::com::sun::media::sound::SoftAudioBuffer* bufferLout = nullptr;
	::com::sun::media::sound::SoftAudioBuffer* bufferRout = nullptr;
	float controlrate = 0.0;
	double silentcounter = 0.0;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SoftLimiter_h_