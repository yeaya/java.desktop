#include <com/sun/media/sound/WaveFileWriter.h>

#include <com/sun/media/sound/StandardFileFormat.h>
#include <com/sun/media/sound/SunFileWriter$NoCloseInputStream.h>
#include <com/sun/media/sound/SunFileWriter.h>
#include <com/sun/media/sound/WaveFileFormat.h>
#include <java/io/BufferedOutputStream.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/DataOutputStream.h>
#include <java/io/File.h>
#include <java/io/FileOutputStream.h>
#include <java/io/FilterOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/RandomAccessFile.h>
#include <java/io/SequenceInputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Objects.h>
#include <javax/sound/sampled/AudioFileFormat$Type.h>
#include <javax/sound/sampled/AudioFileFormat.h>
#include <javax/sound/sampled/AudioFormat$Encoding.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <javax/sound/sampled/AudioInputStream.h>
#include <javax/sound/sampled/AudioSystem.h>
#include <javax/sound/sampled/spi/AudioFileWriter.h>
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

using $AudioFileFormat$TypeArray = $Array<::javax::sound::sampled::AudioFileFormat$Type>;
using $StandardFileFormat = ::com::sun::media::sound::StandardFileFormat;
using $SunFileWriter = ::com::sun::media::sound::SunFileWriter;
using $SunFileWriter$NoCloseInputStream = ::com::sun::media::sound::SunFileWriter$NoCloseInputStream;
using $WaveFileFormat = ::com::sun::media::sound::WaveFileFormat;
using $BufferedOutputStream = ::java::io::BufferedOutputStream;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $DataOutputStream = ::java::io::DataOutputStream;
using $File = ::java::io::File;
using $FileOutputStream = ::java::io::FileOutputStream;
using $FilterOutputStream = ::java::io::FilterOutputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $SequenceInputStream = ::java::io::SequenceInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Objects = ::java::util::Objects;
using $AudioFileFormat = ::javax::sound::sampled::AudioFileFormat;
using $AudioFileFormat$Type = ::javax::sound::sampled::AudioFileFormat$Type;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;
using $AudioFormat$Encoding = ::javax::sound::sampled::AudioFormat$Encoding;
using $AudioInputStream = ::javax::sound::sampled::AudioInputStream;
using $AudioSystem = ::javax::sound::sampled::AudioSystem;
using $AudioFileWriter = ::javax::sound::sampled::spi::AudioFileWriter;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$MethodInfo _WaveFileWriter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WaveFileWriter::*)()>(&WaveFileWriter::init$))},
	{"getAudioFileFormat", "(Ljavax/sound/sampled/AudioFileFormat$Type;Ljavax/sound/sampled/AudioInputStream;)Ljavax/sound/sampled/AudioFileFormat;", nullptr, $PRIVATE, $method(static_cast<$AudioFileFormat*(WaveFileWriter::*)($AudioFileFormat$Type*,$AudioInputStream*)>(&WaveFileWriter::getAudioFileFormat))},
	{"getAudioFileTypes", "(Ljavax/sound/sampled/AudioInputStream;)[Ljavax/sound/sampled/AudioFileFormat$Type;", nullptr, $PUBLIC},
	{"getFileStream", "(Lcom/sun/media/sound/WaveFileFormat;Ljava/io/InputStream;)Ljava/io/InputStream;", nullptr, $PRIVATE, $method(static_cast<$InputStream*(WaveFileWriter::*)($WaveFileFormat*,$InputStream*)>(&WaveFileWriter::getFileStream)), "java.io.IOException"},
	{"write", "(Ljavax/sound/sampled/AudioInputStream;Ljavax/sound/sampled/AudioFileFormat$Type;Ljava/io/OutputStream;)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "(Ljavax/sound/sampled/AudioInputStream;Ljavax/sound/sampled/AudioFileFormat$Type;Ljava/io/File;)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"writeWaveFile", "(Ljava/io/InputStream;Lcom/sun/media/sound/WaveFileFormat;Ljava/io/OutputStream;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(WaveFileWriter::*)($InputStream*,$WaveFileFormat*,$OutputStream*)>(&WaveFileWriter::writeWaveFile)), "java.io.IOException"},
	{}
};

