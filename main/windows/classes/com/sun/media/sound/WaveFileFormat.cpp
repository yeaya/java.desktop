#include <com/sun/media/sound/WaveFileFormat.h>

#include <com/sun/media/sound/StandardFileFormat.h>
#include <javax/sound/sampled/AudioFileFormat$Type.h>
#include <javax/sound/sampled/AudioFormat$Encoding.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <jcpp.h>

#undef ALAW
#undef DATA_MAGIC
#undef FMT_MAGIC
#undef PCM_SIGNED
#undef PCM_UNSIGNED
#undef RIFF_MAGIC
#undef STANDARD_FMT_CHUNK_SIZE
#undef STANDARD_HEADER_SIZE
#undef ULAW
#undef WAVE_FORMAT_ADPCM
#undef WAVE_FORMAT_ALAW
#undef WAVE_FORMAT_DIGIFIX
#undef WAVE_FORMAT_DIGISTD
#undef WAVE_FORMAT_DVI_ADPCM
#undef WAVE_FORMAT_EXTENSIBLE
#undef WAVE_FORMAT_IEEE_FLOAT
#undef WAVE_FORMAT_MULAW
#undef WAVE_FORMAT_OKI_ADPCM
#undef WAVE_FORMAT_PCM
#undef WAVE_FORMAT_UNKNOWN
#undef WAVE_IBM_FORMAT_ADPCM
#undef WAVE_IBM_FORMAT_ALAW
#undef WAVE_IBM_FORMAT_MULAW
#undef WAVE_MAGIC

