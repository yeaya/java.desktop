#ifndef _com_sun_media_sound_AudioFloatInputStream$BytaArrayAudioFloatInputStream_h_
#define _com_sun_media_sound_AudioFloatInputStream$BytaArrayAudioFloatInputStream_h_
//$ class com.sun.media.sound.AudioFloatInputStream$BytaArrayAudioFloatInputStream
//$ extends com.sun.media.sound.AudioFloatInputStream

#include <com/sun/media/sound/AudioFloatInputStream.h>
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

class AudioFloatInputStream$BytaArrayAudioFloatInputStream : public ::com::sun::media::sound::AudioFloatInputStream {
	$class(AudioFloatInputStream$BytaArrayAudioFloatInputStream, $NO_CLASS_INIT, ::com::sun::media::sound::AudioFloatInputStream)
public:
	AudioFloatInputStream$BytaArrayAudioFloatInputStream();
	void init$(::com::sun::media::sound::AudioFloatConverter* converter, $bytes* buffer, int32_t offset, int32_t len);
	virtual int32_t available() override;
	virtual void close() override;
	virtual ::javax::sound::sampled::AudioFormat* getFormat() override;
	virtual int64_t getFrameLength() override;
	virtual void mark(int32_t readlimit) override;
	virtual bool markSupported() override;
	using ::com::sun::media::sound::AudioFloatInputStream::read;
	virtual int32_t read($floats* b, int32_t off, int32_t len) override;
	virtual void reset() override;
	virtual int64_t skip(int64_t len) override;
	int32_t pos = 0;
	int32_t markpos = 0;
	::com::sun::media::sound::AudioFloatConverter* converter = nullptr;
	::javax::sound::sampled::AudioFormat* format = nullptr;
	$bytes* buffer = nullptr;
	int32_t buffer_offset = 0;
	int32_t buffer_len = 0;
	int32_t framesize_pc = 0;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_AudioFloatInputStream$BytaArrayAudioFloatInputStream_h_