#ifndef _com_sun_media_sound_ModelSource_h_
#define _com_sun_media_sound_ModelSource_h_
//$ class com.sun.media.sound.ModelSource
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("SOURCE_EG1")
#undef SOURCE_EG1
#pragma push_macro("SOURCE_EG2")
#undef SOURCE_EG2
#pragma push_macro("SOURCE_LFO1")
#undef SOURCE_LFO1
#pragma push_macro("SOURCE_LFO2")
#undef SOURCE_LFO2
#pragma push_macro("SOURCE_MIDI_CC_0")
#undef SOURCE_MIDI_CC_0
#pragma push_macro("SOURCE_MIDI_CHANNEL_PRESSURE")
#undef SOURCE_MIDI_CHANNEL_PRESSURE
#pragma push_macro("SOURCE_MIDI_PITCH")
#undef SOURCE_MIDI_PITCH
#pragma push_macro("SOURCE_MIDI_POLY_PRESSURE")
#undef SOURCE_MIDI_POLY_PRESSURE
#pragma push_macro("SOURCE_MIDI_RPN_0")
#undef SOURCE_MIDI_RPN_0
#pragma push_macro("SOURCE_NONE")
#undef SOURCE_NONE
#pragma push_macro("SOURCE_NOTEON_KEYNUMBER")
#undef SOURCE_NOTEON_KEYNUMBER
#pragma push_macro("SOURCE_NOTEON_VELOCITY")
#undef SOURCE_NOTEON_VELOCITY

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

class ModelSource : public ::java::lang::Object {
	$class(ModelSource, 0, ::java::lang::Object)
public:
	ModelSource();
	void init$();
	void init$(::com::sun::media::sound::ModelIdentifier* id);
	void init$(::com::sun::media::sound::ModelIdentifier* id, bool direction);
	void init$(::com::sun::media::sound::ModelIdentifier* id, bool direction, bool polarity);
	void init$(::com::sun::media::sound::ModelIdentifier* id, bool direction, bool polarity, int32_t transform);
	void init$(::com::sun::media::sound::ModelIdentifier* id, ::com::sun::media::sound::ModelTransform* transform);
	::com::sun::media::sound::ModelIdentifier* getIdentifier();
	::com::sun::media::sound::ModelTransform* getTransform();
	void setIdentifier(::com::sun::media::sound::ModelIdentifier* source);
	void setTransform(::com::sun::media::sound::ModelTransform* transform);
	static ::com::sun::media::sound::ModelIdentifier* SOURCE_NONE;
	static ::com::sun::media::sound::ModelIdentifier* SOURCE_NOTEON_KEYNUMBER;
	static ::com::sun::media::sound::ModelIdentifier* SOURCE_NOTEON_VELOCITY;
	static ::com::sun::media::sound::ModelIdentifier* SOURCE_EG1;
	static ::com::sun::media::sound::ModelIdentifier* SOURCE_EG2;
	static ::com::sun::media::sound::ModelIdentifier* SOURCE_LFO1;
	static ::com::sun::media::sound::ModelIdentifier* SOURCE_LFO2;
	static ::com::sun::media::sound::ModelIdentifier* SOURCE_MIDI_PITCH;
	static ::com::sun::media::sound::ModelIdentifier* SOURCE_MIDI_CHANNEL_PRESSURE;
	static ::com::sun::media::sound::ModelIdentifier* SOURCE_MIDI_POLY_PRESSURE;
	static ::com::sun::media::sound::ModelIdentifier* SOURCE_MIDI_CC_0;
	static ::com::sun::media::sound::ModelIdentifier* SOURCE_MIDI_RPN_0;
	::com::sun::media::sound::ModelIdentifier* source = nullptr;
	::com::sun::media::sound::ModelTransform* transform = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#pragma pop_macro("SOURCE_EG1")
#pragma pop_macro("SOURCE_EG2")
#pragma pop_macro("SOURCE_LFO1")
#pragma pop_macro("SOURCE_LFO2")
#pragma pop_macro("SOURCE_MIDI_CC_0")
#pragma pop_macro("SOURCE_MIDI_CHANNEL_PRESSURE")
#pragma pop_macro("SOURCE_MIDI_PITCH")
#pragma pop_macro("SOURCE_MIDI_POLY_PRESSURE")
#pragma pop_macro("SOURCE_MIDI_RPN_0")
#pragma pop_macro("SOURCE_NONE")
#pragma pop_macro("SOURCE_NOTEON_KEYNUMBER")
#pragma pop_macro("SOURCE_NOTEON_VELOCITY")

#endif // _com_sun_media_sound_ModelSource_h_