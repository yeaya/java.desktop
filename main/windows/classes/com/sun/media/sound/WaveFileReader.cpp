#include <com/sun/media/sound/WaveFileReader.h>

#include <com/sun/media/sound/StandardFileFormat.h>
#include <com/sun/media/sound/SunFileReader.h>
#include <com/sun/media/sound/WaveFileFormat.h>
#include <java/io/DataInputStream.h>
#include <java/io/EOFException.h>
#include <java/io/InputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/sound/sampled/AudioFileFormat$Type.h>
#include <javax/sound/sampled/AudioFormat$Encoding.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <javax/sound/sampled/AudioInputStream.h>
#include <javax/sound/sampled/AudioSystem.h>
#include <javax/sound/sampled/UnsupportedAudioFileException.h>
#include <jcpp.h>

#undef ALAW
#undef DATA_MAGIC
#undef FMT_MAGIC
#undef NOT_SPECIFIED
#undef PCM_SIGNED
#undef PCM_UNSIGNED
#undef RIFF_MAGIC
#undef ULAW
#undef WAVE
#undef WAVE_FORMAT_ALAW
#undef WAVE_FORMAT_MULAW
#undef WAVE_FORMAT_PCM
#undef WAVE_MAGIC

using $StandardFileFormat = ::com::sun::media::sound::StandardFileFormat;
using $SunFileReader = ::com::sun::media::sound::SunFileReader;
using $WaveFileFormat = ::com::sun::media::sound::WaveFileFormat;
using $DataInputStream = ::java::io::DataInputStream;
using $EOFException = ::java::io::EOFException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AudioFileFormat$Type = ::javax::sound::sampled::AudioFileFormat$Type;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;
using $AudioFormat$Encoding = ::javax::sound::sampled::AudioFormat$Encoding;
using $AudioInputStream = ::javax::sound::sampled::AudioInputStream;
using $AudioSystem = ::javax::sound::sampled::AudioSystem;
using $UnsupportedAudioFileException = ::javax::sound::sampled::UnsupportedAudioFileException;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$MethodInfo _WaveFileReader_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WaveFileReader::*)()>(&WaveFileReader::init$))},
	{"getAudioFileFormatImpl", "(Ljava/io/InputStream;)Lcom/sun/media/sound/StandardFileFormat;", nullptr, 0, nullptr, "javax.sound.sampled.UnsupportedAudioFileException,java.io.IOException"},
	{"getAudioInputStream", "(Ljava/io/InputStream;)Ljavax/sound/sampled/AudioInputStream;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "javax.sound.sampled.UnsupportedAudioFileException,java.io.IOException"},
	{}
};

$ClassInfo _WaveFileReader_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.WaveFileReader",
	"com.sun.media.sound.SunFileReader",
	nullptr,
	nullptr,
	_WaveFileReader_MethodInfo_
};

$Object* allocate$WaveFileReader($Class* clazz) {
	return $of($alloc(WaveFileReader));
}

void WaveFileReader::init$() {
	$SunFileReader::init$();
}

