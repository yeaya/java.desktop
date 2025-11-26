#ifndef _com_sun_media_sound_SoftProcess_h_
#define _com_sun_media_sound_SoftProcess_h_
//$ interface com.sun.media.sound.SoftProcess
//$ extends com.sun.media.sound.SoftControl

#include <com/sun/media/sound/SoftControl.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class SoftSynthesizer;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class SoftProcess : public ::com::sun::media::sound::SoftControl {
	$interface(SoftProcess, $NO_CLASS_INIT, ::com::sun::media::sound::SoftControl)
public:
	virtual $doubles* get(int32_t instance, $String* name) override {return nullptr;}
	virtual void init(::com::sun::media::sound::SoftSynthesizer* synth) {}
	virtual void processControlLogic() {}
	virtual void reset() {}
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SoftProcess_h_