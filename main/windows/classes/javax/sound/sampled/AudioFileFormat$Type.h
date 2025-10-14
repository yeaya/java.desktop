#ifndef _javax_sound_sampled_AudioFileFormat$Type_h_
#define _javax_sound_sampled_AudioFileFormat$Type_h_
//$ class javax.sound.sampled.AudioFileFormat$Type
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("AIFC")
#undef AIFC
#pragma push_macro("AIFF")
#undef AIFF
#pragma push_macro("AU")
#undef AU
#pragma push_macro("SND")
#undef SND
#pragma push_macro("WAVE")
#undef WAVE

namespace javax {
	namespace sound {
		namespace sampled {

class $export AudioFileFormat$Type : public ::java::lang::Object {
	$class(AudioFileFormat$Type, 0, ::java::lang::Object)
public:
	AudioFileFormat$Type();
	void init$($String* name, $String* extension);
	virtual bool equals(Object$* obj) override;
	virtual $String* getExtension();
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	static ::javax::sound::sampled::AudioFileFormat$Type* WAVE;
	static ::javax::sound::sampled::AudioFileFormat$Type* AU;
	static ::javax::sound::sampled::AudioFileFormat$Type* AIFF;
	static ::javax::sound::sampled::AudioFileFormat$Type* AIFC;
	static ::javax::sound::sampled::AudioFileFormat$Type* SND;
	$String* name = nullptr;
	$String* extension = nullptr;
};

		} // sampled
	} // sound
} // javax

#pragma pop_macro("AIFC")
#pragma pop_macro("AIFF")
#pragma pop_macro("AU")
#pragma pop_macro("SND")
#pragma pop_macro("WAVE")

#endif // _javax_sound_sampled_AudioFileFormat$Type_h_