$StandardFileFormat* WaveFileReader::getAudioFileFormatImpl($InputStream* stream) {
	$useLocalCurrentObjectStackCache();
	int32_t nread = 0;
	int32_t fmt = 0;
	int32_t length = 0;
	int32_t wav_type = 0;
	int16_t channels = 0;
	int64_t sampleRate = 0;
	int64_t avgBytesPerSec = 0;
	int16_t blockAlign = 0;
	int32_t sampleSizeInBits = 0;
	$var($AudioFormat$Encoding, encoding, nullptr);
	$var($DataInputStream, dis, $new($DataInputStream, stream));
	int32_t magic = dis->readInt();
	int64_t fileLength = (int64_t)(rllong(dis) & (uint64_t)(int64_t)0x00000000FFFFFFFF);
	int32_t waveMagic = dis->readInt();
	int64_t totallength = 0;
	if (fileLength <= 0) {
		fileLength = $AudioSystem::NOT_SPECIFIED;
		totallength = $AudioSystem::NOT_SPECIFIED;
	} else {
		totallength = fileLength + 8;
	}
	if ((magic != $WaveFileFormat::RIFF_MAGIC) || (waveMagic != $WaveFileFormat::WAVE_MAGIC)) {
		$throwNew($UnsupportedAudioFileException, "not a WAVE file"_s);
	}
	while (true) {
		try {
			fmt = dis->readInt();
			nread += 4;
			if (fmt == $WaveFileFormat::FMT_MAGIC) {
				break;
			} else {
				length = rllong(dis);
				nread += 4;
				if (length % 2 > 0) {
					++length;
				}
				nread += dis->skipBytes(length);
			}
		} catch ($EOFException&) {
			$var($EOFException, eof, $catch());
			$throwNew($UnsupportedAudioFileException, "Not a valid WAV file"_s);
		}
	}
	length = rllong(dis);
	nread += 4;
	int32_t endLength = nread + length;
	wav_type = rlshort(dis);
	nread += 2;
	if (wav_type == $WaveFileFormat::WAVE_FORMAT_PCM) {
		$init($AudioFormat$Encoding);
		$assign(encoding, $AudioFormat$Encoding::PCM_SIGNED);
	} else if (wav_type == $WaveFileFormat::WAVE_FORMAT_ALAW) {
		$init($AudioFormat$Encoding);
		$assign(encoding, $AudioFormat$Encoding::ALAW);
	} else if (wav_type == $WaveFileFormat::WAVE_FORMAT_MULAW) {
		$init($AudioFormat$Encoding);
		$assign(encoding, $AudioFormat$Encoding::ULAW);
	} else {
		$throwNew($UnsupportedAudioFileException, "Not a supported WAV file"_s);
	}
	channels = rlshort(dis);
	nread += 2;
	if (channels <= 0) {
		$throwNew($UnsupportedAudioFileException, "Invalid number of channels"_s);
	}
	sampleRate = rllong(dis);
	nread += 4;
	avgBytesPerSec = rllong(dis);
	nread += 4;
	blockAlign = rlshort(dis);
	nread += 2;
	sampleSizeInBits = (int32_t)rlshort(dis);
	nread += 2;
	if (sampleSizeInBits <= 0) {
		$throwNew($UnsupportedAudioFileException, "Invalid bitsPerSample"_s);
	}
	$init($AudioFormat$Encoding);
	if ((sampleSizeInBits == 8) && $nc(encoding)->equals($AudioFormat$Encoding::PCM_SIGNED)) {
		$assign(encoding, $AudioFormat$Encoding::PCM_UNSIGNED);
	}
	if (length % 2 != 0) {
		length += 1;
	}
	if (endLength > nread) {
		nread += dis->skipBytes(endLength - nread);
	}
	nread = 0;
	while (true) {
		try {
			int32_t datahdr = dis->readInt();
			nread += 4;
			if (datahdr == $WaveFileFormat::DATA_MAGIC) {
				break;
			} else {
				int32_t thisLength = rllong(dis);
				nread += 4;
				if (thisLength % 2 > 0) {
					++thisLength;
				}
				nread += dis->skipBytes(thisLength);
			}
		} catch ($EOFException&) {
			$var($EOFException, eof, $catch());
			$throwNew($UnsupportedAudioFileException, "Not a valid WAV file"_s);
		}
	}
	int64_t dataLength = (int64_t)(rllong(dis) & (uint64_t)(int64_t)0x00000000FFFFFFFF);
	nread += 4;
	int32_t frameSize = calculatePCMFrameSize(sampleSizeInBits, channels);
	$var($AudioFormat, format, $new($AudioFormat, encoding, (float)sampleRate, sampleSizeInBits, channels, frameSize, (float)sampleRate, false));
	int64_t frameLength = $div(dataLength, format->getFrameSize());
	$init($AudioFileFormat$Type);
	return $new($WaveFileFormat, $AudioFileFormat$Type::WAVE, totallength, format, frameLength);
}

$AudioInputStream* WaveFileReader::getAudioInputStream($InputStream* stream) {
	return $SunFileReader::getAudioInputStream(stream);
}

WaveFileReader::WaveFileReader() {
}

$Class* WaveFileReader::load$($String* name, bool initialize) {
	$loadClass(WaveFileReader, name, initialize, &_WaveFileReader_ClassInfo_, allocate$WaveFileReader);
	return class$;
}

$Class* WaveFileReader::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com