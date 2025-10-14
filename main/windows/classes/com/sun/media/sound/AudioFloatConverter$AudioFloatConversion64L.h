#ifndef _com_sun_media_sound_AudioFloatConverter$AudioFloatConversion64L_h_
#define _com_sun_media_sound_AudioFloatConverter$AudioFloatConversion64L_h_
//$ class com.sun.media.sound.AudioFloatConverter$AudioFloatConversion64L
//$ extends com.sun.media.sound.AudioFloatConverter

#include <com/sun/media/sound/AudioFloatConverter.h>
#include <java/lang/Array.h>

namespace java {
	namespace nio {
		class ByteBuffer;
		class DoubleBuffer;
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class AudioFloatConverter$AudioFloatConversion64L : public ::com::sun::media::sound::AudioFloatConverter {
	$class(AudioFloatConverter$AudioFloatConversion64L, $NO_CLASS_INIT, ::com::sun::media::sound::AudioFloatConverter)
public:
	AudioFloatConverter$AudioFloatConversion64L();
	void init$();
	using ::com::sun::media::sound::AudioFloatConverter::toByteArray;
	virtual $bytes* toByteArray($floats* in_buff, int32_t in_offset, int32_t in_len, $bytes* out_buff, int32_t out_offset) override;
	using ::com::sun::media::sound::AudioFloatConverter::toFloatArray;
	virtual $floats* toFloatArray($bytes* in_buff, int32_t in_offset, $floats* out_buff, int32_t out_offset, int32_t out_len) override;
	::java::nio::ByteBuffer* bytebuffer = nullptr;
	::java::nio::DoubleBuffer* floatbuffer = nullptr;
	$doubles* double_buff = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_AudioFloatConverter$AudioFloatConversion64L_h_