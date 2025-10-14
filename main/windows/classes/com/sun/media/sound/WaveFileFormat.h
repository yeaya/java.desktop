#ifndef _com_sun_media_sound_WaveFileFormat_h_
#define _com_sun_media_sound_WaveFileFormat_h_
//$ class com.sun.media.sound.WaveFileFormat
//$ extends com.sun.media.sound.StandardFileFormat

#include <com/sun/media/sound/StandardFileFormat.h>

#pragma push_macro("DATA_MAGIC")
#undef DATA_MAGIC
#pragma push_macro("FMT_MAGIC")
#undef FMT_MAGIC
#pragma push_macro("RIFF_MAGIC")
#undef RIFF_MAGIC
#pragma push_macro("STANDARD_FMT_CHUNK_SIZE")
#undef STANDARD_FMT_CHUNK_SIZE
#pragma push_macro("STANDARD_HEADER_SIZE")
#undef STANDARD_HEADER_SIZE
#pragma push_macro("WAVE_FORMAT_ADPCM")
#undef WAVE_FORMAT_ADPCM
#pragma push_macro("WAVE_FORMAT_ALAW")
#undef WAVE_FORMAT_ALAW
#pragma push_macro("WAVE_FORMAT_DIGIFIX")
#undef WAVE_FORMAT_DIGIFIX
#pragma push_macro("WAVE_FORMAT_DIGISTD")
#undef WAVE_FORMAT_DIGISTD
#pragma push_macro("WAVE_FORMAT_DVI_ADPCM")
#undef WAVE_FORMAT_DVI_ADPCM
#pragma push_macro("WAVE_FORMAT_EXTENSIBLE")
#undef WAVE_FORMAT_EXTENSIBLE
#pragma push_macro("WAVE_FORMAT_IEEE_FLOAT")
#undef WAVE_FORMAT_IEEE_FLOAT
#pragma push_macro("WAVE_FORMAT_MULAW")
#undef WAVE_FORMAT_MULAW
#pragma push_macro("WAVE_FORMAT_OKI_ADPCM")
#undef WAVE_FORMAT_OKI_ADPCM
#pragma push_macro("WAVE_FORMAT_PCM")
#undef WAVE_FORMAT_PCM
#pragma push_macro("WAVE_FORMAT_UNKNOWN")
#undef WAVE_FORMAT_UNKNOWN
#pragma push_macro("WAVE_IBM_FORMAT_ADPCM")
#undef WAVE_IBM_FORMAT_ADPCM
#pragma push_macro("WAVE_IBM_FORMAT_ALAW")
#undef WAVE_IBM_FORMAT_ALAW
#pragma push_macro("WAVE_IBM_FORMAT_MULAW")
#undef WAVE_IBM_FORMAT_MULAW
#pragma push_macro("WAVE_MAGIC")
#undef WAVE_MAGIC

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

class WaveFileFormat : public ::com::sun::media::sound::StandardFileFormat {
	$class(WaveFileFormat, $NO_CLASS_INIT, ::com::sun::media::sound::StandardFileFormat)
public:
	WaveFileFormat();
	void init$(::javax::sound::sampled::AudioFileFormat$Type* type, int64_t byteLength, ::javax::sound::sampled::AudioFormat* format, int64_t frameLength);
	static int32_t getFmtChunkSize(int32_t waveType);
	int32_t getHeaderSize();
	static int32_t getHeaderSize(int32_t waveType);
	int32_t getWaveType();
	int32_t waveType = 0;
	static const int32_t STANDARD_HEADER_SIZE = 28;
	static const int32_t STANDARD_FMT_CHUNK_SIZE = 16;
	static const int32_t RIFF_MAGIC = 0x52494646;
	static const int32_t WAVE_MAGIC = 0x57415645;
	static const int32_t FMT_MAGIC = 0x666D7420;
	static const int32_t DATA_MAGIC = 0x64617461;
	static const int32_t WAVE_FORMAT_UNKNOWN = 0;
	static const int32_t WAVE_FORMAT_PCM = 1;
	static const int32_t WAVE_FORMAT_ADPCM = 2;
	static const int32_t WAVE_FORMAT_IEEE_FLOAT = 3;
	static const int32_t WAVE_FORMAT_ALAW = 6;
	static const int32_t WAVE_FORMAT_MULAW = 7;
	static const int32_t WAVE_FORMAT_OKI_ADPCM = 16;
	static const int32_t WAVE_FORMAT_DIGISTD = 21;
	static const int32_t WAVE_FORMAT_DIGIFIX = 22;
	static const int32_t WAVE_IBM_FORMAT_MULAW = 257;
	static const int32_t WAVE_IBM_FORMAT_ALAW = 258;
	static const int32_t WAVE_IBM_FORMAT_ADPCM = 259;
	static const int32_t WAVE_FORMAT_DVI_ADPCM = 17;
	static const int32_t WAVE_FORMAT_SX7383 = 7175;
	static const int32_t WAVE_FORMAT_EXTENSIBLE = 0x0000FFFE;
};

			} // sound
		} // media
	} // sun
} // com

#pragma pop_macro("DATA_MAGIC")
#pragma pop_macro("FMT_MAGIC")
#pragma pop_macro("RIFF_MAGIC")
#pragma pop_macro("STANDARD_FMT_CHUNK_SIZE")
#pragma pop_macro("STANDARD_HEADER_SIZE")
#pragma pop_macro("WAVE_FORMAT_ADPCM")
#pragma pop_macro("WAVE_FORMAT_ALAW")
#pragma pop_macro("WAVE_FORMAT_DIGIFIX")
#pragma pop_macro("WAVE_FORMAT_DIGISTD")
#pragma pop_macro("WAVE_FORMAT_DVI_ADPCM")
#pragma pop_macro("WAVE_FORMAT_EXTENSIBLE")
#pragma pop_macro("WAVE_FORMAT_IEEE_FLOAT")
#pragma pop_macro("WAVE_FORMAT_MULAW")
#pragma pop_macro("WAVE_FORMAT_OKI_ADPCM")
#pragma pop_macro("WAVE_FORMAT_PCM")
#pragma pop_macro("WAVE_FORMAT_UNKNOWN")
#pragma pop_macro("WAVE_IBM_FORMAT_ADPCM")
#pragma pop_macro("WAVE_IBM_FORMAT_ALAW")
#pragma pop_macro("WAVE_IBM_FORMAT_MULAW")
#pragma pop_macro("WAVE_MAGIC")

#endif // _com_sun_media_sound_WaveFileFormat_h_