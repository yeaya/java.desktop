#include <com/sun/media/sound/AuFileWriter.h>

#include <com/sun/media/sound/AuFileFormat.h>
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
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/RandomAccessFile.h>
#include <java/io/SequenceInputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
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

#undef ALAW
#undef AU
#undef AU_HEADERSIZE
#undef AU_SUN_MAGIC
#undef NOT_SPECIFIED
#undef PCM_FLOAT
#undef PCM_SIGNED
#undef PCM_UNSIGNED
#undef ULAW
#undef UNKNOWN_SIZE

using $AudioFileFormat$TypeArray = $Array<::javax::sound::sampled::AudioFileFormat$Type>;
using $AuFileFormat = ::com::sun::media::sound::AuFileFormat;
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
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $SequenceInputStream = ::java::io::SequenceInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
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

$FieldInfo _AuFileWriter_FieldInfo_[] = {
	{"UNKNOWN_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AuFileWriter, UNKNOWN_SIZE)},
	{}
};

$MethodInfo _AuFileWriter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AuFileWriter::*)()>(&AuFileWriter::init$))},
	{"getAudioFileFormat", "(Ljavax/sound/sampled/AudioFileFormat$Type;Ljavax/sound/sampled/AudioInputStream;)Ljavax/sound/sampled/AudioFileFormat;", nullptr, $PRIVATE, $method(static_cast<$AudioFileFormat*(AuFileWriter::*)($AudioFileFormat$Type*,$AudioInputStream*)>(&AuFileWriter::getAudioFileFormat))},
	{"getAudioFileTypes", "(Ljavax/sound/sampled/AudioInputStream;)[Ljavax/sound/sampled/AudioFileFormat$Type;", nullptr, $PUBLIC},
	{"getFileStream", "(Lcom/sun/media/sound/AuFileFormat;Ljavax/sound/sampled/AudioInputStream;)Ljava/io/InputStream;", nullptr, $PRIVATE, $method(static_cast<$InputStream*(AuFileWriter::*)($AuFileFormat*,$AudioInputStream*)>(&AuFileWriter::getFileStream)), "java.io.IOException"},
	{"write", "(Ljavax/sound/sampled/AudioInputStream;Ljavax/sound/sampled/AudioFileFormat$Type;Ljava/io/OutputStream;)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "(Ljavax/sound/sampled/AudioInputStream;Ljavax/sound/sampled/AudioFileFormat$Type;Ljava/io/File;)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"writeAuFile", "(Ljavax/sound/sampled/AudioInputStream;Lcom/sun/media/sound/AuFileFormat;Ljava/io/OutputStream;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(AuFileWriter::*)($AudioInputStream*,$AuFileFormat*,$OutputStream*)>(&AuFileWriter::writeAuFile)), "java.io.IOException"},
	{}
};

$ClassInfo _AuFileWriter_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.AuFileWriter",
	"com.sun.media.sound.SunFileWriter",
	nullptr,
	_AuFileWriter_FieldInfo_,
	_AuFileWriter_MethodInfo_
};

$Object* allocate$AuFileWriter($Class* clazz) {
	return $of($alloc(AuFileWriter));
}

void AuFileWriter::init$() {
	$init($AudioFileFormat$Type);
	$SunFileWriter::init$($$new($AudioFileFormat$TypeArray, {$AudioFileFormat$Type::AU}));
}

$AudioFileFormat$TypeArray* AuFileWriter::getAudioFileTypes($AudioInputStream* stream) {
	$useLocalCurrentObjectStackCache();
	$var($AudioFileFormat$TypeArray, filetypes, $new($AudioFileFormat$TypeArray, $nc(this->types)->length));
	$System::arraycopy(this->types, 0, filetypes, 0, $nc(this->types)->length);
	$var($AudioFormat, format, $nc(stream)->getFormat());
	$var($AudioFormat$Encoding, encoding, $nc(format)->getEncoding());
	$init($AudioFormat$Encoding);
	bool var$3 = $nc($AudioFormat$Encoding::ALAW)->equals(encoding);
	bool var$2 = var$3 || $nc($AudioFormat$Encoding::ULAW)->equals(encoding);
	bool var$1 = var$2 || $nc($AudioFormat$Encoding::PCM_SIGNED)->equals(encoding);
	bool var$0 = var$1 || $nc($AudioFormat$Encoding::PCM_UNSIGNED)->equals(encoding);
	if (var$0 || $nc($AudioFormat$Encoding::PCM_FLOAT)->equals(encoding)) {
		return filetypes;
	}
	return $new($AudioFileFormat$TypeArray, 0);
}

int32_t AuFileWriter::write($AudioInputStream* stream, $AudioFileFormat$Type* fileType, $OutputStream* out) {
	$Objects::requireNonNull(stream);
	$Objects::requireNonNull(fileType);
	$Objects::requireNonNull(out);
	$var($AuFileFormat, auFileFormat, $cast($AuFileFormat, getAudioFileFormat(fileType, stream)));
	return writeAuFile(stream, auFileFormat, out);
}

