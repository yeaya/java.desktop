#include <com/sun/media/sound/AiffFileReader.h>

#include <com/sun/media/sound/AiffFileFormat.h>
#include <com/sun/media/sound/StandardFileFormat.h>
#include <com/sun/media/sound/SunFileReader.h>
#include <java/io/DataInputStream.h>
#include <java/io/InputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/Math.h>
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

#undef AIFC
#undef AIFC_MAGIC
#undef AIFC_PCM
#undef AIFC_ULAW
#undef AIFF
#undef AIFF_MAGIC
#undef COMM_MAGIC
#undef FVER_MAGIC
#undef HUGE
#undef NOT_SPECIFIED
#undef PCM_SIGNED
#undef SSND_MAGIC
#undef ULAW

using $AiffFileFormat = ::com::sun::media::sound::AiffFileFormat;
using $StandardFileFormat = ::com::sun::media::sound::StandardFileFormat;
using $SunFileReader = ::com::sun::media::sound::SunFileReader;
using $DataInputStream = ::java::io::DataInputStream;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Math = ::java::lang::Math;
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

$MethodInfo _AiffFileReader_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AiffFileReader::*)()>(&AiffFileReader::init$))},
	{"getAudioFileFormatImpl", "(Ljava/io/InputStream;)Lcom/sun/media/sound/StandardFileFormat;", nullptr, 0, nullptr, "javax.sound.sampled.UnsupportedAudioFileException,java.io.IOException"},
	{"getAudioInputStream", "(Ljava/io/InputStream;)Ljavax/sound/sampled/AudioInputStream;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "javax.sound.sampled.UnsupportedAudioFileException,java.io.IOException"},
	{"read_ieee_extended", "(Ljava/io/DataInputStream;)D", nullptr, $PRIVATE, $method(static_cast<double(AiffFileReader::*)($DataInputStream*)>(&AiffFileReader::read_ieee_extended)), "java.io.IOException"},
	{}
};

$ClassInfo _AiffFileReader_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.AiffFileReader",
	"com.sun.media.sound.SunFileReader",
	nullptr,
	nullptr,
	_AiffFileReader_MethodInfo_
};

$Object* allocate$AiffFileReader($Class* clazz) {
	return $of($alloc(AiffFileReader));
}

void AiffFileReader::init$() {
	$SunFileReader::init$();
}

