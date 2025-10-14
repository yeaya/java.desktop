#include <com/sun/media/sound/WaveFloatFileReader.h>

#include <com/sun/media/sound/RIFFReader.h>
#include <com/sun/media/sound/StandardFileFormat.h>
#include <com/sun/media/sound/SunFileReader.h>
#include <com/sun/media/sound/WaveFileFormat.h>
#include <java/io/InputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/sound/sampled/AudioFileFormat$Type.h>
#include <javax/sound/sampled/AudioFileFormat.h>
#include <javax/sound/sampled/AudioFormat$Encoding.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <javax/sound/sampled/AudioInputStream.h>
#include <javax/sound/sampled/UnsupportedAudioFileException.h>
#include <jcpp.h>

#undef PCM_FLOAT
#undef WAVE
#undef WAVE_FORMAT_IEEE_FLOAT

using $RIFFReader = ::com::sun::media::sound::RIFFReader;
using $StandardFileFormat = ::com::sun::media::sound::StandardFileFormat;
using $SunFileReader = ::com::sun::media::sound::SunFileReader;
using $WaveFileFormat = ::com::sun::media::sound::WaveFileFormat;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
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

$MethodInfo _WaveFloatFileReader_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WaveFloatFileReader::*)()>(&WaveFloatFileReader::init$))},
	{"getAudioFileFormatImpl", "(Ljava/io/InputStream;)Lcom/sun/media/sound/StandardFileFormat;", nullptr, 0, nullptr, "javax.sound.sampled.UnsupportedAudioFileException,java.io.IOException"},
	{"getAudioInputStream", "(Ljava/io/InputStream;)Ljavax/sound/sampled/AudioInputStream;", nullptr, $PUBLIC, nullptr, "javax.sound.sampled.UnsupportedAudioFileException,java.io.IOException"},
	{}
};

$ClassInfo _WaveFloatFileReader_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.WaveFloatFileReader",
	"com.sun.media.sound.SunFileReader",
	nullptr,
	nullptr,
	_WaveFloatFileReader_MethodInfo_
};

$Object* allocate$WaveFloatFileReader($Class* clazz) {
	return $of($alloc(WaveFloatFileReader));
}

void WaveFloatFileReader::init$() {
	$SunFileReader::init$();
}

$StandardFileFormat* WaveFloatFileReader::getAudioFileFormatImpl($InputStream* stream) {
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
	while (riffiterator->hasNextChunk()) {
		$var($RIFFReader, chunk, riffiterator->nextChunk());
		if ($nc($($nc(chunk)->getFormat()))->equals("fmt "_s)) {
			fmt_found = true;
			int32_t format = chunk->readUnsignedShort();
			if (format != $WaveFileFormat::WAVE_FORMAT_IEEE_FLOAT) {
				$throwNew($UnsupportedAudioFileException);
			}
			channels = chunk->readUnsignedShort();
			samplerate = chunk->readUnsignedInt();
			chunk->readUnsignedInt();
			framesize = chunk->readUnsignedShort();
			bits = chunk->readUnsignedShort();
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
	$init($AudioFormat$Encoding);
	$var($AudioFormat, audioformat, $new($AudioFormat, $AudioFormat$Encoding::PCM_FLOAT, (float)samplerate, bits, channels, framesize, (float)samplerate, false));
	$init($AudioFileFormat$Type);
	return $new($StandardFileFormat, $AudioFileFormat$Type::WAVE, audioformat, $div(dataSize, audioformat->getFrameSize()));
}

$AudioInputStream* WaveFloatFileReader::getAudioInputStream($InputStream* stream) {
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

WaveFloatFileReader::WaveFloatFileReader() {
}

$Class* WaveFloatFileReader::load$($String* name, bool initialize) {
	$loadClass(WaveFloatFileReader, name, initialize, &_WaveFloatFileReader_ClassInfo_, allocate$WaveFloatFileReader);
	return class$;
}

$Class* WaveFloatFileReader::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com