$ClassInfo _WaveFileWriter_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.WaveFileWriter",
	"com.sun.media.sound.SunFileWriter",
	nullptr,
	nullptr,
	_WaveFileWriter_MethodInfo_
};

$Object* allocate$WaveFileWriter($Class* clazz) {
	return $of($alloc(WaveFileWriter));
}

void WaveFileWriter::init$() {
	$init($AudioFileFormat$Type);
	$SunFileWriter::init$($$new($AudioFileFormat$TypeArray, {$AudioFileFormat$Type::WAVE}));
}

$AudioFileFormat$TypeArray* WaveFileWriter::getAudioFileTypes($AudioInputStream* stream) {
	$var($AudioFileFormat$TypeArray, filetypes, $new($AudioFileFormat$TypeArray, $nc(this->types)->length));
	$System::arraycopy(this->types, 0, filetypes, 0, $nc(this->types)->length);
	$var($AudioFormat, format, $nc(stream)->getFormat());
	$var($AudioFormat$Encoding, encoding, $nc(format)->getEncoding());
	$init($AudioFormat$Encoding);
	bool var$2 = $nc($AudioFormat$Encoding::ALAW)->equals(encoding);
	bool var$1 = var$2 || $nc($AudioFormat$Encoding::ULAW)->equals(encoding);
	bool var$0 = var$1 || $nc($AudioFormat$Encoding::PCM_SIGNED)->equals(encoding);
	if (var$0 || $nc($AudioFormat$Encoding::PCM_UNSIGNED)->equals(encoding)) {
		return filetypes;
	}
	return $new($AudioFileFormat$TypeArray, 0);
}

int32_t WaveFileWriter::write($AudioInputStream* stream, $AudioFileFormat$Type* fileType, $OutputStream* out) {
	$Objects::requireNonNull(stream);
	$Objects::requireNonNull(fileType);
	$Objects::requireNonNull(out);
	$var($WaveFileFormat, waveFileFormat, $cast($WaveFileFormat, getAudioFileFormat(fileType, stream)));
	if (stream->getFrameLength() == $AudioSystem::NOT_SPECIFIED) {
		$throwNew($IOException, "stream length not specified"_s);
	}
	return writeWaveFile(stream, waveFileFormat, out);
}

