#include <com/sun/media/sound/AuFileReader.h>

#include <com/sun/media/sound/AuFileFormat.h>
#include <com/sun/media/sound/StandardFileFormat.h>
#include <com/sun/media/sound/SunFileReader.h>
#include <java/io/DataInputStream.h>
#include <java/io/InputStream.h>
#include <javax/sound/sampled/AudioFileFormat$Type.h>
#include <javax/sound/sampled/AudioFormat$Encoding.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <javax/sound/sampled/AudioInputStream.h>
#include <javax/sound/sampled/AudioSystem.h>
#include <javax/sound/sampled/UnsupportedAudioFileException.h>
#include <jcpp.h>

#undef ALAW
#undef AU
#undef AU_ALAW_8
#undef AU_DOUBLE
#undef AU_FLOAT
#undef AU_HEADERSIZE
#undef AU_LINEAR_16
#undef AU_LINEAR_24
#undef AU_LINEAR_32
#undef AU_LINEAR_8
#undef AU_SUN_MAGIC
#undef AU_ULAW_8
#undef NOT_SPECIFIED
#undef PCM_FLOAT
#undef PCM_SIGNED
#undef ULAW
#undef UNKNOWN_SIZE

using $AuFileFormat = ::com::sun::media::sound::AuFileFormat;
using $StandardFileFormat = ::com::sun::media::sound::StandardFileFormat;
using $SunFileReader = ::com::sun::media::sound::SunFileReader;
using $DataInputStream = ::java::io::DataInputStream;
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

$MethodInfo _AuFileReader_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AuFileReader::*)()>(&AuFileReader::init$))},
	{"getAudioFileFormatImpl", "(Ljava/io/InputStream;)Lcom/sun/media/sound/StandardFileFormat;", nullptr, 0, nullptr, "javax.sound.sampled.UnsupportedAudioFileException,java.io.IOException"},
	{"getAudioInputStream", "(Ljava/io/InputStream;)Ljavax/sound/sampled/AudioInputStream;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "javax.sound.sampled.UnsupportedAudioFileException,java.io.IOException"},
	{}
};

$ClassInfo _AuFileReader_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.AuFileReader",
	"com.sun.media.sound.SunFileReader",
	nullptr,
	nullptr,
	_AuFileReader_MethodInfo_
};

$Object* allocate$AuFileReader($Class* clazz) {
	return $of($alloc(AuFileReader));
}

void AuFileReader::init$() {
	$SunFileReader::init$();
}

$StandardFileFormat* AuFileReader::getAudioFileFormatImpl($InputStream* stream) {
	$useLocalCurrentObjectStackCache();
	$var($DataInputStream, dis, $new($DataInputStream, stream));
	int32_t magic = dis->readInt();
	if (magic != $AuFileFormat::AU_SUN_MAGIC) {
		$throwNew($UnsupportedAudioFileException, "not an AU file"_s);
	}
	int32_t headerSize = dis->readInt();
	if (headerSize < $AuFileFormat::AU_HEADERSIZE) {
		$throwNew($UnsupportedAudioFileException, "Invalid header size"_s);
	}
	int64_t dataSize = (int64_t)(dis->readInt() & (uint64_t)(int64_t)0x00000000FFFFFFFF);
	int32_t auType = dis->readInt();
	int32_t sampleRate = dis->readInt();
	if (sampleRate <= 0) {
		$throwNew($UnsupportedAudioFileException, "Invalid sample rate"_s);
	}
	int32_t channels = dis->readInt();
	if (channels <= 0) {
		$throwNew($UnsupportedAudioFileException, "Invalid number of channels"_s);
	}
	int32_t sampleSizeInBits = 0;
	$var($AudioFormat$Encoding, encoding, nullptr);
	switch (auType) {
	case $AuFileFormat::AU_ULAW_8:
		{
			$init($AudioFormat$Encoding);
			$assign(encoding, $AudioFormat$Encoding::ULAW);
			sampleSizeInBits = 8;
			break;
		}
	case $AuFileFormat::AU_ALAW_8:
		{
			$init($AudioFormat$Encoding);
			$assign(encoding, $AudioFormat$Encoding::ALAW);
			sampleSizeInBits = 8;
			break;
		}
	case $AuFileFormat::AU_LINEAR_8:
		{
			$init($AudioFormat$Encoding);
			$assign(encoding, $AudioFormat$Encoding::PCM_SIGNED);
			sampleSizeInBits = 8;
			break;
		}
	case $AuFileFormat::AU_LINEAR_16:
		{
			$init($AudioFormat$Encoding);
			$assign(encoding, $AudioFormat$Encoding::PCM_SIGNED);
			sampleSizeInBits = 16;
			break;
		}
	case $AuFileFormat::AU_LINEAR_24:
		{
			$init($AudioFormat$Encoding);
			$assign(encoding, $AudioFormat$Encoding::PCM_SIGNED);
			sampleSizeInBits = 24;
			break;
		}
	case $AuFileFormat::AU_LINEAR_32:
		{
			$init($AudioFormat$Encoding);
			$assign(encoding, $AudioFormat$Encoding::PCM_SIGNED);
			sampleSizeInBits = 32;
			break;
		}
	case $AuFileFormat::AU_FLOAT:
		{
			$init($AudioFormat$Encoding);
			$assign(encoding, $AudioFormat$Encoding::PCM_FLOAT);
			sampleSizeInBits = 32;
			break;
		}
	case $AuFileFormat::AU_DOUBLE:
		{
			$init($AudioFormat$Encoding);
			$assign(encoding, $AudioFormat$Encoding::PCM_FLOAT);
			sampleSizeInBits = 64;
			break;
		}
	default:
		{
			$throwNew($UnsupportedAudioFileException, "not a valid AU file"_s);
		}
	}
	dis->skipBytes(headerSize - $AuFileFormat::AU_HEADERSIZE);
	int32_t frameSize = calculatePCMFrameSize(sampleSizeInBits, channels);
	if (frameSize <= 0) {
		$throwNew($UnsupportedAudioFileException, "Invalid frame size"_s);
	}
	int64_t frameLength = $AudioSystem::NOT_SPECIFIED;
	int64_t byteLength = $AudioSystem::NOT_SPECIFIED;
	if (dataSize != $AuFileFormat::UNKNOWN_SIZE) {
		frameLength = $div(dataSize, frameSize);
		byteLength = dataSize + headerSize;
	}
	$var($AudioFormat, format, $new($AudioFormat, encoding, (float)sampleRate, sampleSizeInBits, channels, frameSize, (float)sampleRate, true));
	$init($AudioFileFormat$Type);
	return $new($AuFileFormat, $AudioFileFormat$Type::AU, byteLength, format, frameLength);
}

$AudioInputStream* AuFileReader::getAudioInputStream($InputStream* stream) {
	return $SunFileReader::getAudioInputStream(stream);
}

AuFileReader::AuFileReader() {
}

$Class* AuFileReader::load$($String* name, bool initialize) {
	$loadClass(AuFileReader, name, initialize, &_AuFileReader_ClassInfo_, allocate$AuFileReader);
	return class$;
}

$Class* AuFileReader::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com