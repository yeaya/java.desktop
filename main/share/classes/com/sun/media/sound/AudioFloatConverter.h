#ifndef _com_sun_media_sound_AudioFloatConverter_h_
#define _com_sun_media_sound_AudioFloatConverter_h_
//$ class com.sun.media.sound.AudioFloatConverter
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace sound {
		namespace sampled {
			class AudioFormat;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class AudioFloatConverter : public ::java::lang::Object {
	$class(AudioFloatConverter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AudioFloatConverter();
	void init$();
	static ::com::sun::media::sound::AudioFloatConverter* getConverter(::javax::sound::sampled::AudioFormat* format);
	::javax::sound::sampled::AudioFormat* getFormat();
	virtual $bytes* toByteArray($floats* in_buff, int32_t in_offset, int32_t in_len, $bytes* out_buff, int32_t out_offset) {return nullptr;}
	$bytes* toByteArray($floats* in_buff, int32_t in_len, $bytes* out_buff, int32_t out_offset);
	$bytes* toByteArray($floats* in_buff, int32_t in_offset, int32_t in_len, $bytes* out_buff);
	$bytes* toByteArray($floats* in_buff, int32_t in_len, $bytes* out_buff);
	$bytes* toByteArray($floats* in_buff, $bytes* out_buff);
	virtual $floats* toFloatArray($bytes* in_buff, int32_t in_offset, $floats* out_buff, int32_t out_offset, int32_t out_len) {return nullptr;}
	$floats* toFloatArray($bytes* in_buff, $floats* out_buff, int32_t out_offset, int32_t out_len);
	$floats* toFloatArray($bytes* in_buff, int32_t in_offset, $floats* out_buff, int32_t out_len);
	$floats* toFloatArray($bytes* in_buff, $floats* out_buff, int32_t out_len);
	$floats* toFloatArray($bytes* in_buff, $floats* out_buff);
	::javax::sound::sampled::AudioFormat* format = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_AudioFloatConverter_h_