using $StandardFileFormat = ::com::sun::media::sound::StandardFileFormat;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AudioFileFormat$Type = ::javax::sound::sampled::AudioFileFormat$Type;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;
using $AudioFormat$Encoding = ::javax::sound::sampled::AudioFormat$Encoding;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _WaveFileFormat_FieldInfo_[] = {
	{"waveType", "I", nullptr, $PRIVATE | $FINAL, $field(WaveFileFormat, waveType)},
	{"STANDARD_HEADER_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WaveFileFormat, STANDARD_HEADER_SIZE)},
	{"STANDARD_FMT_CHUNK_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WaveFileFormat, STANDARD_FMT_CHUNK_SIZE)},
	{"RIFF_MAGIC", "I", nullptr, $STATIC | $FINAL, $constField(WaveFileFormat, RIFF_MAGIC)},
	{"WAVE_MAGIC", "I", nullptr, $STATIC | $FINAL, $constField(WaveFileFormat, WAVE_MAGIC)},
	{"FMT_MAGIC", "I", nullptr, $STATIC | $FINAL, $constField(WaveFileFormat, FMT_MAGIC)},
	{"DATA_MAGIC", "I", nullptr, $STATIC | $FINAL, $constField(WaveFileFormat, DATA_MAGIC)},
	{"WAVE_FORMAT_UNKNOWN", "I", nullptr, $STATIC | $FINAL, $constField(WaveFileFormat, WAVE_FORMAT_UNKNOWN)},
	{"WAVE_FORMAT_PCM", "I", nullptr, $STATIC | $FINAL, $constField(WaveFileFormat, WAVE_FORMAT_PCM)},
	{"WAVE_FORMAT_ADPCM", "I", nullptr, $STATIC | $FINAL, $constField(WaveFileFormat, WAVE_FORMAT_ADPCM)},
	{"WAVE_FORMAT_IEEE_FLOAT", "I", nullptr, $STATIC | $FINAL, $constField(WaveFileFormat, WAVE_FORMAT_IEEE_FLOAT)},
	{"WAVE_FORMAT_ALAW", "I", nullptr, $STATIC | $FINAL, $constField(WaveFileFormat, WAVE_FORMAT_ALAW)},
	{"WAVE_FORMAT_MULAW", "I", nullptr, $STATIC | $FINAL, $constField(WaveFileFormat, WAVE_FORMAT_MULAW)},
	{"WAVE_FORMAT_OKI_ADPCM", "I", nullptr, $STATIC | $FINAL, $constField(WaveFileFormat, WAVE_FORMAT_OKI_ADPCM)},
	{"WAVE_FORMAT_DIGISTD", "I", nullptr, $STATIC | $FINAL, $constField(WaveFileFormat, WAVE_FORMAT_DIGISTD)},
	{"WAVE_FORMAT_DIGIFIX", "I", nullptr, $STATIC | $FINAL, $constField(WaveFileFormat, WAVE_FORMAT_DIGIFIX)},
	{"WAVE_IBM_FORMAT_MULAW", "I", nullptr, $STATIC | $FINAL, $constField(WaveFileFormat, WAVE_IBM_FORMAT_MULAW)},
	{"WAVE_IBM_FORMAT_ALAW", "I", nullptr, $STATIC | $FINAL, $constField(WaveFileFormat, WAVE_IBM_FORMAT_ALAW)},
	{"WAVE_IBM_FORMAT_ADPCM", "I", nullptr, $STATIC | $FINAL, $constField(WaveFileFormat, WAVE_IBM_FORMAT_ADPCM)},
	{"WAVE_FORMAT_DVI_ADPCM", "I", nullptr, $STATIC | $FINAL, $constField(WaveFileFormat, WAVE_FORMAT_DVI_ADPCM)},
	{"WAVE_FORMAT_SX7383", "I", nullptr, $STATIC | $FINAL, $constField(WaveFileFormat, WAVE_FORMAT_SX7383)},
	{"WAVE_FORMAT_EXTENSIBLE", "I", nullptr, $STATIC | $FINAL, $constField(WaveFileFormat, WAVE_FORMAT_EXTENSIBLE)},
	{}
};

$MethodInfo _WaveFileFormat_MethodInfo_[] = {
	{"<init>", "(Ljavax/sound/sampled/AudioFileFormat$Type;JLjavax/sound/sampled/AudioFormat;J)V", nullptr, 0, $method(static_cast<void(WaveFileFormat::*)($AudioFileFormat$Type*,int64_t,$AudioFormat*,int64_t)>(&WaveFileFormat::init$))},
	{"getFmtChunkSize", "(I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&WaveFileFormat::getFmtChunkSize))},
	{"getHeaderSize", "()I", nullptr, 0, $method(static_cast<int32_t(WaveFileFormat::*)()>(&WaveFileFormat::getHeaderSize))},
	{"getHeaderSize", "(I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&WaveFileFormat::getHeaderSize))},
	{"getWaveType", "()I", nullptr, 0, $method(static_cast<int32_t(WaveFileFormat::*)()>(&WaveFileFormat::getWaveType))},
	{}
};

$ClassInfo _WaveFileFormat_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.media.sound.WaveFileFormat",
	"com.sun.media.sound.StandardFileFormat",
	nullptr,
	_WaveFileFormat_FieldInfo_,
	_WaveFileFormat_MethodInfo_
};

$Object* allocate$WaveFileFormat($Class* clazz) {
	return $of($alloc(WaveFileFormat));
}

void WaveFileFormat::init$($AudioFileFormat$Type* type, int64_t byteLength, $AudioFormat* format, int64_t frameLength) {
	$StandardFileFormat::init$(type, byteLength, format, frameLength);
	$var($AudioFormat$Encoding, encoding, $nc(format)->getEncoding());
	$init($AudioFormat$Encoding);
	if ($nc(encoding)->equals($AudioFormat$Encoding::ALAW)) {
		this->waveType = WaveFileFormat::WAVE_FORMAT_ALAW;
	} else {
		if (encoding->equals($AudioFormat$Encoding::ULAW)) {
			this->waveType = WaveFileFormat::WAVE_FORMAT_MULAW;
		} else {
			bool var$1 = encoding->equals($AudioFormat$Encoding::PCM_SIGNED);
			if (var$1 || encoding->equals($AudioFormat$Encoding::PCM_UNSIGNED)) {
				this->waveType = WaveFileFormat::WAVE_FORMAT_PCM;
			} else {
				this->waveType = WaveFileFormat::WAVE_FORMAT_UNKNOWN;
			}
		}
	}
}

int32_t WaveFileFormat::getWaveType() {
	return this->waveType;
}

int32_t WaveFileFormat::getHeaderSize() {
	return getHeaderSize(getWaveType());
}

int32_t WaveFileFormat::getHeaderSize(int32_t waveType) {
	$init(WaveFileFormat);
	return WaveFileFormat::STANDARD_HEADER_SIZE + getFmtChunkSize(waveType);
}

int32_t WaveFileFormat::getFmtChunkSize(int32_t waveType) {
	$init(WaveFileFormat);
	int32_t result = WaveFileFormat::STANDARD_FMT_CHUNK_SIZE;
	if (waveType != WaveFileFormat::WAVE_FORMAT_PCM) {
		result += 2;
	}
	return result;
}

WaveFileFormat::WaveFileFormat() {
}

$Class* WaveFileFormat::load$($String* name, bool initialize) {
	$loadClass(WaveFileFormat, name, initialize, &_WaveFileFormat_ClassInfo_, allocate$WaveFileFormat);
	return class$;
}

$Class* WaveFileFormat::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com