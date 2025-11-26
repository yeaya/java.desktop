#ifndef _com_sun_media_sound_FFT_h_
#define _com_sun_media_sound_FFT_h_
//$ class com.sun.media.sound.FFT
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("FFT")
#undef FFT

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class FFT : public ::java::lang::Object {
	$class(FFT, $NO_CLASS_INIT, ::java::lang::Object)
public:
	FFT();
	void init$(int32_t fftFrameSize, int32_t sign);
	void bitreversal($doubles* data);
	static void calc(int32_t fftFrameSize, $doubles* data, int32_t sign, $doubles* w);
	static void calcF2E(int32_t fftFrameSize, $doubles* data, int32_t i, int32_t nstep, $doubles* w);
	static void calcF4F(int32_t fftFrameSize, $doubles* data, int32_t i, int32_t nstep, $doubles* w);
	static void calcF4FE(int32_t fftFrameSize, $doubles* data, int32_t i, int32_t nstep, $doubles* w);
	static void calcF4I(int32_t fftFrameSize, $doubles* data, int32_t i, int32_t nstep, $doubles* w);
	static void calcF4IE(int32_t fftFrameSize, $doubles* data, int32_t i, int32_t nstep, $doubles* w);
	static $doubles* computeTwiddleFactors(int32_t fftFrameSize, int32_t sign);
	void transform($doubles* data);
	$doubles* w = nullptr;
	int32_t fftFrameSize = 0;
	int32_t sign = 0;
	$ints* bitm_array = nullptr;
	int32_t fftFrameSize2 = 0;
};

			} // sound
		} // media
	} // sun
} // com

#pragma pop_macro("FFT")

#endif // _com_sun_media_sound_FFT_h_