int32_t WaveFileWriter::write($AudioInputStream* stream, $AudioFileFormat$Type* fileType, $File* out) {
	$Objects::requireNonNull(stream);
	$Objects::requireNonNull(fileType);
	$Objects::requireNonNull(out);
	$var($WaveFileFormat, waveFileFormat, $cast($WaveFileFormat, getAudioFileFormat(fileType, stream)));
	int32_t bytesWritten = 0;
	{
		$var($FileOutputStream, fos, $new($FileOutputStream, out));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$var($BufferedOutputStream, bos, $new($BufferedOutputStream, fos));
					{
						$var($Throwable, var$1, nullptr);
						try {
							try {
								bytesWritten = writeWaveFile(stream, waveFileFormat, bos);
							} catch ($Throwable&) {
								$var($Throwable, t$, $catch());
								try {
									bos->close();
								} catch ($Throwable&) {
									$var($Throwable, x2, $catch());
									t$->addSuppressed(x2);
								}
								$throw(t$);
							}
						} catch ($Throwable&) {
							$assign(var$1, $catch());
						} /*finally*/ {
							bos->close();
						}
						if (var$1 != nullptr) {
							$throw(var$1);
						}
					}
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					try {
						fos->close();
					} catch ($Throwable&) {
						$var($Throwable, x2, $catch());
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				fos->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	if ($nc(waveFileFormat)->getByteLength() == $AudioSystem::NOT_SPECIFIED) {
		int32_t dataLength = bytesWritten - waveFileFormat->getHeaderSize();
		int32_t riffLength = dataLength + waveFileFormat->getHeaderSize() - 8;
		{
			$var($RandomAccessFile, raf, $new($RandomAccessFile, out, "rw"_s));
			{
				$var($Throwable, var$2, nullptr);
				try {
					try {
						raf->skipBytes(4);
						raf->writeInt(big2little(riffLength));
						raf->skipBytes(4 + 4 + 4 + $WaveFileFormat::getFmtChunkSize(waveFileFormat->getWaveType()) + 4);
						raf->writeInt(big2little(dataLength));
					} catch ($Throwable&) {
						$var($Throwable, t$, $catch());
						try {
							raf->close();
						} catch ($Throwable&) {
							$var($Throwable, x2, $catch());
							t$->addSuppressed(x2);
						}
						$throw(t$);
					}
				} catch ($Throwable&) {
					$assign(var$2, $catch());
				} /*finally*/ {
					raf->close();
				}
				if (var$2 != nullptr) {
					$throw(var$2);
				}
			}
		}
	}
	return bytesWritten;
}

$AudioFileFormat* WaveFileWriter::getAudioFileFormat($AudioFileFormat$Type* type, $AudioInputStream* stream) {
	if (!isFileTypeSupported(type, stream)) {
		$throwNew($IllegalArgumentException, $$str({"File type "_s, type, " not supported."_s}));
	}
	$var($AudioFormat, format, nullptr);
	$var($WaveFileFormat, fileFormat, nullptr);
	$init($AudioFormat$Encoding);
	$var($AudioFormat$Encoding, encoding, $AudioFormat$Encoding::PCM_SIGNED);
	$var($AudioFormat, streamFormat, $nc(stream)->getFormat());
	$var($AudioFormat$Encoding, streamEncoding, $nc(streamFormat)->getEncoding());
	float sampleRate = 0.0;
	int32_t sampleSizeInBits = 0;
	int32_t channels = 0;
	int32_t frameSize = 0;
	float frameRate = 0.0;
	int32_t fileSize = 0;
	int32_t waveType = $WaveFileFormat::WAVE_FORMAT_PCM;
	bool var$0 = $nc($AudioFormat$Encoding::ALAW)->equals(streamEncoding);
	if (var$0 || $nc($AudioFormat$Encoding::ULAW)->equals(streamEncoding)) {
		$assign(encoding, streamEncoding);
		sampleSizeInBits = streamFormat->getSampleSizeInBits();
		if ($nc(streamEncoding)->equals($AudioFormat$Encoding::ALAW)) {
			waveType = $WaveFileFormat::WAVE_FORMAT_ALAW;
		} else {
			waveType = $WaveFileFormat::WAVE_FORMAT_MULAW;
		}
	} else if (streamFormat->getSampleSizeInBits() == 8) {
		$assign(encoding, $AudioFormat$Encoding::PCM_UNSIGNED);
		sampleSizeInBits = 8;
	} else {
		$assign(encoding, $AudioFormat$Encoding::PCM_SIGNED);
		sampleSizeInBits = streamFormat->getSampleSizeInBits();
	}
	$var($AudioFormat$Encoding, var$1, encoding);
	float var$2 = streamFormat->getSampleRate();
	int32_t var$3 = sampleSizeInBits;
	int32_t var$4 = streamFormat->getChannels();
	int32_t var$5 = streamFormat->getFrameSize();
	$assign(format, $new($AudioFormat, var$1, var$2, var$3, var$4, var$5, streamFormat->getFrameRate(), false));
	if (stream->getFrameLength() != $AudioSystem::NOT_SPECIFIED) {
		int32_t var$7 = (int32_t)stream->getFrameLength();
		int32_t var$6 = var$7 * streamFormat->getFrameSize();
		fileSize = var$6 + $WaveFileFormat::getHeaderSize(waveType);
	} else {
		fileSize = $AudioSystem::NOT_SPECIFIED;
	}
	$init($AudioFileFormat$Type);
	$assign(fileFormat, $new($WaveFileFormat, $AudioFileFormat$Type::WAVE, fileSize, format, (int32_t)stream->getFrameLength()));
	return fileFormat;
}

int32_t WaveFileWriter::writeWaveFile($InputStream* in, $WaveFileFormat* waveFileFormat, $OutputStream* out) {
	int32_t bytesRead = 0;
	int32_t bytesWritten = 0;
	$var($InputStream, fileStream, getFileStream(waveFileFormat, in));
	$var($bytes, buffer, $new($bytes, $SunFileWriter::bisBufferSize));
	int32_t maxLength = $nc(waveFileFormat)->getByteLength();
	while ((bytesRead = $nc(fileStream)->read(buffer)) >= 0) {
		if (maxLength > 0) {
			if (bytesRead < maxLength) {
				$nc(out)->write(buffer, 0, bytesRead);
				bytesWritten += bytesRead;
				maxLength -= bytesRead;
			} else {
				$nc(out)->write(buffer, 0, maxLength);
				bytesWritten += maxLength;
				maxLength = 0;
				break;
			}
		} else {
			$nc(out)->write(buffer, 0, bytesRead);
			bytesWritten += bytesRead;
		}
	}
	return bytesWritten;
}

$InputStream* WaveFileWriter::getFileStream($WaveFileFormat* waveFileFormat, $InputStream* audioStream) {
	$var($AudioFormat, audioFormat, $nc(waveFileFormat)->getFormat());
	int32_t headerLength = waveFileFormat->getHeaderSize();
	int32_t riffMagic = $WaveFileFormat::RIFF_MAGIC;
	int32_t waveMagic = $WaveFileFormat::WAVE_MAGIC;
	int32_t fmtMagic = $WaveFileFormat::FMT_MAGIC;
	int32_t fmtLength = $WaveFileFormat::getFmtChunkSize(waveFileFormat->getWaveType());
	int16_t wav_type = (int16_t)waveFileFormat->getWaveType();
	int16_t channels = (int16_t)$nc(audioFormat)->getChannels();
	int16_t sampleSizeInBits = (int16_t)audioFormat->getSampleSizeInBits();
	int32_t sampleRate = $cast(int32_t, audioFormat->getSampleRate());
	int32_t frameSizeInBytes = audioFormat->getFrameSize();
	int32_t frameRate = $cast(int32_t, audioFormat->getFrameRate());
	int32_t avgBytesPerSec = channels * sampleSizeInBits * sampleRate / 8;
	int16_t blockAlign = (int16_t)((sampleSizeInBits / 8) * channels);
	int32_t dataMagic = $WaveFileFormat::DATA_MAGIC;
	int32_t dataLength = waveFileFormat->getFrameLength() * frameSizeInBytes;
	int32_t length = waveFileFormat->getByteLength();
	int32_t riffLength = dataLength + headerLength - 8;
	$var($AudioFormat, audioStreamFormat, nullptr);
	$var($AudioFormat$Encoding, encoding, nullptr);
	$var($InputStream, codedAudioStream, audioStream);
	if ($instanceOf($AudioInputStream, audioStream)) {
		$assign(audioStreamFormat, $nc(($cast($AudioInputStream, audioStream)))->getFormat());
		$assign(encoding, $nc(audioStreamFormat)->getEncoding());
		$init($AudioFormat$Encoding);
		if ($nc($AudioFormat$Encoding::PCM_SIGNED)->equals(encoding)) {
			if (sampleSizeInBits == 8) {
				wav_type = (int16_t)$WaveFileFormat::WAVE_FORMAT_PCM;
				$var($AudioFormat$Encoding, var$0, $AudioFormat$Encoding::PCM_UNSIGNED);
				float var$1 = audioStreamFormat->getSampleRate();
				int32_t var$2 = audioStreamFormat->getSampleSizeInBits();
				int32_t var$3 = audioStreamFormat->getChannels();
				int32_t var$4 = audioStreamFormat->getFrameSize();
				$assign(codedAudioStream, $AudioSystem::getAudioInputStream($$new($AudioFormat, var$0, var$1, var$2, var$3, var$4, audioStreamFormat->getFrameRate(), false), $cast($AudioInputStream, audioStream)));
			}
		}
		bool var$7 = $nc($AudioFormat$Encoding::PCM_SIGNED)->equals(encoding);
		bool var$6 = (var$7 && audioStreamFormat->isBigEndian());
		if (!var$6) {
			bool var$8 = $nc($AudioFormat$Encoding::PCM_UNSIGNED)->equals(encoding);
			var$6 = (var$8 && !audioStreamFormat->isBigEndian());
		}
		bool var$5 = var$6;
		if (!var$5) {
			bool var$9 = $nc($AudioFormat$Encoding::PCM_UNSIGNED)->equals(encoding);
			var$5 = (var$9 && audioStreamFormat->isBigEndian());
		}
		if (var$5) {
			if (sampleSizeInBits != 8) {
				wav_type = (int16_t)$WaveFileFormat::WAVE_FORMAT_PCM;
				$var($AudioFormat$Encoding, var$10, $AudioFormat$Encoding::PCM_SIGNED);
				float var$11 = audioStreamFormat->getSampleRate();
				int32_t var$12 = audioStreamFormat->getSampleSizeInBits();
				int32_t var$13 = audioStreamFormat->getChannels();
				int32_t var$14 = audioStreamFormat->getFrameSize();
				$assign(codedAudioStream, $AudioSystem::getAudioInputStream($$new($AudioFormat, var$10, var$11, var$12, var$13, var$14, audioStreamFormat->getFrameRate(), false), $cast($AudioInputStream, audioStream)));
			}
		}
	}
	$var($bytes, header, nullptr);
	{
		$var($ByteArrayOutputStream, baos, $new($ByteArrayOutputStream));
		{
			$var($Throwable, var$15, nullptr);
			try {
				try {
					$var($DataOutputStream, dos, $new($DataOutputStream, baos));
					{
						$var($Throwable, var$16, nullptr);
						try {
							try {
								dos->writeInt(riffMagic);
								dos->writeInt(big2little(riffLength));
								dos->writeInt(waveMagic);
								dos->writeInt(fmtMagic);
								dos->writeInt(big2little(fmtLength));
								dos->writeShort(big2littleShort(wav_type));
								dos->writeShort(big2littleShort(channels));
								dos->writeInt(big2little(sampleRate));
								dos->writeInt(big2little(avgBytesPerSec));
								dos->writeShort(big2littleShort(blockAlign));
								dos->writeShort(big2littleShort(sampleSizeInBits));
								if (wav_type != $WaveFileFormat::WAVE_FORMAT_PCM) {
									dos->writeShort(0);
								}
								dos->writeInt(dataMagic);
								dos->writeInt(big2little(dataLength));
								$assign(header, baos->toByteArray());
							} catch ($Throwable&) {
								$var($Throwable, t$, $catch());
								try {
									dos->close();
								} catch ($Throwable&) {
									$var($Throwable, x2, $catch());
									t$->addSuppressed(x2);
								}
								$throw(t$);
							}
						} catch ($Throwable&) {
							$assign(var$16, $catch());
						} /*finally*/ {
							dos->close();
						}
						if (var$16 != nullptr) {
							$throw(var$16);
						}
					}
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					try {
						baos->close();
					} catch ($Throwable&) {
						$var($Throwable, x2, $catch());
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$15, $catch());
			} /*finally*/ {
				baos->close();
			}
			if (var$15 != nullptr) {
				$throw(var$15);
			}
		}
	}
	$var($InputStream, var$17, static_cast<$InputStream*>($new($ByteArrayInputStream, header)));
	return $new($SequenceInputStream, var$17, $$new($SunFileWriter$NoCloseInputStream, this, codedAudioStream));
}

WaveFileWriter::WaveFileWriter() {
}

$Class* WaveFileWriter::load$($String* name, bool initialize) {
	$loadClass(WaveFileWriter, name, initialize, &_WaveFileWriter_ClassInfo_, allocate$WaveFileWriter);
	return class$;
}

$Class* WaveFileWriter::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com