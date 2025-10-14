#ifndef _com_sun_media_sound_ModelWavetable_h_
#define _com_sun_media_sound_ModelWavetable_h_
//$ interface com.sun.media.sound.ModelWavetable
//$ extends com.sun.media.sound.ModelOscillator

#include <com/sun/media/sound/ModelOscillator.h>

#pragma push_macro("LOOP_TYPE_FORWARD")
#undef LOOP_TYPE_FORWARD
#pragma push_macro("LOOP_TYPE_OFF")
#undef LOOP_TYPE_OFF
#pragma push_macro("LOOP_TYPE_PINGPONG")
#undef LOOP_TYPE_PINGPONG
#pragma push_macro("LOOP_TYPE_RELEASE")
#undef LOOP_TYPE_RELEASE
#pragma push_macro("LOOP_TYPE_REVERSE")
#undef LOOP_TYPE_REVERSE

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class AudioFloatInputStream;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class ModelWavetable : public ::com::sun::media::sound::ModelOscillator {
	$interface(ModelWavetable, $NO_CLASS_INIT, ::com::sun::media::sound::ModelOscillator)
public:
	virtual float getLoopLength() {return 0.0;}
	virtual float getLoopStart() {return 0.0;}
	virtual int32_t getLoopType() {return 0;}
	virtual float getPitchcorrection() {return 0.0;}
	virtual ::com::sun::media::sound::AudioFloatInputStream* openStream() {return nullptr;}
	static const int32_t LOOP_TYPE_OFF = 0;
	static const int32_t LOOP_TYPE_FORWARD = 1;
	static const int32_t LOOP_TYPE_RELEASE = 2;
	static const int32_t LOOP_TYPE_PINGPONG = 4;
	static const int32_t LOOP_TYPE_REVERSE = 8;
};

			} // sound
		} // media
	} // sun
} // com

#pragma pop_macro("LOOP_TYPE_FORWARD")
#pragma pop_macro("LOOP_TYPE_OFF")
#pragma pop_macro("LOOP_TYPE_PINGPONG")
#pragma pop_macro("LOOP_TYPE_RELEASE")
#pragma pop_macro("LOOP_TYPE_REVERSE")

#endif // _com_sun_media_sound_ModelWavetable_h_