$StandardFileFormat* AiffFileReader::getAudioFileFormatImpl($InputStream* stream) {
	$var($DataInputStream, dis, $new($DataInputStream, stream));
	$var($AudioFormat, format, nullptr);
	int32_t magic = dis->readInt();
	if (magic != $AiffFileFormat::AIFF_MAGIC) {
		$throwNew($UnsupportedAudioFileException, "not an AIFF file"_s);
	}
	int64_t frameLength = 0;
	int32_t length = dis->readInt();
	int32_t iffType = dis->readInt();
	int64_t totallength = 0;
	if (length <= 0) {
		length = $AudioSystem::NOT_SPECIFIED;
		totallength = $AudioSystem::NOT_SPECIFIED;
	} else {
		totallength = length + 8;
	}
	bool aifc = false;
	if (iffType == $AiffFileFormat::AIFC_MAGIC) {
		aifc = true;
	}
	bool ssndFound = false;
	while (!ssndFound) {
		int32_t chunkName = dis->readInt();
		int32_t chunkLen = dis->readInt();
		int32_t chunkRead = 0;
		{
			int32_t channels = 0;
			int32_t sampleSizeInBits = 0;
			float sampleRate = 0;
			$var($AudioFormat$Encoding, encoding, nullptr)
			int32_t frameSize = 0;
			int32_t dataOffset = 0;
			int32_t blocksize = 0;
			switch (chunkName) {
			case $AiffFileFormat::FVER_MAGIC:
				{
					break;
				}
			case $AiffFileFormat::COMM_MAGIC:
				{
					if ((!aifc && chunkLen < 18) || (aifc && chunkLen < 22)) {
						$throwNew($UnsupportedAudioFileException, "Invalid AIFF/COMM chunksize"_s);
					}
					channels = dis->readUnsignedShort();
					if (channels <= 0) {
						$throwNew($UnsupportedAudioFileException, "Invalid number of channels"_s);
					}
					frameLength = (int64_t)(dis->readInt() & (uint64_t)(int64_t)0x00000000FFFFFFFF);
					sampleSizeInBits = dis->readUnsignedShort();
					if (sampleSizeInBits < 1 || sampleSizeInBits > 32) {
						$throwNew($UnsupportedAudioFileException, "Invalid AIFF/COMM sampleSize"_s);
					}
					sampleRate = (float)read_ieee_extended(dis);
					chunkRead += (2 + 4 + 2 + 10);
					$init($AudioFormat$Encoding);
					$assign(encoding, $AudioFormat$Encoding::PCM_SIGNED);
					if (aifc) {
						int32_t enc = dis->readInt();
						chunkRead += 4;
						switch (enc) {
						case $AiffFileFormat::AIFC_PCM:
							{
								$assign(encoding, $AudioFormat$Encoding::PCM_SIGNED);
								break;
							}
						case $AiffFileFormat::AIFC_ULAW:
							{
								$assign(encoding, $AudioFormat$Encoding::ULAW);
								sampleSizeInBits = 8;
								break;
							}
						default:
							{
								$throwNew($UnsupportedAudioFileException, "Invalid AIFF encoding"_s);
							}
						}
					}
					frameSize = calculatePCMFrameSize(sampleSizeInBits, channels);
					$assign(format, $new($AudioFormat, encoding, sampleRate, sampleSizeInBits, channels, frameSize, sampleRate, true));
					break;
				}
			case $AiffFileFormat::SSND_MAGIC:
				{
					dataOffset = dis->readInt();
					blocksize = dis->readInt();
					chunkRead += 8;
					ssndFound = true;
					break;
				}
			}
		}
		if (!ssndFound) {
			int32_t toSkip = chunkLen - chunkRead;
			if (toSkip > 0) {
				dis->skipBytes(toSkip);
			}
		}
	}
	if (format == nullptr) {
		$throwNew($UnsupportedAudioFileException, "missing COMM chunk"_s);
	}
	$init($AudioFileFormat$Type);
	$var($AudioFileFormat$Type, type, aifc ? $AudioFileFormat$Type::AIFC : $AudioFileFormat$Type::AIFF);
	return $new($AiffFileFormat, type, totallength, format, frameLength);
}

double AiffFileReader::read_ieee_extended($DataInputStream* dis) {
	double f = (double)0;
	int32_t expon = 0;
	int64_t hiMant = 0;
	int64_t loMant = 0;
	int64_t t1 = 0;
	int64_t t2 = 0;
	double HUGE = 3.4028234663852886E38;
	expon = $nc(dis)->readUnsignedShort();
	t1 = (int64_t)dis->readUnsignedShort();
	t2 = (int64_t)dis->readUnsignedShort();
	hiMant = (t1 << 16) | t2;
	t1 = (int64_t)dis->readUnsignedShort();
	t2 = (int64_t)dis->readUnsignedShort();
	loMant = (t1 << 16) | t2;
	if (expon == 0 && hiMant == 0 && loMant == 0) {
		f = (double)0;
	} else if (expon == 32767) {
		f = HUGE;
	} else {
		expon -= 16383;
		expon -= 31;
		f = (hiMant * $Math::pow((double)2, (double)expon));
		expon -= 32;
		f += (loMant * $Math::pow((double)2, (double)expon));
	}
	return f;
}

$AudioInputStream* AiffFileReader::getAudioInputStream($InputStream* stream) {
	return $SunFileReader::getAudioInputStream(stream);
}

AiffFileReader::AiffFileReader() {
}

$Class* AiffFileReader::load$($String* name, bool initialize) {
	$loadClass(AiffFileReader, name, initialize, &_AiffFileReader_ClassInfo_, allocate$AiffFileReader);
	return class$;
}

$Class* AiffFileReader::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com