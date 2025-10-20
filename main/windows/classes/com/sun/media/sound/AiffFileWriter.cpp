#include <com/sun/media/sound/AiffFileWriter.h>

#include <com/sun/media/sound/AiffFileFormat.h>
#include <com/sun/media/sound/StandardFileFormat.h>
#include <com/sun/media/sound/SunFileWriter$NoCloseInputStream.h>
#include <com/sun/media/sound/SunFileWriter.h>
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
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
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

#undef AIFC_PCM
#undef AIFF
#undef AIFF_HEADERSIZE
#undef AIFF_MAGIC
#undef AIFF_MAGIC2
#undef ALAW
#undef COMM_MAGIC
#undef DOUBLE_EXPONENT_LENGTH
#undef DOUBLE_EXPONENT_MASK
#undef DOUBLE_EXPONENT_OFFSET
#undef DOUBLE_MANTISSA_LENGTH
#undef DOUBLE_MANTISSA_MASK
#undef DOUBLE_SIGN_MASK
#undef EXTENDED_EXPONENT_LENGTH
#undef EXTENDED_EXPONENT_OFFSET
#undef EXTENDED_INTEGER_MASK
#undef EXTENDED_MANTISSA_LENGTH
#undef NOT_SPECIFIED
#undef PCM_SIGNED
#undef PCM_UNSIGNED
#undef SSND_MAGIC
#undef ULAW

using $AudioFileFormat$TypeArray = $Array<::javax::sound::sampled::AudioFileFormat$Type>;
using $AiffFileFormat = ::com::sun::media::sound::AiffFileFormat;
using $StandardFileFormat = ::com::sun::media::sound::StandardFileFormat;
using $SunFileWriter = ::com::sun::media::sound::SunFileWriter;
using $SunFileWriter$NoCloseInputStream = ::com::sun::media::sound::SunFileWriter$NoCloseInputStream;
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
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
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

$FieldInfo _AiffFileWriter_FieldInfo_[] = {
	{"DOUBLE_MANTISSA_LENGTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AiffFileWriter, DOUBLE_MANTISSA_LENGTH)},
	{"DOUBLE_EXPONENT_LENGTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AiffFileWriter, DOUBLE_EXPONENT_LENGTH)},
	{"DOUBLE_SIGN_MASK", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AiffFileWriter, DOUBLE_SIGN_MASK)},
	{"DOUBLE_EXPONENT_MASK", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AiffFileWriter, DOUBLE_EXPONENT_MASK)},
	{"DOUBLE_MANTISSA_MASK", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AiffFileWriter, DOUBLE_MANTISSA_MASK)},
	{"DOUBLE_EXPONENT_OFFSET", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AiffFileWriter, DOUBLE_EXPONENT_OFFSET)},
	{"EXTENDED_EXPONENT_OFFSET", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AiffFileWriter, EXTENDED_EXPONENT_OFFSET)},
	{"EXTENDED_MANTISSA_LENGTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AiffFileWriter, EXTENDED_MANTISSA_LENGTH)},
	{"EXTENDED_EXPONENT_LENGTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AiffFileWriter, EXTENDED_EXPONENT_LENGTH)},
	{"EXTENDED_INTEGER_MASK", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AiffFileWriter, EXTENDED_INTEGER_MASK)},
	{}
};

