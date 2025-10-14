#ifndef _javax_sound_sampled_AudioFormat$Encoding_h_
#define _javax_sound_sampled_AudioFormat$Encoding_h_
//$ class javax.sound.sampled.AudioFormat$Encoding
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("ALAW")
#undef ALAW
#pragma push_macro("PCM_FLOAT")
#undef PCM_FLOAT
#pragma push_macro("PCM_SIGNED")
#undef PCM_SIGNED
#pragma push_macro("PCM_UNSIGNED")
#undef PCM_UNSIGNED
#pragma push_macro("ULAW")
#undef ULAW

namespace javax {
	namespace sound {
		namespace sampled {

class $import AudioFormat$Encoding : public ::java::lang::Object {
	$class(AudioFormat$Encoding, 0, ::java::lang::Object)
public:
	AudioFormat$Encoding();
	void init$($String* name);
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	static ::javax::sound::sampled::AudioFormat$Encoding* PCM_SIGNED;
	static ::javax::sound::sampled::AudioFormat$Encoding* PCM_UNSIGNED;
	static ::javax::sound::sampled::AudioFormat$Encoding* PCM_FLOAT;
	static ::javax::sound::sampled::AudioFormat$Encoding* ULAW;
	static ::javax::sound::sampled::AudioFormat$Encoding* ALAW;
	$String* name = nullptr;
};

		} // sampled
	} // sound
} // javax

#pragma pop_macro("ALAW")
#pragma pop_macro("PCM_FLOAT")
#pragma pop_macro("PCM_SIGNED")
#pragma pop_macro("PCM_UNSIGNED")
#pragma pop_macro("ULAW")

#endif // _javax_sound_sampled_AudioFormat$Encoding_h_