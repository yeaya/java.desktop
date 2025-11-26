#ifndef _com_sun_media_sound_SoftAudioBuffer_h_
#define _com_sun_media_sound_SoftAudioBuffer_h_
//$ class com.sun.media.sound.SoftAudioBuffer
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class AudioFloatConverter;
			}
		}
	}
}
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

class SoftAudioBuffer : public ::java::lang::Object {
	$class(SoftAudioBuffer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SoftAudioBuffer();
	void init$(int32_t size, ::javax::sound::sampled::AudioFormat* format);
	$floats* array();
	void clear();
	void get($bytes* buffer, int32_t channel);
	::javax::sound::sampled::AudioFormat* getFormat();
	int32_t getSize();
	bool isSilent();
	void swap(::com::sun::media::sound::SoftAudioBuffer* swap);
	int32_t size = 0;
	$floats* buffer = nullptr;
	bool empty = false;
	::javax::sound::sampled::AudioFormat* format = nullptr;
	::com::sun::media::sound::AudioFloatConverter* converter = nullptr;
	$bytes* converter_buffer = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SoftAudioBuffer_h_