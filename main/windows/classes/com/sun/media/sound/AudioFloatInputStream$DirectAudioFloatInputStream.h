#ifndef _com_sun_media_sound_AudioFloatInputStream$DirectAudioFloatInputStream_h_
#define _com_sun_media_sound_AudioFloatInputStream$DirectAudioFloatInputStream_h_
//$ class com.sun.media.sound.AudioFloatInputStream$DirectAudioFloatInputStream
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
			class AudioInputStream;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class AudioFloatInputStream$DirectAudioFloatInputStream : public ::com::sun::media::sound::AudioFloatInputStream {
	$class(AudioFloatInputStream$DirectAudioFloatInputStream, $NO_CLASS_INIT, ::com::sun::media::sound::AudioFloatInputStream)
public:
	AudioFloatInputStream$DirectAudioFloatInputStream();
	void init$(::javax::sound::sampled::AudioInputStream* stream);
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
	::javax::sound::sampled::AudioInputStream* stream = nullptr;
	::com::sun::media::sound::AudioFloatConverter* converter = nullptr;
	int32_t framesize_pc = 0;
	$bytes* buffer = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_AudioFloatInputStream$DirectAudioFloatInputStream_h_