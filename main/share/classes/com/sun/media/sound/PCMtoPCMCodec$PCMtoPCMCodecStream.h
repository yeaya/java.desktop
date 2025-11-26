#ifndef _com_sun_media_sound_PCMtoPCMCodec$PCMtoPCMCodecStream_h_
#define _com_sun_media_sound_PCMtoPCMCodec$PCMtoPCMCodecStream_h_
//$ class com.sun.media.sound.PCMtoPCMCodec$PCMtoPCMCodecStream
//$ extends javax.sound.sampled.AudioInputStream

#include <java/lang/Array.h>
#include <javax/sound/sampled/AudioInputStream.h>

#pragma push_macro("PCM_SIGNED_BE2UNSIGNED_LE")
#undef PCM_SIGNED_BE2UNSIGNED_LE
#pragma push_macro("PCM_SIGNED_LE2UNSIGNED_BE")
#undef PCM_SIGNED_LE2UNSIGNED_BE
#pragma push_macro("PCM_SWITCH_ENDIAN")
#undef PCM_SWITCH_ENDIAN
#pragma push_macro("PCM_SWITCH_SIGNED_8BIT")
#undef PCM_SWITCH_SIGNED_8BIT
#pragma push_macro("PCM_SWITCH_SIGNED_BE")
#undef PCM_SWITCH_SIGNED_BE
#pragma push_macro("PCM_SWITCH_SIGNED_LE")
#undef PCM_SWITCH_SIGNED_LE
#pragma push_macro("PCM_UNSIGNED_BE2SIGNED_LE")
#undef PCM_UNSIGNED_BE2SIGNED_LE
#pragma push_macro("PCM_UNSIGNED_LE2SIGNED_BE")
#undef PCM_UNSIGNED_LE2SIGNED_BE

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class PCMtoPCMCodec;
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

class PCMtoPCMCodec$PCMtoPCMCodecStream : public ::javax::sound::sampled::AudioInputStream {
	$class(PCMtoPCMCodec$PCMtoPCMCodecStream, $NO_CLASS_INIT, ::javax::sound::sampled::AudioInputStream)
public:
	PCMtoPCMCodec$PCMtoPCMCodecStream();
	void init$(::com::sun::media::sound::PCMtoPCMCodec* this$0, ::javax::sound::sampled::AudioInputStream* stream, ::javax::sound::sampled::AudioFormat* outputFormat);
	virtual int32_t read() override;
	virtual int32_t read($bytes* b) override;
	virtual int32_t read($bytes* b, int32_t off, int32_t len) override;
	void switchEndian($bytes* b, int32_t off, int32_t len, int32_t readCount);
	void switchSigned8bit($bytes* b, int32_t off, int32_t len, int32_t readCount);
	void switchSignedBE($bytes* b, int32_t off, int32_t len, int32_t readCount);
	void switchSignedLE($bytes* b, int32_t off, int32_t len, int32_t readCount);
	::com::sun::media::sound::PCMtoPCMCodec* this$0 = nullptr;
	static const int32_t PCM_SWITCH_SIGNED_8BIT = 1;
	static const int32_t PCM_SWITCH_ENDIAN = 2;
	static const int32_t PCM_SWITCH_SIGNED_LE = 3;
	static const int32_t PCM_SWITCH_SIGNED_BE = 4;
	static const int32_t PCM_UNSIGNED_LE2SIGNED_BE = 5;
	static const int32_t PCM_SIGNED_LE2UNSIGNED_BE = 6;
	static const int32_t PCM_UNSIGNED_BE2SIGNED_LE = 7;
	static const int32_t PCM_SIGNED_BE2UNSIGNED_LE = 8;
	int32_t sampleSizeInBytes = 0;
	int32_t conversionType = 0;
};

			} // sound
		} // media
	} // sun
} // com

#pragma pop_macro("PCM_SIGNED_BE2UNSIGNED_LE")
#pragma pop_macro("PCM_SIGNED_LE2UNSIGNED_BE")
#pragma pop_macro("PCM_SWITCH_ENDIAN")
#pragma pop_macro("PCM_SWITCH_SIGNED_8BIT")
#pragma pop_macro("PCM_SWITCH_SIGNED_BE")
#pragma pop_macro("PCM_SWITCH_SIGNED_LE")
#pragma pop_macro("PCM_UNSIGNED_BE2SIGNED_LE")
#pragma pop_macro("PCM_UNSIGNED_LE2SIGNED_BE")

#endif // _com_sun_media_sound_PCMtoPCMCodec$PCMtoPCMCodecStream_h_