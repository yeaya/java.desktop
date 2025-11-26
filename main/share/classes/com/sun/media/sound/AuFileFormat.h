#ifndef _com_sun_media_sound_AuFileFormat_h_
#define _com_sun_media_sound_AuFileFormat_h_
//$ class com.sun.media.sound.AuFileFormat
//$ extends com.sun.media.sound.StandardFileFormat

#include <com/sun/media/sound/StandardFileFormat.h>

#pragma push_macro("AU_ALAW_8")
#undef AU_ALAW_8
#pragma push_macro("AU_DOUBLE")
#undef AU_DOUBLE
#pragma push_macro("AU_FLOAT")
#undef AU_FLOAT
#pragma push_macro("AU_HEADERSIZE")
#undef AU_HEADERSIZE
#pragma push_macro("AU_LINEAR_16")
#undef AU_LINEAR_16
#pragma push_macro("AU_LINEAR_24")
#undef AU_LINEAR_24
#pragma push_macro("AU_LINEAR_32")
#undef AU_LINEAR_32
#pragma push_macro("AU_LINEAR_8")
#undef AU_LINEAR_8
#pragma push_macro("AU_SUN_MAGIC")
#undef AU_SUN_MAGIC
#pragma push_macro("AU_ULAW_8")
#undef AU_ULAW_8
#pragma push_macro("UNKNOWN_SIZE")
#undef UNKNOWN_SIZE

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

class AuFileFormat : public ::com::sun::media::sound::StandardFileFormat {
	$class(AuFileFormat, $NO_CLASS_INIT, ::com::sun::media::sound::StandardFileFormat)
public:
	AuFileFormat();
	void init$(::javax::sound::sampled::AudioFileFormat$Type* type, int64_t byteLength, ::javax::sound::sampled::AudioFormat* format, int64_t frameLength);
	int32_t getAuType();
	static const int32_t AU_SUN_MAGIC = 0x2E736E64;
	static const int32_t AU_ULAW_8 = 1;
	static const int32_t AU_LINEAR_8 = 2;
	static const int32_t AU_LINEAR_16 = 3;
	static const int32_t AU_LINEAR_24 = 4;
	static const int32_t AU_LINEAR_32 = 5;
	static const int32_t AU_FLOAT = 6;
	static const int32_t AU_DOUBLE = 7;
	static const int32_t AU_ALAW_8 = 27;
	static const int32_t AU_HEADERSIZE = 24;
	static const int64_t UNKNOWN_SIZE = (int64_t)0x00000000FFFFFFFF;
	int32_t auType = 0;
};

			} // sound
		} // media
	} // sun
} // com

#pragma pop_macro("AU_ALAW_8")
#pragma pop_macro("AU_DOUBLE")
#pragma pop_macro("AU_FLOAT")
#pragma pop_macro("AU_HEADERSIZE")
#pragma pop_macro("AU_LINEAR_16")
#pragma pop_macro("AU_LINEAR_24")
#pragma pop_macro("AU_LINEAR_32")
#pragma pop_macro("AU_LINEAR_8")
#pragma pop_macro("AU_SUN_MAGIC")
#pragma pop_macro("AU_ULAW_8")
#pragma pop_macro("UNKNOWN_SIZE")

#endif // _com_sun_media_sound_AuFileFormat_h_