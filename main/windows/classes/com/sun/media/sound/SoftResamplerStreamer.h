#ifndef _com_sun_media_sound_SoftResamplerStreamer_h_
#define _com_sun_media_sound_SoftResamplerStreamer_h_
//$ interface com.sun.media.sound.SoftResamplerStreamer
//$ extends com.sun.media.sound.ModelOscillatorStream

#include <com/sun/media/sound/ModelOscillatorStream.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class ModelWavetable;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class SoftResamplerStreamer : public ::com::sun::media::sound::ModelOscillatorStream {
	$interface(SoftResamplerStreamer, $NO_CLASS_INIT, ::com::sun::media::sound::ModelOscillatorStream)
public:
	virtual void open(::com::sun::media::sound::ModelWavetable* osc, float outputsamplerate) {}
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SoftResamplerStreamer_h_