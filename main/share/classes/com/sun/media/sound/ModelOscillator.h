#ifndef _com_sun_media_sound_ModelOscillator_h_
#define _com_sun_media_sound_ModelOscillator_h_
//$ interface com.sun.media.sound.ModelOscillator
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class ModelOscillatorStream;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class ModelOscillator : public ::java::lang::Object {
	$interface(ModelOscillator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual float getAttenuation() {return 0.0;}
	virtual int32_t getChannels() {return 0;}
	virtual ::com::sun::media::sound::ModelOscillatorStream* open(float samplerate) {return nullptr;}
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_ModelOscillator_h_