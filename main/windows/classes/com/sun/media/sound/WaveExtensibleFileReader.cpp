#include <com/sun/media/sound/WaveExtensibleFileReader.h>

#include <com/sun/media/sound/RIFFReader.h>
#include <com/sun/media/sound/StandardFileFormat.h>
#include <com/sun/media/sound/SunFileReader.h>
#include <com/sun/media/sound/WaveExtensibleFileReader$GUID.h>
#include <com/sun/media/sound/WaveFileFormat.h>
#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <javax/sound/sampled/AudioFileFormat$Type.h>
#include <javax/sound/sampled/AudioFileFormat.h>
#include <javax/sound/sampled/AudioFormat$Encoding.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <javax/sound/sampled/AudioInputStream.h>
#include <javax/sound/sampled/UnsupportedAudioFileException.h>
#include <jcpp.h>

#undef PCM_FLOAT
#undef PCM_SIGNED
#undef PCM_UNSIGNED
#undef SUBTYPE_IEEE_FLOAT
#undef SUBTYPE_PCM
#undef WAVE
#undef WAVE_FORMAT_EXTENSIBLE

using $RIFFReader = ::com::sun::media::sound::RIFFReader;
using $StandardFileFormat = ::com::sun::media::sound::StandardFileFormat;
using $SunFileReader = ::com::sun::media::sound::SunFileReader;
using $WaveExtensibleFileReader$GUID = ::com::sun::media::sound::WaveExtensibleFileReader$GUID;
using $WaveFileFormat = ::com::sun::media::sound::WaveFileFormat;
using $InputStream = ::java::io::InputStream;
using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $AudioFileFormat = ::javax::sound::sampled::AudioFileFormat;
using $AudioFileFormat$Type = ::javax::sound::sampled::AudioFileFormat$Type;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;
using $AudioFormat$Encoding = ::javax::sound::sampled::AudioFormat$Encoding;
using $AudioInputStream = ::javax::sound::sampled::AudioInputStream;
using $UnsupportedAudioFileException = ::javax::sound::sampled::UnsupportedAudioFileException;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _WaveExtensibleFileReader_FieldInfo_[] = {
	{"channelnames", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WaveExtensibleFileReader, channelnames)},
	{"allchannelnames", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WaveExtensibleFileReader, allchannelnames)},
	{"SUBTYPE_PCM", "Lcom/sun/media/sound/WaveExtensibleFileReader$GUID;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WaveExtensibleFileReader, SUBTYPE_PCM)},
	{"SUBTYPE_IEEE_FLOAT", "Lcom/sun/media/sound/WaveExtensibleFileReader$GUID;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WaveExtensibleFileReader, SUBTYPE_IEEE_FLOAT)},
	{}
};

$MethodInfo _WaveExtensibleFileReader_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WaveExtensibleFileReader::*)()>(&WaveExtensibleFileReader::init$))},
	{"decodeChannelMask", "(J)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)(int64_t)>(&WaveExtensibleFileReader::decodeChannelMask))},
	{"getAudioFileFormatImpl", "(Ljava/io/InputStream;)Lcom/sun/media/sound/StandardFileFormat;", nullptr, 0, nullptr, "javax.sound.sampled.UnsupportedAudioFileException,java.io.IOException"},
	{"getAudioInputStream", "(Ljava/io/InputStream;)Ljavax/sound/sampled/AudioInputStream;", nullptr, $PUBLIC, nullptr, "javax.sound.sampled.UnsupportedAudioFileException,java.io.IOException"},
	{}
};

