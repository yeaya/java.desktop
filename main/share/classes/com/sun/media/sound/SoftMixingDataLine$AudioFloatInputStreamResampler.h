#ifndef _com_sun_media_sound_SoftMixingDataLine$AudioFloatInputStreamResampler_h_
#define _com_sun_media_sound_SoftMixingDataLine$AudioFloatInputStreamResampler_h_
//$ class com.sun.media.sound.SoftMixingDataLine$AudioFloatInputStreamResampler
//$ extends com.sun.media.sound.AudioFloatInputStream

#include <com/sun/media/sound/AudioFloatInputStream.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class SoftAbstractResampler;
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

class SoftMixingDataLine$AudioFloatInputStreamResampler : public ::com::sun::media::sound::AudioFloatInputStream {
	$class(SoftMixingDataLine$AudioFloatInputStreamResampler, $NO_CLASS_INIT, ::com::sun::media::sound::AudioFloatInputStream)
public:
	SoftMixingDataLine$AudioFloatInputStreamResampler();
	void init$(::com::sun::media::sound::AudioFloatInputStream* ais, ::javax::sound::sampled::AudioFormat* format);
	virtual int32_t available() override;
	virtual void close() override;
	virtual ::javax::sound::sampled::AudioFormat* getFormat() override;
	virtual int64_t getFrameLength() override;
	virtual void mark(int32_t readlimit) override;
	virtual bool markSupported() override;
	using ::com::sun::media::sound::AudioFloatInputStream::read;
	virtual int32_t read($floats* b, int32_t off, int32_t len) override;
	void readNextBuffer();
	virtual void reset() override;
	virtual int64_t skip(int64_t len) override;
	::com::sun::media::sound::AudioFloatInputStream* ais = nullptr;
	::javax::sound::sampled::AudioFormat* targetFormat = nullptr;
	$floats* skipbuffer = nullptr;
	::com::sun::media::sound::SoftAbstractResampler* resampler = nullptr;
	$floats* pitch = nullptr;
	$floats* ibuffer2 = nullptr;
	$Array<float, 2>* ibuffer = nullptr;
	float ibuffer_index = 0.0;
	int32_t ibuffer_len = 0;
	int32_t nrofchannels = 0;
	$Array<float, 2>* cbuffer = nullptr;
	static const int32_t buffer_len = 512;
	int32_t pad = 0;
	int32_t pad2 = 0;
	$floats* ix = nullptr;
	$ints* ox = nullptr;
	$Array<float, 2>* mark_ibuffer = nullptr;
	float mark_ibuffer_index = 0.0;
	int32_t mark_ibuffer_len = 0;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SoftMixingDataLine$AudioFloatInputStreamResampler_h_