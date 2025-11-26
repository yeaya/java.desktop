#ifndef _com_sun_media_sound_SoftMixingSourceDataLine$NonBlockingFloatInputStream_h_
#define _com_sun_media_sound_SoftMixingSourceDataLine$NonBlockingFloatInputStream_h_
//$ class com.sun.media.sound.SoftMixingSourceDataLine$NonBlockingFloatInputStream
//$ extends com.sun.media.sound.AudioFloatInputStream

#include <com/sun/media/sound/AudioFloatInputStream.h>
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

class SoftMixingSourceDataLine$NonBlockingFloatInputStream : public ::com::sun::media::sound::AudioFloatInputStream {
	$class(SoftMixingSourceDataLine$NonBlockingFloatInputStream, $NO_CLASS_INIT, ::com::sun::media::sound::AudioFloatInputStream)
public:
	SoftMixingSourceDataLine$NonBlockingFloatInputStream();
	void init$(::com::sun::media::sound::AudioFloatInputStream* ais);
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
	::com::sun::media::sound::AudioFloatInputStream* ais = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SoftMixingSourceDataLine$NonBlockingFloatInputStream_h_