$MethodInfo _AiffFileWriter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AiffFileWriter::*)()>(&AiffFileWriter::init$))},
	{"getAudioFileFormat", "(Ljavax/sound/sampled/AudioFileFormat$Type;Ljavax/sound/sampled/AudioInputStream;)Ljavax/sound/sampled/AudioFileFormat;", nullptr, $PRIVATE, $method(static_cast<$AudioFileFormat*(AiffFileWriter::*)($AudioFileFormat$Type*,$AudioInputStream*)>(&AiffFileWriter::getAudioFileFormat))},
	{"getAudioFileTypes", "(Ljavax/sound/sampled/AudioInputStream;)[Ljavax/sound/sampled/AudioFileFormat$Type;", nullptr, $PUBLIC},
	{"getFileStream", "(Lcom/sun/media/sound/AiffFileFormat;Ljava/io/InputStream;)Ljava/io/InputStream;", nullptr, $PRIVATE, $method(static_cast<$InputStream*(AiffFileWriter::*)($AiffFileFormat*,$InputStream*)>(&AiffFileWriter::getFileStream)), "java.io.IOException"},
	{"write", "(Ljavax/sound/sampled/AudioInputStream;Ljavax/sound/sampled/AudioFileFormat$Type;Ljava/io/OutputStream;)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "(Ljavax/sound/sampled/AudioInputStream;Ljavax/sound/sampled/AudioFileFormat$Type;Ljava/io/File;)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"writeAiffFile", "(Ljava/io/InputStream;Lcom/sun/media/sound/AiffFileFormat;Ljava/io/OutputStream;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(AiffFileWriter::*)($InputStream*,$AiffFileFormat*,$OutputStream*)>(&AiffFileWriter::writeAiffFile)), "java.io.IOException"},
	{"write_ieee_extended", "(Ljava/io/DataOutputStream;F)V", nullptr, $PRIVATE, $method(static_cast<void(AiffFileWriter::*)($DataOutputStream*,float)>(&AiffFileWriter::write_ieee_extended)), "java.io.IOException"},
	{}
};

$ClassInfo _AiffFileWriter_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.AiffFileWriter",
	"com.sun.media.sound.SunFileWriter",
	nullptr,
	_AiffFileWriter_FieldInfo_,
	_AiffFileWriter_MethodInfo_
};

$Object* allocate$AiffFileWriter($Class* clazz) {
	return $of($alloc(AiffFileWriter));
}

void AiffFileWriter::init$() {
	$init($AudioFileFormat$Type);
	$SunFileWriter::init$($$new($AudioFileFormat$TypeArray, {$AudioFileFormat$Type::AIFF}));
}

$AudioFileFormat$TypeArray* AiffFileWriter::getAudioFileTypes($AudioInputStream* stream) {
	$useLocalCurrentObjectStackCache();
	$var($AudioFileFormat$TypeArray, filetypes, $new($AudioFileFormat$TypeArray, $nc(this->types)->length));
	$System::arraycopy(this->types, 0, filetypes, 0, $nc(this->types)->length);
	$var($AudioFormat, format, $nc(stream)->getFormat());
	$var($AudioFormat$Encoding, encoding, $nc(format)->getEncoding());
	$init($AudioFormat$Encoding);
	bool var$2 = ($nc($AudioFormat$Encoding::ALAW)->equals(encoding));
	bool var$1 = var$2 || ($nc($AudioFormat$Encoding::ULAW)->equals(encoding));
	bool var$0 = var$1 || ($nc($AudioFormat$Encoding::PCM_SIGNED)->equals(encoding));
	if (var$0 || ($nc($AudioFormat$Encoding::PCM_UNSIGNED)->equals(encoding))) {
		return filetypes;
	}
	return $new($AudioFileFormat$TypeArray, 0);
}

int32_t AiffFileWriter::write($AudioInputStream* stream, $AudioFileFormat$Type* fileType, $OutputStream* out) {
	$Objects::requireNonNull(stream);
	$Objects::requireNonNull(fileType);
	$Objects::requireNonNull(out);
	$var($AiffFileFormat, aiffFileFormat, $cast($AiffFileFormat, getAudioFileFormat(fileType, stream)));
	if (stream->getFrameLength() == $AudioSystem::NOT_SPECIFIED) {
		$throwNew($IOException, "stream length not specified"_s);
	}
	return writeAiffFile(stream, aiffFileFormat, out);
}

