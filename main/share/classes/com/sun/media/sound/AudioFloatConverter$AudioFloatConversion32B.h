#ifndef _com_sun_media_sound_AudioFloatConverter$AudioFloatConversion32B_h_
#define _com_sun_media_sound_AudioFloatConverter$AudioFloatConversion32B_h_
//$ class com.sun.media.sound.AudioFloatConverter$AudioFloatConversion32B
//$ extends com.sun.media.sound.AudioFloatConverter

#include <com/sun/media/sound/AudioFloatConverter.h>
#include <java/lang/Array.h>

namespace java {
	namespace nio {
		class ByteBuffer;
		class FloatBuffer;
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class AudioFloatConverter$AudioFloatConversion32B : public ::com::sun::media::sound::AudioFloatConverter {
	$class(AudioFloatConverter$AudioFloatConversion32B, $NO_CLASS_INIT, ::com::sun::media::sound::AudioFloatConverter)
public:
	AudioFloatConverter$AudioFloatConversion32B();
	void init$();
	using ::com::sun::media::sound::AudioFloatConverter::toByteArray;
	virtual $bytes* toByteArray($floats* in_buff, int32_t in_offset, int32_t in_len, $bytes* out_buff, int32_t out_offset) override;
	using ::com::sun::media::sound::AudioFloatConverter::toFloatArray;
	virtual $floats* toFloatArray($bytes* in_buff, int32_t in_offset, $floats* out_buff, int32_t out_offset, int32_t out_len) override;
	::java::nio::ByteBuffer* bytebuffer = nullptr;
	::java::nio::FloatBuffer* floatbuffer = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_AudioFloatConverter$AudioFloatConversion32B_h_