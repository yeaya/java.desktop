#ifndef _com_sun_media_sound_UlawCodec$UlawCodecStream_h_
#define _com_sun_media_sound_UlawCodec$UlawCodecStream_h_
//$ class com.sun.media.sound.UlawCodec$UlawCodecStream
//$ extends javax.sound.sampled.AudioInputStream

#include <java/lang/Array.h>
#include <javax/sound/sampled/AudioInputStream.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class UlawCodec;
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

class UlawCodec$UlawCodecStream : public ::javax::sound::sampled::AudioInputStream {
	$class(UlawCodec$UlawCodecStream, $NO_CLASS_INIT, ::javax::sound::sampled::AudioInputStream)
public:
	UlawCodec$UlawCodecStream();
	void init$(::com::sun::media::sound::UlawCodec* this$0, ::javax::sound::sampled::AudioInputStream* stream, ::javax::sound::sampled::AudioFormat* outputFormat);
	virtual int32_t read() override;
	virtual int32_t read($bytes* b) override;
	virtual int32_t read($bytes* b, int32_t off, int32_t len) override;
	int16_t search(int16_t val, $shorts* table, int16_t size);
	virtual int64_t skip(int64_t n) override;
	::com::sun::media::sound::UlawCodec* this$0 = nullptr;
	static const int32_t tempBufferSize = 64;
	$bytes* tempBuffer = nullptr;
	bool encode = false;
	::javax::sound::sampled::AudioFormat* encodeFormat = nullptr;
	::javax::sound::sampled::AudioFormat* decodeFormat = nullptr;
	$bytes* tabByte1 = nullptr;
	$bytes* tabByte2 = nullptr;
	int32_t highByte = 0;
	int32_t lowByte = 0;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_UlawCodec$UlawCodecStream_h_