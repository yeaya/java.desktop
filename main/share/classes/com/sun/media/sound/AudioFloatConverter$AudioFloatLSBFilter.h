#ifndef _com_sun_media_sound_AudioFloatConverter$AudioFloatLSBFilter_h_
#define _com_sun_media_sound_AudioFloatConverter$AudioFloatLSBFilter_h_
//$ class com.sun.media.sound.AudioFloatConverter$AudioFloatLSBFilter
//$ extends com.sun.media.sound.AudioFloatConverter

#include <com/sun/media/sound/AudioFloatConverter.h>
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

class AudioFloatConverter$AudioFloatLSBFilter : public ::com::sun::media::sound::AudioFloatConverter {
	$class(AudioFloatConverter$AudioFloatLSBFilter, $NO_CLASS_INIT, ::com::sun::media::sound::AudioFloatConverter)
public:
	AudioFloatConverter$AudioFloatLSBFilter();
	void init$(::com::sun::media::sound::AudioFloatConverter* converter, ::javax::sound::sampled::AudioFormat* format);
	using ::com::sun::media::sound::AudioFloatConverter::toByteArray;
	virtual $bytes* toByteArray($floats* in_buff, int32_t in_offset, int32_t in_len, $bytes* out_buff, int32_t out_offset) override;
	using ::com::sun::media::sound::AudioFloatConverter::toFloatArray;
	virtual $floats* toFloatArray($bytes* in_buff, int32_t in_offset, $floats* out_buff, int32_t out_offset, int32_t out_len) override;
	::com::sun::media::sound::AudioFloatConverter* converter = nullptr;
	int32_t offset = 0;
	int32_t stepsize = 0;
	int8_t mask = 0;
	$bytes* mask_buffer = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_AudioFloatConverter$AudioFloatLSBFilter_h_