$InnerClassInfo _WaveExtensibleFileReader_InnerClassesInfo_[] = {
	{"com.sun.media.sound.WaveExtensibleFileReader$GUID", "com.sun.media.sound.WaveExtensibleFileReader", "GUID", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _WaveExtensibleFileReader_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.WaveExtensibleFileReader",
	"com.sun.media.sound.SunFileReader",
	nullptr,
	_WaveExtensibleFileReader_FieldInfo_,
	_WaveExtensibleFileReader_MethodInfo_,
	nullptr,
	nullptr,
	_WaveExtensibleFileReader_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.media.sound.WaveExtensibleFileReader$GUID"
};

$Object* allocate$WaveExtensibleFileReader($Class* clazz) {
	return $of($alloc(WaveExtensibleFileReader));
}

$StringArray* WaveExtensibleFileReader::channelnames = nullptr;
$StringArray* WaveExtensibleFileReader::allchannelnames = nullptr;
$WaveExtensibleFileReader$GUID* WaveExtensibleFileReader::SUBTYPE_PCM = nullptr;
$WaveExtensibleFileReader$GUID* WaveExtensibleFileReader::SUBTYPE_IEEE_FLOAT = nullptr;

void WaveExtensibleFileReader::init$() {
	$SunFileReader::init$();
}

$String* WaveExtensibleFileReader::decodeChannelMask(int64_t channelmask) {
	$init(WaveExtensibleFileReader);
	$var($StringBuilder, sb, $new($StringBuilder));
	int64_t m = 1;
	for (int32_t i = 0; i < $nc(WaveExtensibleFileReader::allchannelnames)->length; ++i) {
		if (((int64_t)(channelmask & (uint64_t)m)) != (int64_t)0) {
			if (i < $nc(WaveExtensibleFileReader::channelnames)->length) {
				sb->append($nc(WaveExtensibleFileReader::channelnames)->get(i))->append(u' ');
			} else {
				sb->append($nc(WaveExtensibleFileReader::allchannelnames)->get(i))->append(u' ');
			}
		}
		m *= 2;
	}
	if (sb->length() == 0) {
		return nullptr;
	}
	return sb->substring(0, sb->length() - 1);
}

$StandardFileFormat* WaveExtensibleFileReader::getAudioFileFormatImpl($InputStream* stream) {
	$useLocalCurrentObjectStackCache();
	$var($RIFFReader, riffiterator, $new($RIFFReader, stream));
	if (!$nc($(riffiterator->getFormat()))->equals("RIFF"_s)) {
		$throwNew($UnsupportedAudioFileException);
	}
	if (!$nc($(riffiterator->getType()))->equals("WAVE"_s)) {
		$throwNew($UnsupportedAudioFileException);
	}
	bool fmt_found = false;
	bool data_found = false;
	int32_t channels = 1;
	int64_t samplerate = 1;
	int32_t framesize = 1;
	int32_t bits = 1;
	int64_t dataSize = 0;
	int32_t validBitsPerSample = 1;
	int64_t channelMask = 0;
	$var($WaveExtensibleFileReader$GUID, subFormat, nullptr);
	while (riffiterator->hasNextChunk()) {
		$var($RIFFReader, chunk, riffiterator->nextChunk());
		if ($nc($($nc(chunk)->getFormat()))->equals("fmt "_s)) {
			fmt_found = true;
			int32_t format = chunk->readUnsignedShort();
			if (format != $WaveFileFormat::WAVE_FORMAT_EXTENSIBLE) {
				$throwNew($UnsupportedAudioFileException);
			}
			channels = chunk->readUnsignedShort();
			samplerate = chunk->readUnsignedInt();
			chunk->readUnsignedInt();
			framesize = chunk->readUnsignedShort();
			bits = chunk->readUnsignedShort();
			int32_t cbSize = chunk->readUnsignedShort();
			if (cbSize != 22) {
				$throwNew($UnsupportedAudioFileException);
			}
			validBitsPerSample = chunk->readUnsignedShort();
			if (validBitsPerSample > bits) {
				$throwNew($UnsupportedAudioFileException);
			}
			channelMask = chunk->readUnsignedInt();
			$assign(subFormat, $WaveExtensibleFileReader$GUID::read(chunk));
		}
		if ($nc($($nc(chunk)->getFormat()))->equals("data"_s)) {
			dataSize = chunk->getSize();
			data_found = true;
			break;
		}
	}
	if (!fmt_found || !data_found) {
		$throwNew($UnsupportedAudioFileException);
	}
	$var($Map, p, $new($HashMap));
	$var($String, s_channelmask, decodeChannelMask(channelMask));
	if (s_channelmask != nullptr) {
		p->put("channelOrder"_s, s_channelmask);
	}
	if (channelMask != 0) {
		p->put("channelMask"_s, $($Long::valueOf(channelMask)));
	}
	p->put("validBitsPerSample"_s, $($Integer::valueOf(validBitsPerSample)));
	$var($AudioFormat, audioformat, nullptr);
	if ($nc(subFormat)->equals(WaveExtensibleFileReader::SUBTYPE_PCM)) {
		if (bits == 8) {
			$init($AudioFormat$Encoding);
			$assign(audioformat, $new($AudioFormat, $AudioFormat$Encoding::PCM_UNSIGNED, (float)samplerate, bits, channels, framesize, (float)samplerate, false, p));
		} else {
			$init($AudioFormat$Encoding);
			$assign(audioformat, $new($AudioFormat, $AudioFormat$Encoding::PCM_SIGNED, (float)samplerate, bits, channels, framesize, (float)samplerate, false, p));
		}
	} else if (subFormat->equals(WaveExtensibleFileReader::SUBTYPE_IEEE_FLOAT)) {
		$init($AudioFormat$Encoding);
		$assign(audioformat, $new($AudioFormat, $AudioFormat$Encoding::PCM_FLOAT, (float)samplerate, bits, channels, framesize, (float)samplerate, false, p));
	} else {
		$throwNew($UnsupportedAudioFileException);
	}
	$init($AudioFileFormat$Type);
	return $new($StandardFileFormat, $AudioFileFormat$Type::WAVE, audioformat, $div(dataSize, $nc(audioformat)->getFrameSize()));
}

$AudioInputStream* WaveExtensibleFileReader::getAudioInputStream($InputStream* stream) {
	$useLocalCurrentObjectStackCache();
	$var($StandardFileFormat, format, $cast($StandardFileFormat, getAudioFileFormat(stream)));
	$var($AudioFormat, af, $nc(format)->getFormat());
	int64_t length = format->getLongFrameLength();
	$var($RIFFReader, riffiterator, $new($RIFFReader, stream));
	while (riffiterator->hasNextChunk()) {
		$var($RIFFReader, chunk, riffiterator->nextChunk());
		if ($nc($($nc(chunk)->getFormat()))->equals("data"_s)) {
			return $new($AudioInputStream, chunk, af, length);
		}
	}
	$throwNew($UnsupportedAudioFileException);
}

void clinit$WaveExtensibleFileReader($Class* class$) {
	$assignStatic(WaveExtensibleFileReader::channelnames, $new($StringArray, {
		"FL"_s,
		"FR"_s,
		"FC"_s,
		"LF"_s,
		"BL"_s,
		"BR"_s,
		"FLC"_s,
		"FLR"_s,
		"BC"_s,
		"SL"_s,
		"SR"_s,
		"TC"_s,
		"TFL"_s,
		"TFC"_s,
		"TFR"_s,
		"TBL"_s,
		"TBC"_s,
		"TBR"_s
	}));
	$assignStatic(WaveExtensibleFileReader::allchannelnames, $new($StringArray, {
		"w1"_s,
		"w2"_s,
		"w3"_s,
		"w4"_s,
		"w5"_s,
		"w6"_s,
		"w7"_s,
		"w8"_s,
		"w9"_s,
		"w10"_s,
		"w11"_s,
		"w12"_s,
		"w13"_s,
		"w14"_s,
		"w15"_s,
		"w16"_s,
		"w17"_s,
		"w18"_s,
		"w19"_s,
		"w20"_s,
		"w21"_s,
		"w22"_s,
		"w23"_s,
		"w24"_s,
		"w25"_s,
		"w26"_s,
		"w27"_s,
		"w28"_s,
		"w29"_s,
		"w30"_s,
		"w31"_s,
		"w32"_s,
		"w33"_s,
		"w34"_s,
		"w35"_s,
		"w36"_s,
		"w37"_s,
		"w38"_s,
		"w39"_s,
		"w40"_s,
		"w41"_s,
		"w42"_s,
		"w43"_s,
		"w44"_s,
		"w45"_s,
		"w46"_s,
		"w47"_s,
		"w48"_s,
		"w49"_s,
		"w50"_s,
		"w51"_s,
		"w52"_s,
		"w53"_s,
		"w54"_s,
		"w55"_s,
		"w56"_s,
		"w57"_s,
		"w58"_s,
		"w59"_s,
		"w60"_s,
		"w61"_s,
		"w62"_s,
		"w63"_s,
		"w64"_s
	}));
	$assignStatic(WaveExtensibleFileReader::SUBTYPE_PCM, $new($WaveExtensibleFileReader$GUID, 1, 0, 16, 128, 0, 0, 170, 0, 56, 155, 113));
	$assignStatic(WaveExtensibleFileReader::SUBTYPE_IEEE_FLOAT, $new($WaveExtensibleFileReader$GUID, 3, 0, 16, 128, 0, 0, 170, 0, 56, 155, 113));
}

WaveExtensibleFileReader::WaveExtensibleFileReader() {
}

$Class* WaveExtensibleFileReader::load$($String* name, bool initialize) {
	$loadClass(WaveExtensibleFileReader, name, initialize, &_WaveExtensibleFileReader_ClassInfo_, clinit$WaveExtensibleFileReader, allocate$WaveExtensibleFileReader);
	return class$;
}

$Class* WaveExtensibleFileReader::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com