int32_t AuFileWriter::write($AudioInputStream* stream, $AudioFileFormat$Type* fileType, $File* out) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(stream);
	$Objects::requireNonNull(fileType);
	$Objects::requireNonNull(out);
	$var($AuFileFormat, auFileFormat, $cast($AuFileFormat, getAudioFileFormat(fileType, stream)));
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
								bytesWritten = writeAuFile(stream, auFileFormat, bos);
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
	if ($nc(auFileFormat)->getByteLength() == $AudioSystem::NOT_SPECIFIED) {
		{
			$var($RandomAccessFile, raf, $new($RandomAccessFile, out, "rw"_s));
			{
				$var($Throwable, var$2, nullptr);
				try {
					try {
						if (raf->length() <= (int64_t)2147483647) {
							raf->skipBytes(8);
							raf->writeInt(bytesWritten - $AuFileFormat::AU_HEADERSIZE);
						}
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

$AudioFileFormat* AuFileWriter::getAudioFileFormat($AudioFileFormat$Type* type, $AudioInputStream* stream) {
	$useLocalCurrentObjectStackCache();
	if (!isFileTypeSupported(type, stream)) {
		$throwNew($IllegalArgumentException, $$str({"File type "_s, type, " not supported."_s}));
	}
	$var($AudioFormat, streamFormat, $nc(stream)->getFormat());
	$var($AudioFormat$Encoding, encoding, $nc(streamFormat)->getEncoding());
	$init($AudioFormat$Encoding);
	if ($nc($AudioFormat$Encoding::PCM_UNSIGNED)->equals(encoding)) {
		$assign(encoding, $AudioFormat$Encoding::PCM_SIGNED);
	}
	$var($AudioFormat$Encoding, var$0, encoding);
	float var$1 = streamFormat->getSampleRate();
	int32_t var$2 = streamFormat->getSampleSizeInBits();
	int32_t var$3 = streamFormat->getChannels();
	int32_t var$4 = streamFormat->getFrameSize();
	$var($AudioFormat, format, $new($AudioFormat, var$0, var$1, var$2, var$3, var$4, streamFormat->getFrameRate(), true));
	int32_t fileSize = 0;
	if (stream->getFrameLength() != $AudioSystem::NOT_SPECIFIED) {
		int32_t var$5 = (int32_t)stream->getFrameLength();
		fileSize = var$5 * streamFormat->getFrameSize() + $AuFileFormat::AU_HEADERSIZE;
	} else {
		fileSize = $AudioSystem::NOT_SPECIFIED;
	}
	$init($AudioFileFormat$Type);
	return $new($AuFileFormat, $AudioFileFormat$Type::AU, fileSize, format, (int32_t)stream->getFrameLength());
}

$InputStream* AuFileWriter::getFileStream($AuFileFormat* auFileFormat, $AudioInputStream* audioStream$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($AudioInputStream, audioStream, audioStream$renamed);
	$var($AudioFormat, format, $nc(auFileFormat)->getFormat());
	int32_t headerSize = $AuFileFormat::AU_HEADERSIZE;
	int64_t dataSize = auFileFormat->getFrameLength();
	int64_t dataSizeInBytes = (dataSize == $AudioSystem::NOT_SPECIFIED) ? (int64_t)AuFileWriter::UNKNOWN_SIZE : dataSize * $nc(format)->getFrameSize();
	if (dataSizeInBytes > (int64_t)2147483647) {
		dataSizeInBytes = AuFileWriter::UNKNOWN_SIZE;
	}
	int32_t auType = auFileFormat->getAuType();
	int32_t sampleRate = $cast(int32_t, format->getSampleRate());
	int32_t channels = format->getChannels();
	$assign(audioStream, $AudioSystem::getAudioInputStream(format, audioStream));
	$var($bytes, header, nullptr);
	{
		$var($ByteArrayOutputStream, baos, $new($ByteArrayOutputStream));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$var($DataOutputStream, dos, $new($DataOutputStream, baos));
					{
						$var($Throwable, var$1, nullptr);
						try {
							try {
								dos->writeInt($AuFileFormat::AU_SUN_MAGIC);
								dos->writeInt(headerSize);
								dos->writeInt((int32_t)dataSizeInBytes);
								dos->writeInt(auType);
								dos->writeInt(sampleRate);
								dos->writeInt(channels);
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
							$assign(var$1, $catch());
						} /*finally*/ {
							dos->close();
						}
						if (var$1 != nullptr) {
							$throw(var$1);
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
				$assign(var$0, $catch());
			} /*finally*/ {
				baos->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	$var($InputStream, var$2, static_cast<$InputStream*>($new($ByteArrayInputStream, header)));
	return $new($SequenceInputStream, var$2, $$new($SunFileWriter$NoCloseInputStream, this, audioStream));
}

int32_t AuFileWriter::writeAuFile($AudioInputStream* in, $AuFileFormat* auFileFormat, $OutputStream* out) {
	$useLocalCurrentObjectStackCache();
	int32_t bytesRead = 0;
	int32_t bytesWritten = 0;
	$var($InputStream, fileStream, getFileStream(auFileFormat, in));
	$var($bytes, buffer, $new($bytes, $SunFileWriter::bisBufferSize));
	int32_t maxLength = $nc(auFileFormat)->getByteLength();
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

AuFileWriter::AuFileWriter() {
}

$Class* AuFileWriter::load$($String* name, bool initialize) {
	$loadClass(AuFileWriter, name, initialize, &_AuFileWriter_ClassInfo_, allocate$AuFileWriter);
	return class$;
}

$Class* AuFileWriter::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com