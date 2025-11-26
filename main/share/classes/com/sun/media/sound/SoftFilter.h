#ifndef _com_sun_media_sound_SoftFilter_h_
#define _com_sun_media_sound_SoftFilter_h_
//$ class com.sun.media.sound.SoftFilter
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("FILTERTYPE_BP12")
#undef FILTERTYPE_BP12
#pragma push_macro("FILTERTYPE_HP12")
#undef FILTERTYPE_HP12
#pragma push_macro("FILTERTYPE_HP24")
#undef FILTERTYPE_HP24
#pragma push_macro("FILTERTYPE_LP12")
#undef FILTERTYPE_LP12
#pragma push_macro("FILTERTYPE_LP24")
#undef FILTERTYPE_LP24
#pragma push_macro("FILTERTYPE_LP6")
#undef FILTERTYPE_LP6
#pragma push_macro("FILTERTYPE_NP12")
#undef FILTERTYPE_NP12

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

class SoftFilter : public ::java::lang::Object {
	$class(SoftFilter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SoftFilter();
	void init$(float samplerate);
	void filter1(::com::sun::media::sound::SoftAudioBuffer* sbuffer);
	void filter1calc();
	void filter2(::com::sun::media::sound::SoftAudioBuffer* sbuffer);
	void filter2calc();
	void filter4(::com::sun::media::sound::SoftAudioBuffer* sbuffer);
	void processAudio(::com::sun::media::sound::SoftAudioBuffer* sbuffer);
	void reset();
	void setFilterType(int32_t filtertype);
	void setFrequency(double cent);
	void setResonance(double db);
	double sinh(double x);
	static const int32_t FILTERTYPE_LP6 = 0;
	static const int32_t FILTERTYPE_LP12 = 1;
	static const int32_t FILTERTYPE_HP12 = 17;
	static const int32_t FILTERTYPE_BP12 = 33;
	static const int32_t FILTERTYPE_NP12 = 49;
	static const int32_t FILTERTYPE_LP24 = 3;
	static const int32_t FILTERTYPE_HP24 = 19;
	int32_t filtertype = 0;
	float samplerate = 0.0;
	float x1 = 0.0;
	float x2 = 0.0;
	float y1 = 0.0;
	float y2 = 0.0;
	float xx1 = 0.0;
	float xx2 = 0.0;
	float yy1 = 0.0;
	float yy2 = 0.0;
	float a0 = 0.0;
	float a1 = 0.0;
	float a2 = 0.0;
	float b1 = 0.0;
	float b2 = 0.0;
	float q = 0.0;
	float gain = 0.0;
	float wet = 0.0;
	float last_wet = 0.0;
	float last_a0 = 0.0;
	float last_a1 = 0.0;
	float last_a2 = 0.0;
	float last_b1 = 0.0;
	float last_b2 = 0.0;
	float last_q = 0.0;
	float last_gain = 0.0;
	bool last_set = false;
	double cutoff = 0.0;
	double resonancedB = 0.0;
	bool dirty = false;
};

			} // sound
		} // media
	} // sun
} // com

#pragma pop_macro("FILTERTYPE_BP12")
#pragma pop_macro("FILTERTYPE_HP12")
#pragma pop_macro("FILTERTYPE_HP24")
#pragma pop_macro("FILTERTYPE_LP12")
#pragma pop_macro("FILTERTYPE_LP24")
#pragma pop_macro("FILTERTYPE_LP6")
#pragma pop_macro("FILTERTYPE_NP12")

#endif // _com_sun_media_sound_SoftFilter_h_