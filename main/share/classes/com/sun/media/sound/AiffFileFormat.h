#ifndef _com_sun_media_sound_AiffFileFormat_h_
#define _com_sun_media_sound_AiffFileFormat_h_
//$ class com.sun.media.sound.AiffFileFormat
//$ extends com.sun.media.sound.StandardFileFormat

#include <com/sun/media/sound/StandardFileFormat.h>

#pragma push_macro("AIFC_ACE2")
#undef AIFC_ACE2
#pragma push_macro("AIFC_ACE8")
#undef AIFC_ACE8
#pragma push_macro("AIFC_IMA4")
#undef AIFC_IMA4
#pragma push_macro("AIFC_MAC3")
#undef AIFC_MAC3
#pragma push_macro("AIFC_MAC6")
#undef AIFC_MAC6
#pragma push_macro("AIFC_MAGIC")
#undef AIFC_MAGIC
#pragma push_macro("AIFC_PCM")
#undef AIFC_PCM
#pragma push_macro("AIFC_ULAW")
#undef AIFC_ULAW
#pragma push_macro("AIFF_HEADERSIZE")
#undef AIFF_HEADERSIZE
#pragma push_macro("AIFF_MAGIC")
#undef AIFF_MAGIC
#pragma push_macro("AIFF_MAGIC2")
#undef AIFF_MAGIC2
#pragma push_macro("COMM_MAGIC")
#undef COMM_MAGIC
#pragma push_macro("FVER_MAGIC")
#undef FVER_MAGIC
#pragma push_macro("FVER_TIMESTAMP")
#undef FVER_TIMESTAMP
#pragma push_macro("SSND_MAGIC")
#undef SSND_MAGIC

namespace javax {
	namespace sound {
		namespace sampled {
			class AudioFileFormat$Type;
			class AudioFormat;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class AiffFileFormat : public ::com::sun::media::sound::StandardFileFormat {
	$class(AiffFileFormat, $NO_CLASS_INIT, ::com::sun::media::sound::StandardFileFormat)
public:
	AiffFileFormat();
	void init$(::javax::sound::sampled::AudioFileFormat$Type* type, int64_t byteLength, ::javax::sound::sampled::AudioFormat* format, int64_t frameLength);
	int32_t getCommChunkSize();
	int32_t getFverChunkSize();
	int32_t getHeaderSize();
	int32_t getSsndChunkOffset();
	static const int32_t AIFF_MAGIC = 0x464F524D;
	static const int32_t AIFC_MAGIC = 0x41494643;
	static const int32_t AIFF_MAGIC2 = 0x41494646;
	static const int32_t FVER_MAGIC = 0x46564552;
	static const int32_t FVER_TIMESTAMP = 0xA2805140;
	static const int32_t COMM_MAGIC = 0x434F4D4D;
	static const int32_t SSND_MAGIC = 0x53534E44;
	static const int32_t AIFC_PCM = 0x4E4F4E45;
	static const int32_t AIFC_ACE2 = 0x41434532;
	static const int32_t AIFC_ACE8 = 0x41434538;
	static const int32_t AIFC_MAC3 = 0x4D414333;
	static const int32_t AIFC_MAC6 = 0x4D414336;
	static const int32_t AIFC_ULAW = 0x756C6177;
	static const int32_t AIFC_IMA4 = 0x696D6134;
	static const int32_t AIFF_HEADERSIZE = 54;
	static const int32_t headerSize = AIFF_HEADERSIZE;
	static const int32_t commChunkSize = 26;
	static const int32_t fverChunkSize = 0;
};

			} // sound
		} // media
	} // sun
} // com

#pragma pop_macro("AIFC_ACE2")
#pragma pop_macro("AIFC_ACE8")
#pragma pop_macro("AIFC_IMA4")
#pragma pop_macro("AIFC_MAC3")
#pragma pop_macro("AIFC_MAC6")
#pragma pop_macro("AIFC_MAGIC")
#pragma pop_macro("AIFC_PCM")
#pragma pop_macro("AIFC_ULAW")
#pragma pop_macro("AIFF_HEADERSIZE")
#pragma pop_macro("AIFF_MAGIC")
#pragma pop_macro("AIFF_MAGIC2")
#pragma pop_macro("COMM_MAGIC")
#pragma pop_macro("FVER_MAGIC")
#pragma pop_macro("FVER_TIMESTAMP")
#pragma pop_macro("SSND_MAGIC")

#endif // _com_sun_media_sound_AiffFileFormat_h_