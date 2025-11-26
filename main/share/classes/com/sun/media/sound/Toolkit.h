#ifndef _com_sun_media_sound_Toolkit_h_
#define _com_sun_media_sound_Toolkit_h_
//$ class com.sun.media.sound.Toolkit
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace sound {
		namespace sampled {
			class AudioFormat;
			class AudioInputStream;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class Toolkit : public ::java::lang::Object {
	$class(Toolkit, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Toolkit();
	void init$();
	static int64_t align(int64_t bytes, int32_t blockSize);
	static int32_t align(int32_t bytes, int32_t blockSize);
	static int64_t bytes2micros(::javax::sound::sampled::AudioFormat* format, int64_t bytes);
	static int64_t bytes2millis(::javax::sound::sampled::AudioFormat* format, int64_t bytes);
	static float dBToLinear(float dB);
	static int64_t frames2micros(::javax::sound::sampled::AudioFormat* format, int64_t frames);
	static void getByteSwapped($bytes* b, int32_t off, int32_t len);
	static ::javax::sound::sampled::AudioInputStream* getPCMConvertedAudioInputStream(::javax::sound::sampled::AudioInputStream* ais);
	static void getUnsigned8($bytes* b, int32_t off, int32_t len);
	static void isFullySpecifiedAudioFormat(::javax::sound::sampled::AudioFormat* format);
	static bool isFullySpecifiedPCMFormat(::javax::sound::sampled::AudioFormat* format);
	static float linearToDB(float linear);
	static int64_t micros2bytes(::javax::sound::sampled::AudioFormat* format, int64_t micros);
	static int64_t micros2frames(::javax::sound::sampled::AudioFormat* format, int64_t micros);
	static int64_t millis2bytes(::javax::sound::sampled::AudioFormat* format, int64_t millis);
	static void validateBuffer(int32_t frameSize, int32_t bufferSize);
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_Toolkit_h_