int32_t AiffFileWriter::write($AudioInputStream* stream, $AudioFileFormat$Type* fileType, $File* out) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(stream);
	$Objects::requireNonNull(fileType);
	$Objects::requireNonNull(out);
	$var($AiffFileFormat, aiffFileFormat, $cast($AiffFileFormat, getAudioFileFormat(fileType, stream)));
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
								bytesWritten = writeAiffFile(stream, aiffFileFormat, bos);
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
	if ($nc(aiffFileFormat)->getByteLength() == $AudioSystem::NOT_SPECIFIED) {
		int32_t channels = $nc($(aiffFileFormat->getFormat()))->getChannels();
		int32_t sampleSize = $nc($(aiffFileFormat->getFormat()))->getSampleSizeInBits();
		int32_t ssndBlockSize = channels * ((sampleSize + 7) / 8);
		int32_t aiffLength = bytesWritten;
		int32_t ssndChunkSize = aiffLength - aiffFileFormat->getHeaderSize() + 16;
		int64_t dataSize = ssndChunkSize - 16;
		int32_t numFrames = (int32_t)($div(dataSize, ssndBlockSize));
		{
			$var($RandomAccessFile, raf, $new($RandomAccessFile, out, "rw"_s));
			{
				$var($Throwable, var$2, nullptr);
				try {
					try {
						raf->skipBytes(4);
						raf->writeInt(aiffLength - 8);
						raf->skipBytes(4 + aiffFileFormat->getFverChunkSize() + 4 + 4 + 2);
						raf->writeInt(numFrames);
						raf->skipBytes(2 + 10 + 4);
						raf->writeInt(ssndChunkSize - 8);
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

$AudioFileFormat* AiffFileWriter::getAudioFileFormat($AudioFileFormat$Type* type, $AudioInputStream* stream) {
	$useLocalCurrentObjectStackCache();
	if (!isFileTypeSupported(type, stream)) {
		$throwNew($IllegalArgumentException, $$str({"File type "_s, type, " not supported."_s}));
	}
	$var($AudioFormat, format, nullptr);
	$var($AiffFileFormat, fileFormat, nullptr);
	$init($AudioFormat$Encoding);
	$var($AudioFormat$Encoding, encoding, $AudioFormat$Encoding::PCM_SIGNED);
	$var($AudioFormat, streamFormat, $nc(stream)->getFormat());
	$var($AudioFormat$Encoding, streamEncoding, $nc(streamFormat)->getEncoding());
	int32_t sampleSizeInBits = 0;
	int32_t fileSize = 0;
	bool convert8to16 = false;
	bool var$0 = ($nc($AudioFormat$Encoding::ALAW)->equals(streamEncoding));
	if (var$0 || ($nc($AudioFormat$Encoding::ULAW)->equals(streamEncoding))) {
		if (streamFormat->getSampleSizeInBits() == 8) {
			$assign(encoding, $AudioFormat$Encoding::PCM_SIGNED);
			sampleSizeInBits = 16;
			convert8to16 = true;
		} else {
			$throwNew($IllegalArgumentException, $$str({"Encoding "_s, streamEncoding, " supported only for 8-bit data."_s}));
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
	$assign(format, $new($AudioFormat, var$1, var$2, var$3, var$4, var$5, streamFormat->getFrameRate(), true));
	if (stream->getFrameLength() != $AudioSystem::NOT_SPECIFIED) {
		if (convert8to16) {
			int32_t var$6 = (int32_t)stream->getFrameLength();
			fileSize = var$6 * streamFormat->getFrameSize() * 2 + $AiffFileFormat::AIFF_HEADERSIZE;
		} else {
			int32_t var$7 = (int32_t)stream->getFrameLength();
			fileSize = var$7 * streamFormat->getFrameSize() + $AiffFileFormat::AIFF_HEADERSIZE;
		}
	} else {
		fileSize = $AudioSystem::NOT_SPECIFIED;
	}
	$init($AudioFileFormat$Type);
	$assign(fileFormat, $new($AiffFileFormat, $AudioFileFormat$Type::AIFF, fileSize, format, (int32_t)stream->getFrameLength()));
	return fileFormat;
}

int32_t AiffFileWriter::writeAiffFile($InputStream* in, $AiffFileFormat* aiffFileFormat, $OutputStream* out) {
	$useLocalCurrentObjectStackCache();
	int32_t bytesRead = 0;
	int32_t bytesWritten = 0;
	$var($InputStream, fileStream, getFileStream(aiffFileFormat, in));
	$var($bytes, buffer, $new($bytes, $SunFileWriter::bisBufferSize));
	int32_t maxLength = $nc(aiffFileFormat)->getByteLength();
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

$InputStream* AiffFileWriter::getFileStream($AiffFileFormat* aiffFileFormat, $InputStream* audioStream) {
	$useLocalCurrentObjectStackCache();
	$var($AudioFormat, format, $nc(aiffFileFormat)->getFormat());
	$var($AudioFormat, streamFormat, nullptr);
	$var($AudioFormat$Encoding, encoding, nullptr);
	int32_t headerSize = aiffFileFormat->getHeaderSize();
	int32_t fverChunkSize = aiffFileFormat->getFverChunkSize();
	int32_t commChunkSize = aiffFileFormat->getCommChunkSize();
	int32_t aiffLength = -1;
	int32_t ssndChunkSize = -1;
	int32_t ssndOffset = aiffFileFormat->getSsndChunkOffset();
	int16_t channels = (int16_t)$nc(format)->getChannels();
	int16_t sampleSize = (int16_t)format->getSampleSizeInBits();
	int32_t ssndBlockSize = channels * ((sampleSize + 7) / 8);
	int32_t numFrames = aiffFileFormat->getFrameLength();
	int64_t dataSize = -1;
	if (numFrames != $AudioSystem::NOT_SPECIFIED) {
		dataSize = (int64_t)numFrames * ssndBlockSize;
		ssndChunkSize = (int32_t)dataSize + 16;
		aiffLength = (int32_t)dataSize + headerSize;
	}
	float sampleFramesPerSecond = format->getSampleRate();
	int32_t compCode = $AiffFileFormat::AIFC_PCM;
	$var($bytes, header, nullptr);
	$var($InputStream, codedAudioStream, audioStream);
	if ($instanceOf($AudioInputStream, audioStream)) {
		$assign(streamFormat, $nc(($cast($AudioInputStream, audioStream)))->getFormat());
		$assign(encoding, $nc(streamFormat)->getEncoding());
		$init($AudioFormat$Encoding);
		bool var$0 = ($nc($AudioFormat$Encoding::PCM_UNSIGNED)->equals(encoding));
		if (!var$0) {
			bool var$1 = ($nc($AudioFormat$Encoding::PCM_SIGNED)->equals(encoding));
			var$0 = (var$1 && !streamFormat->isBigEndian());
		}
		if (var$0) {
			$var($AudioFormat$Encoding, var$2, $AudioFormat$Encoding::PCM_SIGNED);
			float var$3 = streamFormat->getSampleRate();
			int32_t var$4 = streamFormat->getSampleSizeInBits();
			int32_t var$5 = streamFormat->getChannels();
			int32_t var$6 = streamFormat->getFrameSize();
			$assign(codedAudioStream, $AudioSystem::getAudioInputStream($$new($AudioFormat, var$2, var$3, var$4, var$5, var$6, streamFormat->getFrameRate(), true), $cast($AudioInputStream, audioStream)));
		} else {
			bool var$8 = ($nc($AudioFormat$Encoding::ULAW)->equals(encoding));
			if (var$8 || ($nc($AudioFormat$Encoding::ALAW)->equals(encoding))) {
				if (streamFormat->getSampleSizeInBits() != 8) {
					$throwNew($IllegalArgumentException, "unsupported encoding"_s);
				}
				$var($AudioFormat$Encoding, var$9, $AudioFormat$Encoding::PCM_SIGNED);
				float var$10 = streamFormat->getSampleRate();
				int32_t var$11 = streamFormat->getSampleSizeInBits() * 2;
				int32_t var$12 = streamFormat->getChannels();
				int32_t var$13 = streamFormat->getFrameSize() * 2;
				$assign(codedAudioStream, $AudioSystem::getAudioInputStream($$new($AudioFormat, var$9, var$10, var$11, var$12, var$13, streamFormat->getFrameRate(), true), $cast($AudioInputStream, audioStream)));
			}
		}
	}
	{
		$var($ByteArrayOutputStream, baos, $new($ByteArrayOutputStream));
		{
			$var($Throwable, var$14, nullptr);
			try {
				try {
					$var($DataOutputStream, dos, $new($DataOutputStream, baos));
					{
						$var($Throwable, var$15, nullptr);
						try {
							try {
								dos->writeInt($AiffFileFormat::AIFF_MAGIC);
								dos->writeInt((aiffLength - 8));
								dos->writeInt($AiffFileFormat::AIFF_MAGIC2);
								dos->writeInt($AiffFileFormat::COMM_MAGIC);
								dos->writeInt((commChunkSize - 8));
								dos->writeShort(channels);
								dos->writeInt(numFrames);
								dos->writeShort(sampleSize);
								write_ieee_extended(dos, sampleFramesPerSecond);
								dos->writeInt($AiffFileFormat::SSND_MAGIC);
								dos->writeInt((ssndChunkSize - 8));
								dos->writeInt(0);
								dos->writeInt(0);
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
							$assign(var$15, $catch());
						} /*finally*/ {
							dos->close();
						}
						if (var$15 != nullptr) {
							$throw(var$15);
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
				$assign(var$14, $catch());
			} /*finally*/ {
				baos->close();
			}
			if (var$14 != nullptr) {
				$throw(var$14);
			}
		}
	}
	$var($InputStream, var$16, static_cast<$InputStream*>($new($ByteArrayInputStream, header)));
	return $new($SequenceInputStream, var$16, $$new($SunFileWriter$NoCloseInputStream, this, codedAudioStream));
}

void AiffFileWriter::write_ieee_extended($DataOutputStream* dos, float f) {
	int64_t doubleBits = $Double::doubleToLongBits((double)f);
	int64_t sign = $sr((int64_t)(doubleBits & (uint64_t)AiffFileWriter::DOUBLE_SIGN_MASK), AiffFileWriter::DOUBLE_EXPONENT_LENGTH + AiffFileWriter::DOUBLE_MANTISSA_LENGTH);
	int64_t doubleExponent = $sr((int64_t)(doubleBits & (uint64_t)AiffFileWriter::DOUBLE_EXPONENT_MASK), AiffFileWriter::DOUBLE_MANTISSA_LENGTH);
	int64_t doubleMantissa = (int64_t)(doubleBits & (uint64_t)AiffFileWriter::DOUBLE_MANTISSA_MASK);
	int64_t extendedExponent = doubleExponent - AiffFileWriter::DOUBLE_EXPONENT_OFFSET + AiffFileWriter::EXTENDED_EXPONENT_OFFSET;
	int64_t extendedMantissa = $sl(doubleMantissa, AiffFileWriter::EXTENDED_MANTISSA_LENGTH - AiffFileWriter::DOUBLE_MANTISSA_LENGTH);
	int64_t extendedSign = $sl(sign, AiffFileWriter::EXTENDED_EXPONENT_LENGTH);
	int16_t extendedBits79To64 = (int16_t)(extendedSign | extendedExponent);
	int64_t extendedBits63To0 = AiffFileWriter::EXTENDED_INTEGER_MASK | extendedMantissa;
	$nc(dos)->writeShort(extendedBits79To64);
	dos->writeLong(extendedBits63To0);
}

AiffFileWriter::AiffFileWriter() {
}

$Class* AiffFileWriter::load$($String* name, bool initialize) {
	$loadClass(AiffFileWriter, name, initialize, &_AiffFileWriter_ClassInfo_, allocate$AiffFileWriter);
	return class$;
}

$Class* AiffFileWriter::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com