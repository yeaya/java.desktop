#ifndef _com_sun_media_sound_ModelDestination_h_
#define _com_sun_media_sound_ModelDestination_h_
//$ class com.sun.media.sound.ModelDestination
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("DESTINATION_CHORUS")
#undef DESTINATION_CHORUS
#pragma push_macro("DESTINATION_EG1_ATTACK")
#undef DESTINATION_EG1_ATTACK
#pragma push_macro("DESTINATION_EG1_DECAY")
#undef DESTINATION_EG1_DECAY
#pragma push_macro("DESTINATION_EG1_DELAY")
#undef DESTINATION_EG1_DELAY
#pragma push_macro("DESTINATION_EG1_HOLD")
#undef DESTINATION_EG1_HOLD
#pragma push_macro("DESTINATION_EG1_RELEASE")
#undef DESTINATION_EG1_RELEASE
#pragma push_macro("DESTINATION_EG1_SHUTDOWN")
#undef DESTINATION_EG1_SHUTDOWN
#pragma push_macro("DESTINATION_EG1_SUSTAIN")
#undef DESTINATION_EG1_SUSTAIN
#pragma push_macro("DESTINATION_EG2_ATTACK")
#undef DESTINATION_EG2_ATTACK
#pragma push_macro("DESTINATION_EG2_DECAY")
#undef DESTINATION_EG2_DECAY
#pragma push_macro("DESTINATION_EG2_DELAY")
#undef DESTINATION_EG2_DELAY
#pragma push_macro("DESTINATION_EG2_HOLD")
#undef DESTINATION_EG2_HOLD
#pragma push_macro("DESTINATION_EG2_RELEASE")
#undef DESTINATION_EG2_RELEASE
#pragma push_macro("DESTINATION_EG2_SHUTDOWN")
#undef DESTINATION_EG2_SHUTDOWN
#pragma push_macro("DESTINATION_EG2_SUSTAIN")
#undef DESTINATION_EG2_SUSTAIN
#pragma push_macro("DESTINATION_FILTER_FREQ")
#undef DESTINATION_FILTER_FREQ
#pragma push_macro("DESTINATION_FILTER_Q")
#undef DESTINATION_FILTER_Q
#pragma push_macro("DESTINATION_GAIN")
#undef DESTINATION_GAIN
#pragma push_macro("DESTINATION_KEYNUMBER")
#undef DESTINATION_KEYNUMBER
#pragma push_macro("DESTINATION_LFO1_DELAY")
#undef DESTINATION_LFO1_DELAY
#pragma push_macro("DESTINATION_LFO1_FREQ")
#undef DESTINATION_LFO1_FREQ
#pragma push_macro("DESTINATION_LFO2_DELAY")
#undef DESTINATION_LFO2_DELAY
#pragma push_macro("DESTINATION_LFO2_FREQ")
#undef DESTINATION_LFO2_FREQ
#pragma push_macro("DESTINATION_NONE")
#undef DESTINATION_NONE
#pragma push_macro("DESTINATION_PAN")
#undef DESTINATION_PAN
#pragma push_macro("DESTINATION_PITCH")
#undef DESTINATION_PITCH
#pragma push_macro("DESTINATION_REVERB")
#undef DESTINATION_REVERB
#pragma push_macro("DESTINATION_VELOCITY")
#undef DESTINATION_VELOCITY

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class ModelIdentifier;
				class ModelTransform;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class ModelDestination : public ::java::lang::Object {
	$class(ModelDestination, 0, ::java::lang::Object)
public:
	ModelDestination();
	void init$();
	void init$(::com::sun::media::sound::ModelIdentifier* id);
	::com::sun::media::sound::ModelIdentifier* getIdentifier();
	::com::sun::media::sound::ModelTransform* getTransform();
	void setIdentifier(::com::sun::media::sound::ModelIdentifier* destination);
	void setTransform(::com::sun::media::sound::ModelTransform* transform);
	static ::com::sun::media::sound::ModelIdentifier* DESTINATION_NONE;
	static ::com::sun::media::sound::ModelIdentifier* DESTINATION_KEYNUMBER;
	static ::com::sun::media::sound::ModelIdentifier* DESTINATION_VELOCITY;
	static ::com::sun::media::sound::ModelIdentifier* DESTINATION_PITCH;
	static ::com::sun::media::sound::ModelIdentifier* DESTINATION_GAIN;
	static ::com::sun::media::sound::ModelIdentifier* DESTINATION_PAN;
	static ::com::sun::media::sound::ModelIdentifier* DESTINATION_REVERB;
	static ::com::sun::media::sound::ModelIdentifier* DESTINATION_CHORUS;
	static ::com::sun::media::sound::ModelIdentifier* DESTINATION_LFO1_DELAY;
	static ::com::sun::media::sound::ModelIdentifier* DESTINATION_LFO1_FREQ;
	static ::com::sun::media::sound::ModelIdentifier* DESTINATION_LFO2_DELAY;
	static ::com::sun::media::sound::ModelIdentifier* DESTINATION_LFO2_FREQ;
	static ::com::sun::media::sound::ModelIdentifier* DESTINATION_EG1_DELAY;
	static ::com::sun::media::sound::ModelIdentifier* DESTINATION_EG1_ATTACK;
	static ::com::sun::media::sound::ModelIdentifier* DESTINATION_EG1_HOLD;
	static ::com::sun::media::sound::ModelIdentifier* DESTINATION_EG1_DECAY;
	static ::com::sun::media::sound::ModelIdentifier* DESTINATION_EG1_SUSTAIN;
	static ::com::sun::media::sound::ModelIdentifier* DESTINATION_EG1_RELEASE;
	static ::com::sun::media::sound::ModelIdentifier* DESTINATION_EG1_SHUTDOWN;
	static ::com::sun::media::sound::ModelIdentifier* DESTINATION_EG2_DELAY;
	static ::com::sun::media::sound::ModelIdentifier* DESTINATION_EG2_ATTACK;
	static ::com::sun::media::sound::ModelIdentifier* DESTINATION_EG2_HOLD;
	static ::com::sun::media::sound::ModelIdentifier* DESTINATION_EG2_DECAY;
	static ::com::sun::media::sound::ModelIdentifier* DESTINATION_EG2_SUSTAIN;
	static ::com::sun::media::sound::ModelIdentifier* DESTINATION_EG2_RELEASE;
	static ::com::sun::media::sound::ModelIdentifier* DESTINATION_EG2_SHUTDOWN;
	static ::com::sun::media::sound::ModelIdentifier* DESTINATION_FILTER_FREQ;
	static ::com::sun::media::sound::ModelIdentifier* DESTINATION_FILTER_Q;
	::com::sun::media::sound::ModelIdentifier* destination = nullptr;
	::com::sun::media::sound::ModelTransform* transform = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#pragma pop_macro("DESTINATION_CHORUS")
#pragma pop_macro("DESTINATION_EG1_ATTACK")
#pragma pop_macro("DESTINATION_EG1_DECAY")
#pragma pop_macro("DESTINATION_EG1_DELAY")
#pragma pop_macro("DESTINATION_EG1_HOLD")
#pragma pop_macro("DESTINATION_EG1_RELEASE")
#pragma pop_macro("DESTINATION_EG1_SHUTDOWN")
#pragma pop_macro("DESTINATION_EG1_SUSTAIN")
#pragma pop_macro("DESTINATION_EG2_ATTACK")
#pragma pop_macro("DESTINATION_EG2_DECAY")
#pragma pop_macro("DESTINATION_EG2_DELAY")
#pragma pop_macro("DESTINATION_EG2_HOLD")
#pragma pop_macro("DESTINATION_EG2_RELEASE")
#pragma pop_macro("DESTINATION_EG2_SHUTDOWN")
#pragma pop_macro("DESTINATION_EG2_SUSTAIN")
#pragma pop_macro("DESTINATION_FILTER_FREQ")
#pragma pop_macro("DESTINATION_FILTER_Q")
#pragma pop_macro("DESTINATION_GAIN")
#pragma pop_macro("DESTINATION_KEYNUMBER")
#pragma pop_macro("DESTINATION_LFO1_DELAY")
#pragma pop_macro("DESTINATION_LFO1_FREQ")
#pragma pop_macro("DESTINATION_LFO2_DELAY")
#pragma pop_macro("DESTINATION_LFO2_FREQ")
#pragma pop_macro("DESTINATION_NONE")
#pragma pop_macro("DESTINATION_PAN")
#pragma pop_macro("DESTINATION_PITCH")
#pragma pop_macro("DESTINATION_REVERB")
#pragma pop_macro("DESTINATION_VELOCITY")

#endif // _com_sun_media_sound_ModelDestination_h_