#ifndef _com_sun_media_sound_SoftAudioProcessor_h_
#define _com_sun_media_sound_SoftAudioProcessor_h_
//$ interface com.sun.media.sound.SoftAudioProcessor
//$ extends java.lang.Object

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

class SoftAudioProcessor : public ::java::lang::Object {
	$interface(SoftAudioProcessor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void globalParameterControlChange($ints* slothpath, int64_t param, int64_t value) {}
	virtual void init(float samplerate, float controlrate) {}
	virtual void processAudio() {}
	virtual void processControlLogic() {}
	virtual void setInput(int32_t pin, ::com::sun::media::sound::SoftAudioBuffer* input) {}
	virtual void setMixMode(bool mix) {}
	virtual void setOutput(int32_t pin, ::com::sun::media::sound::SoftAudioBuffer* output) {}
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SoftAudioProcessor_h_